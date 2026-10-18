package com.flurry.org.codehaus.jackson.map;
public final enum class SerializationConfig$Feature extends java.lang.Enum implements com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature {
    private static final synthetic com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature[] $VALUES;
    public static final enum com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature AUTO_DETECT_FIELDS;
    public static final enum com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature AUTO_DETECT_GETTERS;
    public static final enum com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature AUTO_DETECT_IS_GETTERS;
    public static final enum com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature CAN_OVERRIDE_ACCESS_MODIFIERS;
    public static final enum com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature CLOSE_CLOSEABLE;
    public static final enum com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature DEFAULT_VIEW_INCLUSION;
    public static final enum com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature FAIL_ON_EMPTY_BEANS;
    public static final enum com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature FLUSH_AFTER_WRITE_VALUE;
    public static final enum com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature INDENT_OUTPUT;
    public static final enum com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature REQUIRE_SETTERS_FOR_GETTERS;
    public static final enum com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature SORT_PROPERTIES_ALPHABETICALLY;
    public static final enum com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature USE_ANNOTATIONS;
    public static final enum com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature USE_STATIC_TYPING;
    public static final enum com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature WRAP_EXCEPTIONS;
    public static final enum com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature WRAP_ROOT_VALUE;
    public static final enum com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature WRITE_CHAR_ARRAYS_AS_JSON_ARRAYS;
    public static final enum com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature WRITE_DATES_AS_TIMESTAMPS;
    public static final enum com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature WRITE_DATE_KEYS_AS_TIMESTAMPS;
    public static final enum com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature WRITE_EMPTY_JSON_ARRAYS;
    public static final enum com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature WRITE_ENUMS_USING_INDEX;
    public static final enum com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature WRITE_ENUMS_USING_TO_STRING;
    public static final enum com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature WRITE_NULL_MAP_VALUES;
    public static final enum com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature WRITE_NULL_PROPERTIES;
    final boolean _defaultState;

    static SerializationConfig$Feature()
    {
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.USE_ANNOTATIONS = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature("USE_ANNOTATIONS", 0, 1);
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.AUTO_DETECT_GETTERS = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature("AUTO_DETECT_GETTERS", 1, 1);
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.AUTO_DETECT_IS_GETTERS = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature("AUTO_DETECT_IS_GETTERS", 2, 1);
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.AUTO_DETECT_FIELDS = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature("AUTO_DETECT_FIELDS", 3, 1);
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.CAN_OVERRIDE_ACCESS_MODIFIERS = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature("CAN_OVERRIDE_ACCESS_MODIFIERS", 4, 1);
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.REQUIRE_SETTERS_FOR_GETTERS = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature("REQUIRE_SETTERS_FOR_GETTERS", 5, 0);
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_NULL_PROPERTIES = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature("WRITE_NULL_PROPERTIES", 6, 1);
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.USE_STATIC_TYPING = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature("USE_STATIC_TYPING", 7, 0);
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.DEFAULT_VIEW_INCLUSION = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature("DEFAULT_VIEW_INCLUSION", 8, 1);
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRAP_ROOT_VALUE = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature("WRAP_ROOT_VALUE", 9, 0);
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.INDENT_OUTPUT = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature("INDENT_OUTPUT", 10, 0);
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.SORT_PROPERTIES_ALPHABETICALLY = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature("SORT_PROPERTIES_ALPHABETICALLY", 11, 0);
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.FAIL_ON_EMPTY_BEANS = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature("FAIL_ON_EMPTY_BEANS", 12, 1);
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRAP_EXCEPTIONS = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature("WRAP_EXCEPTIONS", 13, 1);
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.CLOSE_CLOSEABLE = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature("CLOSE_CLOSEABLE", 14, 0);
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.FLUSH_AFTER_WRITE_VALUE = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature("FLUSH_AFTER_WRITE_VALUE", 15, 1);
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_DATES_AS_TIMESTAMPS = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature("WRITE_DATES_AS_TIMESTAMPS", 16, 1);
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_DATE_KEYS_AS_TIMESTAMPS = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature("WRITE_DATE_KEYS_AS_TIMESTAMPS", 17, 0);
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_CHAR_ARRAYS_AS_JSON_ARRAYS = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature("WRITE_CHAR_ARRAYS_AS_JSON_ARRAYS", 18, 0);
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_ENUMS_USING_TO_STRING = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature("WRITE_ENUMS_USING_TO_STRING", 19, 0);
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_ENUMS_USING_INDEX = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature("WRITE_ENUMS_USING_INDEX", 20, 0);
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_NULL_MAP_VALUES = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature("WRITE_NULL_MAP_VALUES", 21, 1);
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_EMPTY_JSON_ARRAYS = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature("WRITE_EMPTY_JSON_ARRAYS", 22, 1);
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature[] v0_8 = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature[23];
        v0_8[0] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.USE_ANNOTATIONS;
        v0_8[1] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.AUTO_DETECT_GETTERS;
        v0_8[2] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.AUTO_DETECT_IS_GETTERS;
        v0_8[3] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.AUTO_DETECT_FIELDS;
        v0_8[4] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.CAN_OVERRIDE_ACCESS_MODIFIERS;
        v0_8[5] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.REQUIRE_SETTERS_FOR_GETTERS;
        v0_8[6] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_NULL_PROPERTIES;
        v0_8[7] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.USE_STATIC_TYPING;
        v0_8[8] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.DEFAULT_VIEW_INCLUSION;
        v0_8[9] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRAP_ROOT_VALUE;
        v0_8[10] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.INDENT_OUTPUT;
        v0_8[11] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.SORT_PROPERTIES_ALPHABETICALLY;
        v0_8[12] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.FAIL_ON_EMPTY_BEANS;
        v0_8[13] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRAP_EXCEPTIONS;
        v0_8[14] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.CLOSE_CLOSEABLE;
        v0_8[15] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.FLUSH_AFTER_WRITE_VALUE;
        v0_8[16] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_DATES_AS_TIMESTAMPS;
        v0_8[17] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_DATE_KEYS_AS_TIMESTAMPS;
        v0_8[18] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_CHAR_ARRAYS_AS_JSON_ARRAYS;
        v0_8[19] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_ENUMS_USING_TO_STRING;
        v0_8[20] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_ENUMS_USING_INDEX;
        v0_8[21] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_NULL_MAP_VALUES;
        v0_8[22] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_EMPTY_JSON_ARRAYS;
        com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.$VALUES = v0_8;
        return;
    }

    private SerializationConfig$Feature(String p1, int p2, boolean p3)
    {
        super(p1, p2);
        super._defaultState = p3;
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature valueOf(String p1)
    {
        return ((com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature) Enum.valueOf(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature, p1));
    }

    public static com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature[] values()
    {
        return ((com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature[]) com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.$VALUES.clone());
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
