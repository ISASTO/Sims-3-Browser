package com.flurry.org.codehaus.jackson.annotate;
public final enum class JsonAutoDetect$Visibility extends java.lang.Enum {
    private static final synthetic com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility[] $VALUES;
    public static final enum com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility ANY;
    public static final enum com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility DEFAULT;
    public static final enum com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility NONE;
    public static final enum com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility NON_PRIVATE;
    public static final enum com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility PROTECTED_AND_PUBLIC;
    public static final enum com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility PUBLIC_ONLY;

    static JsonAutoDetect$Visibility()
    {
        com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.ANY = new com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility("ANY", 0);
        com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.NON_PRIVATE = new com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility("NON_PRIVATE", 1);
        com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.PROTECTED_AND_PUBLIC = new com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility("PROTECTED_AND_PUBLIC", 2);
        com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.PUBLIC_ONLY = new com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility("PUBLIC_ONLY", 3);
        com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.NONE = new com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility("NONE", 4);
        com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.DEFAULT = new com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility("DEFAULT", 5);
        com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility[] v0_10 = new com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility[6];
        v0_10[0] = com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.ANY;
        v0_10[1] = com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.NON_PRIVATE;
        v0_10[2] = com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.PROTECTED_AND_PUBLIC;
        v0_10[3] = com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.PUBLIC_ONLY;
        v0_10[4] = com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.NONE;
        v0_10[5] = com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.DEFAULT;
        com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.$VALUES = v0_10;
        return;
    }

    private JsonAutoDetect$Visibility(String p1, int p2)
    {
        super(p1, p2);
        return;
    }

    public static com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility valueOf(String p1)
    {
        return ((com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility) Enum.valueOf(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility, p1));
    }

    public static com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility[] values()
    {
        return ((com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility[]) com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.$VALUES.clone());
    }

    public boolean isVisible(reflect.Member p5)
    {
        boolean v0_0 = 1;
        switch (com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$1.$SwitchMap$org$codehaus$jackson$annotate$JsonAutoDetect$Visibility[this.ordinal()]) {
            case 1:
                break;
            case 2:
                v0_0 = 0;
                break;
            case 3:
                if (!reflect.Modifier.isPrivate(p5.getModifiers())) {
                } else {
                    v0_0 = 0;
                }
                break;
            case 4:
                if (reflect.Modifier.isProtected(p5.getModifiers())) {
                } else {
                    v0_0 = reflect.Modifier.isPublic(p5.getModifiers());
                }
                break;
            default:
                v0_0 = 0;
        }
        return v0_0;
    }
}
