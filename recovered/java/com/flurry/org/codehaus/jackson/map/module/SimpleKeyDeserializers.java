package com.flurry.org.codehaus.jackson.map.module;
public class SimpleKeyDeserializers implements com.flurry.org.codehaus.jackson.map.KeyDeserializers {
    protected java.util.HashMap _classMappings;

    public SimpleKeyDeserializers()
    {
        this._classMappings = 0;
        return;
    }

    public com.flurry.org.codehaus.jackson.map.module.SimpleKeyDeserializers addDeserializer(Class p3, com.flurry.org.codehaus.jackson.map.KeyDeserializer p4)
    {
        if (this._classMappings == null) {
            this._classMappings = new java.util.HashMap();
        }
        this._classMappings.put(new com.flurry.org.codehaus.jackson.map.type.ClassKey(p3), p4);
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.KeyDeserializer findKeyDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p4, com.flurry.org.codehaus.jackson.map.DeserializationConfig p5, com.flurry.org.codehaus.jackson.map.BeanDescription p6, com.flurry.org.codehaus.jackson.map.BeanProperty p7)
    {
        com.flurry.org.codehaus.jackson.map.KeyDeserializer v0_1;
        if (this._classMappings != null) {
            v0_1 = ((com.flurry.org.codehaus.jackson.map.KeyDeserializer) this._classMappings.get(new com.flurry.org.codehaus.jackson.map.type.ClassKey(p4.getRawClass())));
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }
}
