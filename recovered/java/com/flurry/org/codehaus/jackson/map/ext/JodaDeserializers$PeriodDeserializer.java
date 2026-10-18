package com.flurry.org.codehaus.jackson.map.ext;
public class JodaDeserializers$PeriodDeserializer extends com.flurry.org.codehaus.jackson.map.ext.JodaDeserializers$JodaDeserializer {

    public JodaDeserializers$PeriodDeserializer()
    {
        super(org.joda.time.ReadablePeriod);
        return;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public org.joda.time.ReadablePeriod deserialize(com.flurry.org.codehaus.jackson.JsonParser p4, com.flurry.org.codehaus.jackson.map.DeserializationContext p5)
    {
        org.joda.time.Period v0_1;
        switch (com.flurry.org.codehaus.jackson.map.ext.JodaDeserializers$1.$SwitchMap$org$codehaus$jackson$JsonToken[p4.getCurrentToken().ordinal()]) {
            case 1:
                v0_1 = new org.joda.time.Period(p4.getLongValue());
                break;
            case 2:
                v0_1 = new org.joda.time.Period(p4.getText());
                break;
            default:
                throw p5.wrongTokenException(p4, com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY, "expected JSON Number or String");
        }
        return v0_1;
    }
}
