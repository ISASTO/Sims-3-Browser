package com.flurry.org.codehaus.jackson.map.deser.std;
public abstract class FromStringDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdScalarDeserializer {

    protected FromStringDeserializer(Class p1)
    {
        super(p1);
        return;
    }

    public static Iterable all()
    {
        java.util.ArrayList v0_1 = new java.util.ArrayList();
        v0_1.add(new com.flurry.org.codehaus.jackson.map.deser.std.FromStringDeserializer$UUIDDeserializer());
        v0_1.add(new com.flurry.org.codehaus.jackson.map.deser.std.FromStringDeserializer$URLDeserializer());
        v0_1.add(new com.flurry.org.codehaus.jackson.map.deser.std.FromStringDeserializer$URIDeserializer());
        v0_1.add(new com.flurry.org.codehaus.jackson.map.deser.std.FromStringDeserializer$CurrencyDeserializer());
        v0_1.add(new com.flurry.org.codehaus.jackson.map.deser.std.FromStringDeserializer$PatternDeserializer());
        v0_1.add(new com.flurry.org.codehaus.jackson.map.deser.std.FromStringDeserializer$LocaleDeserializer());
        v0_1.add(new com.flurry.org.codehaus.jackson.map.deser.std.FromStringDeserializer$InetAddressDeserializer());
        v0_1.add(new com.flurry.org.codehaus.jackson.map.deser.std.FromStringDeserializer$TimeZoneDeserializer());
        v0_1.add(new com.flurry.org.codehaus.jackson.map.deser.std.FromStringDeserializer$CharsetDeserializer());
        return v0_1;
    }

    protected abstract Object _deserialize(String p0, com.flurry.org.codehaus.jackson.map.DeserializationContext p1);

    protected Object _deserializeEmbedded(Object p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4)
    {
        throw p4.mappingException(new StringBuilder().append("Don\'t know how to convert embedded Object of type ").append(p3.getClass().getName()).append(" into ").append(this._valueClass.getName()).toString());
    }

    public final Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p6, com.flurry.org.codehaus.jackson.map.DeserializationContext p7)
    {
        Object v1 = 0;
        if (p6.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
            if (p6.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_EMBEDDED_OBJECT) {
                throw p7.mappingException(this._valueClass);
            } else {
                Object v0 = p6.getEmbeddedObject();
                if (v0 != null) {
                    if (!this._valueClass.isAssignableFrom(v0.getClass())) {
                        v1 = this._deserializeEmbedded(v0, p7);
                    } else {
                        v1 = v0;
                    }
                }
            }
        } else {
            String v2 = p6.getText().trim();
            if (v2.length() != 0) {
                try {
                    v1 = this._deserialize(v2, p7);
                } catch (boolean v3) {
                    throw p7.weirdStringException(this._valueClass, "not a valid textual representation");
                }
                if (v1 == null) {
                }
            }
        }
        return v1;
    }
}
