package com.flurry.org.codehaus.jackson.format;
public interface InputAccessor {

    public abstract boolean hasMoreBytes();

    public abstract byte nextByte();

    public abstract void reset();
}
