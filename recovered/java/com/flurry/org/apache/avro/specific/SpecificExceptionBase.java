package com.flurry.org.apache.avro.specific;
public abstract class SpecificExceptionBase extends com.flurry.org.apache.avro.AvroRemoteException implements com.flurry.org.apache.avro.specific.SpecificRecord {

    public SpecificExceptionBase()
    {
        return;
    }

    public SpecificExceptionBase(Object p1)
    {
        super(p1);
        return;
    }

    public SpecificExceptionBase(Object p1, Throwable p2)
    {
        super(p1, p2);
        return;
    }

    public SpecificExceptionBase(Throwable p1)
    {
        super(p1);
        return;
    }

    public boolean equals(Object p5)
    {
        int v0 = 1;
        if (p5 != this) {
            if ((p5 instanceof com.flurry.org.apache.avro.specific.SpecificExceptionBase)) {
                if (this.getClass() == p5.getClass()) {
                    if (com.flurry.org.apache.avro.specific.SpecificData.get().compare(this, p5, this.getSchema()) != 0) {
                        v0 = 0;
                    }
                } else {
                    v0 = 0;
                }
            } else {
                v0 = 0;
            }
        }
        return v0;
    }

    public abstract Object get(int p0);

    public abstract com.flurry.org.apache.avro.Schema getSchema();

    public int hashCode()
    {
        return com.flurry.org.apache.avro.specific.SpecificData.get().hashCode(this, this.getSchema());
    }

    public abstract void put(int p0, Object p1);
}
