package com.flurry.org.apache.avro.specific;
public class SpecificData extends com.flurry.org.apache.avro.generic.GenericData {
    private static final java.util.Map CTOR_CACHE;
    private static final com.flurry.org.apache.avro.specific.SpecificData INSTANCE;
    private static final Class[] NO_ARG;
    private static final Class NO_CLASS;
    private static final com.flurry.org.apache.avro.Schema NULL_SCHEMA;
    private static final Class[] SCHEMA_ARG;
    private java.util.Map classCache;
    private final ClassLoader classLoader;
    private final java.util.WeakHashMap schemaCache;

    static SpecificData()
    {
        com.flurry.org.apache.avro.specific.SpecificData.INSTANCE = new com.flurry.org.apache.avro.specific.SpecificData();
        com.flurry.org.apache.avro.Schema v0_9 = new Class[0];
        com.flurry.org.apache.avro.specific.SpecificData.NO_ARG = v0_9;
        com.flurry.org.apache.avro.Schema v0_11 = new Class[1];
        v0_11[0] = com.flurry.org.apache.avro.Schema;
        com.flurry.org.apache.avro.specific.SpecificData.SCHEMA_ARG = v0_11;
        com.flurry.org.apache.avro.specific.SpecificData.CTOR_CACHE = new java.util.concurrent.ConcurrentHashMap();
        com.flurry.org.apache.avro.specific.SpecificData.NO_CLASS = new com.flurry.org.apache.avro.specific.SpecificData$1().getClass();
        com.flurry.org.apache.avro.specific.SpecificData.NULL_SCHEMA = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.NULL);
        return;
    }

    protected SpecificData()
    {
        this(com.flurry.org.apache.avro.specific.SpecificData.getClassLoader());
        return;
    }

    public SpecificData(ClassLoader p2)
    {
        this.classCache = new java.util.concurrent.ConcurrentHashMap();
        this.schemaCache = new java.util.WeakHashMap();
        this.classLoader = p2;
        return;
    }

    public static com.flurry.org.apache.avro.specific.SpecificData get()
    {
        return com.flurry.org.apache.avro.specific.SpecificData.INSTANCE;
    }

    public static String getClassName(com.flurry.org.apache.avro.Schema p4)
    {
        String v2 = p4.getNamespace();
        String v1 = p4.getName();
        if ((v2 != null) && (!"".equals(v2))) {
            String v0;
            if (!v2.endsWith("$")) {
                v0 = ".";
            } else {
                v0 = "";
            }
            v1 = new StringBuilder().append(v2).append(v0).append(v1).toString();
        }
        return v1;
    }

    public static Object newInstance(Class p6, com.flurry.org.apache.avro.Schema p7)
    {
        boolean v3 = com.flurry.org.apache.avro.specific.SpecificData$SchemaConstructable.isAssignableFrom(p6);
        try {
            reflect.Constructor v1_0 = ((reflect.Constructor) com.flurry.org.apache.avro.specific.SpecificData.CTOR_CACHE.get(p6));
        } catch (Exception v0) {
            throw new RuntimeException(v0);
        }
        if (v1_0 == null) {
            java.util.Map v4_1;
            if (!v3) {
                v4_1 = com.flurry.org.apache.avro.specific.SpecificData.NO_ARG;
            } else {
                v4_1 = com.flurry.org.apache.avro.specific.SpecificData.SCHEMA_ARG;
            }
            v1_0 = p6.getDeclaredConstructor(v4_1);
            v1_0.setAccessible(1);
            com.flurry.org.apache.avro.specific.SpecificData.CTOR_CACHE.put(p6, v1_0);
        }
        java.util.Map v4_5;
        if (!v3) {
            v4_5 = ((Object[]) 0);
        } else {
            v4_5 = new Object[1];
            v4_5[0] = p7;
        }
        return v1_0.newInstance(v4_5);
    }

    protected int compare(Object p3, Object p4, com.flurry.org.apache.avro.Schema p5, boolean p6)
    {
        int v0_2;
        switch (com.flurry.org.apache.avro.specific.SpecificData$2.$SwitchMap$org$apache$avro$Schema$Type[p5.getType().ordinal()]) {
            case 3:
                if (!(p3 instanceof Enum)) {
                    v0_2 = super.compare(p3, p4, p5, p6);
                } else {
                    v0_2 = (((Enum) p3).ordinal() - ((Enum) p4).ordinal());
                }
                break;
            default:
        }
        return v0_2;
    }

    public com.flurry.org.apache.avro.io.DatumReader createDatumReader(com.flurry.org.apache.avro.Schema p2)
    {
        return new com.flurry.org.apache.avro.specific.SpecificDatumReader(p2, p2, this);
    }

    public Object createFixed(Object p3, com.flurry.org.apache.avro.Schema p4)
    {
        Class v0 = com.flurry.org.apache.avro.specific.SpecificData.get().getClass(p4);
        if (v0 != null) {
            if (!v0.isInstance(p3)) {
                p3 = com.flurry.org.apache.avro.specific.SpecificData.newInstance(v0, p4);
            }
        } else {
            p3 = super.createFixed(p3, p4);
        }
        return p3;
    }

    protected com.flurry.org.apache.avro.Schema createSchema(reflect.Type p15, java.util.Map p16)
    {
        if ((!(p15 instanceof Class)) || (!CharSequence.isAssignableFrom(((Class) p15)))) {
            if (p15 != java.nio.ByteBuffer) {
                if ((p15 != Integer) && (p15 != Integer.TYPE)) {
                    if ((p15 != Long) && (p15 != Long.TYPE)) {
                        if ((p15 != Float) && (p15 != Float.TYPE)) {
                            if ((p15 != Double) && (p15 != Double.TYPE)) {
                                if ((p15 != Boolean) && (p15 != Boolean.TYPE)) {
                                    if ((p15 != Void) && (p15 != Void.TYPE)) {
                                        if (!(p15 instanceof reflect.ParameterizedType)) {
                                            if (!(p15 instanceof Class)) {
                                                throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Unknown type: ").append(p15).toString());
                                            } else {
                                                String v3 = ((Class) p15).getName();
                                                com.flurry.org.apache.avro.Schema v8_0 = ((com.flurry.org.apache.avro.Schema) p16.get(v3));
                                                if (v8_0 == null) {
                                                    try {
                                                        v8_0 = ((com.flurry.org.apache.avro.Schema) ((com.flurry.org.apache.avro.Schema) ((Class) p15).getDeclaredField("SCHEMA$").get(0)));
                                                    } catch (IllegalAccessException v2) {
                                                        throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Not a Specific class: ").append(((Class) p15)).toString());
                                                    } catch (IllegalAccessException v2) {
                                                        throw new com.flurry.org.apache.avro.AvroRuntimeException(v2);
                                                    }
                                                    if (!v3.equals(com.flurry.org.apache.avro.specific.SpecificData.getClassName(v8_0))) {
                                                        v8_0 = com.flurry.org.apache.avro.Schema.parse(v8_0.toString().replace(v8_0.getNamespace(), ((Class) p15).getPackage().getName()));
                                                    }
                                                }
                                                p16.put(v3, v8_0);
                                            }
                                        } else {
                                            Class v7_1 = ((Class) ((reflect.ParameterizedType) p15).getRawType());
                                            reflect.Type[] v5 = ((reflect.ParameterizedType) p15).getActualTypeArguments();
                                            if (!java.util.Collection.isAssignableFrom(v7_1)) {
                                                if (!java.util.Map.isAssignableFrom(v7_1)) {
                                                    v8_0 = this.createSchema(v7_1, p16);
                                                } else {
                                                    if (((p15 instanceof Class)) && (CharSequence.isAssignableFrom(((Class) p15)))) {
                                                        v8_0 = com.flurry.org.apache.avro.Schema.createMap(this.createSchema(v5[1], p16));
                                                    } else {
                                                        throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Map key class not CharSequence: ").append(v5[0]).toString());
                                                    }
                                                }
                                            } else {
                                                if (v5.length == 1) {
                                                    v8_0 = com.flurry.org.apache.avro.Schema.createArray(this.createSchema(v5[0], p16));
                                                } else {
                                                    throw new com.flurry.org.apache.avro.AvroTypeException("No array type specified.");
                                                }
                                            }
                                        }
                                    } else {
                                        v8_0 = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.NULL);
                                    }
                                } else {
                                    v8_0 = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.BOOLEAN);
                                }
                            } else {
                                v8_0 = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.DOUBLE);
                            }
                        } else {
                            v8_0 = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.FLOAT);
                        }
                    } else {
                        v8_0 = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.LONG);
                    }
                } else {
                    v8_0 = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.INT);
                }
            } else {
                v8_0 = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.BYTES);
            }
        } else {
            v8_0 = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.STRING);
        }
        return v8_0;
    }

    public Class getClass(com.flurry.org.apache.avro.Schema p9)
    {
        Class v4_0 = 0;
        switch (com.flurry.org.apache.avro.specific.SpecificData$2.$SwitchMap$org$apache$avro$Schema$Type[p9.getType().ordinal()]) {
            case 1:
            case 2:
            case 3:
                String v2 = p9.getFullName();
                if (v2 != null) {
                    boolean v0_1 = ((Class) this.classCache.get(v2));
                    if (!v0_1) {
                        try {
                            v0_1 = this.classLoader.loadClass(com.flurry.org.apache.avro.specific.SpecificData.getClassName(p9));
                        } catch (ClassNotFoundException v1) {
                            v0_1 = com.flurry.org.apache.avro.specific.SpecificData.NO_CLASS;
                        }
                        this.classCache.put(v2, v0_1);
                    }
                    if (v0_1 == com.flurry.org.apache.avro.specific.SpecificData.NO_CLASS) {
                        v0_1 = 0;
                    }
                    v4_0 = v0_1;
                } else {
                }
                break;
            case 4:
                v4_0 = java.util.List;
                break;
            case 5:
                v4_0 = java.util.Map;
                break;
            case 6:
                java.util.List v3 = p9.getTypes();
                if ((v3.size() != 2) || (!v3.contains(com.flurry.org.apache.avro.specific.SpecificData.NULL_SCHEMA))) {
                    v4_0 = Object;
                } else {
                    Class v4_9;
                    if (!((com.flurry.org.apache.avro.Schema) v3.get(0)).equals(com.flurry.org.apache.avro.specific.SpecificData.NULL_SCHEMA)) {
                        v4_9 = 0;
                    } else {
                        v4_9 = 1;
                    }
                    v4_0 = this.getClass(((com.flurry.org.apache.avro.Schema) v3.get(v4_9)));
                }
                break;
            case 7:
                if (!"String".equals(p9.getProp("avro.java.string"))) {
                    v4_0 = CharSequence;
                } else {
                    v4_0 = String;
                }
                break;
            case 8:
                v4_0 = java.nio.ByteBuffer;
                break;
            case 9:
                v4_0 = Integer.TYPE;
                break;
            case 10:
                v4_0 = Long.TYPE;
                break;
            case 11:
                v4_0 = Float.TYPE;
                break;
            case 12:
                v4_0 = Double.TYPE;
                break;
            case 13:
                v4_0 = Boolean.TYPE;
                break;
            case 14:
                v4_0 = Void.TYPE;
                break;
            default:
                throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Unknown type: ").append(p9).toString());
        }
        return v4_0;
    }

    protected com.flurry.org.apache.avro.Schema getEnumSchema(Object p2)
    {
        com.flurry.org.apache.avro.Schema v0_1;
        if (!(p2 instanceof Enum)) {
            v0_1 = super.getEnumSchema(p2);
        } else {
            v0_1 = this.getSchema(p2.getClass());
        }
        return v0_1;
    }

    public com.flurry.org.apache.avro.Protocol getProtocol(Class p7)
    {
        try {
            com.flurry.org.apache.avro.Protocol v2 = ((com.flurry.org.apache.avro.Protocol) ((com.flurry.org.apache.avro.Protocol) p7.getDeclaredField("PROTOCOL").get(0)));
        } catch (IllegalAccessException v1) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Not a Specific protocol: ").append(p7).toString());
        } catch (IllegalAccessException v1) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v1);
        }
        if (!v2.getNamespace().equals(p7.getPackage().getName())) {
            v2 = com.flurry.org.apache.avro.Protocol.parse(v2.toString().replace(v2.getNamespace(), p7.getPackage().getName()));
        }
        return v2;
    }

    public com.flurry.org.apache.avro.Schema getSchema(reflect.Type p3)
    {
        com.flurry.org.apache.avro.Schema v0_1 = ((com.flurry.org.apache.avro.Schema) this.schemaCache.get(p3));
        if (v0_1 == null) {
            v0_1 = this.createSchema(p3, new java.util.LinkedHashMap());
            this.schemaCache.put(p3, v0_1);
        }
        return v0_1;
    }

    protected boolean isEnum(Object p2)
    {
        if ((!(p2 instanceof Enum)) && (!super.isEnum(p2))) {
            int v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public Object newRecord(Object p3, com.flurry.org.apache.avro.Schema p4)
    {
        Class v0 = com.flurry.org.apache.avro.specific.SpecificData.get().getClass(p4);
        if (v0 != null) {
            if (!v0.isInstance(p3)) {
                p3 = com.flurry.org.apache.avro.specific.SpecificData.newInstance(v0, p4);
            }
        } else {
            p3 = super.newRecord(p3, p4);
        }
        return p3;
    }
}
