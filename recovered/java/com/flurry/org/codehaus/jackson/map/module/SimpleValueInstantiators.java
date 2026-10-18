package com.flurry.org.codehaus.jackson.map.module;
public class SimpleValueInstantiators extends com.flurry.org.codehaus.jackson.map.deser.ValueInstantiators$Base {
    protected java.util.HashMap _classMappings;

    public SimpleValueInstantiators()
    {
        this._classMappings = new java.util.HashMap();
        return;
    }

    public com.flurry.org.codehaus.jackson.map.module.SimpleValueInstantiators addValueInstantiator(Class p3, com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator p4)
    {
        this._classMappings.put(new com.flurry.org.codehaus.jackson.map.type.ClassKey(p3), p4);
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator findValueInstantiator(com.flurry.org.codehaus.jackson.map.DeserializationConfig p5, com.flurry.org.codehaus.jackson.map.BeanDescription p6, com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator p7)
    {
        com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator v0_1 = ((com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator) this._classMappings.get(new com.flurry.org.codehaus.jackson.map.type.ClassKey(p6.getBeanClass())));
        if (v0_1 != null) {
            p7 = v0_1;
        }
        return p7;
    }
}
