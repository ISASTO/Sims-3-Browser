package com.flurry.org.codehaus.jackson.map;
public class ObjectMapper$DefaultTypeResolverBuilder extends com.flurry.org.codehaus.jackson.map.jsontype.impl.StdTypeResolverBuilder {
    protected final com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping _appliesFor;

    public ObjectMapper$DefaultTypeResolverBuilder(com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping p1)
    {
        this._appliesFor = p1;
        return;
    }

    public com.flurry.org.codehaus.jackson.map.TypeDeserializer buildTypeDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p2, com.flurry.org.codehaus.jackson.type.JavaType p3, java.util.Collection p4, com.flurry.org.codehaus.jackson.map.BeanProperty p5)
    {
        int v0_1;
        if (!this.useForType(p3)) {
            v0_1 = 0;
        } else {
            v0_1 = super.buildTypeDeserializer(p2, p3, p4, p5);
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.map.TypeSerializer buildTypeSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p2, com.flurry.org.codehaus.jackson.type.JavaType p3, java.util.Collection p4, com.flurry.org.codehaus.jackson.map.BeanProperty p5)
    {
        int v0_1;
        if (!this.useForType(p3)) {
            v0_1 = 0;
        } else {
            v0_1 = super.buildTypeSerializer(p2, p3, p4, p5);
        }
        return v0_1;
    }

    public boolean useForType(com.flurry.org.codehaus.jackson.type.JavaType p5)
    {
        int v1 = 1;
        int v0 = 0;
        switch (com.flurry.org.codehaus.jackson.map.ObjectMapper$2.$SwitchMap$org$codehaus$jackson$map$ObjectMapper$DefaultTyping[this._appliesFor.ordinal()]) {
            case 1:
                if (!p5.isArrayType()) {
                    if ((p5.getRawClass() == Object) || (!p5.isConcrete())) {
                        v0 = 1;
                    }
                    v1 = v0;
                } else {
                    p5 = p5.getContentType();
                }
            case 3:
                if (p5.isArrayType()) {
                    p5 = p5.getContentType();
                }
                if (!p5.isFinal()) {
                } else {
                    v1 = 0;
                }
                break;
            default:
                if (p5.getRawClass() != Object) {
                    v1 = 0;
                } else {
                }
        }
        return v1;
    }
}
