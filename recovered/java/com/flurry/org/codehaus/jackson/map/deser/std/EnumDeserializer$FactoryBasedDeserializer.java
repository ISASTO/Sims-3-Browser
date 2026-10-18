package com.flurry.org.codehaus.jackson.map.deser.std;
public class EnumDeserializer$FactoryBasedDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdScalarDeserializer {
    protected final Class _enumClass;
    protected final reflect.Method _factory;

    public EnumDeserializer$FactoryBasedDeserializer(Class p2, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p3)
    {
        super(Enum);
        super._enumClass = p2;
        super._factory = p3.getAnnotated();
        return;
    }

    public Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p8, com.flurry.org.codehaus.jackson.map.DeserializationContext p9)
    {
        com.flurry.org.codehaus.jackson.JsonToken v0 = p8.getCurrentToken();
        if ((v0 == com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) || (v0 == com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME)) {
            try {
                int v3_5 = this._factory;
                Class v4 = this._enumClass;
                Object[] v5_1 = new Object[1];
                v5_1[0] = p8.getText();
                int v3_0 = 億.invokeHook(v3_5, v4, v5_1);
            } catch (Exception v1) {
                com.flurry.org.codehaus.jackson.map.util.ClassUtil.unwrapAndThrowAsIAE(v1);
                v3_0 = 0;
            }
            return v3_0;
        } else {
            throw p9.mappingException(this._enumClass);
        }
    }
}
