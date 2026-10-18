package com.flurry.org.codehaus.jackson.map.type;
public final class TypeFactory {
    private static final com.flurry.org.codehaus.jackson.type.JavaType[] NO_TYPES;
    public static final com.flurry.org.codehaus.jackson.map.type.TypeFactory instance;
    protected com.flurry.org.codehaus.jackson.map.type.HierarchicType _cachedArrayListType;
    protected com.flurry.org.codehaus.jackson.map.type.HierarchicType _cachedHashMapType;
    protected final com.flurry.org.codehaus.jackson.map.type.TypeModifier[] _modifiers;
    protected final com.flurry.org.codehaus.jackson.map.type.TypeParser _parser;

    static TypeFactory()
    {
        com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance = new com.flurry.org.codehaus.jackson.map.type.TypeFactory();
        com.flurry.org.codehaus.jackson.type.JavaType[] v0_3 = new com.flurry.org.codehaus.jackson.type.JavaType[0];
        com.flurry.org.codehaus.jackson.map.type.TypeFactory.NO_TYPES = v0_3;
        return;
    }

    private TypeFactory()
    {
        this._parser = new com.flurry.org.codehaus.jackson.map.type.TypeParser(this);
        this._modifiers = 0;
        return;
    }

    protected TypeFactory(com.flurry.org.codehaus.jackson.map.type.TypeParser p1, com.flurry.org.codehaus.jackson.map.type.TypeModifier[] p2)
    {
        this._parser = p1;
        this._modifiers = p2;
        return;
    }

    private com.flurry.org.codehaus.jackson.type.JavaType _collectionType(Class p5)
    {
        com.flurry.org.codehaus.jackson.map.type.CollectionType v1_1;
        com.flurry.org.codehaus.jackson.type.JavaType[] v0 = this.findTypeParameters(p5, java.util.Collection);
        if (v0 != null) {
            if (v0.length == 1) {
                v1_1 = com.flurry.org.codehaus.jackson.map.type.CollectionType.construct(p5, v0[0]);
            } else {
                throw new IllegalArgumentException(new StringBuilder().append("Strange Collection type ").append(p5.getName()).append(": can not determine type parameters").toString());
            }
        } else {
            v1_1 = com.flurry.org.codehaus.jackson.map.type.CollectionType.construct(p5, this._unknownType());
        }
        return v1_1;
    }

    private com.flurry.org.codehaus.jackson.type.JavaType _mapType(Class p5)
    {
        com.flurry.org.codehaus.jackson.map.type.MapType v1_1;
        com.flurry.org.codehaus.jackson.type.JavaType[] v0 = this.findTypeParameters(p5, java.util.Map);
        if (v0 != null) {
            if (v0.length == 2) {
                v1_1 = com.flurry.org.codehaus.jackson.map.type.MapType.construct(p5, v0[0], v0[1]);
            } else {
                throw new IllegalArgumentException(new StringBuilder().append("Strange Map type ").append(p5.getName()).append(": can not determine type parameters").toString());
            }
        } else {
            v1_1 = com.flurry.org.codehaus.jackson.map.type.MapType.construct(p5, this._unknownType(), this._unknownType());
        }
        return v1_1;
    }

    public static com.flurry.org.codehaus.jackson.type.JavaType arrayType(com.flurry.org.codehaus.jackson.type.JavaType p1)
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance.constructArrayType(p1);
    }

    public static com.flurry.org.codehaus.jackson.type.JavaType arrayType(Class p2)
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance.constructArrayType(com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance.constructType(p2));
    }

    public static com.flurry.org.codehaus.jackson.type.JavaType collectionType(Class p1, com.flurry.org.codehaus.jackson.type.JavaType p2)
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance.constructCollectionType(p1, p2);
    }

    public static com.flurry.org.codehaus.jackson.type.JavaType collectionType(Class p2, Class p3)
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance.constructCollectionType(p2, com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance.constructType(p3));
    }

    public static com.flurry.org.codehaus.jackson.map.type.TypeFactory defaultInstance()
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance;
    }

    public static com.flurry.org.codehaus.jackson.type.JavaType fastSimpleType(Class p1)
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance.uncheckedSimpleType(p1);
    }

    public static com.flurry.org.codehaus.jackson.type.JavaType[] findParameterTypes(com.flurry.org.codehaus.jackson.type.JavaType p1, Class p2)
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance.findTypeParameters(p1, p2);
    }

    public static com.flurry.org.codehaus.jackson.type.JavaType[] findParameterTypes(Class p1, Class p2)
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance.findTypeParameters(p1, p2);
    }

    public static com.flurry.org.codehaus.jackson.type.JavaType[] findParameterTypes(Class p1, Class p2, com.flurry.org.codehaus.jackson.map.type.TypeBindings p3)
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance.findTypeParameters(p1, p2, p3);
    }

    public static com.flurry.org.codehaus.jackson.type.JavaType fromCanonical(String p1)
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance.constructFromCanonical(p1);
    }

    public static com.flurry.org.codehaus.jackson.type.JavaType fromClass(Class p2)
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance._fromClass(p2, 0);
    }

    public static com.flurry.org.codehaus.jackson.type.JavaType fromType(reflect.Type p2)
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance._constructType(p2, 0);
    }

    public static com.flurry.org.codehaus.jackson.type.JavaType fromTypeReference(com.flurry.org.codehaus.jackson.type.TypeReference p1)
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.type(p1.getType());
    }

    public static com.flurry.org.codehaus.jackson.type.JavaType mapType(Class p1, com.flurry.org.codehaus.jackson.type.JavaType p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance.constructMapType(p1, p2, p3);
    }

    public static com.flurry.org.codehaus.jackson.type.JavaType mapType(Class p3, Class p4, Class p5)
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance.constructMapType(p3, com.flurry.org.codehaus.jackson.map.type.TypeFactory.type(p4), com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance.constructType(p5));
    }

    public static varargs com.flurry.org.codehaus.jackson.type.JavaType parametricType(Class p1, com.flurry.org.codehaus.jackson.type.JavaType[] p2)
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance.constructParametricType(p1, p2);
    }

    public static varargs com.flurry.org.codehaus.jackson.type.JavaType parametricType(Class p1, Class[] p2)
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance.constructParametricType(p1, p2);
    }

    public static Class rawClass(reflect.Type p1)
    {
        Class v1_1;
        if (!(p1 instanceof Class)) {
            v1_1 = com.flurry.org.codehaus.jackson.map.type.TypeFactory.defaultInstance().constructType(p1).getRawClass();
        } else {
            v1_1 = ((Class) p1);
        }
        return v1_1;
    }

    public static com.flurry.org.codehaus.jackson.type.JavaType specialize(com.flurry.org.codehaus.jackson.type.JavaType p1, Class p2)
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance.constructSpecializedType(p1, p2);
    }

    public static com.flurry.org.codehaus.jackson.type.JavaType type(com.flurry.org.codehaus.jackson.type.TypeReference p2)
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance.constructType(p2.getType());
    }

    public static com.flurry.org.codehaus.jackson.type.JavaType type(reflect.Type p2)
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance._constructType(p2, 0);
    }

    public static com.flurry.org.codehaus.jackson.type.JavaType type(reflect.Type p1, com.flurry.org.codehaus.jackson.map.type.TypeBindings p2)
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance._constructType(p1, p2);
    }

    public static com.flurry.org.codehaus.jackson.type.JavaType type(reflect.Type p1, com.flurry.org.codehaus.jackson.type.JavaType p2)
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance.constructType(p1, p2);
    }

    public static com.flurry.org.codehaus.jackson.type.JavaType type(reflect.Type p1, Class p2)
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance.constructType(p1, p2);
    }

    public static com.flurry.org.codehaus.jackson.type.JavaType unknownType()
    {
        return com.flurry.org.codehaus.jackson.map.type.TypeFactory.defaultInstance()._unknownType();
    }

    protected declared_synchronized com.flurry.org.codehaus.jackson.map.type.HierarchicType _arrayListSuperInterfaceChain(com.flurry.org.codehaus.jackson.map.type.HierarchicType p4)
    {
        try {
            if (this._cachedArrayListType == null) {
                com.flurry.org.codehaus.jackson.map.type.HierarchicType v0 = p4.deepCloneWithoutSubtype();
                this._doFindSuperInterfaceChain(v0, java.util.List);
                this._cachedArrayListType = v0.getSuperType();
            }
        } catch (com.flurry.org.codehaus.jackson.map.type.HierarchicType v2_4) {
            throw v2_4;
        }
        com.flurry.org.codehaus.jackson.map.type.HierarchicType v1 = this._cachedArrayListType.deepCloneWithoutSubtype();
        p4.setSuperType(v1);
        v1.setSubType(p4);
        return p4;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType _constructType(reflect.Type p10, com.flurry.org.codehaus.jackson.map.type.TypeBindings p11)
    {
        com.flurry.org.codehaus.jackson.type.JavaType v5;
        if (!(p10 instanceof Class)) {
            if (!(p10 instanceof reflect.ParameterizedType)) {
                if (!(p10 instanceof reflect.GenericArrayType)) {
                    if (!(p10 instanceof reflect.TypeVariable)) {
                        if (!(p10 instanceof reflect.WildcardType)) {
                            throw new IllegalArgumentException(new StringBuilder().append("Unrecognized Type: ").append(p10.toString()).toString());
                        } else {
                            v5 = this._fromWildcard(((reflect.WildcardType) p10), p11);
                        }
                    } else {
                        v5 = this._fromVariable(((reflect.TypeVariable) p10), p11);
                    }
                } else {
                    v5 = this._fromArrayType(((reflect.GenericArrayType) p10), p11);
                }
            } else {
                v5 = this._fromParamType(((reflect.ParameterizedType) p10), p11);
            }
        } else {
            if (p11 == null) {
                p11 = new com.flurry.org.codehaus.jackson.map.type.TypeBindings(this, ((Class) p10));
            }
            v5 = this._fromClass(((Class) p10), p11);
        }
        if ((this._modifiers != null) && (!v5.isContainerType())) {
            com.flurry.org.codehaus.jackson.map.type.TypeModifier[] v0 = this._modifiers;
            int v3 = v0.length;
            int v2 = 0;
            while (v2 < v3) {
                v5 = v0[v2].modifyType(v5, p10, p11, this);
                v2++;
            }
        }
        return v5;
    }

    protected com.flurry.org.codehaus.jackson.map.type.HierarchicType _doFindSuperInterfaceChain(com.flurry.org.codehaus.jackson.map.type.HierarchicType p8, Class p9)
    {
        Class v5 = p8.getRawClass();
        reflect.Type[] v4 = v5.getGenericInterfaces();
        if (v4 == null) {
            reflect.Type v3_0 = v5.getGenericSuperclass();
            if (v3_0 != null) {
                com.flurry.org.codehaus.jackson.map.type.HierarchicType v6_0 = this._findSuperInterfaceChain(v3_0, p9);
                if (v6_0 != null) {
                    v6_0.setSubType(p8);
                    p8.setSuperType(v6_0);
                    return p8;
                }
            }
            p8 = 0;
        } else {
            reflect.Type[] v0 = v4;
            int v2 = v0.length;
            int v1 = 0;
            while (v1 < v2) {
                com.flurry.org.codehaus.jackson.map.type.HierarchicType v6_1 = this._findSuperInterfaceChain(v0[v1], p9);
                if (v6_1 == null) {
                    v1++;
                } else {
                    v6_1.setSubType(p8);
                    p8.setSuperType(v6_1);
                }
            }
        }
        return p8;
    }

    protected com.flurry.org.codehaus.jackson.map.type.HierarchicType _findSuperClassChain(reflect.Type p5, Class p6)
    {
        int v0_1 = new com.flurry.org.codehaus.jackson.map.type.HierarchicType(p5);
        Class v2 = v0_1.getRawClass();
        if (v2 != p6) {
            reflect.Type v1 = v2.getGenericSuperclass();
            if (v1 != null) {
                com.flurry.org.codehaus.jackson.map.type.HierarchicType v3 = this._findSuperClassChain(v1, p6);
                if (v3 != null) {
                    v3.setSubType(v0_1);
                    v0_1.setSuperType(v3);
                    return v0_1;
                }
            }
            v0_1 = 0;
        }
        return v0_1;
    }

    protected com.flurry.org.codehaus.jackson.map.type.HierarchicType _findSuperInterfaceChain(reflect.Type p4, Class p5)
    {
        com.flurry.org.codehaus.jackson.map.type.HierarchicType v2_1;
        com.flurry.org.codehaus.jackson.map.type.HierarchicType v0_1 = new com.flurry.org.codehaus.jackson.map.type.HierarchicType(p4);
        Class v1 = v0_1.getRawClass();
        if (v1 != p5) {
            if ((v1 != java.util.HashMap) || (p5 != java.util.Map)) {
                if ((v1 != java.util.ArrayList) || (p5 != java.util.List)) {
                    v2_1 = this._doFindSuperInterfaceChain(v0_1, p5);
                } else {
                    v2_1 = this._arrayListSuperInterfaceChain(v0_1);
                }
            } else {
                v2_1 = this._hashMapSuperInterfaceChain(v0_1);
            }
        } else {
            v2_1 = new com.flurry.org.codehaus.jackson.map.type.HierarchicType(p4);
        }
        return v2_1;
    }

    protected com.flurry.org.codehaus.jackson.map.type.HierarchicType _findSuperTypeChain(Class p2, Class p3)
    {
        com.flurry.org.codehaus.jackson.map.type.HierarchicType v0_1;
        if (!p3.isInterface()) {
            v0_1 = this._findSuperClassChain(p2, p3);
        } else {
            v0_1 = this._findSuperInterfaceChain(p2, p3);
        }
        return v0_1;
    }

    protected com.flurry.org.codehaus.jackson.type.JavaType _fromArrayType(reflect.GenericArrayType p4, com.flurry.org.codehaus.jackson.map.type.TypeBindings p5)
    {
        return com.flurry.org.codehaus.jackson.map.type.ArrayType.construct(this._constructType(p4.getGenericComponentType(), p5), 0, 0);
    }

    protected com.flurry.org.codehaus.jackson.type.JavaType _fromClass(Class p3, com.flurry.org.codehaus.jackson.map.type.TypeBindings p4)
    {
        com.flurry.org.codehaus.jackson.map.type.SimpleType v0_3;
        if (!p3.isArray()) {
            if (!p3.isEnum()) {
                if (!java.util.Map.isAssignableFrom(p3)) {
                    if (!java.util.Collection.isAssignableFrom(p3)) {
                        v0_3 = new com.flurry.org.codehaus.jackson.map.type.SimpleType(p3);
                    } else {
                        v0_3 = this._collectionType(p3);
                    }
                } else {
                    v0_3 = this._mapType(p3);
                }
            } else {
                v0_3 = new com.flurry.org.codehaus.jackson.map.type.SimpleType(p3);
            }
        } else {
            v0_3 = com.flurry.org.codehaus.jackson.map.type.ArrayType.construct(this._constructType(p3.getComponentType(), 0), 0, 0);
        }
        return v0_3;
    }

    protected com.flurry.org.codehaus.jackson.type.JavaType _fromParamType(reflect.ParameterizedType p13, com.flurry.org.codehaus.jackson.map.type.TypeBindings p14)
    {
        int v4;
        Class v6_1 = ((Class) p13.getRawType());
        reflect.Type[] v0 = p13.getActualTypeArguments();
        if (v0 != null) {
            v4 = v0.length;
        } else {
            v4 = 0;
        }
        com.flurry.org.codehaus.jackson.type.JavaType[] v5;
        if (v4 != 0) {
            v5 = new com.flurry.org.codehaus.jackson.type.JavaType[v4];
            int v2 = 0;
            while (v2 < v4) {
                v5[v2] = this._constructType(v0[v2], p14);
                v2++;
            }
        } else {
            v5 = com.flurry.org.codehaus.jackson.map.type.TypeFactory.NO_TYPES;
        }
        com.flurry.org.codehaus.jackson.type.JavaType v8_2;
        if (!java.util.Map.isAssignableFrom(v6_1)) {
            if (!java.util.Collection.isAssignableFrom(v6_1)) {
                if (v4 != 0) {
                    v8_2 = this.constructSimpleType(v6_1, v5);
                } else {
                    v8_2 = new com.flurry.org.codehaus.jackson.map.type.SimpleType(v6_1);
                }
            } else {
                com.flurry.org.codehaus.jackson.type.JavaType[] v1 = this.findTypeParameters(this.constructSimpleType(v6_1, v5), java.util.Collection);
                if (v1.length == 1) {
                    v8_2 = com.flurry.org.codehaus.jackson.map.type.CollectionType.construct(v6_1, v1[0]);
                } else {
                    throw new IllegalArgumentException(new StringBuilder().append("Could not find 1 type parameter for Collection class ").append(v6_1.getName()).append(" (found ").append(v1.length).append(")").toString());
                }
            }
        } else {
            com.flurry.org.codehaus.jackson.type.JavaType[] v3 = this.findTypeParameters(this.constructSimpleType(v6_1, v5), java.util.Map);
            if (v3.length == 2) {
                v8_2 = com.flurry.org.codehaus.jackson.map.type.MapType.construct(v6_1, v3[0], v3[1]);
            } else {
                throw new IllegalArgumentException(new StringBuilder().append("Could not find 2 type parameters for Map class ").append(v6_1.getName()).append(" (found ").append(v3.length).append(")").toString());
            }
        }
        return v8_2;
    }

    protected com.flurry.org.codehaus.jackson.type.JavaType _fromParameterizedClass(Class p8, java.util.List p9)
    {
        com.flurry.org.codehaus.jackson.map.type.MapType v3_6;
        if (!p8.isArray()) {
            if (!p8.isEnum()) {
                if (!java.util.Map.isAssignableFrom(p8)) {
                    if (!java.util.Collection.isAssignableFrom(p8)) {
                        if (p9.size() != 0) {
                            com.flurry.org.codehaus.jackson.map.type.MapType v3_5 = new com.flurry.org.codehaus.jackson.type.JavaType[p9.size()];
                            v3_6 = this.constructSimpleType(p8, ((com.flurry.org.codehaus.jackson.type.JavaType[]) p9.toArray(v3_5)));
                        } else {
                            v3_6 = new com.flurry.org.codehaus.jackson.map.type.SimpleType(p8);
                        }
                    } else {
                        if (p9.size() < 1) {
                            v3_6 = this._collectionType(p8);
                        } else {
                            v3_6 = com.flurry.org.codehaus.jackson.map.type.CollectionType.construct(p8, ((com.flurry.org.codehaus.jackson.type.JavaType) p9.get(0)));
                        }
                    }
                } else {
                    if (p9.size() <= 0) {
                        v3_6 = this._mapType(p8);
                    } else {
                        com.flurry.org.codehaus.jackson.type.JavaType v0;
                        com.flurry.org.codehaus.jackson.type.JavaType v1_1 = ((com.flurry.org.codehaus.jackson.type.JavaType) p9.get(0));
                        if (p9.size() < 2) {
                            v0 = this._unknownType();
                        } else {
                            v0 = ((com.flurry.org.codehaus.jackson.type.JavaType) p9.get(1));
                        }
                        v3_6 = com.flurry.org.codehaus.jackson.map.type.MapType.construct(p8, v1_1, v0);
                    }
                }
            } else {
                v3_6 = new com.flurry.org.codehaus.jackson.map.type.SimpleType(p8);
            }
        } else {
            v3_6 = com.flurry.org.codehaus.jackson.map.type.ArrayType.construct(this._constructType(p8.getComponentType(), 0), 0, 0);
        }
        return v3_6;
    }

    protected com.flurry.org.codehaus.jackson.type.JavaType _fromVariable(reflect.TypeVariable p5, com.flurry.org.codehaus.jackson.map.type.TypeBindings p6)
    {
        com.flurry.org.codehaus.jackson.type.JavaType v0;
        if (p6 != null) {
            String v2 = p5.getName();
            v0 = p6.findType(v2);
            if (v0 == null) {
                reflect.Type[] v1 = p5.getBounds();
                p6._addPlaceholder(v2);
                v0 = this._constructType(v1[0], p6);
            }
        } else {
            v0 = this._unknownType();
        }
        return v0;
    }

    protected com.flurry.org.codehaus.jackson.type.JavaType _fromWildcard(reflect.WildcardType p3, com.flurry.org.codehaus.jackson.map.type.TypeBindings p4)
    {
        return this._constructType(p3.getUpperBounds()[0], p4);
    }

    protected declared_synchronized com.flurry.org.codehaus.jackson.map.type.HierarchicType _hashMapSuperInterfaceChain(com.flurry.org.codehaus.jackson.map.type.HierarchicType p4)
    {
        try {
            if (this._cachedHashMapType == null) {
                com.flurry.org.codehaus.jackson.map.type.HierarchicType v0 = p4.deepCloneWithoutSubtype();
                this._doFindSuperInterfaceChain(v0, java.util.Map);
                this._cachedHashMapType = v0.getSuperType();
            }
        } catch (com.flurry.org.codehaus.jackson.map.type.HierarchicType v2_4) {
            throw v2_4;
        }
        com.flurry.org.codehaus.jackson.map.type.HierarchicType v1 = this._cachedHashMapType.deepCloneWithoutSubtype();
        p4.setSuperType(v1);
        v1.setSubType(p4);
        return p4;
    }

    protected com.flurry.org.codehaus.jackson.type.JavaType _resolveVariableViaSubTypes(com.flurry.org.codehaus.jackson.map.type.HierarchicType p8, String p9, com.flurry.org.codehaus.jackson.map.type.TypeBindings p10)
    {
        if ((p8 == null) || (!p8.isGeneric())) {
            com.flurry.org.codehaus.jackson.type.JavaType v5_0 = this._unknownType();
        } else {
            reflect.TypeVariable[] v4 = p8.getRawClass().getTypeParameters();
            int v0 = 0;
            while (v0 < v4.length) {
                if (!p9.equals(v4[v0].getName())) {
                    v0++;
                } else {
                    reflect.TypeVariable v3_0 = p8.asGeneric().getActualTypeArguments()[v0];
                    if (!(v3_0 instanceof reflect.TypeVariable)) {
                        v5_0 = this._constructType(v3_0, p10);
                    } else {
                        v5_0 = this._resolveVariableViaSubTypes(p8.getSubType(), ((reflect.TypeVariable) v3_0).getName(), p10);
                    }
                }
            }
        }
        return v5_0;
    }

    protected com.flurry.org.codehaus.jackson.type.JavaType _unknownType()
    {
        return new com.flurry.org.codehaus.jackson.map.type.SimpleType(Object);
    }

    public com.flurry.org.codehaus.jackson.map.type.ArrayType constructArrayType(com.flurry.org.codehaus.jackson.type.JavaType p2)
    {
        return com.flurry.org.codehaus.jackson.map.type.ArrayType.construct(p2, 0, 0);
    }

    public com.flurry.org.codehaus.jackson.map.type.ArrayType constructArrayType(Class p3)
    {
        return com.flurry.org.codehaus.jackson.map.type.ArrayType.construct(this._constructType(p3, 0), 0, 0);
    }

    public com.flurry.org.codehaus.jackson.map.type.CollectionLikeType constructCollectionLikeType(Class p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        return com.flurry.org.codehaus.jackson.map.type.CollectionLikeType.construct(p2, p3);
    }

    public com.flurry.org.codehaus.jackson.map.type.CollectionLikeType constructCollectionLikeType(Class p2, Class p3)
    {
        return com.flurry.org.codehaus.jackson.map.type.CollectionLikeType.construct(p2, this.constructType(p3));
    }

    public com.flurry.org.codehaus.jackson.map.type.CollectionType constructCollectionType(Class p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        return com.flurry.org.codehaus.jackson.map.type.CollectionType.construct(p2, p3);
    }

    public com.flurry.org.codehaus.jackson.map.type.CollectionType constructCollectionType(Class p2, Class p3)
    {
        return com.flurry.org.codehaus.jackson.map.type.CollectionType.construct(p2, this.constructType(p3));
    }

    public com.flurry.org.codehaus.jackson.type.JavaType constructFromCanonical(String p2)
    {
        return this._parser.parse(p2);
    }

    public com.flurry.org.codehaus.jackson.map.type.MapLikeType constructMapLikeType(Class p2, com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.type.JavaType p4)
    {
        return com.flurry.org.codehaus.jackson.map.type.MapLikeType.construct(p2, p3, p4);
    }

    public com.flurry.org.codehaus.jackson.map.type.MapLikeType constructMapLikeType(Class p3, Class p4, Class p5)
    {
        return com.flurry.org.codehaus.jackson.map.type.MapType.construct(p3, this.constructType(p4), this.constructType(p5));
    }

    public com.flurry.org.codehaus.jackson.map.type.MapType constructMapType(Class p2, com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.type.JavaType p4)
    {
        return com.flurry.org.codehaus.jackson.map.type.MapType.construct(p2, p3, p4);
    }

    public com.flurry.org.codehaus.jackson.map.type.MapType constructMapType(Class p3, Class p4, Class p5)
    {
        return com.flurry.org.codehaus.jackson.map.type.MapType.construct(p3, this.constructType(p4), this.constructType(p5));
    }

    public varargs com.flurry.org.codehaus.jackson.type.JavaType constructParametricType(Class p6, com.flurry.org.codehaus.jackson.type.JavaType[] p7)
    {
        com.flurry.org.codehaus.jackson.map.type.CollectionType v0;
        if (!p6.isArray()) {
            if (!java.util.Map.isAssignableFrom(p6)) {
                if (!java.util.Collection.isAssignableFrom(p6)) {
                    v0 = this.constructSimpleType(p6, p7);
                } else {
                    if (p7.length == 1) {
                        v0 = this.constructCollectionType(p6, p7[0]);
                    } else {
                        throw new IllegalArgumentException(new StringBuilder().append("Need exactly 1 parameter type for Collection types (").append(p6.getName()).append(")").toString());
                    }
                }
            } else {
                if (p7.length == 2) {
                    v0 = this.constructMapType(p6, p7[0], p7[1]);
                } else {
                    throw new IllegalArgumentException(new StringBuilder().append("Need exactly 2 parameter types for Map types (").append(p6.getName()).append(")").toString());
                }
            }
        } else {
            if (p7.length == 1) {
                v0 = this.constructArrayType(p7[0]);
            } else {
                throw new IllegalArgumentException(new StringBuilder().append("Need exactly 1 parameter type for arrays (").append(p6.getName()).append(")").toString());
            }
        }
        return v0;
    }

    public varargs com.flurry.org.codehaus.jackson.type.JavaType constructParametricType(Class p6, Class[] p7)
    {
        int v1 = p7.length;
        com.flurry.org.codehaus.jackson.type.JavaType[] v2 = new com.flurry.org.codehaus.jackson.type.JavaType[v1];
        int v0 = 0;
        while (v0 < v1) {
            v2[v0] = this._fromClass(p7[v0], 0);
            v0++;
        }
        return this.constructParametricType(p6, v2);
    }

    public com.flurry.org.codehaus.jackson.map.type.CollectionLikeType constructRawCollectionLikeType(Class p2)
    {
        return com.flurry.org.codehaus.jackson.map.type.CollectionLikeType.construct(p2, com.flurry.org.codehaus.jackson.map.type.TypeFactory.unknownType());
    }

    public com.flurry.org.codehaus.jackson.map.type.CollectionType constructRawCollectionType(Class p2)
    {
        return com.flurry.org.codehaus.jackson.map.type.CollectionType.construct(p2, com.flurry.org.codehaus.jackson.map.type.TypeFactory.unknownType());
    }

    public com.flurry.org.codehaus.jackson.map.type.MapLikeType constructRawMapLikeType(Class p3)
    {
        return com.flurry.org.codehaus.jackson.map.type.MapLikeType.construct(p3, com.flurry.org.codehaus.jackson.map.type.TypeFactory.unknownType(), com.flurry.org.codehaus.jackson.map.type.TypeFactory.unknownType());
    }

    public com.flurry.org.codehaus.jackson.map.type.MapType constructRawMapType(Class p3)
    {
        return com.flurry.org.codehaus.jackson.map.type.MapType.construct(p3, com.flurry.org.codehaus.jackson.map.type.TypeFactory.unknownType(), com.flurry.org.codehaus.jackson.map.type.TypeFactory.unknownType());
    }

    public com.flurry.org.codehaus.jackson.type.JavaType constructSimpleType(Class p10, com.flurry.org.codehaus.jackson.type.JavaType[] p11)
    {
        reflect.TypeVariable[] v8 = p10.getTypeParameters();
        if (v8.length == p11.length) {
            String[] v2 = new String[v8.length];
            int v6 = 0;
            int v7 = v8.length;
            while (v6 < v7) {
                v2[v6] = v8[v6].getName();
                v6++;
            }
            return new com.flurry.org.codehaus.jackson.map.type.SimpleType(p10, v2, p11, 0, 0);
        } else {
            throw new IllegalArgumentException(new StringBuilder().append("Parameter type mismatch for ").append(p10.getName()).append(": expected ").append(v8.length).append(" parameters, was given ").append(p11.length).toString());
        }
    }

    public com.flurry.org.codehaus.jackson.type.JavaType constructSpecializedType(com.flurry.org.codehaus.jackson.type.JavaType p6, Class p7)
    {
        if ((!(p6 instanceof com.flurry.org.codehaus.jackson.map.type.SimpleType)) || ((!p7.isArray()) && ((!java.util.Map.isAssignableFrom(p7)) && (!java.util.Collection.isAssignableFrom(p7))))) {
            com.flurry.org.codehaus.jackson.type.JavaType v1 = p6.narrowBy(p7);
        } else {
            if (p6.getRawClass().isAssignableFrom(p7)) {
                v1 = this._fromClass(p7, new com.flurry.org.codehaus.jackson.map.type.TypeBindings(this, p6.getRawClass()));
                Object v0_0 = p6.getValueHandler();
                if (v0_0 != null) {
                    v1 = v1.withValueHandler(v0_0);
                }
                Object v0_1 = p6.getTypeHandler();
                if (v0_1 != null) {
                    v1 = v1.withTypeHandler(v0_1);
                }
            } else {
                throw new IllegalArgumentException(new StringBuilder().append("Class ").append(p7.getClass().getName()).append(" not subtype of ").append(p6).toString());
            }
        }
        return v1;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType constructType(com.flurry.org.codehaus.jackson.type.TypeReference p3)
    {
        return this._constructType(p3.getType(), 0);
    }

    public com.flurry.org.codehaus.jackson.type.JavaType constructType(reflect.Type p2)
    {
        return this._constructType(p2, 0);
    }

    public com.flurry.org.codehaus.jackson.type.JavaType constructType(reflect.Type p2, com.flurry.org.codehaus.jackson.map.type.TypeBindings p3)
    {
        return this._constructType(p2, p3);
    }

    public com.flurry.org.codehaus.jackson.type.JavaType constructType(reflect.Type p3, com.flurry.org.codehaus.jackson.type.JavaType p4)
    {
        com.flurry.org.codehaus.jackson.map.type.TypeBindings v0_1;
        if (p4 != null) {
            v0_1 = new com.flurry.org.codehaus.jackson.map.type.TypeBindings(this, p4);
        } else {
            v0_1 = 0;
        }
        return this._constructType(p3, v0_1);
    }

    public com.flurry.org.codehaus.jackson.type.JavaType constructType(reflect.Type p3, Class p4)
    {
        com.flurry.org.codehaus.jackson.map.type.TypeBindings v0_1;
        if (p4 != null) {
            v0_1 = new com.flurry.org.codehaus.jackson.map.type.TypeBindings(this, p4);
        } else {
            v0_1 = 0;
        }
        return this._constructType(p3, v0_1);
    }

    public com.flurry.org.codehaus.jackson.type.JavaType[] findTypeParameters(com.flurry.org.codehaus.jackson.type.JavaType p6, Class p7)
    {
        com.flurry.org.codehaus.jackson.type.JavaType[] v3;
        Class v2 = p6.getRawClass();
        if (v2 != p7) {
            v3 = this.findTypeParameters(v2, p7, new com.flurry.org.codehaus.jackson.map.type.TypeBindings(this, p6));
        } else {
            int v0 = p6.containedTypeCount();
            if (v0 != 0) {
                v3 = new com.flurry.org.codehaus.jackson.type.JavaType[v0];
                int v1 = 0;
                while (v1 < v0) {
                    v3[v1] = p6.containedType(v1);
                    v1++;
                }
            } else {
                v3 = 0;
            }
        }
        return v3;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType[] findTypeParameters(Class p2, Class p3)
    {
        return this.findTypeParameters(p2, p3, new com.flurry.org.codehaus.jackson.map.type.TypeBindings(this, p2));
    }

    public com.flurry.org.codehaus.jackson.type.JavaType[] findTypeParameters(Class p16, Class p17, com.flurry.org.codehaus.jackson.map.type.TypeBindings p18)
    {
        com.flurry.org.codehaus.jackson.map.type.HierarchicType v8 = this._findSuperTypeChain(p16, p17);
        if (v8 != null) {
            com.flurry.org.codehaus.jackson.map.type.HierarchicType v9 = v8;
            while (v9.getSuperType() != null) {
                v9 = v9.getSuperType();
                Class v7 = v9.getRawClass();
                com.flurry.org.codehaus.jackson.map.type.TypeBindings v5_1 = new com.flurry.org.codehaus.jackson.map.type.TypeBindings(this, v7);
                if (v9.isGeneric()) {
                    reflect.Type[] v1 = v9.asGeneric().getActualTypeArguments();
                    reflect.TypeVariable[] v11 = v7.getTypeParameters();
                    int v3 = v1.length;
                    int v2 = 0;
                    while (v2 < v3) {
                        v5_1.addBinding(v11[v2].getName(), com.flurry.org.codehaus.jackson.map.type.TypeFactory.instance._constructType(v1[v2], p18));
                        v2++;
                    }
                }
                p18 = v5_1;
            }
            com.flurry.org.codehaus.jackson.map.type.TypeFactory v12_0;
            if (v9.isGeneric()) {
                v12_0 = p18.typesAsArray();
            } else {
                v12_0 = 0;
            }
            return v12_0;
        } else {
            throw new IllegalArgumentException(new StringBuilder().append("Class ").append(p16.getName()).append(" is not a subtype of ").append(p17.getName()).toString());
        }
    }

    public com.flurry.org.codehaus.jackson.type.JavaType uncheckedSimpleType(Class p2)
    {
        return new com.flurry.org.codehaus.jackson.map.type.SimpleType(p2);
    }

    public com.flurry.org.codehaus.jackson.map.type.TypeFactory withModifier(com.flurry.org.codehaus.jackson.map.type.TypeModifier p5)
    {
        com.flurry.org.codehaus.jackson.map.type.TypeFactory v0_2;
        if (this._modifiers != null) {
            v0_2 = new com.flurry.org.codehaus.jackson.map.type.TypeFactory(this._parser, ((com.flurry.org.codehaus.jackson.map.type.TypeModifier[]) com.flurry.org.codehaus.jackson.map.util.ArrayBuilders.insertInListNoDup(this._modifiers, p5)));
        } else {
            com.flurry.org.codehaus.jackson.map.type.TypeFactory v1_0 = this._parser;
            com.flurry.org.codehaus.jackson.map.type.TypeParser v2_1 = new com.flurry.org.codehaus.jackson.map.type.TypeModifier[1];
            v2_1[0] = p5;
            v0_2 = new com.flurry.org.codehaus.jackson.map.type.TypeFactory(v1_0, v2_1);
        }
        return v0_2;
    }
}
