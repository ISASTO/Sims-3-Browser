package com.flurry.org.codehaus.jackson.map.deser.std;
public final class StdDeserializer$CharacterDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$PrimitiveOrWrapperDeserializer {

    public StdDeserializer$CharacterDeserializer(Class p1, Character p2)
    {
        super(p1, p2);
        return;
    }

    public Character deserialize(com.flurry.org.codehaus.jackson.JsonParser p6, com.flurry.org.codehaus.jackson.map.DeserializationContext p7)
    {
        Character v3_2;
        com.flurry.org.codehaus.jackson.JsonToken v0 = p6.getCurrentToken();
        if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) {
            if (v0 == com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                String v1 = p6.getText();
                if (v1.length() != 1) {
                    if (v1.length() == 0) {
                        v3_2 = ((Character) this.getEmptyValue());
                        return v3_2;
                    }
                } else {
                    v3_2 = Character.valueOf(v1.charAt(0));
                    return v3_2;
                }
            }
        } else {
            int v2 = p6.getIntValue();
            if ((v2 >= 0) && (v2 <= 65535)) {
                v3_2 = Character.valueOf(((char) v2));
                return v3_2;
            }
        }
        throw p7.mappingException(this._valueClass, v0);
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }
}
