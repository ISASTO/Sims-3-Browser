package com.flurry.org.codehaus.jackson.util;
public final enum class BufferRecycler$CharBufferType extends java.lang.Enum {
    private static final synthetic com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType[] $VALUES;
    public static final enum com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType CONCAT_BUFFER;
    public static final enum com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType NAME_COPY_BUFFER;
    public static final enum com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType TEXT_BUFFER;
    public static final enum com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType TOKEN_BUFFER;
    private final int size;

    static BufferRecycler$CharBufferType()
    {
        com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType.TOKEN_BUFFER = new com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType("TOKEN_BUFFER", 0, 2000);
        com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType.CONCAT_BUFFER = new com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType("CONCAT_BUFFER", 1, 2000);
        com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType.TEXT_BUFFER = new com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType("TEXT_BUFFER", 2, 200);
        com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType.NAME_COPY_BUFFER = new com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType("NAME_COPY_BUFFER", 3, 200);
        com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType[] v0_7 = new com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType[4];
        v0_7[0] = com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType.TOKEN_BUFFER;
        v0_7[1] = com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType.CONCAT_BUFFER;
        v0_7[2] = com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType.TEXT_BUFFER;
        v0_7[3] = com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType.NAME_COPY_BUFFER;
        com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType.$VALUES = v0_7;
        return;
    }

    private BufferRecycler$CharBufferType(String p1, int p2, int p3)
    {
        super(p1, p2);
        super.size = p3;
        return;
    }

    static synthetic int access$100(com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType p1)
    {
        return p1.size;
    }

    public static com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType valueOf(String p1)
    {
        return ((com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType) Enum.valueOf(com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType, p1));
    }

    public static com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType[] values()
    {
        return ((com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType[]) com.flurry.org.codehaus.jackson.util.BufferRecycler$CharBufferType.$VALUES.clone());
    }
}
