package com.flurry.org.codehaus.jackson.map.type;
public abstract class TypeModifier {

    public TypeModifier()
    {
        return;
    }

    public abstract com.flurry.org.codehaus.jackson.type.JavaType modifyType(com.flurry.org.codehaus.jackson.type.JavaType p0, reflect.Type p1, com.flurry.org.codehaus.jackson.map.type.TypeBindings p2, com.flurry.org.codehaus.jackson.map.type.TypeFactory p3);
}
