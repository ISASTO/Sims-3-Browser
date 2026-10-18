package com.flurry.org.codehaus.jackson.map.ext;
public class JodaDeserializers$LocalDateTimeDeserializer extends com.flurry.org.codehaus.jackson.map.ext.JodaDeserializers$JodaDeserializer {

    public JodaDeserializers$LocalDateTimeDeserializer()
    {
        super(org.joda.time.LocalDateTime);
        return;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public org.joda.time.LocalDateTime deserialize(com.flurry.org.codehaus.jackson.JsonParser p12, com.flurry.org.codehaus.jackson.map.DeserializationContext p13)
    {
        org.joda.time.LocalDateTime v0_1;
        if (!p12.isExpectedStartArrayToken()) {
            switch (com.flurry.org.codehaus.jackson.map.ext.JodaDeserializers$1.$SwitchMap$org$codehaus$jackson$JsonToken[p12.getCurrentToken().ordinal()]) {
                case 1:
                    v0_1 = new org.joda.time.LocalDateTime(p12.getLongValue());
                    break;
                case 2:
                    org.joda.time.DateTime v8 = this.parseLocal(p12);
                    if (v8 != null) {
                        v0_1 = v8.toLocalDateTime();
                    } else {
                        v0_1 = 0;
                    }
                    break;
                default:
                    throw p13.wrongTokenException(p12, com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY, "expected JSON Array or Number");
            }
        } else {
            p12.nextToken();
            int v1 = p12.getIntValue();
            p12.nextToken();
            int v2 = p12.getIntValue();
            p12.nextToken();
            int v3 = p12.getIntValue();
            p12.nextToken();
            int v4 = p12.getIntValue();
            p12.nextToken();
            int v5 = p12.getIntValue();
            p12.nextToken();
            int v6 = p12.getIntValue();
            int v7 = 0;
            if (p12.nextToken() != com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) {
                v7 = p12.getIntValue();
                p12.nextToken();
            }
            if (p12.getCurrentToken() == com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) {
                v0_1 = new org.joda.time.LocalDateTime(v1, v2, v3, v4, v5, v6, v7);
            } else {
                throw p13.wrongTokenException(p12, com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY, "after LocalDateTime ints");
            }
        }
        return v0_1;
    }
}
