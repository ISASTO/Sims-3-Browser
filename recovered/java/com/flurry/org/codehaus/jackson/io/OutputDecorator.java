package com.flurry.org.codehaus.jackson.io;
public abstract class OutputDecorator {

    public OutputDecorator()
    {
        return;
    }

    public abstract java.io.OutputStream decorate(com.flurry.org.codehaus.jackson.io.IOContext p0, java.io.OutputStream p1);

    public abstract java.io.Writer decorate(com.flurry.org.codehaus.jackson.io.IOContext p0, java.io.Writer p1);
}
