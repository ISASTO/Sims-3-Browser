package com.flurry.org.codehaus.jackson.map.ext;
public abstract class DOMDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.FromStringDeserializer {
    static final javax.xml.parsers.DocumentBuilderFactory _parserFactory;

    static DOMDeserializer()
    {
        com.flurry.org.codehaus.jackson.map.ext.DOMDeserializer._parserFactory = javax.xml.parsers.DocumentBuilderFactory.newInstance();
        com.flurry.org.codehaus.jackson.map.ext.DOMDeserializer._parserFactory.setNamespaceAware(1);
        return;
    }

    protected DOMDeserializer(Class p1)
    {
        super(p1);
        return;
    }

    public abstract Object _deserialize(String p0, com.flurry.org.codehaus.jackson.map.DeserializationContext p1);

    protected final org.w3c.dom.Document parse(String p5)
    {
        try {
            return com.flurry.org.codehaus.jackson.map.ext.DOMDeserializer._parserFactory.newDocumentBuilder().parse(new org.xml.sax.InputSource(new java.io.StringReader(p5)));
        } catch (Exception v0) {
            throw new IllegalArgumentException(new StringBuilder().append("Failed to parse JSON String as XML: ").append(v0.getMessage()).toString(), v0);
        }
    }
}
