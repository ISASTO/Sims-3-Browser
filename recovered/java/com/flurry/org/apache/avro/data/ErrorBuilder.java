package com.flurry.org.apache.avro.data;
public interface ErrorBuilder implements com.flurry.org.apache.avro.data.RecordBuilder {

    public abstract com.flurry.org.apache.avro.data.ErrorBuilder clearCause();

    public abstract com.flurry.org.apache.avro.data.ErrorBuilder clearValue();

    public abstract Throwable getCause();

    public abstract Object getValue();

    public abstract boolean hasCause();

    public abstract boolean hasValue();

    public abstract com.flurry.org.apache.avro.data.ErrorBuilder setCause(Throwable p0);

    public abstract com.flurry.org.apache.avro.data.ErrorBuilder setValue(Object p0);
}
