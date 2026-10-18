package com.flurry.org.codehaus.jackson.map.util;
public class JSONPObject implements com.flurry.org.codehaus.jackson.map.JsonSerializableWithType {
    protected final String _function;
    protected final com.flurry.org.codehaus.jackson.type.JavaType _serializationType;
    protected final Object _value;

    public JSONPObject(String p2, Object p3)
    {
        this(p2, p3, ((com.flurry.org.codehaus.jackson.type.JavaType) 0));
        return;
    }

    public JSONPObject(String p1, Object p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        this._function = p1;
        this._value = p2;
        this._serializationType = p3;
        return;
    }

    public JSONPObject(String p2, Object p3, Class p4)
    {
        com.flurry.org.codehaus.jackson.type.JavaType v0_1;
        this._function = p2;
        this._value = p3;
        if (p4 != null) {
            v0_1 = com.flurry.org.codehaus.jackson.map.type.TypeFactory.defaultInstance().constructType(p4);
        } else {
            v0_1 = 0;
        }
        this._serializationType = v0_1;
        return;
    }

    public String getFunction()
    {
        return this._function;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType getSerializationType()
    {
        return this._serializationType;
    }

    public Object getValue()
    {
        return this._value;
    }

    public void serialize(com.flurry.org.codehaus.jackson.JsonGenerator p5, com.flurry.org.codehaus.jackson.map.SerializerProvider p6)
    {
        p5.writeRaw(this._function);
        p5.writeRaw(40);
        if (this._value != null) {
            if (this._serializationType == null) {
                p6.findTypedValueSerializer(this._value.getClass(), 1, 0).serialize(this._value, p5, p6);
            } else {
                p6.findTypedValueSerializer(this._serializationType, 1, 0).serialize(this._value, p5, p6);
            }
        } else {
            p6.defaultSerializeNull(p5);
        }
        p5.writeRaw(41);
        return;
    }

    public void serializeWithType(com.flurry.org.codehaus.jackson.JsonGenerator p1, com.flurry.org.codehaus.jackson.map.SerializerProvider p2, com.flurry.org.codehaus.jackson.map.TypeSerializer p3)
    {
        this.serialize(p1, p2);
        return;
    }
}
