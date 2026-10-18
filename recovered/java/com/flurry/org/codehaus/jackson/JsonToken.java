package com.flurry.org.codehaus.jackson;
public final enum class JsonToken extends java.lang.Enum {
    private static final synthetic com.flurry.org.codehaus.jackson.JsonToken[] $VALUES;
    public static final enum com.flurry.org.codehaus.jackson.JsonToken END_ARRAY;
    public static final enum com.flurry.org.codehaus.jackson.JsonToken END_OBJECT;
    public static final enum com.flurry.org.codehaus.jackson.JsonToken FIELD_NAME;
    public static final enum com.flurry.org.codehaus.jackson.JsonToken NOT_AVAILABLE;
    public static final enum com.flurry.org.codehaus.jackson.JsonToken START_ARRAY;
    public static final enum com.flurry.org.codehaus.jackson.JsonToken START_OBJECT;
    public static final enum com.flurry.org.codehaus.jackson.JsonToken VALUE_EMBEDDED_OBJECT;
    public static final enum com.flurry.org.codehaus.jackson.JsonToken VALUE_FALSE;
    public static final enum com.flurry.org.codehaus.jackson.JsonToken VALUE_NULL;
    public static final enum com.flurry.org.codehaus.jackson.JsonToken VALUE_NUMBER_FLOAT;
    public static final enum com.flurry.org.codehaus.jackson.JsonToken VALUE_NUMBER_INT;
    public static final enum com.flurry.org.codehaus.jackson.JsonToken VALUE_STRING;
    public static final enum com.flurry.org.codehaus.jackson.JsonToken VALUE_TRUE;
    final String _serialized;
    final byte[] _serializedBytes;
    final char[] _serializedChars;

    static JsonToken()
    {
        com.flurry.org.codehaus.jackson.JsonToken.NOT_AVAILABLE = new com.flurry.org.codehaus.jackson.JsonToken("NOT_AVAILABLE", 0, 0);
        com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT = new com.flurry.org.codehaus.jackson.JsonToken("START_OBJECT", 1, "{");
        com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT = new com.flurry.org.codehaus.jackson.JsonToken("END_OBJECT", 2, "}");
        com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY = new com.flurry.org.codehaus.jackson.JsonToken("START_ARRAY", 3, "[");
        com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY = new com.flurry.org.codehaus.jackson.JsonToken("END_ARRAY", 4, "]");
        com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME = new com.flurry.org.codehaus.jackson.JsonToken("FIELD_NAME", 5, 0);
        com.flurry.org.codehaus.jackson.JsonToken.VALUE_EMBEDDED_OBJECT = new com.flurry.org.codehaus.jackson.JsonToken("VALUE_EMBEDDED_OBJECT", 6, 0);
        com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING = new com.flurry.org.codehaus.jackson.JsonToken("VALUE_STRING", 7, 0);
        com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT = new com.flurry.org.codehaus.jackson.JsonToken("VALUE_NUMBER_INT", 8, 0);
        com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT = new com.flurry.org.codehaus.jackson.JsonToken("VALUE_NUMBER_FLOAT", 9, 0);
        com.flurry.org.codehaus.jackson.JsonToken.VALUE_TRUE = new com.flurry.org.codehaus.jackson.JsonToken("VALUE_TRUE", 10, "true");
        com.flurry.org.codehaus.jackson.JsonToken.VALUE_FALSE = new com.flurry.org.codehaus.jackson.JsonToken("VALUE_FALSE", 11, "false");
        com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL = new com.flurry.org.codehaus.jackson.JsonToken("VALUE_NULL", 12, "null");
        com.flurry.org.codehaus.jackson.JsonToken[] v0_26 = new com.flurry.org.codehaus.jackson.JsonToken[13];
        v0_26[0] = com.flurry.org.codehaus.jackson.JsonToken.NOT_AVAILABLE;
        v0_26[1] = com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT;
        v0_26[2] = com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT;
        v0_26[3] = com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY;
        v0_26[4] = com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY;
        v0_26[5] = com.flurry.org.codehaus.jackson.JsonToken.FIELD_NAME;
        v0_26[6] = com.flurry.org.codehaus.jackson.JsonToken.VALUE_EMBEDDED_OBJECT;
        v0_26[7] = com.flurry.org.codehaus.jackson.JsonToken.VALUE_STRING;
        v0_26[8] = com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT;
        v0_26[9] = com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT;
        v0_26[10] = com.flurry.org.codehaus.jackson.JsonToken.VALUE_TRUE;
        v0_26[11] = com.flurry.org.codehaus.jackson.JsonToken.VALUE_FALSE;
        v0_26[12] = com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL;
        com.flurry.org.codehaus.jackson.JsonToken.$VALUES = v0_26;
        return;
    }

    private JsonToken(String p5, int p6, String p7)
    {
        super(p5, p6);
        if (p7 != null) {
            super._serialized = p7;
            super._serializedChars = p7.toCharArray();
            int v1 = super._serializedChars.length;
            byte[] v2_4 = new byte[v1];
            super._serializedBytes = v2_4;
            int v0 = 0;
            while (v0 < v1) {
                super._serializedBytes[v0] = ((byte) super._serializedChars[v0]);
                v0++;
            }
        } else {
            super._serialized = 0;
            super._serializedChars = 0;
            super._serializedBytes = 0;
        }
        return;
    }

    public static com.flurry.org.codehaus.jackson.JsonToken valueOf(String p1)
    {
        return ((com.flurry.org.codehaus.jackson.JsonToken) Enum.valueOf(com.flurry.org.codehaus.jackson.JsonToken, p1));
    }

    public static com.flurry.org.codehaus.jackson.JsonToken[] values()
    {
        return ((com.flurry.org.codehaus.jackson.JsonToken[]) com.flurry.org.codehaus.jackson.JsonToken.$VALUES.clone());
    }

    public byte[] asByteArray()
    {
        return this._serializedBytes;
    }

    public char[] asCharArray()
    {
        return this._serializedChars;
    }

    public String asString()
    {
        return this._serialized;
    }

    public boolean isNumeric()
    {
        if ((this != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_INT) && (this != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NUMBER_FLOAT)) {
            int v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public boolean isScalarValue()
    {
        int v0_1;
        if (this.ordinal() < com.flurry.org.codehaus.jackson.JsonToken.VALUE_EMBEDDED_OBJECT.ordinal()) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }
}
