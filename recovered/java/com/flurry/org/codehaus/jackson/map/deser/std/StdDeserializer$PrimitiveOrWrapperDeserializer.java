package com.flurry.org.codehaus.jackson.map.deser.std;
public abstract class StdDeserializer$PrimitiveOrWrapperDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdScalarDeserializer {
    final Object _nullValue;

    protected StdDeserializer$PrimitiveOrWrapperDeserializer(Class p1, Object p2)
    {
        super(p1);
        super._nullValue = p2;
        return;
    }

    public final Object getNullValue()
    {
        return this._nullValue;
    }
}
