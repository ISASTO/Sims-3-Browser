package com.flurry.org.apache.avro.generic;
public class GenericData$Fixed implements com.flurry.org.apache.avro.generic.GenericFixed, java.lang.Comparable {
    private byte[] bytes;
    private com.flurry.org.apache.avro.Schema schema;

    protected GenericData$Fixed()
    {
        return;
    }

    public GenericData$Fixed(com.flurry.org.apache.avro.Schema p1)
    {
        this.setSchema(p1);
        return;
    }

    public GenericData$Fixed(com.flurry.org.apache.avro.Schema p1, byte[] p2)
    {
        this.schema = p1;
        this.bytes = p2;
        return;
    }

    public void bytes(byte[] p1)
    {
        this.bytes = p1;
        return;
    }

    public byte[] bytes()
    {
        return this.bytes;
    }

    public int compareTo(com.flurry.org.apache.avro.generic.GenericData$Fixed p7)
    {
        return com.flurry.org.apache.avro.io.BinaryData.compareBytes(this.bytes, 0, this.bytes.length, p7.bytes, 0, p7.bytes.length);
    }

    public bridge synthetic int compareTo(Object p2)
    {
        return this.compareTo(((com.flurry.org.apache.avro.generic.GenericData$Fixed) p2));
    }

    public boolean equals(Object p4)
    {
        int v0 = 1;
        if ((p4 != this) && ((!(p4 instanceof com.flurry.org.apache.avro.generic.GenericFixed)) || (!java.util.Arrays.equals(this.bytes, ((com.flurry.org.apache.avro.generic.GenericFixed) p4).bytes())))) {
            v0 = 0;
        }
        return v0;
    }

    public com.flurry.org.apache.avro.Schema getSchema()
    {
        return this.schema;
    }

    public int hashCode()
    {
        return java.util.Arrays.hashCode(this.bytes);
    }

    protected void setSchema(com.flurry.org.apache.avro.Schema p2)
    {
        this.schema = p2;
        byte[] v0_1 = new byte[p2.getFixedSize()];
        this.bytes = v0_1;
        return;
    }

    public String toString()
    {
        return java.util.Arrays.toString(this.bytes);
    }
}
