package com.flurry.org.codehaus.jackson.map.deser.std;
public class EnumDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdScalarDeserializer {
    protected final com.flurry.org.codehaus.jackson.map.util.EnumResolver _resolver;

    public EnumDeserializer(com.flurry.org.codehaus.jackson.map.util.EnumResolver p2)
    {
        super(Enum);
        super._resolver = p2;
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.JsonDeserializer deserializerForCreator(com.flurry.org.codehaus.jackson.map.DeserializationConfig p3, Class p4, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p5)
    {
        if (p5.getParameterType(0) == String) {
            if (p3.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.CAN_OVERRIDE_ACCESS_MODIFIERS)) {
                com.flurry.org.codehaus.jackson.map.util.ClassUtil.checkAndFixAccess(p5.getMember());
            }
            return new com.flurry.org.codehaus.jackson.map.deser.std.EnumDeserializer$FactoryBasedDeserializer(p4, p5);
        } else {
            throw new IllegalArgumentException(new StringBuilder().append("Parameter #0 type for factory method (").append(p5).append(") not suitable, must be java.lang.String").toString());
        }
    }

    public Enum deserialize(com.flurry.org.codehaus.jackson.JsonParser p9, com.flurry.org.codehaus.jackson.map.DeserializationContext p10)
    {
        Enum v4;
        com.flurry.org.codehaus.jackson.JsonToken v0 = p9.getCurrentToken();
        if ((v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) && (v0 != com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME)) {
            if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) {
                throw p10.mappingException(this._resolver.getEnumClass());
            } else {
                if (!p10.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.FAIL_ON_NUMBERS_FOR_ENUMS)) {
                    Enum v3_0 = this._resolver.getEnum(p9.getIntValue());
                    if (v3_0 != null) {
                        v4 = v3_0;
                    } else {
                        throw p10.weirdNumberException(this._resolver.getEnumClass(), new StringBuilder().append("index value outside legal index range [0..").append(this._resolver.lastValidIndex()).append("]").toString());
                    }
                } else {
                    throw p10.mappingException("Not allowed to deserialize Enum value out of JSON number (disable DeserializationConfig.Feature.FAIL_ON_NUMBERS_FOR_ENUMS to allow)");
                }
            }
        } else {
            Enum v3_1 = this._resolver.findEnum(p9.getText());
            if (v3_1 != null) {
                v4 = v3_1;
            } else {
                throw p10.weirdStringException(this._resolver.getEnumClass(), "value not one of declared Enum instance names");
            }
        }
        return v4;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }
}
