package com.flurry.org.apache.avro.reflect;
public class ReflectData extends com.flurry.org.apache.avro.specific.SpecificData {
    private static final Class BYTES_CLASS = None;
    static final String CLASS_PROP = "java-class";
    static final String ELEMENT_PROP = "java-element-class";
    private static final java.util.Map FIELD_CACHE;
    private static final com.flurry.org.apache.avro.reflect.ReflectData INSTANCE;
    private static final com.flurry.org.apache.avro.Schema THROWABLE_MESSAGE;
    private final com.thoughtworks.paranamer.Paranamer paranamer;

    static ReflectData()
    {
        com.flurry.org.apache.avro.reflect.ReflectData.INSTANCE = new com.flurry.org.apache.avro.reflect.ReflectData();
        com.flurry.org.apache.avro.reflect.ReflectData.FIELD_CACHE = new java.util.concurrent.ConcurrentHashMap();
        com.flurry.org.apache.avro.Schema v0_8 = new byte[0];
        com.flurry.org.apache.avro.reflect.ReflectData.BYTES_CLASS = v0_8.getClass();
        com.flurry.org.apache.avro.reflect.ReflectData.THROWABLE_MESSAGE = com.flurry.org.apache.avro.reflect.ReflectData.makeNullable(com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.STRING));
        return;
    }

    protected ReflectData()
    {
        this.paranamer = new com.thoughtworks.paranamer.CachingParanamer();
        return;
    }

    private static reflect.Field findField(Class p5, String p6)
    {
        Class v0 = p5;
        try {
            do {
                reflect.Field v1 = v0.getDeclaredField(p6);
                v1.setAccessible(1);
                return v1;
            } while(v0 != null);
            throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("No field named ").append(p6).append(" in: ").append(p5).toString());
        } catch (com.flurry.org.apache.avro.AvroRuntimeException v2) {
            v0 = v0.getSuperclass();
            if (v0 != null) {
            }
        }
    }

    public static com.flurry.org.apache.avro.reflect.ReflectData get()
    {
        return com.flurry.org.apache.avro.reflect.ReflectData.INSTANCE;
    }

    private com.flurry.org.apache.avro.Schema getAnnotatedUnion(com.flurry.org.apache.avro.reflect.Union p7, java.util.Map p8)
    {
        java.util.ArrayList v2_1 = new java.util.ArrayList();
        Class[] v0 = p7.value();
        int v4 = v0.length;
        int v3 = 0;
        while (v3 < v4) {
            v2_1.add(this.createSchema(v0[v3], p8));
            v3++;
        }
        return com.flurry.org.apache.avro.Schema.createUnion(v2_1);
    }

    static Class getClassProp(com.flurry.org.apache.avro.Schema p3, String p4)
    {
        com.flurry.org.apache.avro.AvroRuntimeException v2_0;
        String v1 = p3.getProp(p4);
        if (v1 != null) {
            try {
                v2_0 = Class.forName(v1);
            } catch (ClassNotFoundException v0) {
                throw new com.flurry.org.apache.avro.AvroRuntimeException(v0);
            }
        } else {
            v2_0 = 0;
        }
        return v2_0;
    }

    private static reflect.Field getField(Class p3, String p4)
    {
        java.util.concurrent.ConcurrentHashMap v1_1 = ((java.util.Map) com.flurry.org.apache.avro.reflect.ReflectData.FIELD_CACHE.get(p3));
        if (v1_1 == null) {
            v1_1 = new java.util.concurrent.ConcurrentHashMap();
            com.flurry.org.apache.avro.reflect.ReflectData.FIELD_CACHE.put(p3, v1_1);
        }
        reflect.Field v0_1 = ((reflect.Field) v1_1.get(p4));
        if (v0_1 == null) {
            v0_1 = com.flurry.org.apache.avro.reflect.ReflectData.findField(p3, p4);
            v1_1.put(p4, v0_1);
        }
        return v0_1;
    }

    private java.util.Collection getFields(Class p10)
    {
        java.util.LinkedHashMap v3_1 = new java.util.LinkedHashMap();
        Class v1 = p10;
        while ((v1.getPackage() == null) || (!v1.getPackage().getName().startsWith("java."))) {
            reflect.Field[] v0 = v1.getDeclaredFields();
            int v4 = 0;
            while (v4 < v0.length) {
                reflect.Field v2 = v0[v4];
                if (((v2.getModifiers() & 136) != 0) || (v3_1.put(v2.getName(), v2) == null)) {
                    v4++;
                } else {
                    throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append(v1).append(" contains two fields named: ").append(v2).toString());
                }
            }
            v1 = v1.getSuperclass();
            if (v1 == null) {
                break;
            }
        }
        return v3_1.values();
    }

    private com.flurry.org.apache.avro.Protocol$Message getMessage(reflect.Method p24, com.flurry.org.apache.avro.Protocol p25, java.util.Map p26)
    {
        java.util.ArrayList v13_1 = new java.util.ArrayList();
        String[] v19 = this.paranamer.lookupParameterNames(p24);
        reflect.Type[] v21 = p24.getGenericParameterTypes();
        otation.Annotation[][] v9 = p24.getParameterAnnotations();
        int v14 = 0;
        while (v14 < v21.length) {
            com.flurry.org.apache.avro.Schema v20 = this.getSchema(v21[v14], p26);
            int v16 = 0;
            while (v16 < v9[v14].length) {
                if (!(v9[v14][v16] instanceof com.flurry.org.apache.avro.reflect.Union)) {
                    if ((v9[v14][v16] instanceof com.flurry.org.apache.avro.reflect.Nullable)) {
                        v20 = com.flurry.org.apache.avro.reflect.ReflectData.makeNullable(v20);
                    }
                } else {
                    v20 = this.getAnnotatedUnion(((com.flurry.org.apache.avro.reflect.Union) v9[v14][v16]), p26);
                }
                v16++;
            }
            String v18;
            if (v19.length != v21.length) {
                v18 = new StringBuilder().append(v20.getName()).append(v14).toString();
            } else {
                v18 = v19[v14];
            }
            v13_1.add(new com.flurry.org.apache.avro.Schema$Field(v18, v20, 0, 0));
            v14++;
        }
        com.flurry.org.apache.avro.Schema v7;
        com.flurry.org.apache.avro.Schema v6 = com.flurry.org.apache.avro.Schema.createRecord(v13_1);
        com.flurry.org.apache.avro.reflect.Union v22_1 = ((com.flurry.org.apache.avro.reflect.Union) p24.getAnnotation(com.flurry.org.apache.avro.reflect.Union));
        if (v22_1 != null) {
            v7 = this.getAnnotatedUnion(v22_1, p26);
        } else {
            v7 = this.getSchema(p24.getGenericReturnType(), p26);
        }
        if (p24.isAnnotationPresent(com.flurry.org.apache.avro.reflect.Nullable)) {
            v7 = com.flurry.org.apache.avro.reflect.ReflectData.makeNullable(v7);
        }
        java.util.ArrayList v12_1 = new java.util.ArrayList();
        v12_1.add(com.flurry.org.apache.avro.Protocol.SYSTEM_ERROR);
        reflect.Type[] v10 = p24.getGenericExceptionTypes();
        int v17 = v10.length;
        int v15 = 0;
        while (v15 < v17) {
            reflect.Type v11 = v10[v15];
            if (v11 != com.flurry.org.apache.avro.AvroRemoteException) {
                v12_1.add(this.getSchema(v11, p26));
            }
            v15++;
        }
        return p25.createMessage(p24.getName(), 0, v6, v7, com.flurry.org.apache.avro.Schema.createUnion(v12_1));
    }

    private com.flurry.org.apache.avro.Schema getSchema(reflect.Type p5, java.util.Map p6)
    {
        try {
            return this.createSchema(p5, p6);
        } catch (com.flurry.org.apache.avro.AvroTypeException v0) {
            throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Error getting schema for ").append(p5).append(": ").append(v0.getMessage()).toString(), v0);
        }
    }

    public static com.flurry.org.apache.avro.Schema makeNullable(com.flurry.org.apache.avro.Schema p3)
    {
        com.flurry.org.apache.avro.Schema v0_1 = new com.flurry.org.apache.avro.Schema[2];
        v0_1[0] = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.NULL);
        v0_1[1] = p3;
        return com.flurry.org.apache.avro.Schema.createUnion(java.util.Arrays.asList(v0_1));
    }

    private void setElement(com.flurry.org.apache.avro.Schema p5, reflect.Type p6)
    {
        if (((p6 instanceof Class)) && (((com.flurry.org.apache.avro.reflect.Union) ((Class) p6).getAnnotation(com.flurry.org.apache.avro.reflect.Union)) != null)) {
            p5.addProp("java-element-class", ((Class) p6).getName());
        }
        return;
    }

    protected int compare(Object p14, Object p15, com.flurry.org.apache.avro.Schema p16, boolean p17)
    {
        int v7;
        switch (com.flurry.org.apache.avro.reflect.ReflectData$1.$SwitchMap$org$apache$avro$Schema$Type[p16.getType().ordinal()]) {
            case 1:
                if (!p14.getClass().isArray()) {
                    v7 = super.compare(p14, p15, p16, p17);
                } else {
                    com.flurry.org.apache.avro.Schema v8 = p16.getElementType();
                    int v11 = reflect.Array.getLength(p14);
                    int v12 = reflect.Array.getLength(p15);
                    int v10 = Math.min(v11, v12);
                    int v9 = 0;
                    while (v9 < v10) {
                        v7 = this.compare(reflect.Array.get(p14, v9), reflect.Array.get(p15, v9), v8, p17);
                        if (v7 != 0) {
                        } else {
                            v9++;
                        }
                    }
                    v7 = (v11 - v12);
                }
                break;
            case 3:
                if (!p14.getClass().isArray()) {
                } else {
                    byte[] v1_1 = ((byte[]) ((byte[]) p14));
                    byte[] v4_1 = ((byte[]) ((byte[]) p15));
                    v7 = com.flurry.org.apache.avro.io.BinaryData.compareBytes(v1_1, 0, v1_1.length, v4_1, 0, v4_1.length);
                }
                break;
            default:
        }
        return v7;
    }

    public com.flurry.org.apache.avro.io.DatumReader createDatumReader(com.flurry.org.apache.avro.Schema p2)
    {
        return new com.flurry.org.apache.avro.reflect.ReflectDatumReader(p2, p2, this);
    }

    protected com.flurry.org.apache.avro.Schema createFieldSchema(reflect.Field p3, java.util.Map p4)
    {
        com.flurry.org.apache.avro.Schema v0 = this.createSchema(p3.getGenericType(), p4);
        if (p3.isAnnotationPresent(com.flurry.org.apache.avro.reflect.Nullable)) {
            v0 = com.flurry.org.apache.avro.reflect.ReflectData.makeNullable(v0);
        }
        return v0;
    }

    protected com.flurry.org.apache.avro.Schema createSchema(reflect.Type p34, java.util.Map p35)
    {
        com.flurry.org.apache.avro.Schema v21;
        if (!(p34 instanceof reflect.GenericArrayType)) {
            if (!(p34 instanceof reflect.ParameterizedType)) {
                if ((p34 != Byte) && (p34 != Byte.TYPE)) {
                    if ((p34 != Short) && (p34 != Short.TYPE)) {
                        if ((p34 instanceof Class)) {
                            if ((!((Class) p34).isPrimitive()) && ((!Number.isAssignableFrom(((Class) p34))) && ((((Class) p34) != Void) && (((Class) p34) != Boolean)))) {
                                if (!((Class) p34).isArray()) {
                                    if (!CharSequence.isAssignableFrom(((Class) p34))) {
                                        if (!java.nio.ByteBuffer.isAssignableFrom(((Class) p34))) {
                                            if (!java.util.Collection.isAssignableFrom(((Class) p34))) {
                                                String v13 = ((Class) p34).getName();
                                                com.flurry.org.apache.avro.Schema v22_0 = ((com.flurry.org.apache.avro.Schema) p35.get(v13));
                                                if (v22_0 == null) {
                                                    String v24;
                                                    String v17 = ((Class) p34).getSimpleName();
                                                    if (((Class) p34).getPackage() != null) {
                                                        v24 = ((Class) p34).getPackage().getName();
                                                    } else {
                                                        v24 = "";
                                                    }
                                                    if (((Class) p34).getEnclosingClass() != null) {
                                                        v24 = new StringBuilder().append(((Class) p34).getEnclosingClass().getName()).append("$").toString();
                                                    }
                                                    com.flurry.org.apache.avro.reflect.Union v26_1 = ((com.flurry.org.apache.avro.reflect.Union) ((Class) p34).getAnnotation(com.flurry.org.apache.avro.reflect.Union));
                                                    if (v26_1 == null) {
                                                        if (!((Class) p34).isAnnotationPresent(com.flurry.org.apache.avro.reflect.Stringable)) {
                                                            if (!((Class) p34).isEnum()) {
                                                                if (!com.flurry.org.apache.avro.generic.GenericFixed.isAssignableFrom(((Class) p34))) {
                                                                    if (!com.flurry.org.apache.avro.generic.IndexedRecord.isAssignableFrom(((Class) p34))) {
                                                                        java.util.ArrayList v12_1 = new java.util.ArrayList();
                                                                        boolean v9 = Throwable.isAssignableFrom(((Class) p34));
                                                                        v22_0 = com.flurry.org.apache.avro.Schema.createRecord(v17, 0, v24, v9);
                                                                        p35.put(((Class) p34).getName(), v22_0);
                                                                        java.util.Iterator v15 = this.getFields(((Class) p34)).iterator();
                                                                        while (v15.hasNext()) {
                                                                            reflect.Field v10_1 = ((reflect.Field) v15.next());
                                                                            if ((v10_1.getModifiers() & 136) == 0) {
                                                                                com.flurry.org.apache.avro.Schema v11 = this.createFieldSchema(v10_1, p35);
                                                                                com.flurry.org.codehaus.jackson.node.NullNode v8 = 0;
                                                                                if ((v11.getType() == com.flurry.org.apache.avro.Schema$Type.UNION) && (((com.flurry.org.apache.avro.Schema) v11.getTypes().get(0)).getType() == com.flurry.org.apache.avro.Schema$Type.NULL)) {
                                                                                    v8 = com.flurry.org.codehaus.jackson.node.NullNode.getInstance();
                                                                                }
                                                                                com.flurry.org.apache.avro.Schema$Field v28_21 = new com.flurry.org.apache.avro.Schema$Field;
                                                                                v28_21(v10_1.getName(), v11, 0, v8);
                                                                                v12_1.add(v28_21);
                                                                            }
                                                                        }
                                                                        if (v9) {
                                                                            v12_1.add(new com.flurry.org.apache.avro.Schema$Field("detailMessage", com.flurry.org.apache.avro.reflect.ReflectData.THROWABLE_MESSAGE, 0, 0));
                                                                        }
                                                                        v22_0.setFields(v12_1);
                                                                    } else {
                                                                        v21 = super.createSchema(p34, p35);
                                                                        return v21;
                                                                    }
                                                                } else {
                                                                    v22_0 = com.flurry.org.apache.avro.Schema.createFixed(v17, 0, v24, ((com.flurry.org.apache.avro.specific.FixedSize) ((Class) p34).getAnnotation(com.flurry.org.apache.avro.specific.FixedSize)).value());
                                                                }
                                                            } else {
                                                                java.util.ArrayList v25_1 = new java.util.ArrayList();
                                                                Enum[] v6_1 = ((Enum[]) ((Enum[]) ((Class) p34).getEnumConstants()));
                                                                int v14 = 0;
                                                                while (v14 < v6_1.length) {
                                                                    v25_1.add(v6_1[v14].name());
                                                                    v14++;
                                                                }
                                                                v22_0 = com.flurry.org.apache.avro.Schema.createEnum(v17, 0, v24, v25_1);
                                                            }
                                                            p35.put(v13, v22_0);
                                                        } else {
                                                            v21 = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.STRING);
                                                            v21.addProp("java-class", ((Class) p34).getName());
                                                            return v21;
                                                        }
                                                    } else {
                                                        v21 = this.getAnnotatedUnion(v26_1, p35);
                                                        return v21;
                                                    }
                                                }
                                                v21 = v22_0;
                                                return v21;
                                            } else {
                                                throw new com.flurry.org.apache.avro.AvroRuntimeException("Can\'t find element type of Collection");
                                            }
                                        } else {
                                            v21 = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.BYTES);
                                            return v21;
                                        }
                                    } else {
                                        v21 = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.STRING);
                                        return v21;
                                    }
                                } else {
                                    Class v5_0 = ((Class) p34).getComponentType();
                                    if (v5_0 != Byte.TYPE) {
                                        v21 = com.flurry.org.apache.avro.Schema.createArray(this.createSchema(v5_0, p35));
                                        this.setElement(v21, v5_0);
                                        return v21;
                                    } else {
                                        v21 = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.BYTES);
                                        return v21;
                                    }
                                }
                            } else {
                                v21 = super.createSchema(p34, p35);
                                return v21;
                            }
                        }
                    } else {
                        v21 = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.INT);
                        v21.addProp("java-class", Short.getName());
                        return v21;
                    }
                } else {
                    v21 = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.INT);
                    v21.addProp("java-class", Byte.getName());
                    return v21;
                }
            } else {
                Class v20_1 = ((Class) ((reflect.ParameterizedType) p34).getRawType());
                reflect.Type[] v18 = ((reflect.ParameterizedType) p34).getActualTypeArguments();
                if (!java.util.Map.isAssignableFrom(v20_1)) {
                    if (java.util.Collection.isAssignableFrom(v20_1)) {
                        if (v18.length == 1) {
                            com.flurry.org.apache.avro.Schema v22_1 = com.flurry.org.apache.avro.Schema.createArray(this.createSchema(v18[0], p35));
                            v22_1.addProp("java-class", v20_1.getName());
                            v21 = v22_1;
                        } else {
                            throw new com.flurry.org.apache.avro.AvroTypeException("No array type specified.");
                        }
                        return v21;
                    }
                } else {
                    reflect.Type v16 = v18[0];
                    if (v16 == String) {
                        v21 = com.flurry.org.apache.avro.Schema.createMap(this.createSchema(v18[1], p35));
                        return v21;
                    } else {
                        throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Map key class not String: ").append(v16).toString());
                    }
                }
            }
            v21 = super.createSchema(p34, p35);
        } else {
            Class v5_1 = ((reflect.GenericArrayType) p34).getGenericComponentType();
            if (v5_1 != Byte.TYPE) {
                v21 = com.flurry.org.apache.avro.Schema.createArray(this.createSchema(v5_1, p35));
                this.setElement(v21, v5_1);
            } else {
                v21 = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.BYTES);
            }
        }
        return v21;
    }

    public Class getClass(com.flurry.org.apache.avro.Schema p5)
    {
        Class v0;
        switch (com.flurry.org.apache.avro.reflect.ReflectData$1.$SwitchMap$org$apache$avro$Schema$Type[p5.getType().ordinal()]) {
            case 1:
                v0 = com.flurry.org.apache.avro.reflect.ReflectData.getClassProp(p5, "java-class");
                if (v0 != null) {
                } else {
                    v0 = reflect.Array.newInstance(this.getClass(p5.getElementType()), 0).getClass();
                }
                break;
            case 2:
                v0 = String;
                break;
            case 3:
                v0 = com.flurry.org.apache.avro.reflect.ReflectData.BYTES_CLASS;
                break;
            case 4:
                String v1 = p5.getProp("java-class");
                if (!Byte.getName().equals(v1)) {
                    if (!Short.getName().equals(v1)) {
                        v0 = super.getClass(p5);
                    } else {
                        v0 = Short.TYPE;
                    }
                } else {
                    v0 = Byte.TYPE;
                }
                break;
            default:
        }
        return v0;
    }

    public Object getField(Object p3, String p4, int p5)
    {
        com.flurry.org.apache.avro.AvroRuntimeException v1_2;
        if (!(p3 instanceof com.flurry.org.apache.avro.generic.IndexedRecord)) {
            try {
                v1_2 = com.flurry.org.apache.avro.reflect.ReflectData.getField(p3.getClass(), p4).get(p3);
            } catch (IllegalAccessException v0) {
                throw new com.flurry.org.apache.avro.AvroRuntimeException(v0);
            }
        } else {
            v1_2 = super.getField(p3, p4, p5);
        }
        return v1_2;
    }

    public com.flurry.org.apache.avro.Protocol getProtocol(Class p13)
    {
        com.flurry.org.apache.avro.Protocol$Message v9_0;
        String v10_0 = p13.getSimpleName();
        if (p13.getPackage() != null) {
            v9_0 = p13.getPackage().getName();
        } else {
            v9_0 = "";
        }
        com.flurry.org.apache.avro.Protocol v7_1 = new com.flurry.org.apache.avro.Protocol(v10_0, v9_0);
        java.util.LinkedHashMap v6_1 = new java.util.LinkedHashMap();
        java.util.Map v3 = v7_1.getMessages();
        reflect.Method[] v0 = p13.getMethods();
        int v2 = v0.length;
        int v1 = 0;
        while (v1 < v2) {
            reflect.Method v4 = v0[v1];
            if ((v4.getModifiers() & 8) == 0) {
                String v5 = v4.getName();
                if (!v3.containsKey(v5)) {
                    v3.put(v5, this.getMessage(v4, v7_1, v6_1));
                } else {
                    throw new com.flurry.org.apache.avro.AvroTypeException(new StringBuilder().append("Two methods with same name: ").append(v5).toString());
                }
            }
            v1++;
        }
        java.util.ArrayList v8_1 = new java.util.ArrayList();
        v8_1.addAll(v6_1.values());
        java.util.Collections.reverse(v8_1);
        v7_1.setTypes(v8_1);
        return v7_1;
    }

    protected com.flurry.org.apache.avro.Schema getRecordSchema(Object p2)
    {
        com.flurry.org.apache.avro.Schema v0_2;
        if (!(p2 instanceof com.flurry.org.apache.avro.generic.GenericContainer)) {
            v0_2 = this.getSchema(p2.getClass());
        } else {
            v0_2 = super.getRecordSchema(p2);
        }
        return v0_2;
    }

    protected boolean isArray(Object p3)
    {
        int v0 = 0;
        if ((p3 != null) && (((p3 instanceof java.util.Collection)) || (p3.getClass().isArray()))) {
            v0 = 1;
        }
        return v0;
    }

    protected boolean isBytes(Object p6)
    {
        int v1 = 1;
        if (p6 != null) {
            if (!super.isBytes(p6)) {
                Class v0 = p6.getClass();
                if ((!v0.isArray()) || (v0.getComponentType() != Byte.TYPE)) {
                    v1 = 0;
                }
            }
        } else {
            v1 = 0;
        }
        return v1;
    }

    protected boolean isRecord(Object p5)
    {
        int v0 = 1;
        int v1 = 0;
        if (p5 != null) {
            if (!super.isRecord(p5)) {
                if (!(p5 instanceof java.util.Collection)) {
                    if (this.getSchema(p5.getClass()).getType() != com.flurry.org.apache.avro.Schema$Type.RECORD) {
                        v0 = 0;
                    }
                    v1 = v0;
                }
            } else {
                v1 = 1;
            }
        }
        return v1;
    }

    public void setField(Object p3, String p4, int p5, Object p6)
    {
        if (!(p3 instanceof com.flurry.org.apache.avro.generic.IndexedRecord)) {
            try {
                com.flurry.org.apache.avro.reflect.ReflectData.getField(p3.getClass(), p4).set(p3, p6);
            } catch (IllegalAccessException v0) {
                throw new com.flurry.org.apache.avro.AvroRuntimeException(v0);
            }
        } else {
            super.setField(p3, p4, p5, p6);
        }
        return;
    }

    public boolean validate(com.flurry.org.apache.avro.Schema p5, Object p6)
    {
        int v2_2;
        switch (com.flurry.org.apache.avro.reflect.ReflectData$1.$SwitchMap$org$apache$avro$Schema$Type[p5.getType().ordinal()]) {
            case 1:
                if (p6.getClass().isArray()) {
                    int v1 = reflect.Array.getLength(p6);
                    int v0 = 0;
                    while (v0 < v1) {
                        if (this.validate(p5.getElementType(), reflect.Array.get(p6, v0))) {
                            v0++;
                        } else {
                            v2_2 = 0;
                        }
                    }
                    v2_2 = 1;
                } else {
                    v2_2 = super.validate(p5, p6);
                }
                break;
            default:
                v2_2 = super.validate(p5, p6);
        }
        return v2_2;
    }
}
