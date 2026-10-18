package com.flurry.org.apache.avro.specific;
public class SpecificDatumReader extends com.flurry.org.apache.avro.generic.GenericDatumReader {

    public SpecificDatumReader()
    {
        this(0, 0, com.flurry.org.apache.avro.specific.SpecificData.get());
        return;
    }

    public SpecificDatumReader(com.flurry.org.apache.avro.Schema p2)
    {
        this(p2, p2, com.flurry.org.apache.avro.specific.SpecificData.get());
        return;
    }

    public SpecificDatumReader(com.flurry.org.apache.avro.Schema p2, com.flurry.org.apache.avro.Schema p3)
    {
        this(p2, p3, com.flurry.org.apache.avro.specific.SpecificData.get());
        return;
    }

    public SpecificDatumReader(com.flurry.org.apache.avro.Schema p1, com.flurry.org.apache.avro.Schema p2, com.flurry.org.apache.avro.specific.SpecificData p3)
    {
        super(p1, p2, p3);
        return;
    }

    public SpecificDatumReader(Class p2)
    {
        this(com.flurry.org.apache.avro.specific.SpecificData.get().getSchema(p2));
        return;
    }

    protected Object createEnum(String p3, com.flurry.org.apache.avro.Schema p4)
    {
        Enum v1_1;
        Class v0 = this.getSpecificData().getClass(p4);
        if (v0 != null) {
            v1_1 = Enum.valueOf(v0, p3);
        } else {
            v1_1 = super.createEnum(p3, p4);
        }
        return v1_1;
    }

    public com.flurry.org.apache.avro.specific.SpecificData getSpecificData()
    {
        return ((com.flurry.org.apache.avro.specific.SpecificData) this.getData());
    }

    public void setSchema(com.flurry.org.apache.avro.Schema p5)
    {
        if ((this.getExpected() == null) && ((p5 != null) && (p5.getType() == com.flurry.org.apache.avro.Schema$Type.RECORD))) {
            com.flurry.org.apache.avro.specific.SpecificData v1 = this.getSpecificData();
            Class v0 = v1.getClass(p5);
            if ((v0 != null) && (com.flurry.org.apache.avro.specific.SpecificRecord.isAssignableFrom(v0))) {
                this.setExpected(v1.getSchema(v0));
            }
        }
        super.setSchema(p5);
        return;
    }
}
