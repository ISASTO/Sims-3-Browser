package com.flurry.org.apache.avro.generic;
public class GenericDatumReader implements com.flurry.org.apache.avro.io.DatumReader {
    private static final ThreadLocal RESOLVER_CACHE;
    private com.flurry.org.apache.avro.Schema actual;
    private final Thread creator;
    private com.flurry.org.apache.avro.io.ResolvingDecoder creatorResolver;
    private final com.flurry.org.apache.avro.generic.GenericData data;
    private com.flurry.org.apache.avro.Schema expected;

    static GenericDatumReader()
    {
        com.flurry.org.apache.avro.generic.GenericDatumReader.RESOLVER_CACHE = new com.flurry.org.apache.avro.generic.GenericDatumReader$1();
        return;
    }

    public GenericDatumReader()
    {
        this(0, 0, com.flurry.org.apache.avro.generic.GenericData.get());
        return;
    }

    public GenericDatumReader(com.flurry.org.apache.avro.Schema p2)
    {
        this(p2, p2, com.flurry.org.apache.avro.generic.GenericData.get());
        return;
    }

    public GenericDatumReader(com.flurry.org.apache.avro.Schema p2, com.flurry.org.apache.avro.Schema p3)
    {
        this(p2, p3, com.flurry.org.apache.avro.generic.GenericData.get());
        return;
    }

    protected GenericDatumReader(com.flurry.org.apache.avro.Schema p2, com.flurry.org.apache.avro.Schema p3, com.flurry.org.apache.avro.generic.GenericData p4)
    {
        this.creatorResolver = 0;
        this.actual = p2;
        this.expected = p3;
        this.data = p4;
        this.creator = Thread.currentThread();
        return;
    }

    public static void skip(com.flurry.org.apache.avro.Schema p14, com.flurry.org.apache.avro.io.Decoder p15)
    {
        switch (com.flurry.org.apache.avro.generic.GenericDatumReader$2.$SwitchMap$org$apache$avro$Schema$Type[p14.getType().ordinal()]) {
            case 1:
                java.util.Iterator v4 = p14.getFields().iterator();
                while (v4.hasNext()) {
                    com.flurry.org.apache.avro.generic.GenericDatumReader.skip(((com.flurry.org.apache.avro.Schema$Field) v4.next()).schema(), p15);
                }
                break;
            case 2:
                p15.readInt();
                break;
            case 3:
                com.flurry.org.apache.avro.Schema v0 = p14.getElementType();
                long v5_1 = p15.skipArray();
                while (v5_1 > 0) {
                    long v2_1 = 0;
                    while (v2_1 < v5_1) {
                        com.flurry.org.apache.avro.generic.GenericDatumReader.skip(v0, p15);
                        v2_1++;
                    }
                    v5_1 = p15.skipArray();
                }
                break;
            case 4:
                com.flurry.org.apache.avro.Schema v7 = p14.getValueType();
                long v5_0 = p15.skipMap();
                while (v5_0 > 0) {
                    long v2_0 = 0;
                    while (v2_0 < v5_0) {
                        p15.skipString();
                        com.flurry.org.apache.avro.generic.GenericDatumReader.skip(v7, p15);
                        v2_0++;
                    }
                    v5_0 = p15.skipMap();
                }
                break;
            case 5:
                com.flurry.org.apache.avro.generic.GenericDatumReader.skip(((com.flurry.org.apache.avro.Schema) p14.getTypes().get(p15.readIndex())), p15);
                break;
            case 6:
                p15.skipFixed(p14.getFixedSize());
                break;
            case 7:
                p15.skipString();
                break;
            case 8:
                p15.skipBytes();
                break;
            case 9:
                p15.readInt();
                break;
            case 10:
                p15.readLong();
                break;
            case 11:
                p15.readFloat();
                break;
            case 12:
                p15.readDouble();
                break;
            case 13:
                p15.readBoolean();
            case 14:
                break;
            default:
                throw new RuntimeException(new StringBuilder().append("Unknown type: ").append(p14).toString());
        }
        return;
    }

    protected void addToArray(Object p1, long p2, Object p4)
    {
        ((java.util.Collection) p1).add(p4);
        return;
    }

    protected void addToMap(Object p1, Object p2, Object p3)
    {
        ((java.util.Map) p1).put(p2, p3);
        return;
    }

    protected Object createBytes(byte[] p2)
    {
        return java.nio.ByteBuffer.wrap(p2);
    }

    protected Object createEnum(String p2, com.flurry.org.apache.avro.Schema p3)
    {
        return new com.flurry.org.apache.avro.generic.GenericData$EnumSymbol(p3, p2);
    }

    protected Object createFixed(Object p2, com.flurry.org.apache.avro.Schema p3)
    {
        return this.data.createFixed(p2, p3);
    }

    protected Object createFixed(Object p2, byte[] p3, com.flurry.org.apache.avro.Schema p4)
    {
        return this.data.createFixed(p2, p3, p4);
    }

    protected Object createString(String p2)
    {
        return new com.flurry.org.apache.avro.util.Utf8(p2);
    }

    public com.flurry.org.apache.avro.generic.GenericData getData()
    {
        return this.data;
    }

    public com.flurry.org.apache.avro.Schema getExpected()
    {
        return this.expected;
    }

    protected final com.flurry.org.apache.avro.io.ResolvingDecoder getResolver(com.flurry.org.apache.avro.Schema p7, com.flurry.org.apache.avro.Schema p8)
    {
        com.flurry.org.apache.avro.io.ResolvingDecoder v2_1;
        Thread v1 = Thread.currentThread();
        if ((v1 != this.creator) || (this.creatorResolver == null)) {
            com.flurry.org.apache.avro.util.WeakIdentityHashMap v0_1 = ((java.util.Map) ((java.util.Map) com.flurry.org.apache.avro.generic.GenericDatumReader.RESOLVER_CACHE.get()).get(p7));
            if (v0_1 == null) {
                v0_1 = new com.flurry.org.apache.avro.util.WeakIdentityHashMap();
                ((java.util.Map) com.flurry.org.apache.avro.generic.GenericDatumReader.RESOLVER_CACHE.get()).put(p7, v0_1);
            }
            v2_1 = ((com.flurry.org.apache.avro.io.ResolvingDecoder) v0_1.get(p8));
            if (v2_1 == null) {
                v2_1 = com.flurry.org.apache.avro.io.DecoderFactory.get().resolvingDecoder(com.flurry.org.apache.avro.Schema.applyAliases(p7, p8), p8, 0);
                v0_1.put(p8, v2_1);
            }
            if (v1 == this.creator) {
                this.creatorResolver = v2_1;
            }
        } else {
            v2_1 = this.creatorResolver;
        }
        return v2_1;
    }

    public com.flurry.org.apache.avro.Schema getSchema()
    {
        return this.actual;
    }

    protected Object newArray(Object p2, int p3, com.flurry.org.apache.avro.Schema p4)
    {
        if (!(p2 instanceof java.util.Collection)) {
            p2 = new com.flurry.org.apache.avro.generic.GenericData$Array(p3, p4);
        } else {
            ((java.util.Collection) p2).clear();
        }
        return p2;
    }

    protected Object newMap(Object p2, int p3)
    {
        if (!(p2 instanceof java.util.Map)) {
            p2 = new java.util.HashMap(p3);
        } else {
            ((java.util.Map) p2).clear();
        }
        return p2;
    }

    protected Object newRecord(Object p2, com.flurry.org.apache.avro.Schema p3)
    {
        return this.data.newRecord(p2, p3);
    }

    protected Object peekArray(Object p2)
    {
        int v0_1;
        if (!(p2 instanceof com.flurry.org.apache.avro.generic.GenericArray)) {
            v0_1 = 0;
        } else {
            v0_1 = ((com.flurry.org.apache.avro.generic.GenericArray) p2).peek();
        }
        return v0_1;
    }

    protected Object read(Object p4, com.flurry.org.apache.avro.Schema p5, com.flurry.org.apache.avro.io.ResolvingDecoder p6)
    {
        int v0_2;
        switch (com.flurry.org.apache.avro.generic.GenericDatumReader$2.$SwitchMap$org$apache$avro$Schema$Type[p5.getType().ordinal()]) {
            case 1:
                v0_2 = this.readRecord(p4, p5, p6);
                break;
            case 2:
                v0_2 = this.readEnum(p5, p6);
                break;
            case 3:
                v0_2 = this.readArray(p4, p5, p6);
                break;
            case 4:
                v0_2 = this.readMap(p4, p5, p6);
                break;
            case 5:
                v0_2 = this.read(p4, ((com.flurry.org.apache.avro.Schema) p5.getTypes().get(p6.readIndex())), p6);
                break;
            case 6:
                v0_2 = this.readFixed(p4, p5, p6);
                break;
            case 7:
                v0_2 = this.readString(p4, p5, p6);
                break;
            case 8:
                v0_2 = this.readBytes(p4, p6);
                break;
            case 9:
                v0_2 = this.readInt(p4, p5, p6);
                break;
            case 10:
                v0_2 = Long.valueOf(p6.readLong());
                break;
            case 11:
                v0_2 = Float.valueOf(p6.readFloat());
                break;
            case 12:
                v0_2 = Double.valueOf(p6.readDouble());
                break;
            case 13:
                v0_2 = Boolean.valueOf(p6.readBoolean());
                break;
            case 14:
                p6.readNull();
                v0_2 = 0;
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Unknown type: ").append(p5).toString());
        }
        return v0_2;
    }

    public Object read(Object p5, com.flurry.org.apache.avro.io.Decoder p6)
    {
        com.flurry.org.apache.avro.io.ResolvingDecoder v0 = this.getResolver(this.actual, this.expected);
        v0.configure(p6);
        Object v1 = this.read(p5, this.expected, v0);
        v0.drain();
        return v1;
    }

    protected Object readArray(Object p12, com.flurry.org.apache.avro.Schema p13, com.flurry.org.apache.avro.io.ResolvingDecoder p14)
    {
        Object v0;
        com.flurry.org.apache.avro.Schema v3 = p13.getElementType();
        long v6 = p14.readArrayStart();
        long v1 = 0;
        if (v6 <= 0) {
            v0 = this.newArray(p12, 0, p13);
        } else {
            v0 = this.newArray(p12, ((int) v6), p13);
            do {
                long v4 = 0;
                if (v4 >= v6) {
                    v1 += v6;
                    v6 = p14.arrayNext();
                } else {
                    this.addToArray(v0, (v1 + v4), this.read(this.peekArray(v0), v3, p14));
                    v4++;
                    while (v4 < v6) {
                    }
                }
            } while(v6 > 0);
        }
        return v0;
    }

    protected Object readBytes(Object p2, com.flurry.org.apache.avro.io.Decoder p3)
    {
        int v2_1;
        if (!(p2 instanceof java.nio.ByteBuffer)) {
            v2_1 = 0;
        } else {
            v2_1 = ((java.nio.ByteBuffer) p2);
        }
        return p3.readBytes(v2_1);
    }

    protected Object readEnum(com.flurry.org.apache.avro.Schema p3, com.flurry.org.apache.avro.io.Decoder p4)
    {
        return this.createEnum(((String) p3.getEnumSymbols().get(p4.readEnum())), p3);
    }

    protected Object readFixed(Object p5, com.flurry.org.apache.avro.Schema p6, com.flurry.org.apache.avro.io.Decoder p7)
    {
        com.flurry.org.apache.avro.generic.GenericFixed v0_1 = ((com.flurry.org.apache.avro.generic.GenericFixed) this.data.createFixed(p5, p6));
        p7.readFixed(v0_1.bytes(), 0, p6.getFixedSize());
        return v0_1;
    }

    protected Object readInt(Object p2, com.flurry.org.apache.avro.Schema p3, com.flurry.org.apache.avro.io.Decoder p4)
    {
        return Integer.valueOf(p4.readInt());
    }

    protected Object readMap(Object p11, com.flurry.org.apache.avro.Schema p12, com.flurry.org.apache.avro.io.ResolvingDecoder p13)
    {
        com.flurry.org.apache.avro.Schema v0 = p12.getValueType();
        long v2 = p13.readMapStart();
        Object v4 = this.newMap(p11, ((int) v2));
        if (v2 > 0) {
            do {
                int v1 = 0;
                if (((long) v1) >= v2) {
                    v2 = p13.mapNext();
                } else {
                    this.addToMap(v4, this.readString(0, p12, p13), this.read(0, v0, p13));
                    v1++;
                    while (((long) v1) < v2) {
                    }
                }
            } while(v2 > 0);
        }
        return v4;
    }

    protected Object readRecord(Object p12, com.flurry.org.apache.avro.Schema p13, com.flurry.org.apache.avro.io.ResolvingDecoder p14)
    {
        Object v1 = this.data.newRecord(p12, p13);
        Object v5 = this.data.getRecordState(v1, p13);
        com.flurry.org.apache.avro.Schema$Field[] v6 = p14.readFieldOrder();
        int v9 = v6.length;
        int v8 = 0;
        while (v8 < v9) {
            int v10;
            com.flurry.org.apache.avro.Schema$Field v7 = v6[v8];
            int v3 = v7.pos();
            String v2 = v7.name();
            if (p12 == null) {
                v10 = 0;
            } else {
                v10 = this.data.getField(v1, v2, v3, v5);
            }
            this.data.setField(v1, v2, v3, this.read(v10, v7.schema(), p14), v5);
            v8++;
        }
        return v1;
    }

    protected Object readString(Object p3, com.flurry.org.apache.avro.Schema p4, com.flurry.org.apache.avro.io.Decoder p5)
    {
        Object v0_1;
        if (!"String".equals(p4.getProp("avro.java.string"))) {
            v0_1 = this.readString(p3, p5);
        } else {
            v0_1 = p5.readString();
        }
        return v0_1;
    }

    protected Object readString(Object p2, com.flurry.org.apache.avro.io.Decoder p3)
    {
        int v2_1;
        if (!(p2 instanceof com.flurry.org.apache.avro.util.Utf8)) {
            v2_1 = 0;
        } else {
            v2_1 = ((com.flurry.org.apache.avro.util.Utf8) p2);
        }
        return p3.readString(v2_1);
    }

    public void setExpected(com.flurry.org.apache.avro.Schema p2)
    {
        this.expected = p2;
        this.creatorResolver = 0;
        return;
    }

    public void setSchema(com.flurry.org.apache.avro.Schema p2)
    {
        this.actual = p2;
        if (this.expected == null) {
            this.expected = this.actual;
        }
        this.creatorResolver = 0;
        return;
    }
}
