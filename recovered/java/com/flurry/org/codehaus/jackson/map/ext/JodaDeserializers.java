package com.flurry.org.codehaus.jackson.map.ext;
public class JodaDeserializers implements com.flurry.org.codehaus.jackson.map.util.Provider {

    public JodaDeserializers()
    {
        return;
    }

    public java.util.Collection provide()
    {
        java.util.List v0_1 = new com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer[7];
        v0_1[0] = new com.flurry.org.codehaus.jackson.map.ext.JodaDeserializers$DateTimeDeserializer(org.joda.time.DateTime);
        v0_1[1] = new com.flurry.org.codehaus.jackson.map.ext.JodaDeserializers$DateTimeDeserializer(org.joda.time.ReadableDateTime);
        v0_1[2] = new com.flurry.org.codehaus.jackson.map.ext.JodaDeserializers$DateTimeDeserializer(org.joda.time.ReadableInstant);
        v0_1[3] = new com.flurry.org.codehaus.jackson.map.ext.JodaDeserializers$LocalDateDeserializer();
        v0_1[4] = new com.flurry.org.codehaus.jackson.map.ext.JodaDeserializers$LocalDateTimeDeserializer();
        v0_1[5] = new com.flurry.org.codehaus.jackson.map.ext.JodaDeserializers$DateMidnightDeserializer();
        v0_1[6] = new com.flurry.org.codehaus.jackson.map.ext.JodaDeserializers$PeriodDeserializer();
        return java.util.Arrays.asList(v0_1);
    }
}
