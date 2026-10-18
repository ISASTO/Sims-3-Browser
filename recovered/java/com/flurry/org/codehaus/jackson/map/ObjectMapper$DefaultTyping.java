package com.flurry.org.codehaus.jackson.map;
public final enum class ObjectMapper$DefaultTyping extends java.lang.Enum {
    private static final synthetic com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping[] $VALUES;
    public static final enum com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping JAVA_LANG_OBJECT;
    public static final enum com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping NON_CONCRETE_AND_ARRAYS;
    public static final enum com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping NON_FINAL;
    public static final enum com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping OBJECT_AND_NON_CONCRETE;

    static ObjectMapper$DefaultTyping()
    {
        com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping.JAVA_LANG_OBJECT = new com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping("JAVA_LANG_OBJECT", 0);
        com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping.OBJECT_AND_NON_CONCRETE = new com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping("OBJECT_AND_NON_CONCRETE", 1);
        com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping.NON_CONCRETE_AND_ARRAYS = new com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping("NON_CONCRETE_AND_ARRAYS", 2);
        com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping.NON_FINAL = new com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping("NON_FINAL", 3);
        com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping[] v0_6 = new com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping[4];
        v0_6[0] = com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping.JAVA_LANG_OBJECT;
        v0_6[1] = com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping.OBJECT_AND_NON_CONCRETE;
        v0_6[2] = com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping.NON_CONCRETE_AND_ARRAYS;
        v0_6[3] = com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping.NON_FINAL;
        com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping.$VALUES = v0_6;
        return;
    }

    private ObjectMapper$DefaultTyping(String p1, int p2)
    {
        super(p1, p2);
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping valueOf(String p1)
    {
        return ((com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping) Enum.valueOf(com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping, p1));
    }

    public static com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping[] values()
    {
        return ((com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping[]) com.flurry.org.codehaus.jackson.map.ObjectMapper$DefaultTyping.$VALUES.clone());
    }
}
