package com.flurry.org.apache.avro.specific;
public abstract class SpecificRecordBase implements com.flurry.org.apache.avro.specific.SpecificRecord, java.lang.Comparable {

    public SpecificRecordBase()
    {
        return;
    }

    public int compareTo(com.flurry.org.apache.avro.specific.SpecificRecord p3)
    {
        return com.flurry.org.apache.avro.specific.SpecificData.get().compare(this, p3, this.getSchema());
    }

    public bridge synthetic int compareTo(Object p2)
    {
        return this.compareTo(((com.flurry.org.apache.avro.specific.SpecificRecord) p2));
    }

    public boolean equals(Object p5)
    {
        int v0 = 1;
        if (p5 != this) {
            if ((p5 instanceof com.flurry.org.apache.avro.specific.SpecificRecord)) {
                if (this.getClass() == p5.getClass()) {
                    if (this.compareTo(((com.flurry.org.apache.avro.specific.SpecificRecord) p5)) != 0) {
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

    public String toString()
    {
        return com.flurry.org.apache.avro.specific.SpecificData.get().toString(this);
    }
}
