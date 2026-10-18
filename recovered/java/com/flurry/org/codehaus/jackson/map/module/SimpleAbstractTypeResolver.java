package com.flurry.org.codehaus.jackson.map.module;
public class SimpleAbstractTypeResolver extends com.flurry.org.codehaus.jackson.map.AbstractTypeResolver {
    protected final java.util.HashMap _mappings;

    public SimpleAbstractTypeResolver()
    {
        this._mappings = new java.util.HashMap();
        return;
    }

    public com.flurry.org.codehaus.jackson.map.module.SimpleAbstractTypeResolver addMapping(Class p4, Class p5)
    {
        if (p4 != p5) {
            if (p4.isAssignableFrom(p5)) {
                if (reflect.Modifier.isAbstract(p4.getModifiers())) {
                    this._mappings.put(new com.flurry.org.codehaus.jackson.map.type.ClassKey(p4), p5);
                    return this;
                } else {
                    throw new IllegalArgumentException(new StringBuilder().append("Can not add mapping from class ").append(p4.getName()).append(" since it is not abstract").toString());
                }
            } else {
                throw new IllegalArgumentException(new StringBuilder().append("Can not add mapping from class ").append(p4.getName()).append(" to ").append(p5.getName()).append(", as latter is not a subtype of former").toString());
            }
        } else {
            throw new IllegalArgumentException("Can not add mapping from class to itself");
        }
    }

    public com.flurry.org.codehaus.jackson.type.JavaType findTypeMapping(com.flurry.org.codehaus.jackson.map.DeserializationConfig p5, com.flurry.org.codehaus.jackson.type.JavaType p6)
    {
        com.flurry.org.codehaus.jackson.type.JavaType v2_0;
        Class v0_1 = ((Class) this._mappings.get(new com.flurry.org.codehaus.jackson.map.type.ClassKey(p6.getRawClass())));
        if (v0_1 != null) {
            v2_0 = p6.narrowBy(v0_1);
        } else {
            v2_0 = 0;
        }
        return v2_0;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType resolveAbstractType(com.flurry.org.codehaus.jackson.map.DeserializationConfig p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        return 0;
    }
}
