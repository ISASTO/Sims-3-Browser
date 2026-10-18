package com.flurry.org.codehaus.jackson.map;
public abstract class KeyDeserializer {

    public KeyDeserializer()
    {
        return;
    }

    public abstract Object deserializeKey(String p0, com.flurry.org.codehaus.jackson.map.DeserializationContext p1);
}
