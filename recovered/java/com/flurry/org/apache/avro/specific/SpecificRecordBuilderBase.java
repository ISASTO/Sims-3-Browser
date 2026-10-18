package com.flurry.org.apache.avro.specific;
public abstract class SpecificRecordBuilderBase extends com.flurry.org.apache.avro.data.RecordBuilderBase {

    protected SpecificRecordBuilderBase(com.flurry.org.apache.avro.Schema p2)
    {
        super(p2, com.flurry.org.apache.avro.specific.SpecificData.get());
        return;
    }

    protected SpecificRecordBuilderBase(com.flurry.org.apache.avro.specific.SpecificRecord p3)
    {
        super(p3.getSchema(), com.flurry.org.apache.avro.specific.SpecificData.get());
        return;
    }

    protected SpecificRecordBuilderBase(com.flurry.org.apache.avro.specific.SpecificRecordBuilderBase p2)
    {
        super(p2, com.flurry.org.apache.avro.specific.SpecificData.get());
        return;
    }
}
