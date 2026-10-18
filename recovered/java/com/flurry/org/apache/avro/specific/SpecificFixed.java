package com.flurry.org.apache.avro.specific;
public abstract class SpecificFixed extends com.flurry.org.apache.avro.generic.GenericData$Fixed {

    public SpecificFixed()
    {
        this.setSchema(com.flurry.org.apache.avro.specific.SpecificData.get().getSchema(this.getClass()));
        return;
    }

    public SpecificFixed(byte[] p1)
    {
        this.bytes(p1);
        return;
    }
}
