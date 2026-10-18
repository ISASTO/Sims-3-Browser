package com.flurry.org.apache.avro.reflect;
public class ReflectDatumReader extends com.flurry.org.apache.avro.specific.SpecificDatumReader {

    public ReflectDatumReader()
    {
        this(0, 0, com.flurry.org.apache.avro.reflect.ReflectData.get());
        return;
    }

    public ReflectDatumReader(com.flurry.org.apache.avro.Schema p2)
    {
        this(p2, p2, com.flurry.org.apache.avro.reflect.ReflectData.get());
        return;
    }

    public ReflectDatumReader(com.flurry.org.apache.avro.Schema p2, com.flurry.org.apache.avro.Schema p3)
    {
        this(p2, p3, com.flurry.org.apache.avro.reflect.ReflectData.get());
        return;
    }

    protected ReflectDatumReader(com.flurry.org.apache.avro.Schema p1, com.flurry.org.apache.avro.Schema p2, com.flurry.org.apache.avro.reflect.ReflectData p3)
    {
        super(p1, p2, p3);
        return;
    }

    public ReflectDatumReader(Class p2)
    {
        this(com.flurry.org.apache.avro.reflect.ReflectData.get().getSchema(p2));
        return;
    }

    protected void addToArray(Object p2, long p3, Object p5)
    {
        if (!(p2 instanceof java.util.Collection)) {
            reflect.Array.set(p2, ((int) p3), p5);
        } else {
            ((java.util.Collection) p2).add(p5);
        }
        return;
    }

    protected Object createString(String p1)
    {
        return p1;
    }

    protected Object newArray(Object p5, int p6, com.flurry.org.apache.avro.Schema p7)
    {
        com.flurry.org.apache.avro.reflect.ReflectData v1 = com.flurry.org.apache.avro.reflect.ReflectData.get();
        Class v0 = com.flurry.org.apache.avro.reflect.ReflectData.getClassProp(p7, "java-class");
        if (v0 == null) {
            Class v2 = com.flurry.org.apache.avro.reflect.ReflectData.getClassProp(p7, "java-element-class");
            if (v2 == null) {
                v2 = v1.getClass(p7.getElementType());
            }
            p5 = reflect.Array.newInstance(v2, p6);
        } else {
            if (!(p5 instanceof java.util.Collection)) {
                if (!v0.isAssignableFrom(java.util.ArrayList)) {
                    p5 = com.flurry.org.apache.avro.reflect.ReflectData.newInstance(v0, p7);
                } else {
                    p5 = new java.util.ArrayList();
                }
            } else {
                ((java.util.Collection) p5).clear();
            }
        }
        return p5;
    }

    protected Object peekArray(Object p2)
    {
        return 0;
    }

    protected Object readBytes(Object p4, com.flurry.org.apache.avro.io.Decoder p5)
    {
        java.nio.ByteBuffer v0 = p5.readBytes(0);
        byte[] v1 = new byte[v0.remaining()];
        v0.get(v1);
        return v1;
    }

    protected Object readInt(Object p4, com.flurry.org.apache.avro.Schema p5, com.flurry.org.apache.avro.io.Decoder p6)
    {
        Short v1_1 = Integer.valueOf(p6.readInt());
        String v0 = p5.getProp("java-class");
        if (!Byte.getName().equals(v0)) {
            if (Short.getName().equals(v0)) {
                v1_1 = Short.valueOf(((Integer) v1_1).shortValue());
            }
        } else {
            v1_1 = Byte.valueOf(((Integer) v1_1).byteValue());
        }
        return v1_1;
    }

    protected Object readString(Object p7, com.flurry.org.apache.avro.Schema p8, com.flurry.org.apache.avro.io.Decoder p9)
    {
        Object v2_1 = ((String) this.readString(0, p9));
        Class v0 = com.flurry.org.apache.avro.reflect.ReflectData.getClassProp(p8, "java-class");
        if (v0 != null) {
            try {
                com.flurry.org.apache.avro.AvroRuntimeException v3_12 = new Class[1];
                v3_12[0] = String;
                com.flurry.org.apache.avro.AvroRuntimeException v3_1 = v0.getConstructor(v3_12);
                Object[] v4_2 = new Object[1];
                v4_2[0] = v2_1;
                v2_1 = v3_1.newInstance(v4_2);
            } catch (reflect.InvocationTargetException v1_3) {
                throw new com.flurry.org.apache.avro.AvroRuntimeException(v1_3);
            } catch (reflect.InvocationTargetException v1_2) {
                throw new com.flurry.org.apache.avro.AvroRuntimeException(v1_2);
            } catch (reflect.InvocationTargetException v1_1) {
                throw new com.flurry.org.apache.avro.AvroRuntimeException(v1_1);
            } catch (reflect.InvocationTargetException v1_0) {
                throw new com.flurry.org.apache.avro.AvroRuntimeException(v1_0);
            }
        }
        return v2_1;
    }

    protected Object readString(Object p2, com.flurry.org.apache.avro.io.Decoder p3)
    {
        return super.readString(0, p3).toString();
    }
}
