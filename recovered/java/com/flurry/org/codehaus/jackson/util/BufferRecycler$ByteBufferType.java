package com.flurry.org.codehaus.jackson.util;
public final enum class BufferRecycler$ByteBufferType extends java.lang.Enum {
    private static final synthetic com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType[] $VALUES;
    public static final enum com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType READ_IO_BUFFER;
    public static final enum com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType WRITE_CONCAT_BUFFER;
    public static final enum com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType WRITE_ENCODING_BUFFER;
    private final int size;

    static BufferRecycler$ByteBufferType()
    {
        com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType.READ_IO_BUFFER = new com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType("READ_IO_BUFFER", 0, 4000);
        com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType.WRITE_ENCODING_BUFFER = new com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType("WRITE_ENCODING_BUFFER", 1, 4000);
        com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType.WRITE_CONCAT_BUFFER = new com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType("WRITE_CONCAT_BUFFER", 2, 2000);
        com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType[] v0_4 = new com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType[3];
        v0_4[0] = com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType.READ_IO_BUFFER;
        v0_4[1] = com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType.WRITE_ENCODING_BUFFER;
        v0_4[2] = com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType.WRITE_CONCAT_BUFFER;
        com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType.$VALUES = v0_4;
        return;
    }

    private BufferRecycler$ByteBufferType(String p1, int p2, int p3)
    {
        super(p1, p2);
        super.size = p3;
        return;
    }

    static synthetic int access$000(com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType p1)
    {
        return p1.size;
    }

    public static com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType valueOf(String p1)
    {
        return ((com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType) Enum.valueOf(com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType, p1));
    }

    public static com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType[] values()
    {
        return ((com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType[]) com.flurry.org.codehaus.jackson.util.BufferRecycler$ByteBufferType.$VALUES.clone());
    }
}
