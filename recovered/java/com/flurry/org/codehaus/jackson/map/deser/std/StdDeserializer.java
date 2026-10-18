package com.flurry.org.codehaus.jackson.map.deser.std;
public abstract class StdDeserializer extends com.flurry.org.codehaus.jackson.map.JsonDeserializer {
    protected final Class _valueClass;

    protected StdDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p2)
    {
        Class v0;
        if (p2 != null) {
            v0 = p2.getRawClass();
        } else {
            v0 = 0;
        }
        this._valueClass = v0;
        return;
    }

    protected StdDeserializer(Class p1)
    {
        this._valueClass = p1;
        return;
    }

    protected static final double parseDouble(String p2)
    {
        double v0_2;
        if (!"2.2250738585072012e-308".equals(p2)) {
            v0_2 = Double.parseDouble(p2);
        } else {
            v0_2 = 4503599627370496;
        }
        return v0_2;
    }

    protected final Boolean _parseBoolean(com.flurry.org.codehaus.jackson.JsonParser p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6)
    {
        com.flurry.org.codehaus.jackson.map.JsonMappingException v2_13;
        com.flurry.org.codehaus.jackson.JsonToken v0 = p5.getCurrentToken();
        if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_TRUE) {
            if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_FALSE) {
                if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) {
                    if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                        if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                            throw p6.mappingException(this._valueClass, v0);
                        } else {
                            String v1 = p5.getText().trim();
                            if (!"true".equals(v1)) {
                                if (!"false".equals(v1)) {
                                    if (v1.length() != 0) {
                                        throw p6.weirdStringException(this._valueClass, "only \"true\" or \"false\" recognized");
                                    } else {
                                        v2_13 = ((Boolean) this.getEmptyValue());
                                    }
                                } else {
                                    v2_13 = Boolean.FALSE;
                                }
                            } else {
                                v2_13 = Boolean.TRUE;
                            }
                        }
                    } else {
                        v2_13 = ((Boolean) this.getNullValue());
                    }
                } else {
                    if (p5.getNumberType() != com.flurry.org.codehaus.jackson.JsonParser$NumberType.INT) {
                        v2_13 = Boolean.valueOf(this._parseBooleanFromNumber(p5, p6));
                    } else {
                        if (p5.getIntValue() != 0) {
                            v2_13 = Boolean.TRUE;
                        } else {
                            v2_13 = Boolean.FALSE;
                        }
                    }
                }
            } else {
                v2_13 = Boolean.FALSE;
            }
        } else {
            v2_13 = Boolean.TRUE;
        }
        return v2_13;
    }

    protected final boolean _parseBooleanFromNumber(com.flurry.org.codehaus.jackson.JsonParser p6, com.flurry.org.codehaus.jackson.map.DeserializationContext p7)
    {
        boolean v1_4;
        if (p6.getNumberType() != com.flurry.org.codehaus.jackson.JsonParser$NumberType.LONG) {
            String v0 = p6.getText();
            if ((!"0.0".equals(v0)) && (!"0".equals(v0))) {
                v1_4 = Boolean.TRUE.booleanValue();
            } else {
                v1_4 = Boolean.FALSE.booleanValue();
            }
        } else {
            boolean v1_8;
            if (p6.getLongValue() != 0) {
                v1_8 = Boolean.TRUE;
            } else {
                v1_8 = Boolean.FALSE;
            }
            v1_4 = v1_8.booleanValue();
        }
        return v1_4;
    }

    protected final boolean _parseBooleanPrimitive(com.flurry.org.codehaus.jackson.JsonParser p7, com.flurry.org.codehaus.jackson.map.DeserializationContext p8)
    {
        com.flurry.org.codehaus.jackson.map.JsonMappingException v2_0 = 1;
        com.flurry.org.codehaus.jackson.JsonToken v0 = p7.getCurrentToken();
        if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_TRUE) {
            if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_FALSE) {
                if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                    if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) {
                        if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                            throw p8.mappingException(this._valueClass, v0);
                        } else {
                            String v1 = p7.getText().trim();
                            if (!"true".equals(v1)) {
                                if ((!"false".equals(v1)) && (v1.length() != 0)) {
                                    throw p8.weirdStringException(this._valueClass, "only \"true\" or \"false\" recognized");
                                } else {
                                    v2_0 = Boolean.FALSE.booleanValue();
                                }
                            }
                        }
                    } else {
                        if (p7.getNumberType() != com.flurry.org.codehaus.jackson.JsonParser$NumberType.INT) {
                            v2_0 = this._parseBooleanFromNumber(p7, p8);
                        } else {
                            if (p7.getIntValue() == 0) {
                                v2_0 = 0;
                            }
                        }
                    }
                } else {
                    v2_0 = 0;
                }
            } else {
                v2_0 = 0;
            }
        }
        return v2_0;
    }

    protected Byte _parseByte(com.flurry.org.codehaus.jackson.JsonParser p8, com.flurry.org.codehaus.jackson.map.DeserializationContext p9)
    {
        Byte v5_3;
        com.flurry.org.codehaus.jackson.JsonToken v2 = p8.getCurrentToken();
        if ((v2 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) && (v2 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT)) {
            if (v2 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                if (v2 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                    throw p9.mappingException(this._valueClass, v2);
                } else {
                    v5_3 = ((Byte) this.getNullValue());
                }
            } else {
                String v3 = p8.getText().trim();
                try {
                    if (v3.length() != 0) {
                        int v4 = com.flurry.org.codehaus.jackson.io.NumberInput.parseInt(v3);
                        if ((v4 >= -128) && (v4 <= 127)) {
                            v5_3 = Byte.valueOf(((byte) v4));
                        } else {
                            throw p9.weirdStringException(this._valueClass, "overflow, value can not be represented as 8-bit value");
                        }
                    } else {
                        v5_3 = ((Byte) this.getEmptyValue());
                    }
                } catch (IllegalArgumentException v0) {
                    throw p9.weirdStringException(this._valueClass, "not a valid Byte value");
                }
            }
        } else {
            v5_3 = Byte.valueOf(p8.getByteValue());
        }
        return v5_3;
    }

    protected java.util.Date _parseDate(com.flurry.org.codehaus.jackson.JsonParser p7, com.flurry.org.codehaus.jackson.map.DeserializationContext p8)
    {
        java.util.Date v3_4;
        com.flurry.org.codehaus.jackson.JsonToken v2 = p7.getCurrentToken();
        if (v2 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) {
            if (v2 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                if (v2 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                    throw p8.mappingException(this._valueClass, v2);
                } else {
                    try {
                        String v1 = p7.getText().trim();
                    } catch (IllegalArgumentException v0) {
                        throw p8.weirdStringException(this._valueClass, new StringBuilder().append("not a valid representation (error: ").append(v0.getMessage()).append(")").toString());
                    }
                    if (v1.length() != 0) {
                        v3_4 = p8.parseDate(v1);
                    } else {
                        v3_4 = ((java.util.Date) this.getEmptyValue());
                    }
                }
            } else {
                v3_4 = ((java.util.Date) this.getNullValue());
            }
        } else {
            v3_4 = new java.util.Date(p7.getLongValue());
        }
        return v3_4;
    }

    protected final Double _parseDouble(com.flurry.org.codehaus.jackson.JsonParser p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6)
    {
        Double v2_3;
        com.flurry.org.codehaus.jackson.JsonToken v0 = p5.getCurrentToken();
        if ((v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) && (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT)) {
            if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                    throw p6.mappingException(this._valueClass, v0);
                } else {
                    v2_3 = ((Double) this.getNullValue());
                }
            } else {
                String v1 = p5.getText().trim();
                if (v1.length() != 0) {
                    switch (v1.charAt(0)) {
                        case 45:
                            if ((!"-Infinity".equals(v1)) && (!"-INF".equals(v1))) {
                            } else {
                                v2_3 = Double.valueOf(-4503599627370496);
                            }
                            break;
                        case 73:
                            if ((!"Infinity".equals(v1)) && (!"INF".equals(v1))) {
                            } else {
                                v2_3 = Double.valueOf(9218868437227405312);
                            }
                            break;
                        case 78:
                            if (!"NaN".equals(v1)) {
                            } else {
                                v2_3 = Double.valueOf(9221120237041090560);
                            }
                            break;
                        default:
                            v2_3 = Double.valueOf(com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer.parseDouble(v1));
                    }
                    try {
                    } catch (Double v2) {
                        throw p6.weirdStringException(this._valueClass, "not a valid Double value");
                    }
                } else {
                    v2_3 = ((Double) this.getEmptyValue());
                }
            }
        } else {
            v2_3 = Double.valueOf(p5.getDoubleValue());
        }
        return v2_3;
    }

    protected final double _parseDoublePrimitive(com.flurry.org.codehaus.jackson.JsonParser p6, com.flurry.org.codehaus.jackson.map.DeserializationContext p7)
    {
        long v2_0 = 0;
        com.flurry.org.codehaus.jackson.JsonToken v0 = p6.getCurrentToken();
        if ((v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) && (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT)) {
            if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                    throw p7.mappingException(this._valueClass, v0);
                }
            } else {
                String v1 = p6.getText().trim();
                if (v1.length() != 0) {
                    switch (v1.charAt(0)) {
                        case 45:
                            if ((!"-Infinity".equals(v1)) && (!"-INF".equals(v1))) {
                            } else {
                                v2_0 = -4503599627370496;
                            }
                            break;
                        case 73:
                            if ((!"Infinity".equals(v1)) && (!"INF".equals(v1))) {
                            } else {
                                v2_0 = 9218868437227405312;
                            }
                            break;
                        case 78:
                            if (!"NaN".equals(v1)) {
                            } else {
                                v2_0 = 9221120237041090560;
                            }
                            break;
                        default:
                            v2_0 = com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer.parseDouble(v1);
                    }
                    try {
                    } catch (long v2) {
                        throw p7.weirdStringException(this._valueClass, "not a valid double value");
                    }
                }
            }
        } else {
            v2_0 = p6.getDoubleValue();
        }
        return v2_0;
    }

    protected final Float _parseFloat(com.flurry.org.codehaus.jackson.JsonParser p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6)
    {
        Float v2_3;
        com.flurry.org.codehaus.jackson.JsonToken v0 = p5.getCurrentToken();
        if ((v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) && (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT)) {
            if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                    throw p6.mappingException(this._valueClass, v0);
                } else {
                    v2_3 = ((Float) this.getNullValue());
                }
            } else {
                String v1 = p5.getText().trim();
                if (v1.length() != 0) {
                    switch (v1.charAt(0)) {
                        case 45:
                            if ((!"-Infinity".equals(v1)) && (!"-INF".equals(v1))) {
                            } else {
                                v2_3 = Float.valueOf(-8388608);
                            }
                            break;
                        case 73:
                            if ((!"Infinity".equals(v1)) && (!"INF".equals(v1))) {
                            } else {
                                v2_3 = Float.valueOf(2139095040);
                            }
                            break;
                        case 78:
                            if (!"NaN".equals(v1)) {
                            } else {
                                v2_3 = Float.valueOf(2143289344);
                            }
                            break;
                        default:
                            v2_3 = Float.valueOf(Float.parseFloat(v1));
                    }
                    try {
                    } catch (Float v2) {
                        throw p6.weirdStringException(this._valueClass, "not a valid Float value");
                    }
                } else {
                    v2_3 = ((Float) this.getEmptyValue());
                }
            }
        } else {
            v2_3 = Float.valueOf(p5.getFloatValue());
        }
        return v2_3;
    }

    protected final float _parseFloatPrimitive(com.flurry.org.codehaus.jackson.JsonParser p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6)
    {
        int v2_0 = 0;
        com.flurry.org.codehaus.jackson.JsonToken v0 = p5.getCurrentToken();
        if ((v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) && (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT)) {
            if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                    throw p6.mappingException(this._valueClass, v0);
                }
            } else {
                String v1 = p5.getText().trim();
                if (v1.length() != 0) {
                    switch (v1.charAt(0)) {
                        case 45:
                            if ((!"-Infinity".equals(v1)) && (!"-INF".equals(v1))) {
                            } else {
                                v2_0 = -8388608;
                            }
                            break;
                        case 73:
                            if ((!"Infinity".equals(v1)) && (!"INF".equals(v1))) {
                            } else {
                                v2_0 = 2139095040;
                            }
                            break;
                        case 78:
                            if (!"NaN".equals(v1)) {
                            } else {
                                v2_0 = 2143289344;
                            }
                            break;
                        default:
                            v2_0 = Float.parseFloat(v1);
                    }
                    try {
                    } catch (int v2) {
                        throw p6.weirdStringException(this._valueClass, "not a valid float value");
                    }
                }
            }
        } else {
            v2_0 = p5.getFloatValue();
        }
        return v2_0;
    }

    protected final int _parseIntPrimitive(com.flurry.org.codehaus.jackson.JsonParser p10, com.flurry.org.codehaus.jackson.map.DeserializationContext p11)
    {
        int v6_0 = 0;
        com.flurry.org.codehaus.jackson.JsonToken v4 = p10.getCurrentToken();
        if ((v4 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) && (v4 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT)) {
            if (v4 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                if (v4 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                    throw p11.mappingException(this._valueClass, v4);
                }
            } else {
                String v5 = p10.getText().trim();
                try {
                    int v3 = v5.length();
                } catch (IllegalArgumentException v0) {
                    throw p11.weirdStringException(this._valueClass, "not a valid int value");
                }
                if (v3 <= 9) {
                    if (v3 != 0) {
                        v6_0 = com.flurry.org.codehaus.jackson.io.NumberInput.parseInt(v5);
                    }
                } else {
                    long v1 = Long.parseLong(v5);
                    if ((v1 >= -2147483648) && (v1 <= 2147483647)) {
                        v6_0 = ((int) v1);
                    } else {
                        throw p11.weirdStringException(this._valueClass, new StringBuilder().append("Overflow: numeric value (").append(v5).append(") out of range of int (").append(-2147483648).append(" - ").append(2147483647).append(")").toString());
                    }
                }
            }
        } else {
            v6_0 = p10.getIntValue();
        }
        return v6_0;
    }

    protected final Integer _parseInteger(com.flurry.org.codehaus.jackson.JsonParser p10, com.flurry.org.codehaus.jackson.map.DeserializationContext p11)
    {
        Integer v6_3;
        com.flurry.org.codehaus.jackson.JsonToken v4 = p10.getCurrentToken();
        if ((v4 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) && (v4 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT)) {
            if (v4 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                if (v4 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                    throw p11.mappingException(this._valueClass, v4);
                } else {
                    v6_3 = ((Integer) this.getNullValue());
                }
            } else {
                String v5 = p10.getText().trim();
                try {
                    int v3 = v5.length();
                } catch (IllegalArgumentException v0) {
                    throw p11.weirdStringException(this._valueClass, "not a valid Integer value");
                }
                if (v3 <= 9) {
                    if (v3 != 0) {
                        v6_3 = Integer.valueOf(com.flurry.org.codehaus.jackson.io.NumberInput.parseInt(v5));
                    } else {
                        v6_3 = ((Integer) this.getEmptyValue());
                    }
                } else {
                    long v1 = Long.parseLong(v5);
                    if ((v1 >= -2147483648) && (v1 <= 2147483647)) {
                        v6_3 = Integer.valueOf(((int) v1));
                    } else {
                        throw p11.weirdStringException(this._valueClass, new StringBuilder().append("Overflow: numeric value (").append(v5).append(") out of range of Integer (").append(-2147483648).append(" - ").append(2147483647).append(")").toString());
                    }
                }
            }
        } else {
            v6_3 = Integer.valueOf(p10.getIntValue());
        }
        return v6_3;
    }

    protected final Long _parseLong(com.flurry.org.codehaus.jackson.JsonParser p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6)
    {
        com.flurry.org.codehaus.jackson.map.JsonMappingException v2_3;
        com.flurry.org.codehaus.jackson.JsonToken v0 = p5.getCurrentToken();
        if ((v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) && (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT)) {
            if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                    throw p6.mappingException(this._valueClass, v0);
                } else {
                    v2_3 = ((Long) this.getNullValue());
                }
            } else {
                String v1 = p5.getText().trim();
                if (v1.length() != 0) {
                    try {
                        v2_3 = Long.valueOf(com.flurry.org.codehaus.jackson.io.NumberInput.parseLong(v1));
                    } catch (com.flurry.org.codehaus.jackson.map.JsonMappingException v2) {
                        throw p6.weirdStringException(this._valueClass, "not a valid Long value");
                    }
                } else {
                    v2_3 = ((Long) this.getEmptyValue());
                }
            }
        } else {
            v2_3 = Long.valueOf(p5.getLongValue());
        }
        return v2_3;
    }

    protected final long _parseLongPrimitive(com.flurry.org.codehaus.jackson.JsonParser p6, com.flurry.org.codehaus.jackson.map.DeserializationContext p7)
    {
        com.flurry.org.codehaus.jackson.map.JsonMappingException v2_0 = 0;
        com.flurry.org.codehaus.jackson.JsonToken v0 = p6.getCurrentToken();
        if ((v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) && (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT)) {
            if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                if (v0 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                    throw p7.mappingException(this._valueClass, v0);
                }
            } else {
                String v1 = p6.getText().trim();
                if (v1.length() != 0) {
                    try {
                        v2_0 = com.flurry.org.codehaus.jackson.io.NumberInput.parseLong(v1);
                    } catch (com.flurry.org.codehaus.jackson.map.JsonMappingException v2) {
                        throw p7.weirdStringException(this._valueClass, "not a valid long value");
                    }
                }
            }
        } else {
            v2_0 = p6.getLongValue();
        }
        return v2_0;
    }

    protected Short _parseShort(com.flurry.org.codehaus.jackson.JsonParser p8, com.flurry.org.codehaus.jackson.map.DeserializationContext p9)
    {
        Short v5_3;
        com.flurry.org.codehaus.jackson.JsonToken v2 = p8.getCurrentToken();
        if ((v2 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) && (v2 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT)) {
            if (v2 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING) {
                if (v2 != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
                    throw p9.mappingException(this._valueClass, v2);
                } else {
                    v5_3 = ((Short) this.getNullValue());
                }
            } else {
                String v3 = p8.getText().trim();
                try {
                    if (v3.length() != 0) {
                        int v4 = com.flurry.org.codehaus.jackson.io.NumberInput.parseInt(v3);
                        if ((v4 >= -32768) && (v4 <= 32767)) {
                            v5_3 = Short.valueOf(((short) v4));
                        } else {
                            throw p9.weirdStringException(this._valueClass, "overflow, value can not be represented as 16-bit value");
                        }
                    } else {
                        v5_3 = ((Short) this.getEmptyValue());
                    }
                } catch (IllegalArgumentException v0) {
                    throw p9.weirdStringException(this._valueClass, "not a valid Short value");
                }
            }
        } else {
            v5_3 = Short.valueOf(p8.getShortValue());
        }
        return v5_3;
    }

    protected final short _parseShortPrimitive(com.flurry.org.codehaus.jackson.JsonParser p4, com.flurry.org.codehaus.jackson.map.DeserializationContext p5)
    {
        int v0 = this._parseIntPrimitive(p4, p5);
        if ((v0 >= -32768) && (v0 <= 32767)) {
            return ((short) v0);
        } else {
            throw p5.weirdStringException(this._valueClass, "overflow, value can not be represented as 16-bit value");
        }
    }

    public Object deserializeWithType(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4)
    {
        return p4.deserializeTypedFromAny(p2, p3);
    }

    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer findDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p2, com.flurry.org.codehaus.jackson.map.DeserializerProvider p3, com.flurry.org.codehaus.jackson.type.JavaType p4, com.flurry.org.codehaus.jackson.map.BeanProperty p5)
    {
        return p3.findValueDeserializer(p2, p4, p5);
    }

    public Class getValueClass()
    {
        return this._valueClass;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType getValueType()
    {
        return 0;
    }

    protected void handleUnknownProperty(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, Object p4, String p5)
    {
        if (p4 == null) {
            p4 = this.getValueClass();
        }
        if (!p3.handleUnknownProperty(p2, this, p4, p5)) {
            this.reportUnknownProperty(p3, p4, p5);
            p2.skipChildren();
        }
        return;
    }

    protected boolean isDefaultSerializer(com.flurry.org.codehaus.jackson.map.JsonDeserializer p3)
    {
        if ((p3 == null) || (p3.getClass().getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JacksonStdImpl) == null)) {
            int v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    protected void reportUnknownProperty(com.flurry.org.codehaus.jackson.map.DeserializationContext p2, Object p3, String p4)
    {
        if (!p2.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.FAIL_ON_UNKNOWN_PROPERTIES)) {
            return;
        } else {
            throw p2.unknownFieldException(p3, p4);
        }
    }
}
