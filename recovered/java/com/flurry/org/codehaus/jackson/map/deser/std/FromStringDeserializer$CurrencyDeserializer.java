package com.flurry.org.codehaus.jackson.map.deser.std;
public class FromStringDeserializer$CurrencyDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.FromStringDeserializer {

    public FromStringDeserializer$CurrencyDeserializer()
    {
        super(java.util.Currency);
        return;
    }

    protected bridge synthetic Object _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._deserialize(p2, p3);
    }

    protected java.util.Currency _deserialize(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return java.util.Currency.getInstance(p2);
    }
}
