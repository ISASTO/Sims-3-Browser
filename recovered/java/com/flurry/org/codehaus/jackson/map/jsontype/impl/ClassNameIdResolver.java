package com.flurry.org.codehaus.jackson.map.jsontype.impl;
public class ClassNameIdResolver extends com.flurry.org.codehaus.jackson.map.jsontype.impl.TypeIdResolverBase {

    public ClassNameIdResolver(com.flurry.org.codehaus.jackson.type.JavaType p1, com.flurry.org.codehaus.jackson.map.type.TypeFactory p2)
    {
        super(p1, p2);
        return;
    }

    protected final String _idFrom(Object p9, Class p10)
    {
        if ((Enum.isAssignableFrom(p10)) && (!p10.isEnum())) {
            p10 = p10.getSuperclass();
        }
        String v4 = p10.getName();
        if (!v4.startsWith("java.util")) {
            if ((v4.indexOf(36) >= 0) && ((com.flurry.org.codehaus.jackson.map.util.ClassUtil.getOuterClass(p10) != null) && (com.flurry.org.codehaus.jackson.map.util.ClassUtil.getOuterClass(this._baseType.getRawClass()) == null))) {
                v4 = this._baseType.getRawClass().getName();
            }
        } else {
            if (!(p9 instanceof java.util.EnumSet)) {
                if (!(p9 instanceof java.util.EnumMap)) {
                    String v0 = v4.substring(9);
                    if (((v0.startsWith(".Arrays$")) || (v0.startsWith(".Collections$"))) && (v4.indexOf("List") >= 0)) {
                        v4 = "java.util.ArrayList";
                    }
                } else {
                    v4 = com.flurry.org.codehaus.jackson.map.type.TypeFactory.defaultInstance().constructMapType(java.util.EnumMap, com.flurry.org.codehaus.jackson.map.util.ClassUtil.findEnumType(((java.util.EnumMap) p9)), Object).toCanonical();
                }
            } else {
                v4 = com.flurry.org.codehaus.jackson.map.type.TypeFactory.defaultInstance().constructCollectionType(java.util.EnumSet, com.flurry.org.codehaus.jackson.map.util.ClassUtil.findEnumType(((java.util.EnumSet) p9))).toCanonical();
            }
        }
        return v4;
    }

    public com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id getMechanism()
    {
        return com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id.CLASS;
    }

    public String idFromValue(Object p2)
    {
        return this._idFrom(p2, p2.getClass());
    }

    public String idFromValueAndType(Object p2, Class p3)
    {
        return this._idFrom(p2, p3);
    }

    public void registerSubtype(Class p1, String p2)
    {
        return;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType typeFromId(String p8)
    {
        com.flurry.org.codehaus.jackson.type.JavaType v3;
        if (p8.indexOf(60) <= 0) {
            try {
                v3 = this._typeFactory.constructSpecializedType(this._baseType, Class.forName(p8, 1, Thread.currentThread().getContextClassLoader()));
            } catch (Exception v1) {
                throw new IllegalArgumentException(new StringBuilder().append("Invalid type id \'").append(p8).append("\' (for id type \'Id.class\'): no such class found").toString());
            } catch (Exception v1) {
                throw new IllegalArgumentException(new StringBuilder().append("Invalid type id \'").append(p8).append("\' (for id type \'Id.class\'): ").append(v1.getMessage()).toString(), v1);
            }
        } else {
            v3 = com.flurry.org.codehaus.jackson.map.type.TypeFactory.fromCanonical(p8);
        }
        return v3;
    }
}
