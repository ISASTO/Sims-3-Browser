package com.flurry.org.codehaus.jackson.map.ext;
public class DOMSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.SerializerBase {
    protected final org.w3c.dom.ls.DOMImplementationLS _domImpl;

    public DOMSerializer()
    {
        super(org.w3c.dom.Node);
        try {
            super._domImpl = ((org.w3c.dom.ls.DOMImplementationLS) org.w3c.dom.bootstrap.DOMImplementationRegistry.newInstance().getDOMImplementation("LS"));
            return;
        } catch (Exception v0) {
            throw new IllegalStateException(new StringBuilder().append("Could not instantiate DOMImplementationRegistry: ").append(v0.getMessage()).toString(), v0);
        }
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p3, reflect.Type p4)
    {
        return this.createSchemaNode("string", 1);
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((org.w3c.dom.Node) p1), p2, p3);
        return;
    }

    public void serialize(org.w3c.dom.Node p4, com.flurry.org.codehaus.jackson.JsonGenerator p5, com.flurry.org.codehaus.jackson.map.SerializerProvider p6)
    {
        if (this._domImpl != null) {
            p5.writeString(this._domImpl.createLSSerializer().writeToString(p4));
            return;
        } else {
            throw new IllegalStateException("Could not find DOM LS");
        }
    }
}
