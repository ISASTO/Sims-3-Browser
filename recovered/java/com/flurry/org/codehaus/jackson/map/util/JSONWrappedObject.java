package com.flurry.org.codehaus.jackson.map.util;
public class JSONWrappedObject implements com.flurry.org.codehaus.jackson.map.JsonSerializableWithType {
    protected final String _prefix;
    protected final com.flurry.org.codehaus.jackson.type.JavaType _serializationType;
    protected final String _suffix;
    protected final Object _value;

    public JSONWrappedObject(String p2, String p3, Object p4)
    {
        this(p2, p3, p4, ((com.flurry.org.codehaus.jackson.type.JavaType) 0));
        return;
    }

    public JSONWrappedObject(String p1, String p2, Object p3, com.flurry.org.codehaus.jackson.type.JavaType p4)
    {
        this._prefix = p1;
        this._suffix = p2;
        this._value = p3;
        this._serializationType = p4;
        return;
    }

    public JSONWrappedObject(String p2, String p3, Object p4, Class p5)
    {
        com.flurry.org.codehaus.jackson.type.JavaType v0_1;
        this._prefix = p2;
        this._suffix = p3;
        this._value = p4;
        if (p5 != null) {
            v0_1 = com.flurry.org.codehaus.jackson.map.type.TypeFactory.defaultInstance().constructType(p5);
        } else {
            v0_1 = 0;
        }
        this._serializationType = v0_1;
        return;
    }

    public String getPrefix()
    {
        return this._prefix;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType getSerializationType()
    {
        return this._serializationType;
    }

    public String getSuffix()
    {
        return this._suffix;
    }

    public Object getValue()
    {
        return this._value;
    }

    public void serialize(com.flurry.org.codehaus.jackson.JsonGenerator p5, com.flurry.org.codehaus.jackson.map.SerializerProvider p6)
    {
        if (this._prefix != null) {
            p5.writeRaw(this._prefix);
        }
        if (this._value != null) {
            if (this._serializationType == null) {
                p6.findTypedValueSerializer(this._value.getClass(), 1, 0).serialize(this._value, p5, p6);
            } else {
                p6.findTypedValueSerializer(this._serializationType, 1, 0).serialize(this._value, p5, p6);
            }
        } else {
            p6.defaultSerializeNull(p5);
        }
        if (this._suffix != null) {
            p5.writeRaw(this._suffix);
        }
        return;
    }

    public void serializeWithType(com.flurry.org.codehaus.jackson.JsonGenerator p1, com.flurry.org.codehaus.jackson.map.SerializerProvider p2, com.flurry.org.codehaus.jackson.map.TypeSerializer p3)
    {
        this.serialize(p1, p2);
        return;
    }
}
