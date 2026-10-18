package com.flurry.org.codehaus.jackson.map.ext;
public class CoreXMLDeserializers$QNameDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.FromStringDeserializer {

    public CoreXMLDeserializers$QNameDeserializer()
    {
        super(javax.xml.namespace.QName);
        return;
    }

    protected bridge synthetic Object _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._deserialize(p2, p3);
    }

    protected javax.xml.namespace.QName _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return javax.xml.namespace.QName.valueOf(p2);
    }
}
