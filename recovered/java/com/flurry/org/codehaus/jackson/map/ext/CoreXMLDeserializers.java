package com.flurry.org.codehaus.jackson.map.ext;
public class CoreXMLDeserializers implements com.flurry.org.codehaus.jackson.map.util.Provider {
    static final javax.xml.datatype.DatatypeFactory _dataTypeFactory;

    static CoreXMLDeserializers()
    {
        try {
            com.flurry.org.codehaus.jackson.map.ext.CoreXMLDeserializers._dataTypeFactory = javax.xml.datatype.DatatypeFactory.newInstance();
            return;
        } catch (javax.xml.datatype.DatatypeConfigurationException v0) {
            throw new RuntimeException(v0);
        }
    }

    public CoreXMLDeserializers()
    {
        return;
    }

    public java.util.Collection provide()
    {
        java.util.List v0_1 = new com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer[3];
        v0_1[0] = new com.flurry.org.codehaus.jackson.map.ext.CoreXMLDeserializers$DurationDeserializer();
        v0_1[1] = new com.flurry.org.codehaus.jackson.map.ext.CoreXMLDeserializers$GregorianCalendarDeserializer();
        v0_1[2] = new com.flurry.org.codehaus.jackson.map.ext.CoreXMLDeserializers$QNameDeserializer();
        return java.util.Arrays.asList(v0_1);
    }
}
