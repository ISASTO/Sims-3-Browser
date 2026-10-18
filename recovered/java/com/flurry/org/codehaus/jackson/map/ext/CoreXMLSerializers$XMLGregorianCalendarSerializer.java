package com.flurry.org.codehaus.jackson.map.ext;
public class CoreXMLSerializers$XMLGregorianCalendarSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase {

    public CoreXMLSerializers$XMLGregorianCalendarSerializer()
    {
        super(javax.xml.datatype.XMLGregorianCalendar);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p2, reflect.Type p3)
    {
        return com.flurry.org.codehaus.jackson.map.ser.std.CalendarSerializer.instance.getSchema(p2, p3);
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((javax.xml.datatype.XMLGregorianCalendar) p1), p2, p3);
        return;
    }

    public void serialize(javax.xml.datatype.XMLGregorianCalendar p3, com.flurry.org.codehaus.jackson.JsonGenerator p4, com.flurry.org.codehaus.jackson.map.SerializerProvider p5)
    {
        com.flurry.org.codehaus.jackson.map.ser.std.CalendarSerializer.instance.serialize(p3.toGregorianCalendar(), p4, p5);
        return;
    }
}
