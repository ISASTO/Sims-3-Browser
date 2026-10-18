package com.flurry.org.codehaus.jackson.map.deser.std;
public class DateDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdScalarDeserializer {

    public DateDeserializer()
    {
        super(java.util.Date);
        return;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public java.util.Date deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._parseDate(p2, p3);
    }
}
