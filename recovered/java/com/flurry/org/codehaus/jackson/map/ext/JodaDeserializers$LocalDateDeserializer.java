package com.flurry.org.codehaus.jackson.map.ext;
public class JodaDeserializers$LocalDateDeserializer extends com.flurry.org.codehaus.jackson.map.ext.JodaDeserializers$JodaDeserializer {

    public JodaDeserializers$LocalDateDeserializer()
    {
        super(org.joda.time.LocalDate);
        return;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public org.joda.time.LocalDate deserialize(com.flurry.org.codehaus.jackson.JsonParser p8, com.flurry.org.codehaus.jackson.map.DeserializationContext p9)
    {
        org.joda.time.LocalDate v4_1;
        if (!p8.isExpectedStartArrayToken()) {
            switch (com.flurry.org.codehaus.jackson.map.ext.JodaDeserializers$1.$SwitchMap$org$codehaus$jackson$JsonToken[p8.getCurrentToken().ordinal()]) {
                case 1:
                    v4_1 = new org.joda.time.LocalDate(p8.getLongValue());
                    break;
                case 2:
                    org.joda.time.DateTime v1 = this.parseLocal(p8);
                    if (v1 != null) {
                        v4_1 = v1.toLocalDate();
                    } else {
                        v4_1 = 0;
                    }
                    break;
                default:
                    throw p9.wrongTokenException(p8, com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY, "expected JSON Array, String or Number");
            }
        } else {
            p8.nextToken();
            int v3 = p8.getIntValue();
            p8.nextToken();
            int v2 = p8.getIntValue();
            p8.nextToken();
            int v0 = p8.getIntValue();
            if (p8.nextToken() == com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) {
                v4_1 = new org.joda.time.LocalDate(v3, v2, v0);
            } else {
                throw p9.wrongTokenException(p8, com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY, "after LocalDate ints");
            }
        }
        return v4_1;
    }
}
