package com.flurry.org.codehaus.jackson.map.deser.std;
public class StdDeserializer$SqlDateDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdScalarDeserializer {

    public StdDeserializer$SqlDateDeserializer()
    {
        super(java.sql.Date);
        return;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public java.sql.Date deserialize(com.flurry.org.codehaus.jackson.JsonParser p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6)
    {
        java.sql.Date v1_1;
        java.util.Date v0 = this._parseDate(p5, p6);
        if (v0 != null) {
            v1_1 = new java.sql.Date(v0.getTime());
        } else {
            v1_1 = 0;
        }
        return v1_1;
    }
}
