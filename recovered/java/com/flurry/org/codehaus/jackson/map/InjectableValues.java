package com.flurry.org.codehaus.jackson.map;
public abstract class InjectableValues {

    public InjectableValues()
    {
        return;
    }

    public abstract Object findInjectableValue(Object p0, com.flurry.org.codehaus.jackson.map.DeserializationContext p1, com.flurry.org.codehaus.jackson.map.BeanProperty p2, Object p3);
}
