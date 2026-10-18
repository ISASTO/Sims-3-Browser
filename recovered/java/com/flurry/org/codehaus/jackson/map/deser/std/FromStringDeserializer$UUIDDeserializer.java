package com.flurry.org.codehaus.jackson.map.deser.std;
public class FromStringDeserializer$UUIDDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.FromStringDeserializer {

    public FromStringDeserializer$UUIDDeserializer()
    {
        super(java.util.UUID);
        return;
    }

    protected bridge synthetic Object _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._deserialize(p2, p3);
    }

    protected java.util.UUID _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return java.util.UUID.fromString(p2);
    }

    protected bridge synthetic Object _deserializeEmbedded(Object p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._deserializeEmbedded(p2, p3);
    }

    protected java.util.UUID _deserializeEmbedded(Object p9, com.flurry.org.codehaus.jackson.map.DeserializationContext p10)
    {
        java.util.UUID v6_9;
        if (!(p9 instanceof byte[])) {
            super._deserializeEmbedded(p9, p10);
            v6_9 = 0;
        } else {
            if (((byte[]) ((byte[]) p9)).length != 16) {
                p10.mappingException(new StringBuilder().append("Can only construct UUIDs from 16 byte arrays; got ").append(((byte[]) ((byte[]) p9)).length).append(" bytes").toString());
            }
            java.io.DataInputStream v1_1 = new java.io.DataInputStream(new java.io.ByteArrayInputStream(((byte[]) ((byte[]) p9))));
            v6_9 = new java.util.UUID(v1_1.readLong(), v1_1.readLong());
        }
        return v6_9;
    }
}
