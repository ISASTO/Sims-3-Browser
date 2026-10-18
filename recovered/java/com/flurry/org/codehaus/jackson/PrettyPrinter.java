package com.flurry.org.codehaus.jackson;
public interface PrettyPrinter {

    public abstract void beforeArrayValues(com.flurry.org.codehaus.jackson.JsonGenerator p0);

    public abstract void beforeObjectEntries(com.flurry.org.codehaus.jackson.JsonGenerator p0);

    public abstract void writeArrayValueSeparator(com.flurry.org.codehaus.jackson.JsonGenerator p0);

    public abstract void writeEndArray(com.flurry.org.codehaus.jackson.JsonGenerator p0, int p1);

    public abstract void writeEndObject(com.flurry.org.codehaus.jackson.JsonGenerator p0, int p1);

    public abstract void writeObjectEntrySeparator(com.flurry.org.codehaus.jackson.JsonGenerator p0);

    public abstract void writeObjectFieldValueSeparator(com.flurry.org.codehaus.jackson.JsonGenerator p0);

    public abstract void writeRootValueSeparator(com.flurry.org.codehaus.jackson.JsonGenerator p0);

    public abstract void writeStartArray(com.flurry.org.codehaus.jackson.JsonGenerator p0);

    public abstract void writeStartObject(com.flurry.org.codehaus.jackson.JsonGenerator p0);
}
