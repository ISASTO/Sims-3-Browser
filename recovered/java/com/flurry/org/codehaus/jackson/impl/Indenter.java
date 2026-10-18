package com.flurry.org.codehaus.jackson.impl;
public interface Indenter {

    public abstract boolean isInline();

    public abstract void writeIndentation(com.flurry.org.codehaus.jackson.JsonGenerator p0, int p1);
}
