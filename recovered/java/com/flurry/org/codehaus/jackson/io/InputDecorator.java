package com.flurry.org.codehaus.jackson.io;
public abstract class InputDecorator {

    public InputDecorator()
    {
        return;
    }

    public abstract java.io.InputStream decorate(com.flurry.org.codehaus.jackson.io.IOContext p0, java.io.InputStream p1);

    public abstract java.io.InputStream decorate(com.flurry.org.codehaus.jackson.io.IOContext p0, byte[] p1, int p2, int p3);

    public abstract java.io.Reader decorate(com.flurry.org.codehaus.jackson.io.IOContext p0, java.io.Reader p1);
}
