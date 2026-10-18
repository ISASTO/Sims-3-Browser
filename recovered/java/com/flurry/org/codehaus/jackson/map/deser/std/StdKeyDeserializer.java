package com.flurry.org.codehaus.jackson.map.deser.std;
public abstract class StdKeyDeserializer extends com.flurry.org.codehaus.jackson.map.KeyDeserializer {
    protected final Class _keyClass;

    protected StdKeyDeserializer(Class p1)
    {
        this._keyClass = p1;
        return;
    }

    protected abstract Object _parse(String p0, com.flurry.org.codehaus.jackson.map.DeserializationContext p1);

    protected double _parseDouble(String p3)
    {
        return com.flurry.org.codehaus.jackson.io.NumberInput.parseDouble(p3);
    }

    protected int _parseInt(String p2)
    {
        return Integer.parseInt(p2);
    }

    protected long _parseLong(String p3)
    {
        return Long.parseLong(p3);
    }

    public final Object deserializeKey(String p6, com.flurry.org.codehaus.jackson.map.DeserializationContext p7)
    {
        Object v1;
        if (p6 != null) {
            try {
                v1 = this._parse(p6, p7);
            } catch (Exception v0) {
                throw p7.weirdKeyException(this._keyClass, p6, new StringBuilder().append("not a valid representation: ").append(v0.getMessage()).toString());
            }
            if (v1 == null) {
                throw p7.weirdKeyException(this._keyClass, p6, "not a valid representation");
            }
        } else {
            v1 = 0;
        }
        return v1;
    }

    public Class getKeyClass()
    {
        return this._keyClass;
    }
}
