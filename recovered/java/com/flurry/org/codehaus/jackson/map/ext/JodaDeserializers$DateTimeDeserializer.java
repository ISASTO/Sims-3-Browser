package com.flurry.org.codehaus.jackson.map.ext;
public class JodaDeserializers$DateTimeDeserializer extends com.flurry.org.codehaus.jackson.map.ext.JodaDeserializers$JodaDeserializer {

    public JodaDeserializers$DateTimeDeserializer(Class p1)
    {
        super(p1);
        return;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public org.joda.time.ReadableInstant deserialize(com.flurry.org.codehaus.jackson.JsonParser p7, com.flurry.org.codehaus.jackson.map.DeserializationContext p8)
    {
        org.joda.time.DateTime v2_4;
        com.flurry.org.codehaus.jackson.JsonToken v1 = p7.getCurrentToken();
        if (v1 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) {
            if (v1 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                throw p8.mappingException(this.getValueClass());
            } else {
                String v0 = p7.getText().trim();
                if (v0.length() != 0) {
                    v2_4 = new org.joda.time.DateTime(v0, org.joda.time.DateTimeZone.UTC);
                } else {
                    v2_4 = 0;
                }
            }
        } else {
            v2_4 = new org.joda.time.DateTime(p7.getLongValue(), org.joda.time.DateTimeZone.UTC);
        }
        return v2_4;
    }
}
