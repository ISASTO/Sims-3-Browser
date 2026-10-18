package com.flurry.org.apache.avro.io;
public class BinaryData {
    private static final ThreadLocal DECODERS;
    private static final ThreadLocal HASH_DATA;

    static BinaryData()
    {
        com.flurry.org.apache.avro.io.BinaryData.DECODERS = new com.flurry.org.apache.avro.io.BinaryData$1();
        com.flurry.org.apache.avro.io.BinaryData.HASH_DATA = new com.flurry.org.apache.avro.io.BinaryData$2();
        return;
    }

    private BinaryData()
    {
        return;
    }

    private static int compare(com.flurry.org.apache.avro.io.BinaryData$Decoders p36, com.flurry.org.apache.avro.Schema p37)
    {
        long v2_0;
        com.flurry.org.apache.avro.io.BinaryDecoder v14 = com.flurry.org.apache.avro.io.BinaryData$Decoders.access$000(p36);
        com.flurry.org.apache.avro.io.BinaryDecoder v15 = com.flurry.org.apache.avro.io.BinaryData$Decoders.access$100(p36);
        switch (com.flurry.org.apache.avro.io.BinaryData$3.$SwitchMap$org$apache$avro$Schema$Type[p37.getType().ordinal()]) {
            case 1:
                java.util.Iterator v23 = p37.getFields().iterator();
                while (v23.hasNext()) {
                    com.flurry.org.apache.avro.Schema$Field v20_1 = ((com.flurry.org.apache.avro.Schema$Field) v23.next());
                    if (v20_1.order() != com.flurry.org.apache.avro.Schema$Field$Order.IGNORE) {
                        int v13_1 = com.flurry.org.apache.avro.io.BinaryData.compare(p36, v20_1.schema());
                        if (v13_1 != 0) {
                            if (v20_1.order() == com.flurry.org.apache.avro.Schema$Field$Order.DESCENDING) {
                                v13_1 = (- v13_1);
                            }
                            v2_0 = v13_1;
                        }
                    } else {
                        com.flurry.org.apache.avro.generic.GenericDatumReader.skip(v20_1.schema(), v14);
                        com.flurry.org.apache.avro.generic.GenericDatumReader.skip(v20_1.schema(), v15);
                    }
                }
                v2_0 = 0;
                break;
            case 2:
            case 3:
                int v24_1 = v14.readInt();
                int v25_1 = v15.readInt();
                if (v24_1 != v25_1) {
                    if (v24_1 <= v25_1) {
                        v2_0 = -1;
                    } else {
                        v2_0 = 1;
                    }
                } else {
                    v2_0 = 0;
                }
                break;
            case 4:
                long v28_1 = v14.readLong();
                long v30_1 = v15.readLong();
                if (v28_1 != v30_1) {
                    if (v28_1 <= v30_1) {
                        v2_0 = -1;
                    } else {
                        v2_0 = 1;
                    }
                } else {
                    v2_0 = 0;
                }
                break;
            case 5:
                long v21 = 0;
                long v32 = 0;
                long v34 = 0;
                long v28_0 = 0;
                long v30_0 = 0;
                while(true) {
                    if (v32 == 0) {
                        v32 = v14.readLong();
                        if (v32 < 0) {
                            v32 = (- v32);
                            v14.readLong();
                        }
                        v28_0 += v32;
                    }
                    if (v34 == 0) {
                        v34 = v15.readLong();
                        if (v34 < 0) {
                            v34 = (- v34);
                            v15.readLong();
                        }
                        v30_0 += v34;
                    }
                    if ((v32 == 0) || (v34 == 0)) {
                        break;
                    }
                    long v26 = Math.min(v28_0, v30_0);
                    while (v21 < v26) {
                        int v13_0 = com.flurry.org.apache.avro.io.BinaryData.compare(p36, p37.getElementType());
                        if (v13_0 == 0) {
                            v21++;
                            v32--;
                            v34--;
                        } else {
                            v2_0 = v13_0;
                        }
                    }
                }
                if (v28_0 != v30_0) {
                    if (v28_0 <= v30_0) {
                        v2_0 = -1;
                    } else {
                        v2_0 = 1;
                    }
                } else {
                    v2_0 = 0;
                }
                break;
            case 6:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Can\'t compare maps!");
                break;
            case 7:
                int v24_0 = v14.readInt();
                int v25_0 = v15.readInt();
                if (v24_0 != v25_0) {
                    v2_0 = (v24_0 - v25_0);
                } else {
                    v2_0 = com.flurry.org.apache.avro.io.BinaryData.compare(p36, ((com.flurry.org.apache.avro.Schema) p37.getTypes().get(v24_0)));
                }
                break;
            case 8:
                int v4 = p37.getFixedSize();
                int v13_3 = com.flurry.org.apache.avro.io.BinaryData.compareBytes(com.flurry.org.apache.avro.io.BinaryData$Decoders.access$200(p36).getBuf(), com.flurry.org.apache.avro.io.BinaryData$Decoders.access$200(p36).getPos(), v4, com.flurry.org.apache.avro.io.BinaryData$Decoders.access$300(p36).getBuf(), com.flurry.org.apache.avro.io.BinaryData$Decoders.access$300(p36).getPos(), v4);
                com.flurry.org.apache.avro.io.BinaryData$Decoders.access$000(p36).skipFixed(v4);
                com.flurry.org.apache.avro.io.BinaryData$Decoders.access$100(p36).skipFixed(v4);
                v2_0 = v13_3;
                break;
            case 9:
            case 10:
                int v7_0 = v14.readInt();
                int v10 = v15.readInt();
                int v13_2 = com.flurry.org.apache.avro.io.BinaryData.compareBytes(com.flurry.org.apache.avro.io.BinaryData$Decoders.access$200(p36).getBuf(), com.flurry.org.apache.avro.io.BinaryData$Decoders.access$200(p36).getPos(), v7_0, com.flurry.org.apache.avro.io.BinaryData$Decoders.access$300(p36).getBuf(), com.flurry.org.apache.avro.io.BinaryData$Decoders.access$300(p36).getPos(), v10);
                com.flurry.org.apache.avro.io.BinaryData$Decoders.access$000(p36).skipFixed(v7_0);
                com.flurry.org.apache.avro.io.BinaryData$Decoders.access$100(p36).skipFixed(v10);
                v2_0 = v13_2;
                break;
            case 11:
                double v16_1 = v14.readFloat();
                double v18_1 = v15.readFloat();
                if (v16_1 != v18_1) {
                    if (v16_1 <= v18_1) {
                        v2_0 = -1;
                    } else {
                        v2_0 = 1;
                    }
                } else {
                    v2_0 = 0;
                }
                break;
            case 12:
                double v16_0 = v14.readDouble();
                double v18_0 = v15.readDouble();
                if (v16_0 != v18_0) {
                    if (v16_0 <= v18_0) {
                        v2_0 = -1;
                    } else {
                        v2_0 = 1;
                    }
                } else {
                    v2_0 = 0;
                }
                break;
            case 13:
                boolean v11 = v14.readBoolean();
                if (v11 != v15.readBoolean()) {
                    if (!v11) {
                        v2_0 = -1;
                    } else {
                        v2_0 = 1;
                    }
                } else {
                    v2_0 = 0;
                }
                break;
            case 14:
                v2_0 = 0;
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Unexpected schema to compare!");
        }
        return v2_0;
    }

    public static int compare(byte[] p8, int p9, int p10, byte[] p11, int p12, int p13, com.flurry.org.apache.avro.Schema p14)
    {
        com.flurry.org.apache.avro.io.BinaryData$Decoders v0_1 = ((com.flurry.org.apache.avro.io.BinaryData$Decoders) com.flurry.org.apache.avro.io.BinaryData.DECODERS.get());
        v0_1.set(p8, p9, p10, p11, p12, p13);
        try {
            return com.flurry.org.apache.avro.io.BinaryData.compare(v0_1, p14);
        } catch (java.io.IOException v7) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v7);
        }
    }

    public static int compare(byte[] p7, int p8, byte[] p9, int p10, com.flurry.org.apache.avro.Schema p11)
    {
        return com.flurry.org.apache.avro.io.BinaryData.compare(p7, p8, (p7.length - p8), p9, p10, (p9.length - p10), p11);
    }

    public static int compareBytes(byte[] p7, int p8, int p9, byte[] p10, int p11, int p12)
    {
        int v4 = p8;
        int v5 = p11;
        while ((v4 < (p8 + p9)) && (v5 < (p11 + p12))) {
            int v0 = (p7[v4] & 255);
            int v1 = (p10[v5] & 255);
            if (v0 == v1) {
                v4++;
                v5++;
            } else {
                int v6_0 = (v0 - v1);
            }
            return v6_0;
        }
        v6_0 = (p9 - p12);
        return v6_0;
    }

    public static int encodeBoolean(boolean p2, byte[] p3, int p4)
    {
        int v0;
        if (!p2) {
            v0 = 0;
        } else {
            v0 = 1;
        }
        p3[p4] = v0;
        return 1;
    }

    public static int encodeDouble(double p8, byte[] p10, int p11)
    {
        long v0 = Double.doubleToRawLongBits(p8);
        int v2 = ((int) (v0 & -1));
        int v3 = ((int) ((v0 >> 32) & -1));
        p10[p11] = ((byte) (v2 & 255));
        p10[(p11 + 4)] = ((byte) (v3 & 255));
        p10[(p11 + 5)] = ((byte) ((v3 >> 8) & 255));
        p10[(p11 + 1)] = ((byte) ((v2 >> 8) & 255));
        p10[(p11 + 2)] = ((byte) ((v2 >> 16) & 255));
        p10[(p11 + 6)] = ((byte) ((v3 >> 16) & 255));
        p10[(p11 + 7)] = ((byte) ((v3 >> 24) & 255));
        p10[(p11 + 3)] = ((byte) ((v2 >> 24) & 255));
        return 8;
    }

    public static int encodeFloat(float p5, byte[] p6, int p7)
    {
        int v0 = Float.floatToRawIntBits(p5);
        p6[p7] = ((byte) (v0 & 255));
        p6[(p7 + 1)] = ((byte) ((v0 >> 8) & 255));
        p6[(p7 + 2)] = ((byte) ((v0 >> 16) & 255));
        p6[(p7 + 3)] = ((byte) ((v0 >> 24) & 255));
        return 4;
    }

    public static int encodeInt(int p5, byte[] p6, int p7)
    {
        int v5_1 = ((p5 << 1) ^ (p5 >> 31));
        if ((v5_1 & -128) != 0) {
            int v0_0 = (p7 + 1);
            p6[p7] = ((byte) ((v5_1 | 128) & 255));
            v5_1 >>= 7;
            if (v5_1 > 127) {
                p7 = (v0_0 + 1);
                p6[v0_0] = ((byte) ((v5_1 | 128) & 255));
                v5_1 >>= 7;
                if (v5_1 <= 127) {
                    int v0_1 = (p7 + 1);
                    p6[p7] = ((byte) v5_1);
                    return (v0_1 - p7);
                } else {
                    v0_0 = (p7 + 1);
                    p6[p7] = ((byte) ((v5_1 | 128) & 255));
                    v5_1 >>= 7;
                    if (v5_1 > 127) {
                        p7 = (v0_0 + 1);
                        p6[v0_0] = ((byte) ((v5_1 | 128) & 255));
                        v5_1 >>= 7;
                        v0_1 = (p7 + 1);
                        p6[p7] = ((byte) v5_1);
                        return (v0_1 - p7);
                    }
                }
            }
            p7 = v0_0;
        }
        v0_1 = (p7 + 1);
        p6[p7] = ((byte) v5_1);
        return (v0_1 - p7);
    }

    public static int encodeLong(long p6, byte[] p8, int p9)
    {
        long v6_1 = ((p6 << 1) ^ (p6 >> 63));
        if ((-128 & v6_1) != 0) {
            int v0_0 = (p9 + 1);
            p8[p9] = ((byte) ((int) ((128 | v6_1) & 255)));
            v6_1 >>= 7;
            if (v6_1 > 127) {
                p9 = (v0_0 + 1);
                p8[v0_0] = ((byte) ((int) ((128 | v6_1) & 255)));
                v6_1 >>= 7;
                if (v6_1 <= 127) {
                    int v0_2 = (p9 + 1);
                    p8[p9] = ((byte) ((int) v6_1));
                    return (v0_2 - p9);
                } else {
                    v0_0 = (p9 + 1);
                    p8[p9] = ((byte) ((int) ((128 | v6_1) & 255)));
                    v6_1 >>= 7;
                    if (v6_1 > 127) {
                        p9 = (v0_0 + 1);
                        p8[v0_0] = ((byte) ((int) ((128 | v6_1) & 255)));
                        v6_1 >>= 7;
                        if (v6_1 <= 127) {
                            v0_2 = (p9 + 1);
                            p8[p9] = ((byte) ((int) v6_1));
                            return (v0_2 - p9);
                        } else {
                            v0_0 = (p9 + 1);
                            p8[p9] = ((byte) ((int) ((128 | v6_1) & 255)));
                            v6_1 >>= 7;
                            if (v6_1 > 127) {
                                p9 = (v0_0 + 1);
                                p8[v0_0] = ((byte) ((int) ((128 | v6_1) & 255)));
                                v6_1 >>= 7;
                                if (v6_1 <= 127) {
                                    v0_2 = (p9 + 1);
                                    p8[p9] = ((byte) ((int) v6_1));
                                    return (v0_2 - p9);
                                } else {
                                    v0_0 = (p9 + 1);
                                    p8[p9] = ((byte) ((int) ((128 | v6_1) & 255)));
                                    v6_1 >>= 7;
                                    if (v6_1 > 127) {
                                        p9 = (v0_0 + 1);
                                        p8[v0_0] = ((byte) ((int) ((128 | v6_1) & 255)));
                                        v6_1 >>= 7;
                                        if (v6_1 <= 127) {
                                            v0_2 = (p9 + 1);
                                            p8[p9] = ((byte) ((int) v6_1));
                                            return (v0_2 - p9);
                                        } else {
                                            int v0_1 = (p9 + 1);
                                            p8[p9] = ((byte) ((int) ((128 | v6_1) & 255)));
                                            v6_1 >>= 7;
                                            p9 = v0_1;
                                            v0_2 = (p9 + 1);
                                            p8[p9] = ((byte) ((int) v6_1));
                                            return (v0_2 - p9);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            p9 = v0_0;
        }
        v0_2 = (p9 + 1);
        p8[p9] = ((byte) ((int) v6_1));
        return (v0_2 - p9);
    }

    private static int hashBytes(int p7, com.flurry.org.apache.avro.io.BinaryData$HashData p8, int p9, boolean p10)
    {
        int v2 = p7;
        byte[] v0 = com.flurry.org.apache.avro.io.BinaryData$HashData.access$500(p8).getBuf();
        int v4 = com.flurry.org.apache.avro.io.BinaryData$HashData.access$500(p8).getPos();
        int v1 = (v4 + p9);
        if (!p10) {
            int v3_0 = v4;
            while (v3_0 < v1) {
                v2 = ((v2 * 31) + v0[v3_0]);
                v3_0++;
            }
        } else {
            int v3_1 = (v1 - 1);
            while (v3_1 >= v4) {
                v2 = ((v2 * 31) + v0[v3_1]);
                v3_1--;
            }
        }
        com.flurry.org.apache.avro.io.BinaryData$HashData.access$400(p8).skipFixed(p9);
        return v2;
    }

    private static int hashCode(com.flurry.org.apache.avro.io.BinaryData$HashData p13, com.flurry.org.apache.avro.Schema p14)
    {
        int v3 = 0;
        com.flurry.org.apache.avro.io.BinaryDecoder v0 = com.flurry.org.apache.avro.io.BinaryData$HashData.access$400(p13);
        switch (com.flurry.org.apache.avro.io.BinaryData$3.$SwitchMap$org$apache$avro$Schema$Type[p14.getType().ordinal()]) {
            case 1:
                v3 = 1;
                java.util.Iterator v6 = p14.getFields().iterator();
                while (v6.hasNext()) {
                    com.flurry.org.apache.avro.Schema$Field v2_1 = ((com.flurry.org.apache.avro.Schema$Field) v6.next());
                    if (v2_1.order() != com.flurry.org.apache.avro.Schema$Field$Order.IGNORE) {
                        v3 = ((v3 * 31) + com.flurry.org.apache.avro.io.BinaryData.hashCode(p13, v2_1.schema()));
                    } else {
                        com.flurry.org.apache.avro.generic.GenericDatumReader.skip(v2_1.schema(), v0);
                    }
                }
                break;
            case 2:
            case 3:
                v3 = v0.readInt();
                break;
            case 4:
                long v7_2 = v0.readLong();
                v3 = ((int) ((v7_2 >> 32) ^ v7_2));
                break;
            case 5:
                com.flurry.org.apache.avro.Schema v1 = p14.getElementType();
                v3 = 1;
                long v7_1 = v0.readArrayStart();
                while (v7_1 != 0) {
                    long v4 = 0;
                    while (v4 < v7_1) {
                        v3 = ((v3 * 31) + com.flurry.org.apache.avro.io.BinaryData.hashCode(p13, v1));
                        v4++;
                    }
                    v7_1 = v0.arrayNext();
                }
                break;
            case 6:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Can\'t hashCode maps!");
                break;
            case 7:
                v3 = com.flurry.org.apache.avro.io.BinaryData.hashCode(p13, ((com.flurry.org.apache.avro.Schema) p14.getTypes().get(v0.readInt())));
                break;
            case 8:
                v3 = com.flurry.org.apache.avro.io.BinaryData.hashBytes(1, p13, p14.getFixedSize(), 0);
                break;
            case 9:
                v3 = com.flurry.org.apache.avro.io.BinaryData.hashBytes(0, p13, v0.readInt(), 0);
                break;
            case 10:
                v3 = com.flurry.org.apache.avro.io.BinaryData.hashBytes(1, p13, v0.readInt(), 1);
                break;
            case 11:
                v3 = Float.floatToIntBits(v0.readFloat());
                break;
            case 12:
                long v7_0 = Double.doubleToLongBits(v0.readDouble());
                v3 = ((int) ((v7_0 >> 32) ^ v7_0));
                break;
            case 13:
                long v9_5;
                if (!v0.readBoolean()) {
                    v9_5 = 1237;
                } else {
                    v9_5 = 1231;
                }
                v3 = v9_5;
            case 14:
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException("Unexpected schema to hashCode!");
        }
        return v3;
    }

    public static int hashCode(byte[] p3, int p4, int p5, com.flurry.org.apache.avro.Schema p6)
    {
        com.flurry.org.apache.avro.io.BinaryData$HashData v0_1 = ((com.flurry.org.apache.avro.io.BinaryData$HashData) com.flurry.org.apache.avro.io.BinaryData.HASH_DATA.get());
        v0_1.set(p3, p4, p5);
        try {
            return com.flurry.org.apache.avro.io.BinaryData.hashCode(v0_1, p6);
        } catch (java.io.IOException v1) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v1);
        }
    }

    public static int skipLong(byte[] p4, int p5)
    {
        int v2 = (p5 + 1);
        byte v0 = p4[p5];
        while ((v0 & 128) != 0) {
            v0 = p4[v2];
            v2++;
        }
        return v2;
    }
}
