package com.flurry.org.codehaus.jackson.map.ext;
public class CoreXMLDeserializers$DurationDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.FromStringDeserializer {

    public CoreXMLDeserializers$DurationDeserializer()
    {
        super(javax.xml.datatype.Duration);
        return;
    }

    protected bridge synthetic Object _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._deserialize(p2, p3);
    }

    protected javax.xml.datatype.Duration _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return com.flurry.org.codehaus.jackson.map.ext.CoreXMLDeserializers._dataTypeFactory.newDuration(p2);
    }
}
