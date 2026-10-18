package com.flurry.org.apache.avro.specific;
public abstract class SpecificErrorBuilderBase extends com.flurry.org.apache.avro.data.RecordBuilderBase implements com.flurry.org.apache.avro.data.ErrorBuilder {
    private Throwable cause;
    private reflect.Constructor errorConstructor;
    private boolean hasCause;
    private boolean hasValue;
    private Object value;

    protected SpecificErrorBuilderBase(com.flurry.org.apache.avro.Schema p2)
    {
        super(p2, com.flurry.org.apache.avro.specific.SpecificData.get());
        return;
    }

    protected SpecificErrorBuilderBase(com.flurry.org.apache.avro.specific.SpecificErrorBuilderBase p2)
    {
        super(p2, com.flurry.org.apache.avro.specific.SpecificData.get());
        super.errorConstructor = p2.errorConstructor;
        super.value = p2.value;
        super.hasValue = p2.hasValue;
        super.cause = p2.cause;
        super.hasCause = p2.hasCause;
        return;
    }

    protected SpecificErrorBuilderBase(com.flurry.org.apache.avro.specific.SpecificExceptionBase p5)
    {
        super(p5.getSchema(), com.flurry.org.apache.avro.specific.SpecificData.get());
        Object v1 = p5.getValue();
        if (v1 != null) {
            super.setValue(v1);
        }
        Throwable v0 = p5.getCause();
        if (v0 != null) {
            super.setCause(v0);
        }
        return;
    }

    public bridge synthetic com.flurry.org.apache.avro.data.ErrorBuilder clearCause()
    {
        return this.clearCause();
    }

    public com.flurry.org.apache.avro.specific.SpecificErrorBuilderBase clearCause()
    {
        this.cause = 0;
        this.hasCause = 0;
        return this;
    }

    public bridge synthetic com.flurry.org.apache.avro.data.ErrorBuilder clearValue()
    {
        return this.clearValue();
    }

    public com.flurry.org.apache.avro.specific.SpecificErrorBuilderBase clearValue()
    {
        this.value = 0;
        this.hasValue = 0;
        return this;
    }

    public Throwable getCause()
    {
        return this.cause;
    }

    public Object getValue()
    {
        return this.value;
    }

    public boolean hasCause()
    {
        return this.hasCause;
    }

    public boolean hasValue()
    {
        return this.hasValue;
    }

    public bridge synthetic com.flurry.org.apache.avro.data.ErrorBuilder setCause(Throwable p2)
    {
        return this.setCause(p2);
    }

    public com.flurry.org.apache.avro.specific.SpecificErrorBuilderBase setCause(Throwable p2)
    {
        this.cause = p2;
        this.hasCause = 1;
        return this;
    }

    public bridge synthetic com.flurry.org.apache.avro.data.ErrorBuilder setValue(Object p2)
    {
        return this.setValue(p2);
    }

    public com.flurry.org.apache.avro.specific.SpecificErrorBuilderBase setValue(Object p2)
    {
        this.value = p2;
        this.hasValue = 1;
        return this;
    }
}
