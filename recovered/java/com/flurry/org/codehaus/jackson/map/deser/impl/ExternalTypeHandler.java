package com.flurry.org.codehaus.jackson.map.deser.impl;
public class ExternalTypeHandler {
    private final java.util.HashMap _nameToPropertyIndex;
    private final com.flurry.org.codehaus.jackson.map.deser.impl.ExternalTypeHandler$ExtTypedProperty[] _properties;
    private final com.flurry.org.codehaus.jackson.util.TokenBuffer[] _tokens;
    private final String[] _typeIds;

    protected ExternalTypeHandler(com.flurry.org.codehaus.jackson.map.deser.impl.ExternalTypeHandler p3)
    {
        this._properties = p3._properties;
        this._nameToPropertyIndex = p3._nameToPropertyIndex;
        int v0 = this._properties.length;
        com.flurry.org.codehaus.jackson.util.TokenBuffer[] v1_3 = new String[v0];
        this._typeIds = v1_3;
        com.flurry.org.codehaus.jackson.util.TokenBuffer[] v1_4 = new com.flurry.org.codehaus.jackson.util.TokenBuffer[v0];
        this._tokens = v1_4;
        return;
    }

    protected ExternalTypeHandler(com.flurry.org.codehaus.jackson.map.deser.impl.ExternalTypeHandler$ExtTypedProperty[] p1, java.util.HashMap p2, String[] p3, com.flurry.org.codehaus.jackson.util.TokenBuffer[] p4)
    {
        this._properties = p1;
        this._nameToPropertyIndex = p2;
        this._typeIds = p3;
        this._tokens = p4;
        return;
    }

    protected final void _deserialize(com.flurry.org.codehaus.jackson.JsonParser p4, com.flurry.org.codehaus.jackson.map.DeserializationContext p5, Object p6, int p7)
    {
        com.flurry.org.codehaus.jackson.util.TokenBuffer v0_1 = new com.flurry.org.codehaus.jackson.util.TokenBuffer(p4.getCodec());
        v0_1.writeStartArray();
        v0_1.writeString(this._typeIds[p7]);
        com.flurry.org.codehaus.jackson.JsonParser v1_0 = this._tokens[p7].asParser(p4);
        v1_0.nextToken();
        v0_1.copyCurrentStructure(v1_0);
        v0_1.writeEndArray();
        com.flurry.org.codehaus.jackson.JsonParser v1_1 = v0_1.asParser(p4);
        v1_1.nextToken();
        this._properties[p7].getProperty().deserializeAndSet(v1_1, p5, p6);
        return;
    }

    public Object complete(com.flurry.org.codehaus.jackson.JsonParser p6, com.flurry.org.codehaus.jackson.map.DeserializationContext p7, Object p8)
    {
        int v0 = 0;
        int v1 = this._properties.length;
        while (v0 < v1) {
            if (this._typeIds[v0] != null) {
                if (this._tokens[v0] != null) {
                    this._deserialize(p6, p7, p8, v0);
                } else {
                    throw p7.mappingException(new StringBuilder().append("Missing property \'").append(this._properties[v0].getProperty().getName()).append("\' for external type id \'").append(this._properties[v0].getTypePropertyName()).toString());
                }
            } else {
                if (this._tokens[v0] != null) {
                    throw p7.mappingException(new StringBuilder().append("Missing external type id property \'").append(this._properties[v0].getTypePropertyName()).toString());
                }
            }
            v0++;
        }
        return p8;
    }

    public boolean handleToken(com.flurry.org.codehaus.jackson.JsonParser p10, com.flurry.org.codehaus.jackson.map.DeserializationContext p11, String p12, Object p13)
    {
        int v1 = 0;
        Integer v0_1 = ((Integer) this._nameToPropertyIndex.get(p12));
        if (v0_1 != null) {
            int v2 = v0_1.intValue();
            if (!this._properties[v2].hasTypePropertyName(p12)) {
                com.flurry.org.codehaus.jackson.util.TokenBuffer v4_1 = new com.flurry.org.codehaus.jackson.util.TokenBuffer(p10.getCodec());
                v4_1.copyCurrentStructure(p10);
                this._tokens[v2] = v4_1;
                if ((p13 != null) && (this._typeIds[v2] != null)) {
                    v1 = 1;
                }
            } else {
                this._typeIds[v2] = p10.getText();
                p10.skipChildren();
                if ((p13 != null) && (this._tokens[v2] != null)) {
                    v1 = 1;
                }
            }
            if (v1 != 0) {
                this._deserialize(p10, p11, p13, v2);
                this._typeIds[v2] = 0;
                this._tokens[v2] = 0;
            }
            v1 = 1;
        }
        return v1;
    }

    public com.flurry.org.codehaus.jackson.map.deser.impl.ExternalTypeHandler start()
    {
        return new com.flurry.org.codehaus.jackson.map.deser.impl.ExternalTypeHandler(this);
    }
}
