package com.flurry.org.apache.avro.util;
public class Utf8 implements java.lang.CharSequence, java.lang.Comparable {
    private static final byte[] EMPTY;
    private byte[] bytes;
    private int length;
    private String string;

    static Utf8()
    {
        byte[] v0_1 = new byte[0];
        com.flurry.org.apache.avro.util.Utf8.EMPTY = v0_1;
        return;
    }

    public Utf8()
    {
        this.bytes = com.flurry.org.apache.avro.util.Utf8.EMPTY;
        return;
    }

    public Utf8(com.flurry.org.apache.avro.util.Utf8 p5)
    {
        this.bytes = com.flurry.org.apache.avro.util.Utf8.EMPTY;
        this.length = p5.length;
        String v0_4 = new byte[p5.length];
        this.bytes = v0_4;
        System.arraycopy(p5.bytes, 0, this.bytes, 0, this.length);
        this.string = p5.string;
        return;
    }

    public Utf8(String p2)
    {
        this.bytes = com.flurry.org.apache.avro.util.Utf8.EMPTY;
        this.bytes = com.flurry.org.apache.avro.util.Utf8.getBytesFor(p2);
        this.length = this.bytes.length;
        this.string = p2;
        return;
    }

    public Utf8(byte[] p2)
    {
        this.bytes = com.flurry.org.apache.avro.util.Utf8.EMPTY;
        this.bytes = p2;
        this.length = p2.length;
        return;
    }

    public static final byte[] getBytesFor(String p2)
    {
        try {
            byte[] v1_1 = p2.getBytes("UTF-8");
        } catch (java.io.UnsupportedEncodingException v0) {
            v0.printStackTrace();
            v1_1 = new byte[0];
        }
        return v1_1;
    }

    public char charAt(int p2)
    {
        return this.toString().charAt(p2);
    }

    public int compareTo(com.flurry.org.apache.avro.util.Utf8 p7)
    {
        return com.flurry.org.apache.avro.io.BinaryData.compareBytes(this.bytes, 0, this.length, p7.bytes, 0, p7.length);
    }

    public bridge synthetic int compareTo(Object p2)
    {
        return this.compareTo(((com.flurry.org.apache.avro.util.Utf8) p2));
    }

    public boolean equals(Object p8)
    {
        int v3 = 1;
        if (p8 != this) {
            if ((p8 instanceof com.flurry.org.apache.avro.util.Utf8)) {
                if (this.length == ((com.flurry.org.apache.avro.util.Utf8) p8).length) {
                    int v0 = 0;
                    while (v0 < this.length) {
                        if (this.bytes[v0] == ((com.flurry.org.apache.avro.util.Utf8) p8).bytes[v0]) {
                            v0++;
                        } else {
                            v3 = 0;
                            break;
                        }
                    }
                } else {
                    v3 = 0;
                }
            } else {
                v3 = 0;
            }
        }
        return v3;
    }

    public int getByteLength()
    {
        return this.length;
    }

    public byte[] getBytes()
    {
        return this.bytes;
    }

    public int getLength()
    {
        return this.length;
    }

    public int hashCode()
    {
        int v0 = 0;
        int v1 = 0;
        while (v1 < this.length) {
            v0 = ((v0 * 31) + this.bytes[v1]);
            v1++;
        }
        return v0;
    }

    public int length()
    {
        return this.toString().length();
    }

    public com.flurry.org.apache.avro.util.Utf8 setByteLength(int p5)
    {
        if (this.length < p5) {
            byte[] v0 = new byte[p5];
            System.arraycopy(this.bytes, 0, v0, 0, this.length);
            this.bytes = v0;
        }
        this.length = p5;
        this.string = 0;
        return this;
    }

    public com.flurry.org.apache.avro.util.Utf8 setLength(int p2)
    {
        return this.setByteLength(p2);
    }

    public CharSequence subSequence(int p2, int p3)
    {
        return this.toString().subSequence(p2, p3);
    }

    public String toString()
    {
        if (this.string == null) {
            try {
                this.string = new String(this.bytes, 0, this.length, "UTF-8");
            } catch (java.io.UnsupportedEncodingException v0) {
                v0.printStackTrace();
            }
        }
        return this.string;
    }
}
