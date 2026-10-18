package com.flurry.org.codehaus.jackson.map.type;
public class TypeBindings {
    private static final com.flurry.org.codehaus.jackson.type.JavaType[] NO_TYPES;
    public static final com.flurry.org.codehaus.jackson.type.JavaType UNBOUND;
    protected java.util.Map _bindings;
    protected final Class _contextClass;
    protected final com.flurry.org.codehaus.jackson.type.JavaType _contextType;
    private final com.flurry.org.codehaus.jackson.map.type.TypeBindings _parentBindings;
    protected java.util.HashSet _placeholders;
    protected final com.flurry.org.codehaus.jackson.map.type.TypeFactory _typeFactory;

    static TypeBindings()
    {
        com.flurry.org.codehaus.jackson.map.type.SimpleType v0_1 = new com.flurry.org.codehaus.jackson.type.JavaType[0];
        com.flurry.org.codehaus.jackson.map.type.TypeBindings.NO_TYPES = v0_1;
        com.flurry.org.codehaus.jackson.map.type.TypeBindings.UNBOUND = new com.flurry.org.codehaus.jackson.map.type.SimpleType(Object);
        return;
    }

    private TypeBindings(com.flurry.org.codehaus.jackson.map.type.TypeFactory p1, com.flurry.org.codehaus.jackson.map.type.TypeBindings p2, Class p3, com.flurry.org.codehaus.jackson.type.JavaType p4)
    {
        this._typeFactory = p1;
        this._parentBindings = p2;
        this._contextClass = p3;
        this._contextType = p4;
        return;
    }

    public TypeBindings(com.flurry.org.codehaus.jackson.map.type.TypeFactory p3, com.flurry.org.codehaus.jackson.type.JavaType p4)
    {
        this(p3, 0, p4.getRawClass(), p4);
        return;
    }

    public TypeBindings(com.flurry.org.codehaus.jackson.map.type.TypeFactory p2, Class p3)
    {
        this(p2, 0, p3, 0);
        return;
    }

    public void _addPlaceholder(String p2)
    {
        if (this._placeholders == null) {
            this._placeholders = new java.util.HashSet();
        }
        this._placeholders.add(p2);
        return;
    }

    protected void _resolve()
    {
        this._resolveBindings(this._contextClass);
        if (this._contextType != null) {
            int v0 = this._contextType.containedTypeCount();
            if (v0 > 0) {
                if (this._bindings == null) {
                    this._bindings = new java.util.LinkedHashMap();
                }
                int v1 = 0;
                while (v1 < v0) {
                    this._bindings.put(this._contextType.containedTypeName(v1), this._contextType.containedType(v1));
                    v1++;
                }
            }
        }
        if (this._bindings == null) {
            this._bindings = java.util.Collections.emptyMap();
        }
        return;
    }

    protected void _resolveBindings(reflect.Type p21)
    {
        if (p21 != null) {
            Class v11_0;
            if (!(p21 instanceof reflect.ParameterizedType)) {
                if (!(p21 instanceof Class)) {
                    return;
                } else {
                    v11_0 = ((Class) p21);
                    this._resolveBindings(((Class) p21).getDeclaringClass());
                    reflect.TypeVariable[] v16_1 = ((Class) p21).getTypeParameters();
                    if ((v16_1 != null) && (v16_1.length > 0)) {
                        com.flurry.org.codehaus.jackson.type.JavaType[] v13 = 0;
                        if ((this._contextType != null) && (((Class) p21).isAssignableFrom(this._contextType.getRawClass()))) {
                            v13 = this._typeFactory.findTypeParameters(this._contextType, ((Class) p21));
                        }
                        int v4_0 = 0;
                        while (v4_0 < v16_1.length) {
                            reflect.TypeVariable v14_1 = v16_1[v4_0];
                            String v9_1 = v14_1.getName();
                            reflect.Type v15 = v14_1.getBounds()[0];
                            if (v15 != null) {
                                if (this._bindings != null) {
                                    if (this._bindings.containsKey(v9_1)) {
                                        v4_0++;
                                    }
                                } else {
                                    this._bindings = new java.util.LinkedHashMap();
                                }
                                this._addPlaceholder(v9_1);
                                if (v13 == null) {
                                    this._bindings.put(v9_1, this._typeFactory._constructType(v15, this));
                                } else {
                                    this._bindings.put(v9_1, v13[v4_0]);
                                }
                            }
                        }
                    }
                }
            } else {
                reflect.Type[] v2 = ((reflect.ParameterizedType) p21).getActualTypeArguments();
                if ((v2 != null) && (v2.length > 0)) {
                    Class v12_1 = ((Class) ((reflect.ParameterizedType) p21).getRawType());
                    reflect.TypeVariable[] v16_0 = v12_1.getTypeParameters();
                    if (v16_0.length == v2.length) {
                        int v4_1 = 0;
                        int v7 = v2.length;
                        while (v4_1 < v7) {
                            String v9_0 = v16_0[v4_1].getName();
                            if (this._bindings != null) {
                                if (!this._bindings.containsKey(v9_0)) {
                                    this._addPlaceholder(v9_0);
                                    this._bindings.put(v9_0, this._typeFactory._constructType(v2[v4_1], this));
                                }
                            } else {
                                this._bindings = new java.util.LinkedHashMap();
                            }
                            v4_1++;
                        }
                    } else {
                        throw new IllegalArgumentException(new StringBuilder().append("Strange parametrized type (in class ").append(v12_1.getName()).append("): number of type arguments != number of type parameters (").append(v2.length).append(" vs ").append(v16_0.length).append(")").toString());
                    }
                }
                v11_0 = ((Class) ((reflect.ParameterizedType) p21).getRawType());
            }
            this._resolveBindings(v11_0.getGenericSuperclass());
            reflect.Type[] v3 = v11_0.getGenericInterfaces();
            int v8 = v3.length;
            int v5 = 0;
            while (v5 < v8) {
                this._resolveBindings(v3[v5]);
                v5++;
            }
        }
        return;
    }

    public void addBinding(String p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        if ((this._bindings == null) || (this._bindings.size() == 0)) {
            this._bindings = new java.util.LinkedHashMap();
        }
        this._bindings.put(p2, p3);
        return;
    }

    public com.flurry.org.codehaus.jackson.map.type.TypeBindings childInstance()
    {
        return new com.flurry.org.codehaus.jackson.map.type.TypeBindings(this._typeFactory, this, this._contextClass, this._contextType);
    }

    public com.flurry.org.codehaus.jackson.type.JavaType findType(String p7)
    {
        if (this._bindings == null) {
            this._resolve();
        }
        com.flurry.org.codehaus.jackson.type.JavaType v2_1 = ((com.flurry.org.codehaus.jackson.type.JavaType) this._bindings.get(p7));
        if (v2_1 == null) {
            if ((this._placeholders == null) || (!this._placeholders.contains(p7))) {
                if (this._parentBindings == null) {
                    if ((this._contextClass == null) || ((this._contextClass.getEnclosingClass() == null) || (reflect.Modifier.isStatic(this._contextClass.getModifiers())))) {
                        String v0;
                        if (this._contextClass == null) {
                            if (this._contextType == null) {
                                v0 = "UNKNOWN";
                            } else {
                                v0 = this._contextType.toString();
                            }
                        } else {
                            v0 = this._contextClass.getName();
                        }
                        throw new IllegalArgumentException(new StringBuilder().append("Type variable \'").append(p7).append("\' can not be resolved (with context of class ").append(v0).append(")").toString());
                    } else {
                        v2_1 = com.flurry.org.codehaus.jackson.map.type.TypeBindings.UNBOUND;
                    }
                } else {
                    v2_1 = this._parentBindings.findType(p7);
                }
            } else {
                v2_1 = com.flurry.org.codehaus.jackson.map.type.TypeBindings.UNBOUND;
            }
        }
        return v2_1;
    }

    public int getBindingCount()
    {
        if (this._bindings == null) {
            this._resolve();
        }
        return this._bindings.size();
    }

    public com.flurry.org.codehaus.jackson.type.JavaType resolveType(Class p2)
    {
        return this._typeFactory._constructType(p2, this);
    }

    public com.flurry.org.codehaus.jackson.type.JavaType resolveType(reflect.Type p2)
    {
        return this._typeFactory._constructType(p2, this);
    }

    public String toString()
    {
        if (this._bindings == null) {
            this._resolve();
        }
        StringBuilder v0_1 = new StringBuilder("[TypeBindings for ");
        if (this._contextType == null) {
            v0_1.append(this._contextClass.getName());
        } else {
            v0_1.append(this._contextType.toString());
        }
        v0_1.append(": ").append(this._bindings).append("]");
        return v0_1.toString();
    }

    public com.flurry.org.codehaus.jackson.type.JavaType[] typesAsArray()
    {
        if (this._bindings == null) {
            this._resolve();
        }
        com.flurry.org.codehaus.jackson.type.JavaType[] v0_2;
        if (this._bindings.size() != 0) {
            com.flurry.org.codehaus.jackson.type.JavaType[] v1_2 = new com.flurry.org.codehaus.jackson.type.JavaType[this._bindings.size()];
            v0_2 = ((com.flurry.org.codehaus.jackson.type.JavaType[]) this._bindings.values().toArray(v1_2));
        } else {
            v0_2 = com.flurry.org.codehaus.jackson.map.type.TypeBindings.NO_TYPES;
        }
        return v0_2;
    }
}
