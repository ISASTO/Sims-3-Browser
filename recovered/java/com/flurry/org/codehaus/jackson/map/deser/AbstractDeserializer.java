package com.flurry.org.codehaus.jackson.map.deser;
public class AbstractDeserializer extends com.flurry.org.codehaus.jackson.map.JsonDeserializer {
    protected final boolean _acceptBoolean;
    protected final boolean _acceptDouble;
    protected final boolean _acceptInt;
    protected final boolean _acceptString;
    protected final com.flurry.org.codehaus.jackson.type.JavaType _baseType;

    public AbstractDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p5)
    {
        boolean v1_3;
        int v2 = 0;
        this._baseType = p5;
        Class v0 = p5.getRawClass();
        this._acceptString = v0.isAssignableFrom(String);
        if ((v0 != Boolean.TYPE) && (!v0.isAssignableFrom(Boolean))) {
            v1_3 = 0;
        } else {
            v1_3 = 1;
        }
        boolean v1_7;
        this._acceptBoolean = v1_3;
        if ((v0 != Integer.TYPE) && (!v0.isAssignableFrom(Integer))) {
            v1_7 = 0;
        } else {
            v1_7 = 1;
        }
        this._acceptInt = v1_7;
        if ((v0 == Double.TYPE) || (v0.isAssignableFrom(Double))) {
            v2 = 1;
        }
        this._acceptDouble = v2;
        return;
    }

    protected Object _deserializeIfNatural(com.flurry.org.codehaus.jackson.JsonParser p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4)
    {
        Boolean v0_2;
        switch (com.flurry.org.codehaus.jackson.map.deser.AbstractDeserializer$1.$SwitchMap$org$codehaus$jackson$JsonToken[p3.getCurrentToken().ordinal()]) {
            case 1:
                if (!this._acceptString) {
                    v0_2 = 0;
                } else {
                    v0_2 = p3.getText();
                }
                break;
            case 2:
                if (!this._acceptInt) {
                } else {
                    v0_2 = Integer.valueOf(p3.getIntValue());
                }
                break;
            case 3:
                if (!this._acceptDouble) {
                } else {
                    v0_2 = Double.valueOf(p3.getDoubleValue());
                }
                break;
            case 4:
                if (!this._acceptBoolean) {
                } else {
                    v0_2 = Boolean.TRUE;
                }
                break;
            case 5:
                if (!this._acceptBoolean) {
                } else {
                    v0_2 = Boolean.FALSE;
                }
                break;
            default:
        }
        return v0_2;
    }

    public Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4)
    {
        throw p4.instantiationException(this._baseType.getRawClass(), "abstract types can only be instantiated with additional type information");
    }

    public Object deserializeWithType(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4)
    {
        Object v0 = this._deserializeIfNatural(p2, p3);
        if (v0 == null) {
            v0 = p4.deserializeTypedFromObject(p2, p3);
        }
        return v0;
    }
}
