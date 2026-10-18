package com.flurry.org.apache.avro;
public class AvroRemoteException extends java.io.IOException {
    private Object value;

    protected AvroRemoteException()
    {
        return;
    }

    public AvroRemoteException(Object p2)
    {
        int v0;
        if (p2 == null) {
            v0 = 0;
        } else {
            v0 = p2.toString();
        }
        super(v0);
        super.value = p2;
        return;
    }

    public AvroRemoteException(Object p2, Throwable p3)
    {
        int v0;
        if (p2 == null) {
            v0 = 0;
        } else {
            v0 = p2.toString();
        }
        super(v0, p3);
        super.value = p2;
        return;
    }

    public AvroRemoteException(Throwable p2)
    {
        this(p2.toString());
        this.initCause(p2);
        return;
    }

    public Object getValue()
    {
        return this.value;
    }
}
