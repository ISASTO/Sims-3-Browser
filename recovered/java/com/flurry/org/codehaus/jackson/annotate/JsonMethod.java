package com.flurry.org.codehaus.jackson.annotate;
public final enum class JsonMethod extends java.lang.Enum {
    private static final synthetic com.flurry.org.codehaus.jackson.annotate.JsonMethod[] $VALUES;
    public static final enum com.flurry.org.codehaus.jackson.annotate.JsonMethod ALL;
    public static final enum com.flurry.org.codehaus.jackson.annotate.JsonMethod CREATOR;
    public static final enum com.flurry.org.codehaus.jackson.annotate.JsonMethod FIELD;
    public static final enum com.flurry.org.codehaus.jackson.annotate.JsonMethod GETTER;
    public static final enum com.flurry.org.codehaus.jackson.annotate.JsonMethod IS_GETTER;
    public static final enum com.flurry.org.codehaus.jackson.annotate.JsonMethod NONE;
    public static final enum com.flurry.org.codehaus.jackson.annotate.JsonMethod SETTER;

    static JsonMethod()
    {
        com.flurry.org.codehaus.jackson.annotate.JsonMethod.GETTER = new com.flurry.org.codehaus.jackson.annotate.JsonMethod("GETTER", 0);
        com.flurry.org.codehaus.jackson.annotate.JsonMethod.SETTER = new com.flurry.org.codehaus.jackson.annotate.JsonMethod("SETTER", 1);
        com.flurry.org.codehaus.jackson.annotate.JsonMethod.CREATOR = new com.flurry.org.codehaus.jackson.annotate.JsonMethod("CREATOR", 2);
        com.flurry.org.codehaus.jackson.annotate.JsonMethod.FIELD = new com.flurry.org.codehaus.jackson.annotate.JsonMethod("FIELD", 3);
        com.flurry.org.codehaus.jackson.annotate.JsonMethod.IS_GETTER = new com.flurry.org.codehaus.jackson.annotate.JsonMethod("IS_GETTER", 4);
        com.flurry.org.codehaus.jackson.annotate.JsonMethod.NONE = new com.flurry.org.codehaus.jackson.annotate.JsonMethod("NONE", 5);
        com.flurry.org.codehaus.jackson.annotate.JsonMethod.ALL = new com.flurry.org.codehaus.jackson.annotate.JsonMethod("ALL", 6);
        com.flurry.org.codehaus.jackson.annotate.JsonMethod[] v0_12 = new com.flurry.org.codehaus.jackson.annotate.JsonMethod[7];
        v0_12[0] = com.flurry.org.codehaus.jackson.annotate.JsonMethod.GETTER;
        v0_12[1] = com.flurry.org.codehaus.jackson.annotate.JsonMethod.SETTER;
        v0_12[2] = com.flurry.org.codehaus.jackson.annotate.JsonMethod.CREATOR;
        v0_12[3] = com.flurry.org.codehaus.jackson.annotate.JsonMethod.FIELD;
        v0_12[4] = com.flurry.org.codehaus.jackson.annotate.JsonMethod.IS_GETTER;
        v0_12[5] = com.flurry.org.codehaus.jackson.annotate.JsonMethod.NONE;
        v0_12[6] = com.flurry.org.codehaus.jackson.annotate.JsonMethod.ALL;
        com.flurry.org.codehaus.jackson.annotate.JsonMethod.$VALUES = v0_12;
        return;
    }

    private JsonMethod(String p1, int p2)
    {
        super(p1, p2);
        return;
    }

    public static com.flurry.org.codehaus.jackson.annotate.JsonMethod valueOf(String p1)
    {
        return ((com.flurry.org.codehaus.jackson.annotate.JsonMethod) Enum.valueOf(com.flurry.org.codehaus.jackson.annotate.JsonMethod, p1));
    }

    public static com.flurry.org.codehaus.jackson.annotate.JsonMethod[] values()
    {
        return ((com.flurry.org.codehaus.jackson.annotate.JsonMethod[]) com.flurry.org.codehaus.jackson.annotate.JsonMethod.$VALUES.clone());
    }

    public boolean creatorEnabled()
    {
        if ((this != com.flurry.org.codehaus.jackson.annotate.JsonMethod.CREATOR) && (this != com.flurry.org.codehaus.jackson.annotate.JsonMethod.ALL)) {
            int v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public boolean fieldEnabled()
    {
        if ((this != com.flurry.org.codehaus.jackson.annotate.JsonMethod.FIELD) && (this != com.flurry.org.codehaus.jackson.annotate.JsonMethod.ALL)) {
            int v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public boolean getterEnabled()
    {
        if ((this != com.flurry.org.codehaus.jackson.annotate.JsonMethod.GETTER) && (this != com.flurry.org.codehaus.jackson.annotate.JsonMethod.ALL)) {
            int v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public boolean isGetterEnabled()
    {
        if ((this != com.flurry.org.codehaus.jackson.annotate.JsonMethod.IS_GETTER) && (this != com.flurry.org.codehaus.jackson.annotate.JsonMethod.ALL)) {
            int v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public boolean setterEnabled()
    {
        if ((this != com.flurry.org.codehaus.jackson.annotate.JsonMethod.SETTER) && (this != com.flurry.org.codehaus.jackson.annotate.JsonMethod.ALL)) {
            int v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }
}
