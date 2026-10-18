package com.flurry.org.codehaus.jackson.map.ext;
public abstract class JodaSerializers$JodaSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase {
    static final org.joda.time.format.DateTimeFormatter _localDateFormat;
    static final org.joda.time.format.DateTimeFormatter _localDateTimeFormat;

    static JodaSerializers$JodaSerializer()
    {
        com.flurry.org.codehaus.jackson.map.ext.JodaSerializers$JodaSerializer._localDateTimeFormat = org.joda.time.format.ISODateTimeFormat.dateTime();
        com.flurry.org.codehaus.jackson.map.ext.JodaSerializers$JodaSerializer._localDateFormat = org.joda.time.format.ISODateTimeFormat.date();
        return;
    }

    protected JodaSerializers$JodaSerializer(Class p1)
    {
        super(p1);
        return;
    }

    protected String printLocalDate(org.joda.time.ReadableInstant p2)
    {
        return com.flurry.org.codehaus.jackson.map.ext.JodaSerializers$JodaSerializer._localDateFormat.print(p2);
    }

    protected String printLocalDate(org.joda.time.ReadablePartial p2)
    {
        return com.flurry.org.codehaus.jackson.map.ext.JodaSerializers$JodaSerializer._localDateFormat.print(p2);
    }

    protected String printLocalDateTime(org.joda.time.ReadablePartial p2)
    {
        return com.flurry.org.codehaus.jackson.map.ext.JodaSerializers$JodaSerializer._localDateTimeFormat.print(p2);
    }
}
