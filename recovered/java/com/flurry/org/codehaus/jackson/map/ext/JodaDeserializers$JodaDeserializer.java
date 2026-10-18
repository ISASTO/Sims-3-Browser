package com.flurry.org.codehaus.jackson.map.ext;
abstract class JodaDeserializers$JodaDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdScalarDeserializer {
    static final org.joda.time.format.DateTimeFormatter _localDateTimeFormat;

    static JodaDeserializers$JodaDeserializer()
    {
        com.flurry.org.codehaus.jackson.map.ext.JodaDeserializers$JodaDeserializer._localDateTimeFormat = org.joda.time.format.ISODateTimeFormat.localDateOptionalTimeParser();
        return;
    }

    protected JodaDeserializers$JodaDeserializer(Class p1)
    {
        super(p1);
        return;
    }

    protected org.joda.time.DateTime parseLocal(com.flurry.org.codehaus.jackson.JsonParser p3)
    {
        org.joda.time.DateTime v1_1;
        String v0 = p3.getText().trim();
        if (v0.length() != 0) {
            v1_1 = com.flurry.org.codehaus.jackson.map.ext.JodaDeserializers$JodaDeserializer._localDateTimeFormat.parseDateTime(v0);
        } else {
            v1_1 = 0;
        }
        return v1_1;
    }
}
