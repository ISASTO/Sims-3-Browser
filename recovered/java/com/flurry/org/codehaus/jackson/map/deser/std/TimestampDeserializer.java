package com.flurry.org.codehaus.jackson.map.deser.std;
public class TimestampDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdScalarDeserializer {

    public TimestampDeserializer()
    {
        super(java.sql.Timestamp);
        return;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public java.sql.Timestamp deserialize(com.flurry.org.codehaus.jackson.JsonParser p4, com.flurry.org.codehaus.jackson.map.DeserializationContext p5)
    {
        return new java.sql.Timestamp(this._parseDate(p4, p5).getTime());
    }
}
