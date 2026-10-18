package com.flurry.org.apache.avro.reflect;
public class ReflectDatumWriter extends com.flurry.org.apache.avro.specific.SpecificDatumWriter {

    public ReflectDatumWriter()
    {
        this(com.flurry.org.apache.avro.reflect.ReflectData.get());
        return;
    }

    public ReflectDatumWriter(com.flurry.org.apache.avro.Schema p2)
    {
        this(p2, com.flurry.org.apache.avro.reflect.ReflectData.get());
        return;
    }

    protected ReflectDatumWriter(com.flurry.org.apache.avro.Schema p1, com.flurry.org.apache.avro.reflect.ReflectData p2)
    {
        super(p1, p2);
        return;
    }

    protected ReflectDatumWriter(com.flurry.org.apache.avro.reflect.ReflectData p1)
    {
        super(p1);
        return;
    }

    public ReflectDatumWriter(Class p2)
    {
        this(p2, com.flurry.org.apache.avro.reflect.ReflectData.get());
        return;
    }

    public ReflectDatumWriter(Class p2, com.flurry.org.apache.avro.reflect.ReflectData p3)
    {
        this(p3.getSchema(p2), p3);
        return;
    }

    protected java.util.Iterator getArrayElements(Object p2)
    {
        com.flurry.org.apache.avro.reflect.ReflectDatumWriter$1 v0_2;
        if (!(p2 instanceof java.util.Collection)) {
            v0_2 = new com.flurry.org.apache.avro.reflect.ReflectDatumWriter$1(this, p2);
        } else {
            v0_2 = ((java.util.Collection) p2).iterator();
        }
        return v0_2;
    }

    protected long getArraySize(Object p3)
    {
        long v0_2;
        if (!(p3 instanceof java.util.Collection)) {
            v0_2 = ((long) reflect.Array.getLength(p3));
        } else {
            v0_2 = ((long) ((java.util.Collection) p3).size());
        }
        return v0_2;
    }

    protected void write(com.flurry.org.apache.avro.Schema p5, Object p6, com.flurry.org.apache.avro.io.Encoder p7)
    {
        if (!(p6 instanceof Byte)) {
            if ((p6 instanceof Short)) {
                p6 = Integer.valueOf(((Short) p6).intValue());
            }
        } else {
            p6 = Integer.valueOf(((Byte) p6).intValue());
        }
        try {
            super.write(p5, p6, p7);
            return;
        } catch (Throwable v0) {
            NullPointerException v1_1 = new NullPointerException(new StringBuilder().append("in ").append(p5.getFullName()).append(" ").append(v0.getMessage()).toString());
            if (v0.getCause() != null) {
                v0 = v0.getCause();
            }
            v1_1.initCause(v0);
            throw v1_1;
        }
    }

    protected void writeBytes(Object p2, com.flurry.org.apache.avro.io.Encoder p3)
    {
        if (!(p2 instanceof byte[])) {
            super.writeBytes(p2, p3);
        } else {
            p3.writeBytes(((byte[]) ((byte[]) p2)));
        }
        return;
    }

    protected void writeString(com.flurry.org.apache.avro.Schema p2, Object p3, com.flurry.org.apache.avro.io.Encoder p4)
    {
        if (p2.getProp("java-class") != null) {
            p3 = p3.toString();
        }
        this.writeString(p3, p4);
        return;
    }
}
