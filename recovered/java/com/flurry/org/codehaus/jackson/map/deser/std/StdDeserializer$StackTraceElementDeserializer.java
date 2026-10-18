package com.flurry.org.codehaus.jackson.map.deser.std;
public class StdDeserializer$StackTraceElementDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdScalarDeserializer {

    public StdDeserializer$StackTraceElementDeserializer()
    {
        super(StackTraceElement);
        return;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public StackTraceElement deserialize(com.flurry.org.codehaus.jackson.JsonParser p9, com.flurry.org.codehaus.jackson.map.DeserializationContext p10)
    {
        com.flurry.org.codehaus.jackson.JsonToken v5_0 = p9.getCurrentToken();
        if (v5_0 != com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
            throw p10.mappingException(this._valueClass, v5_0);
        } else {
            String v0 = "";
            String v3 = "";
            String v1 = "";
            int v2 = -1;
            while(true) {
                com.flurry.org.codehaus.jackson.JsonToken v5_1 = p9.nextValue();
                if (v5_1 == com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT) {
                    return new StackTraceElement(v0, v3, v1, v2);
                } else {
                    String v4 = p9.getCurrentName();
                    if (!"className".equals(v4)) {
                        if (!"fileName".equals(v4)) {
                            if (!"lineNumber".equals(v4)) {
                                if (!"methodName".equals(v4)) {
                                    if (!"nativeMethod".equals(v4)) {
                                        this.handleUnknownProperty(p9, p10, this._valueClass, v4);
                                    }
                                } else {
                                    v3 = p9.getText();
                                }
                            } else {
                                if (!v5_1.isNumeric()) {
                                    break;
                                }
                                v2 = p9.getIntValue();
                            }
                        } else {
                            v1 = p9.getText();
                        }
                    } else {
                        v0 = p9.getText();
                    }
                }
            }
            throw com.flurry.org.codehaus.jackson.map.JsonMappingException.from(p9, new StringBuilder().append("Non-numeric token (").append(v5_1).append(") for property \'lineNumber\'").toString());
        }
    }
}
