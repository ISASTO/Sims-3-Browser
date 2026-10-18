package com.flurry.org.codehaus.jackson.map;
public final enum class DeserializationConfig$Feature extends java.lang.Enum implements com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature {
    private static final synthetic com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature[] $VALUES;
    public static final enum com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature ACCEPT_EMPTY_STRING_AS_NULL_OBJECT;
    public static final enum com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature ACCEPT_SINGLE_VALUE_AS_ARRAY;
    public static final enum com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature AUTO_DETECT_CREATORS;
    public static final enum com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature AUTO_DETECT_FIELDS;
    public static final enum com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature AUTO_DETECT_SETTERS;
    public static final enum com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature CAN_OVERRIDE_ACCESS_MODIFIERS;
    public static final enum com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature FAIL_ON_NULL_FOR_PRIMITIVES;
    public static final enum com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature FAIL_ON_NUMBERS_FOR_ENUMS;
    public static final enum com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature FAIL_ON_UNKNOWN_PROPERTIES;
    public static final enum com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature READ_ENUMS_USING_TO_STRING;
    public static final enum com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature UNWRAP_ROOT_VALUE;
    public static final enum com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature USE_ANNOTATIONS;
    public static final enum com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature USE_BIG_DECIMAL_FOR_FLOATS;
    public static final enum com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature USE_BIG_INTEGER_FOR_INTS;
    public static final enum com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature USE_GETTERS_AS_SETTERS;
    public static final enum com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature USE_JAVA_ARRAY_FOR_JSON_ARRAY;
    public static final enum com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature WRAP_EXCEPTIONS;
    final boolean _defaultState;

    static DeserializationConfig$Feature()
    {
        com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_ANNOTATIONS = new com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature("USE_ANNOTATIONS", 0, 1);
        com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.AUTO_DETECT_SETTERS = new com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature("AUTO_DETECT_SETTERS", 1, 1);
        com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.AUTO_DETECT_CREATORS = new com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature("AUTO_DETECT_CREATORS", 2, 1);
        com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.AUTO_DETECT_FIELDS = new com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature("AUTO_DETECT_FIELDS", 3, 1);
        com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_GETTERS_AS_SETTERS = new com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature("USE_GETTERS_AS_SETTERS", 4, 1);
        com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.CAN_OVERRIDE_ACCESS_MODIFIERS = new com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature("CAN_OVERRIDE_ACCESS_MODIFIERS", 5, 1);
        com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_BIG_DECIMAL_FOR_FLOATS = new com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature("USE_BIG_DECIMAL_FOR_FLOATS", 6, 0);
        com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_BIG_INTEGER_FOR_INTS = new com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature("USE_BIG_INTEGER_FOR_INTS", 7, 0);
        com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_JAVA_ARRAY_FOR_JSON_ARRAY = new com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature("USE_JAVA_ARRAY_FOR_JSON_ARRAY", 8, 0);
        com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.READ_ENUMS_USING_TO_STRING = new com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature("READ_ENUMS_USING_TO_STRING", 9, 0);
        com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.FAIL_ON_UNKNOWN_PROPERTIES = new com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature("FAIL_ON_UNKNOWN_PROPERTIES", 10, 1);
        com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.FAIL_ON_NULL_FOR_PRIMITIVES = new com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature("FAIL_ON_NULL_FOR_PRIMITIVES", 11, 0);
        com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.FAIL_ON_NUMBERS_FOR_ENUMS = new com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature("FAIL_ON_NUMBERS_FOR_ENUMS", 12, 0);
        com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.WRAP_EXCEPTIONS = new com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature("WRAP_EXCEPTIONS", 13, 1);
        com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.ACCEPT_SINGLE_VALUE_AS_ARRAY = new com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature("ACCEPT_SINGLE_VALUE_AS_ARRAY", 14, 0);
        com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.UNWRAP_ROOT_VALUE = new com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature("UNWRAP_ROOT_VALUE", 15, 0);
        com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.ACCEPT_EMPTY_STRING_AS_NULL_OBJECT = new com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature("ACCEPT_EMPTY_STRING_AS_NULL_OBJECT", 16, 0);
        com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature[] v0_34 = new com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature[17];
        v0_34[0] = com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_ANNOTATIONS;
        v0_34[1] = com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.AUTO_DETECT_SETTERS;
        v0_34[2] = com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.AUTO_DETECT_CREATORS;
        v0_34[3] = com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.AUTO_DETECT_FIELDS;
        v0_34[4] = com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_GETTERS_AS_SETTERS;
        v0_34[5] = com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.CAN_OVERRIDE_ACCESS_MODIFIERS;
        v0_34[6] = com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_BIG_DECIMAL_FOR_FLOATS;
        v0_34[7] = com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_BIG_INTEGER_FOR_INTS;
        v0_34[8] = com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_JAVA_ARRAY_FOR_JSON_ARRAY;
        v0_34[9] = com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.READ_ENUMS_USING_TO_STRING;
        v0_34[10] = com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.FAIL_ON_UNKNOWN_PROPERTIES;
        v0_34[11] = com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.FAIL_ON_NULL_FOR_PRIMITIVES;
        v0_34[12] = com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.FAIL_ON_NUMBERS_FOR_ENUMS;
        v0_34[13] = com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.WRAP_EXCEPTIONS;
        v0_34[14] = com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.ACCEPT_SINGLE_VALUE_AS_ARRAY;
        v0_34[15] = com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.UNWRAP_ROOT_VALUE;
        v0_34[16] = com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.ACCEPT_EMPTY_STRING_AS_NULL_OBJECT;
        com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.$VALUES = v0_34;
        return;
    }

    private DeserializationConfig$Feature(String p1, int p2, boolean p3)
    {
        super(p1, p2);
        super._defaultState = p3;
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature valueOf(String p1)
    {
        return ((com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature) Enum.valueOf(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature, p1));
    }

    public static com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature[] values()
    {
        return ((com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature[]) com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.$VALUES.clone());
    }

    public boolean enabledByDefault()
    {
        return this._defaultState;
    }

    public int getMask()
    {
        return (1 << this.ordinal());
    }
}
