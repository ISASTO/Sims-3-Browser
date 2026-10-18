package com.flurry.android;
public class CrcMessageDigest extends java.security.MessageDigest {
    private java.util.zip.CRC32 a;

    public CrcMessageDigest()
    {
        super("CRC");
        super.a = new java.util.zip.CRC32();
        return;
    }

    protected byte[] engineDigest()
    {
        byte v0_1 = this.a.getValue();
        byte[] v2_1 = new byte[4];
        v2_1[0] = ((byte) ((int) ((-16777216 & v0_1) >> 24)));
        v2_1[1] = ((byte) ((int) ((16711680 & v0_1) >> 16)));
        v2_1[2] = ((byte) ((int) ((65280 & v0_1) >> 8)));
        v2_1[3] = ((byte) ((int) (v0_1 & 255)));
        return v2_1;
    }

    protected void engineReset()
    {
        this.a.reset();
        return;
    }

    protected void engineUpdate(byte p2)
    {
        this.a.update(p2);
        return;
    }

    protected void engineUpdate(byte[] p2, int p3, int p4)
    {
        this.a.update(p2, p3, p4);
        return;
    }

    public int getChecksum()
    {
        return java.nio.ByteBuffer.wrap(this.engineDigest()).getInt();
    }

    public byte[] getDigest()
    {
        return this.engineDigest();
    }
}
