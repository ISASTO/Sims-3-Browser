package com.flurry.org.codehaus.jackson.map.ext;
public class CoreXMLDeserializers$GregorianCalendarDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdScalarDeserializer {

    public CoreXMLDeserializers$GregorianCalendarDeserializer()
    {
        super(javax.xml.datatype.XMLGregorianCalendar);
        return;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public javax.xml.datatype.XMLGregorianCalendar deserialize(com.flurry.org.codehaus.jackson.JsonParser p4, com.flurry.org.codehaus.jackson.map.DeserializationContext p5)
    {
        javax.xml.datatype.XMLGregorianCalendar v2_1;
        java.util.Date v1 = this._parseDate(p4, p5);
        if (v1 != null) {
            java.util.GregorianCalendar v0_1 = new java.util.GregorianCalendar();
            v0_1.setTime(v1);
            v2_1 = com.flurry.org.codehaus.jackson.map.ext.CoreXMLDeserializers._dataTypeFactory.newXMLGregorianCalendar(v0_1);
        } else {
            v2_1 = 0;
        }
        return v2_1;
    }
}
