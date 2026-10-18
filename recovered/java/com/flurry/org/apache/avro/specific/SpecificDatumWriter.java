package com.flurry.org.apache.avro.specific;
public class SpecificDatumWriter extends com.flurry.org.apache.avro.generic.GenericDatumWriter {

    public SpecificDatumWriter()
    {
        super(com.flurry.org.apache.avro.specific.SpecificData.get());
        return;
    }

    public SpecificDatumWriter(com.flurry.org.apache.avro.Schema p2)
    {
        super(p2, com.flurry.org.apache.avro.specific.SpecificData.get());
        return;
    }

    protected SpecificDatumWriter(com.flurry.org.apache.avro.Schema p1, com.flurry.org.apache.avro.specific.SpecificData p2)
    {
        super(p1, p2);
        return;
    }

    protected SpecificDatumWriter(com.flurry.org.apache.avro.specific.SpecificData p1)
    {
        super(p1);
        return;
    }

    public SpecificDatumWriter(Class p3)
    {
        super(com.flurry.org.apache.avro.specific.SpecificData.get().getSchema(p3), com.flurry.org.apache.avro.specific.SpecificData.get());
        return;
    }

    protected void writeEnum(com.flurry.org.apache.avro.Schema p2, Object p3, com.flurry.org.apache.avro.io.Encoder p4)
    {
        if ((p3 instanceof Enum)) {
            p4.writeEnum(((Enum) p3).ordinal());
        } else {
            super.writeEnum(p2, p3, p4);
        }
        return;
    }
}
