package com.flurry.org.codehaus.jackson.map.ext;
public class CoreXMLSerializers implements com.flurry.org.codehaus.jackson.map.util.Provider {
    static final java.util.HashMap _serializers;

    static CoreXMLSerializers()
    {
        com.flurry.org.codehaus.jackson.map.ext.CoreXMLSerializers._serializers = new java.util.HashMap();
        com.flurry.org.codehaus.jackson.map.ser.std.ToStringSerializer v0 = com.flurry.org.codehaus.jackson.map.ser.std.ToStringSerializer.instance;
        com.flurry.org.codehaus.jackson.map.ext.CoreXMLSerializers._serializers.put(javax.xml.datatype.Duration, v0);
        com.flurry.org.codehaus.jackson.map.ext.CoreXMLSerializers._serializers.put(javax.xml.datatype.XMLGregorianCalendar, new com.flurry.org.codehaus.jackson.map.ext.CoreXMLSerializers$XMLGregorianCalendarSerializer());
        com.flurry.org.codehaus.jackson.map.ext.CoreXMLSerializers._serializers.put(javax.xml.namespace.QName, v0);
        return;
    }

    public CoreXMLSerializers()
    {
        return;
    }

    public java.util.Collection provide()
    {
        return com.flurry.org.codehaus.jackson.map.ext.CoreXMLSerializers._serializers.entrySet();
    }
}
