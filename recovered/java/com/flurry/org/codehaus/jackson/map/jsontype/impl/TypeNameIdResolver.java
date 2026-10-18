package com.flurry.org.codehaus.jackson.map.jsontype.impl;
public class TypeNameIdResolver extends com.flurry.org.codehaus.jackson.map.jsontype.impl.TypeIdResolverBase {
    protected final com.flurry.org.codehaus.jackson.map.MapperConfig _config;
    protected final java.util.HashMap _idToType;
    protected final java.util.HashMap _typeToId;

    protected TypeNameIdResolver(com.flurry.org.codehaus.jackson.map.MapperConfig p2, com.flurry.org.codehaus.jackson.type.JavaType p3, java.util.HashMap p4, java.util.HashMap p5)
    {
        super(p3, p2.getTypeFactory());
        super._config = p2;
        super._typeToId = p4;
        super._idToType = p5;
        return;
    }

    protected static String _defaultTypeId(Class p3)
    {
        String v1 = p3.getName();
        int v0 = v1.lastIndexOf(46);
        if (v0 >= 0) {
            v1 = v1.substring((v0 + 1));
        }
        return v1;
    }

    public static com.flurry.org.codehaus.jackson.map.jsontype.impl.TypeNameIdResolver construct(com.flurry.org.codehaus.jackson.map.MapperConfig p8, com.flurry.org.codehaus.jackson.type.JavaType p9, java.util.Collection p10, boolean p11, boolean p12)
    {
        if (p11 != p12) {
            java.util.HashMap v6_0 = 0;
            java.util.HashMap v3_0 = 0;
            if (p11) {
                v6_0 = new java.util.HashMap();
            }
            if (p12) {
                v3_0 = new java.util.HashMap();
            }
            if (p10 != null) {
                java.util.Iterator v1 = p10.iterator();
                while (v1.hasNext()) {
                    String v2;
                    com.flurry.org.codehaus.jackson.map.jsontype.NamedType v5_1 = ((com.flurry.org.codehaus.jackson.map.jsontype.NamedType) v1.next());
                    Class v0 = v5_1.getType();
                    if (!v5_1.hasName()) {
                        v2 = com.flurry.org.codehaus.jackson.map.jsontype.impl.TypeNameIdResolver._defaultTypeId(v0);
                    } else {
                        v2 = v5_1.getName();
                    }
                    if (p11) {
                        v6_0.put(v0.getName(), v2);
                    }
                    if (p12) {
                        com.flurry.org.codehaus.jackson.type.JavaType v4_1 = ((com.flurry.org.codehaus.jackson.type.JavaType) v3_0.get(v2));
                        if ((v4_1 == null) || (!v0.isAssignableFrom(v4_1.getRawClass()))) {
                            v3_0.put(v2, p8.constructType(v0));
                        }
                    }
                }
            }
            return new com.flurry.org.codehaus.jackson.map.jsontype.impl.TypeNameIdResolver(p8, p9, v6_0, v3_0);
        } else {
            throw new IllegalArgumentException();
        }
    }

    public com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id getMechanism()
    {
        return com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id.NAME;
    }

    public String idFromValue(Object p8)
    {
        Class v1 = p8.getClass();
        String v2 = v1.getName();
        try {
            String v3_0 = ((String) this._typeToId.get(v2));
        } catch (java.util.HashMap v4_6) {
            throw v4_6;
        }
        if (v3_0 == null) {
            if (this._config.isAnnotationProcessingEnabled()) {
                v3_0 = this._config.getAnnotationIntrospector().findTypeName(((com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription) this._config.introspectClassAnnotations(v1)).getClassInfo());
            }
            if (v3_0 == null) {
                v3_0 = com.flurry.org.codehaus.jackson.map.jsontype.impl.TypeNameIdResolver._defaultTypeId(v1);
            }
            this._typeToId.put(v2, v3_0);
        }
        return v3_0;
    }

    public String idFromValueAndType(Object p2, Class p3)
    {
        return this.idFromValue(p2);
    }

    public String toString()
    {
        StringBuilder v0_1 = new StringBuilder();
        v0_1.append(91).append(this.getClass().getName());
        v0_1.append("; id-to-type=").append(this._idToType);
        v0_1.append(93);
        return v0_1.toString();
    }

    public com.flurry.org.codehaus.jackson.type.JavaType typeFromId(String p3)
    {
        return ((com.flurry.org.codehaus.jackson.type.JavaType) this._idToType.get(p3));
    }
}
