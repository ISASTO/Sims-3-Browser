package com.flurry.org.codehaus.jackson.map.deser.std;
public class ClassDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdScalarDeserializer {

    public ClassDeserializer()
    {
        super(Class);
        return;
    }

    public Class deserialize(com.flurry.org.codehaus.jackson.JsonParser p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6)
    {
        com.flurry.org.codehaus.jackson.JsonToken v1 = p5.getCurrentToken();
        if (v1 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
            throw p6.mappingException(this._valueClass, v1);
        } else {
            Class v3_23;
            String v0 = p5.getText();
            if (v0.indexOf(46) >= 0) {
                try {
                    v3_23 = Class.forName(p5.getText());
                } catch (ClassNotFoundException v2) {
                    throw p6.instantiationException(this._valueClass, v2);
                }
            } else {
                if (!"int".equals(v0)) {
                    if (!"long".equals(v0)) {
                        if (!"float".equals(v0)) {
                            if (!"double".equals(v0)) {
                                if (!"boolean".equals(v0)) {
                                    if (!"byte".equals(v0)) {
                                        if (!"char".equals(v0)) {
                                            if (!"short".equals(v0)) {
                                                if (!"void".equals(v0)) {
                                                } else {
                                                    v3_23 = Void.TYPE;
                                                }
                                            } else {
                                                v3_23 = Short.TYPE;
                                            }
                                        } else {
                                            v3_23 = Character.TYPE;
                                        }
                                    } else {
                                        v3_23 = Byte.TYPE;
                                    }
                                } else {
                                    v3_23 = Boolean.TYPE;
                                }
                            } else {
                                v3_23 = Double.TYPE;
                            }
                        } else {
                            v3_23 = Float.TYPE;
                        }
                    } else {
                        v3_23 = Long.TYPE;
                    }
                } else {
                    v3_23 = Integer.TYPE;
                }
            }
            return v3_23;
        }
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }
}
