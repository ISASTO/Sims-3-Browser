package com.flurry.org.codehaus.jackson.map.ext;
public class JodaSerializers implements com.flurry.org.codehaus.jackson.map.util.Provider {
    static final java.util.HashMap _serializers;

    static JodaSerializers()
    {
        com.flurry.org.codehaus.jackson.map.ext.JodaSerializers._serializers = new java.util.HashMap();
        com.flurry.org.codehaus.jackson.map.ext.JodaSerializers._serializers.put(org.joda.time.DateTime, new com.flurry.org.codehaus.jackson.map.ext.JodaSerializers$DateTimeSerializer());
        com.flurry.org.codehaus.jackson.map.ext.JodaSerializers._serializers.put(org.joda.time.LocalDateTime, new com.flurry.org.codehaus.jackson.map.ext.JodaSerializers$LocalDateTimeSerializer());
        com.flurry.org.codehaus.jackson.map.ext.JodaSerializers._serializers.put(org.joda.time.LocalDate, new com.flurry.org.codehaus.jackson.map.ext.JodaSerializers$LocalDateSerializer());
        com.flurry.org.codehaus.jackson.map.ext.JodaSerializers._serializers.put(org.joda.time.DateMidnight, new com.flurry.org.codehaus.jackson.map.ext.JodaSerializers$DateMidnightSerializer());
        com.flurry.org.codehaus.jackson.map.ext.JodaSerializers._serializers.put(org.joda.time.Period, com.flurry.org.codehaus.jackson.map.ser.std.ToStringSerializer.instance);
        return;
    }

    public JodaSerializers()
    {
        return;
    }

    public java.util.Collection provide()
    {
        return com.flurry.org.codehaus.jackson.map.ext.JodaSerializers._serializers.entrySet();
    }
}
