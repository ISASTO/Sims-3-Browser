package com.flurry.org.codehaus.jackson.map.ser;
public abstract class BasicSerializerFactory extends com.flurry.org.codehaus.jackson.map.SerializerFactory {
    protected static final java.util.HashMap _arraySerializers;
    protected static final java.util.HashMap _concrete;
    protected static final java.util.HashMap _concreteLazy;
    protected com.flurry.org.codehaus.jackson.map.ext.OptionalHandlerFactory optionalHandlers;

    static BasicSerializerFactory()
    {
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete = new java.util.HashMap();
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concreteLazy = new java.util.HashMap();
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(String.getName(), new com.flurry.org.codehaus.jackson.map.ser.std.StringSerializer());
        com.flurry.org.codehaus.jackson.map.ser.std.ToStringSerializer v6 = com.flurry.org.codehaus.jackson.map.ser.std.ToStringSerializer.instance;
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(StringBuffer.getName(), v6);
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(StringBuilder.getName(), v6);
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(Character.getName(), v6);
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(Character.TYPE.getName(), v6);
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(Boolean.TYPE.getName(), new com.flurry.org.codehaus.jackson.map.ser.StdSerializers$BooleanSerializer(1));
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(Boolean.getName(), new com.flurry.org.codehaus.jackson.map.ser.StdSerializers$BooleanSerializer(0));
        com.flurry.org.codehaus.jackson.map.ser.StdSerializers$IntegerSerializer v4_1 = new com.flurry.org.codehaus.jackson.map.ser.StdSerializers$IntegerSerializer();
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(Integer.getName(), v4_1);
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(Integer.TYPE.getName(), v4_1);
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(Long.getName(), com.flurry.org.codehaus.jackson.map.ser.StdSerializers$LongSerializer.instance);
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(Long.TYPE.getName(), com.flurry.org.codehaus.jackson.map.ser.StdSerializers$LongSerializer.instance);
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(Byte.getName(), com.flurry.org.codehaus.jackson.map.ser.StdSerializers$IntLikeSerializer.instance);
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(Byte.TYPE.getName(), com.flurry.org.codehaus.jackson.map.ser.StdSerializers$IntLikeSerializer.instance);
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(Short.getName(), com.flurry.org.codehaus.jackson.map.ser.StdSerializers$IntLikeSerializer.instance);
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(Short.TYPE.getName(), com.flurry.org.codehaus.jackson.map.ser.StdSerializers$IntLikeSerializer.instance);
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(Float.getName(), com.flurry.org.codehaus.jackson.map.ser.StdSerializers$FloatSerializer.instance);
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(Float.TYPE.getName(), com.flurry.org.codehaus.jackson.map.ser.StdSerializers$FloatSerializer.instance);
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(Double.getName(), com.flurry.org.codehaus.jackson.map.ser.StdSerializers$DoubleSerializer.instance);
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(Double.TYPE.getName(), com.flurry.org.codehaus.jackson.map.ser.StdSerializers$DoubleSerializer.instance);
        com.flurry.org.codehaus.jackson.map.ser.StdSerializers$NumberSerializer v5_1 = new com.flurry.org.codehaus.jackson.map.ser.StdSerializers$NumberSerializer();
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(java.math.BigInteger.getName(), v5_1);
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(java.math.BigDecimal.getName(), v5_1);
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(java.util.Calendar.getName(), com.flurry.org.codehaus.jackson.map.ser.std.CalendarSerializer.instance);
        com.flurry.org.codehaus.jackson.map.ser.std.DateSerializer v1 = com.flurry.org.codehaus.jackson.map.ser.std.DateSerializer.instance;
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(java.util.Date.getName(), v1);
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(java.sql.Timestamp.getName(), v1);
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(java.sql.Date.getName(), new com.flurry.org.codehaus.jackson.map.ser.StdSerializers$SqlDateSerializer());
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(java.sql.Time.getName(), new com.flurry.org.codehaus.jackson.map.ser.StdSerializers$SqlTimeSerializer());
        java.util.Iterator v3 = new com.flurry.org.codehaus.jackson.map.ser.std.StdJdkSerializers().provide().iterator();
        while (v3.hasNext()) {
            java.util.Map$Entry v2_1 = ((java.util.Map$Entry) v3.next());
            com.flurry.org.codehaus.jackson.map.JsonSerializer v7_0 = v2_1.getValue();
            if (!(v7_0 instanceof com.flurry.org.codehaus.jackson.map.JsonSerializer)) {
                if (!(v7_0 instanceof Class)) {
                    throw new IllegalStateException(new StringBuilder().append("Internal error: unrecognized value of type ").append(v2_1.getClass().getName()).toString());
                } else {
                    com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concreteLazy.put(((Class) v2_1.getKey()).getName(), ((Class) v7_0));
                }
            } else {
                com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.put(((Class) v2_1.getKey()).getName(), ((com.flurry.org.codehaus.jackson.map.JsonSerializer) v7_0));
            }
        }
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concreteLazy.put(com.flurry.org.codehaus.jackson.util.TokenBuffer.getName(), com.flurry.org.codehaus.jackson.map.ser.std.TokenBufferSerializer);
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._arraySerializers = new java.util.HashMap();
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._arraySerializers.put(boolean[].getName(), new com.flurry.org.codehaus.jackson.map.ser.std.StdArraySerializers$BooleanArraySerializer());
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._arraySerializers.put(byte[].getName(), new com.flurry.org.codehaus.jackson.map.ser.std.StdArraySerializers$ByteArraySerializer());
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._arraySerializers.put(char[].getName(), new com.flurry.org.codehaus.jackson.map.ser.std.StdArraySerializers$CharArraySerializer());
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._arraySerializers.put(short[].getName(), new com.flurry.org.codehaus.jackson.map.ser.std.StdArraySerializers$ShortArraySerializer());
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._arraySerializers.put(int[].getName(), new com.flurry.org.codehaus.jackson.map.ser.std.StdArraySerializers$IntArraySerializer());
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._arraySerializers.put(long[].getName(), new com.flurry.org.codehaus.jackson.map.ser.std.StdArraySerializers$LongArraySerializer());
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._arraySerializers.put(float[].getName(), new com.flurry.org.codehaus.jackson.map.ser.std.StdArraySerializers$FloatArraySerializer());
        com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._arraySerializers.put(double[].getName(), new com.flurry.org.codehaus.jackson.map.ser.std.StdArraySerializers$DoubleArraySerializer());
        return;
    }

    protected BasicSerializerFactory()
    {
        this.optionalHandlers = com.flurry.org.codehaus.jackson.map.ext.OptionalHandlerFactory.instance;
        return;
    }

    protected static com.flurry.org.codehaus.jackson.map.JsonSerializer findContentSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p3, com.flurry.org.codehaus.jackson.map.introspect.Annotated p4, com.flurry.org.codehaus.jackson.map.BeanProperty p5)
    {
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v0 = p3.getAnnotationIntrospector();
        Class v1 = v0.findContentSerializer(p4);
        if (((v1 == null) || (v1 == com.flurry.org.codehaus.jackson.map.JsonSerializer$None)) && (p5 != null)) {
            v1 = v0.findContentSerializer(p5.getMember());
        }
        if ((v1 == null) || (v1 == com.flurry.org.codehaus.jackson.map.JsonSerializer$None)) {
            com.flurry.org.codehaus.jackson.map.JsonSerializer v2_1 = 0;
        } else {
            v2_1 = p3.serializerInstance(p4, v1);
        }
        return v2_1;
    }

    protected static com.flurry.org.codehaus.jackson.map.JsonSerializer findKeySerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p3, com.flurry.org.codehaus.jackson.map.introspect.Annotated p4, com.flurry.org.codehaus.jackson.map.BeanProperty p5)
    {
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v0 = p3.getAnnotationIntrospector();
        Class v1 = v0.findKeySerializer(p4);
        if (((v1 == null) || (v1 == com.flurry.org.codehaus.jackson.map.JsonSerializer$None)) && (p5 != null)) {
            v1 = v0.findKeySerializer(p5.getMember());
        }
        if ((v1 == null) || (v1 == com.flurry.org.codehaus.jackson.map.JsonSerializer$None)) {
            com.flurry.org.codehaus.jackson.map.JsonSerializer v2_1 = 0;
        } else {
            v2_1 = p3.serializerInstance(p4, v1);
        }
        return v2_1;
    }

    protected static com.flurry.org.codehaus.jackson.type.JavaType modifySecondaryTypesByAnnotation(com.flurry.org.codehaus.jackson.map.SerializationConfig p8, com.flurry.org.codehaus.jackson.map.introspect.Annotated p9, com.flurry.org.codehaus.jackson.type.JavaType p10)
    {
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v3 = p8.getAnnotationIntrospector();
        if (p10.isContainerType()) {
            Class v4 = v3.findSerializationKeyType(p9, p10.getKeyType());
            if (v4 != null) {
                if ((p10 instanceof com.flurry.org.codehaus.jackson.map.type.MapType)) {
                    try {
                        p10 = ((com.flurry.org.codehaus.jackson.map.type.MapType) p10).widenKey(v4);
                    } catch (IllegalArgumentException v2_0) {
                        throw new IllegalArgumentException(new StringBuilder().append("Failed to narrow key type ").append(p10).append(" with key-type annotation (").append(v4.getName()).append("): ").append(v2_0.getMessage()).toString());
                    }
                } else {
                    throw new IllegalArgumentException(new StringBuilder().append("Illegal key-type annotation: type ").append(p10).append(" is not a Map type").toString());
                }
            }
            Class v1 = v3.findSerializationContentType(p9, p10.getContentType());
            if (v1 != null) {
                try {
                    p10 = p10.widenContentsBy(v1);
                } catch (IllegalArgumentException v2_1) {
                    throw new IllegalArgumentException(new StringBuilder().append("Failed to narrow content type ").append(p10).append(" with content-type annotation (").append(v1.getName()).append("): ").append(v2_1.getMessage()).toString());
                }
            }
        }
        return p10;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonSerializer buildArraySerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p9, com.flurry.org.codehaus.jackson.map.type.ArrayType p10, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p11, com.flurry.org.codehaus.jackson.map.BeanProperty p12, boolean p13, com.flurry.org.codehaus.jackson.map.TypeSerializer p14, com.flurry.org.codehaus.jackson.map.JsonSerializer p15)
    {
        com.flurry.org.codehaus.jackson.map.ser.std.ObjectArraySerializer v7_0;
        Class v6 = p10.getRawClass();
        if (String[] != v6) {
            v7_0 = ((com.flurry.org.codehaus.jackson.map.JsonSerializer) com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._arraySerializers.get(v6.getName()));
            if (v7_0 == null) {
                v7_0 = new com.flurry.org.codehaus.jackson.map.ser.std.ObjectArraySerializer(p10.getContentType(), p13, p14, p12, p15);
            }
        } else {
            v7_0 = new com.flurry.org.codehaus.jackson.map.ser.std.StdArraySerializers$StringArraySerializer(p12);
        }
        return v7_0;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonSerializer buildCollectionLikeSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p10, com.flurry.org.codehaus.jackson.map.type.CollectionLikeType p11, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p12, com.flurry.org.codehaus.jackson.map.BeanProperty p13, boolean p14, com.flurry.org.codehaus.jackson.map.TypeSerializer p15, com.flurry.org.codehaus.jackson.map.JsonSerializer p16)
    {
        java.util.Iterator v7 = this.customSerializers().iterator();
        while (v7.hasNext()) {
            int v8 = ((com.flurry.org.codehaus.jackson.map.Serializers) v7.next()).findCollectionLikeSerializer(p10, p11, p12, p13, p15, p16);
            if (v8 != 0) {
            }
            return v8;
        }
        v8 = 0;
        return v8;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonSerializer buildCollectionSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p16, com.flurry.org.codehaus.jackson.map.type.CollectionType p17, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p18, com.flurry.org.codehaus.jackson.map.BeanProperty p19, boolean p20, com.flurry.org.codehaus.jackson.map.TypeSerializer p21, com.flurry.org.codehaus.jackson.map.JsonSerializer p22)
    {
        java.util.Iterator v12 = this.customSerializers().iterator();
        while (v12.hasNext()) {
            com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase v14_0 = ((com.flurry.org.codehaus.jackson.map.Serializers) v12.next()).findCollectionSerializer(p16, p17, p18, p19, p21, p22);
            if (v14_0 != null) {
            }
            return v14_0;
        }
        Class v13 = p17.getRawClass();
        if (!java.util.EnumSet.isAssignableFrom(v13)) {
            Class v11 = p17.getContentType().getRawClass();
            if (!this.isIndexedList(v13)) {
                if (v11 != String) {
                    v14_0 = com.flurry.org.codehaus.jackson.map.ser.std.StdContainerSerializers.collectionSerializer(p17.getContentType(), p20, p21, p19, p22);
                } else {
                    v14_0 = new com.flurry.org.codehaus.jackson.map.ser.std.StringCollectionSerializer(p19);
                }
            } else {
                if (v11 != String) {
                    v14_0 = com.flurry.org.codehaus.jackson.map.ser.std.StdContainerSerializers.indexedListSerializer(p17.getContentType(), p20, p21, p19, p22);
                } else {
                    v14_0 = new com.flurry.org.codehaus.jackson.map.ser.std.IndexedStringListSerializer(p19);
                }
            }
        } else {
            v14_0 = this.buildEnumSetSerializer(p16, p17, p18, p19, p20, p21, p22);
        }
        return v14_0;
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer buildContainerSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p26, com.flurry.org.codehaus.jackson.type.JavaType p27, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p28, com.flurry.org.codehaus.jackson.map.BeanProperty p29, boolean p30)
    {
        com.flurry.org.codehaus.jackson.map.TypeSerializer v11 = this.createTypeSerializer(p26, p27.getContentType(), p29);
        if (v11 == null) {
            if (!p30) {
                p30 = this.usesStaticTyping(p26, p28, v11, p29);
            }
        } else {
            p30 = 0;
        }
        int v4_4;
        com.flurry.org.codehaus.jackson.map.JsonSerializer v12 = com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory.findContentSerializer(p26, p28.getClassInfo(), p29);
        if (!p27.isMapLikeType()) {
            if (!p27.isCollectionLikeType()) {
                if (!p27.isArrayType()) {
                    v4_4 = 0;
                } else {
                    v4_4 = this.buildArraySerializer(p26, ((com.flurry.org.codehaus.jackson.map.type.ArrayType) p27), p28, p29, p30, v11, v12);
                }
            } else {
                if (!((com.flurry.org.codehaus.jackson.map.type.CollectionLikeType) p27).isTrueCollectionType()) {
                    v4_4 = this.buildCollectionLikeSerializer(p26, ((com.flurry.org.codehaus.jackson.map.type.CollectionLikeType) p27), p28, p29, p30, v11, v12);
                } else {
                    v4_4 = this.buildCollectionSerializer(p26, ((com.flurry.org.codehaus.jackson.map.type.CollectionType) ((com.flurry.org.codehaus.jackson.map.type.CollectionLikeType) p27)), p28, p29, p30, v11, v12);
                }
            }
        } else {
            com.flurry.org.codehaus.jackson.map.JsonSerializer v10 = com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory.findKeySerializer(p26, p28.getClassInfo(), p29);
            if (!((com.flurry.org.codehaus.jackson.map.type.MapLikeType) p27).isTrueMapType()) {
                v4_4 = this.buildMapLikeSerializer(p26, ((com.flurry.org.codehaus.jackson.map.type.MapLikeType) p27), p28, p29, p30, v10, v11, v12);
            } else {
                v4_4 = this.buildMapSerializer(p26, ((com.flurry.org.codehaus.jackson.map.type.MapType) ((com.flurry.org.codehaus.jackson.map.type.MapLikeType) p27)), p28, p29, p30, v10, v11, v12);
            }
        }
        return v4_4;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonSerializer buildEnumMapSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p10, com.flurry.org.codehaus.jackson.type.JavaType p11, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p12, com.flurry.org.codehaus.jackson.map.BeanProperty p13, boolean p14, com.flurry.org.codehaus.jackson.map.TypeSerializer p15, com.flurry.org.codehaus.jackson.map.JsonSerializer p16)
    {
        com.flurry.org.codehaus.jackson.type.JavaType v8 = p11.getKeyType();
        com.flurry.org.codehaus.jackson.map.util.EnumValues v3 = 0;
        if (v8.isEnumType()) {
            v3 = com.flurry.org.codehaus.jackson.map.util.EnumValues.construct(v8.getRawClass(), p10.getAnnotationIntrospector());
        }
        return new com.flurry.org.codehaus.jackson.map.ser.std.EnumMapSerializer(p11.getContentType(), p14, v3, p15, p13, p16);
    }

    protected com.flurry.org.codehaus.jackson.map.JsonSerializer buildEnumSetSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p3, com.flurry.org.codehaus.jackson.type.JavaType p4, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p5, com.flurry.org.codehaus.jackson.map.BeanProperty p6, boolean p7, com.flurry.org.codehaus.jackson.map.TypeSerializer p8, com.flurry.org.codehaus.jackson.map.JsonSerializer p9)
    {
        int v0 = p4.getContentType();
        if (!v0.isEnumType()) {
            v0 = 0;
        }
        return com.flurry.org.codehaus.jackson.map.ser.std.StdContainerSerializers.enumSetSerializer(v0, p6);
    }

    protected com.flurry.org.codehaus.jackson.map.JsonSerializer buildIterableSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p4, com.flurry.org.codehaus.jackson.type.JavaType p5, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p6, com.flurry.org.codehaus.jackson.map.BeanProperty p7, boolean p8)
    {
        com.flurry.org.codehaus.jackson.type.JavaType v0 = p5.containedType(0);
        if (v0 == null) {
            v0 = com.flurry.org.codehaus.jackson.map.type.TypeFactory.unknownType();
        }
        com.flurry.org.codehaus.jackson.map.TypeSerializer v1 = this.createTypeSerializer(p4, v0, p7);
        return com.flurry.org.codehaus.jackson.map.ser.std.StdContainerSerializers.iterableSerializer(v0, this.usesStaticTyping(p4, p6, v1, p7), v1, p7);
    }

    protected com.flurry.org.codehaus.jackson.map.JsonSerializer buildIteratorSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p4, com.flurry.org.codehaus.jackson.type.JavaType p5, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p6, com.flurry.org.codehaus.jackson.map.BeanProperty p7, boolean p8)
    {
        com.flurry.org.codehaus.jackson.type.JavaType v0 = p5.containedType(0);
        if (v0 == null) {
            v0 = com.flurry.org.codehaus.jackson.map.type.TypeFactory.unknownType();
        }
        com.flurry.org.codehaus.jackson.map.TypeSerializer v1 = this.createTypeSerializer(p4, v0, p7);
        return com.flurry.org.codehaus.jackson.map.ser.std.StdContainerSerializers.iteratorSerializer(v0, this.usesStaticTyping(p4, p6, v1, p7), v1, p7);
    }

    protected com.flurry.org.codehaus.jackson.map.JsonSerializer buildMapLikeSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p11, com.flurry.org.codehaus.jackson.map.type.MapLikeType p12, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p13, com.flurry.org.codehaus.jackson.map.BeanProperty p14, boolean p15, com.flurry.org.codehaus.jackson.map.JsonSerializer p16, com.flurry.org.codehaus.jackson.map.TypeSerializer p17, com.flurry.org.codehaus.jackson.map.JsonSerializer p18)
    {
        java.util.Iterator v8 = this.customSerializers().iterator();
        while (v8.hasNext()) {
            int v9 = ((com.flurry.org.codehaus.jackson.map.Serializers) v8.next()).findMapLikeSerializer(p11, p12, p13, p14, p16, p17, p18);
            if (v9 != 0) {
            }
            return v9;
        }
        v9 = 0;
        return v9;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonSerializer buildMapSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p12, com.flurry.org.codehaus.jackson.map.type.MapType p13, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p14, com.flurry.org.codehaus.jackson.map.BeanProperty p15, boolean p16, com.flurry.org.codehaus.jackson.map.JsonSerializer p17, com.flurry.org.codehaus.jackson.map.TypeSerializer p18, com.flurry.org.codehaus.jackson.map.JsonSerializer p19)
    {
        java.util.Iterator v9 = this.customSerializers().iterator();
        while (v9.hasNext()) {
            com.flurry.org.codehaus.jackson.map.ser.std.MapSerializer v10 = ((com.flurry.org.codehaus.jackson.map.Serializers) v9.next()).findMapSerializer(p12, p13, p14, p15, p17, p18, p19);
            if (v10 != null) {
            }
            return v10;
        }
        if (!java.util.EnumMap.isAssignableFrom(p13.getRawClass())) {
            v10 = com.flurry.org.codehaus.jackson.map.ser.std.MapSerializer.construct(p12.getAnnotationIntrospector().findPropertiesToIgnore(p14.getClassInfo()), p13, p16, p18, p15, p17, p19);
        } else {
            v10 = this.buildEnumMapSerializer(p12, p13, p14, p15, p16, p18, p19);
        }
        return v10;
    }

    public abstract com.flurry.org.codehaus.jackson.map.JsonSerializer createSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p0, com.flurry.org.codehaus.jackson.type.JavaType p1, com.flurry.org.codehaus.jackson.map.BeanProperty p2);

    public com.flurry.org.codehaus.jackson.map.TypeSerializer createTypeSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p7, com.flurry.org.codehaus.jackson.type.JavaType p8, com.flurry.org.codehaus.jackson.map.BeanProperty p9)
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass v0 = ((com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription) p7.introspectClassAnnotations(p8.getRawClass())).getClassInfo();
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v1 = p7.getAnnotationIntrospector();
        com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder v2 = v1.findTypeResolver(p7, v0, p8);
        java.util.Collection v4 = 0;
        if (v2 != null) {
            v4 = p7.getSubtypeResolver().collectAndResolveSubtypes(v0, p7, v1);
        } else {
            v2 = p7.getDefaultTyper(p8);
        }
        com.flurry.org.codehaus.jackson.map.TypeSerializer v5_2;
        if (v2 != null) {
            v5_2 = v2.buildTypeSerializer(p7, p8, v4, p9);
        } else {
            v5_2 = 0;
        }
        return v5_2;
    }

    protected abstract Iterable customSerializers();

    public final com.flurry.org.codehaus.jackson.map.JsonSerializer findSerializerByAddonType(com.flurry.org.codehaus.jackson.map.SerializationConfig p3, com.flurry.org.codehaus.jackson.type.JavaType p4, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p5, com.flurry.org.codehaus.jackson.map.BeanProperty p6, boolean p7)
    {
        int v1_2;
        Class v0 = p4.getRawClass();
        if (!java.util.Iterator.isAssignableFrom(v0)) {
            if (!Iterable.isAssignableFrom(v0)) {
                if (!CharSequence.isAssignableFrom(v0)) {
                    v1_2 = 0;
                } else {
                    v1_2 = com.flurry.org.codehaus.jackson.map.ser.std.ToStringSerializer.instance;
                }
            } else {
                v1_2 = this.buildIterableSerializer(p3, p4, p5, p6, p7);
            }
        } else {
            v1_2 = this.buildIteratorSerializer(p3, p4, p5, p6, p7);
        }
        return v1_2;
    }

    public final com.flurry.org.codehaus.jackson.map.JsonSerializer findSerializerByLookup(com.flurry.org.codehaus.jackson.type.JavaType p9, com.flurry.org.codehaus.jackson.map.SerializationConfig p10, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p11, com.flurry.org.codehaus.jackson.map.BeanProperty p12, boolean p13)
    {
        String v0 = p9.getRawClass().getName();
        int v3_0 = ((com.flurry.org.codehaus.jackson.map.JsonSerializer) com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concrete.get(v0));
        if (v3_0 == 0) {
            Class v4_1 = ((Class) com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory._concreteLazy.get(v0));
            if (v4_1 == null) {
                v3_0 = 0;
            } else {
                try {
                    v3_0 = ((com.flurry.org.codehaus.jackson.map.JsonSerializer) v4_1.newInstance());
                } catch (Exception v1) {
                    throw new IllegalStateException(new StringBuilder().append("Failed to instantiate standard serializer (of type ").append(v4_1.getName()).append("): ").append(v1.getMessage()).toString(), v1);
                }
            }
        }
        return v3_0;
    }

    public final com.flurry.org.codehaus.jackson.map.JsonSerializer findSerializerByPrimaryType(com.flurry.org.codehaus.jackson.type.JavaType p8, com.flurry.org.codehaus.jackson.map.SerializationConfig p9, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p10, com.flurry.org.codehaus.jackson.map.BeanProperty p11, boolean p12)
    {
        int v3_0;
        Class v2 = p8.getRawClass();
        if (!com.flurry.org.codehaus.jackson.map.JsonSerializable.isAssignableFrom(v2)) {
            com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v5 = p10.findJsonValueMethod();
            if (v5 == null) {
                if (!java.net.InetAddress.isAssignableFrom(v2)) {
                    if (!java.util.TimeZone.isAssignableFrom(v2)) {
                        if (!java.nio.charset.Charset.isAssignableFrom(v2)) {
                            v3_0 = this.optionalHandlers.findSerializer(p9, p8);
                            if (v3_0 == 0) {
                                if (!Number.isAssignableFrom(v2)) {
                                    if (!Enum.isAssignableFrom(v2)) {
                                        if (!java.util.Calendar.isAssignableFrom(v2)) {
                                            if (!java.util.Date.isAssignableFrom(v2)) {
                                                v3_0 = 0;
                                            } else {
                                                v3_0 = com.flurry.org.codehaus.jackson.map.ser.std.DateSerializer.instance;
                                            }
                                        } else {
                                            v3_0 = com.flurry.org.codehaus.jackson.map.ser.std.CalendarSerializer.instance;
                                        }
                                    } else {
                                        v3_0 = com.flurry.org.codehaus.jackson.map.ser.std.EnumSerializer.construct(v2, p9, p10);
                                    }
                                } else {
                                    v3_0 = com.flurry.org.codehaus.jackson.map.ser.StdSerializers$NumberSerializer.instance;
                                }
                            }
                        } else {
                            v3_0 = com.flurry.org.codehaus.jackson.map.ser.std.ToStringSerializer.instance;
                        }
                    } else {
                        v3_0 = com.flurry.org.codehaus.jackson.map.ser.std.TimeZoneSerializer.instance;
                    }
                } else {
                    v3_0 = com.flurry.org.codehaus.jackson.map.ser.std.InetAddressSerializer.instance;
                }
            } else {
                reflect.Method v1 = v5.getAnnotated();
                if (p9.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.CAN_OVERRIDE_ACCESS_MODIFIERS)) {
                    com.flurry.org.codehaus.jackson.map.util.ClassUtil.checkAndFixAccess(v1);
                }
                v3_0 = new com.flurry.org.codehaus.jackson.map.ser.std.JsonValueSerializer(v1, this.findSerializerFromAnnotation(p9, v5, p11), p11);
            }
        } else {
            if (!com.flurry.org.codehaus.jackson.map.JsonSerializableWithType.isAssignableFrom(v2)) {
                v3_0 = com.flurry.org.codehaus.jackson.map.ser.std.SerializableSerializer.instance;
            } else {
                v3_0 = com.flurry.org.codehaus.jackson.map.ser.std.SerializableWithTypeSerializer.instance;
            }
        }
        return v3_0;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonSerializer findSerializerFromAnnotation(com.flurry.org.codehaus.jackson.map.SerializationConfig p7, com.flurry.org.codehaus.jackson.map.introspect.Annotated p8, com.flurry.org.codehaus.jackson.map.BeanProperty p9)
    {
        com.flurry.org.codehaus.jackson.map.JsonSerializer v1_0;
        Object v2 = p7.getAnnotationIntrospector().findSerializer(p8);
        if (v2 != null) {
            if (!(v2 instanceof com.flurry.org.codehaus.jackson.map.JsonSerializer)) {
                if ((v2 instanceof Class)) {
                    Class v0_0 = ((Class) v2);
                    if (com.flurry.org.codehaus.jackson.map.JsonSerializer.isAssignableFrom(v0_0)) {
                        v1_0 = p7.serializerInstance(p8, v0_0);
                        if ((v1_0 instanceof com.flurry.org.codehaus.jackson.map.ContextualSerializer)) {
                            v1_0 = ((com.flurry.org.codehaus.jackson.map.ContextualSerializer) v1_0).createContextual(p7, p9);
                        }
                    } else {
                        throw new IllegalStateException(new StringBuilder().append("AnnotationIntrospector returned Class ").append(v0_0.getName()).append("; expected Class<JsonSerializer>").toString());
                    }
                } else {
                    throw new IllegalStateException(new StringBuilder().append("AnnotationIntrospector returned value of type ").append(v2.getClass().getName()).append("; expected type JsonSerializer or Class<JsonSerializer> instead").toString());
                }
            } else {
                v1_0 = ((com.flurry.org.codehaus.jackson.map.JsonSerializer) v2);
                if ((v1_0 instanceof com.flurry.org.codehaus.jackson.map.ContextualSerializer)) {
                    v1_0 = ((com.flurry.org.codehaus.jackson.map.ContextualSerializer) v1_0).createContextual(p7, p9);
                }
            }
        } else {
            v1_0 = 0;
        }
        return v1_0;
    }

    public final com.flurry.org.codehaus.jackson.map.JsonSerializer getNullSerializer()
    {
        return com.flurry.org.codehaus.jackson.map.ser.std.NullSerializer.instance;
    }

    protected boolean isIndexedList(Class p2)
    {
        return java.util.RandomAccess.isAssignableFrom(p2);
    }

    protected com.flurry.org.codehaus.jackson.type.JavaType modifyTypeByAnnotation(com.flurry.org.codehaus.jackson.map.SerializationConfig p6, com.flurry.org.codehaus.jackson.map.introspect.Annotated p7, com.flurry.org.codehaus.jackson.type.JavaType p8)
    {
        Class v1 = p6.getAnnotationIntrospector().findSerializationType(p7);
        if (v1 != null) {
            try {
                p8 = p8.widenBy(v1);
            } catch (IllegalArgumentException v0) {
                throw new IllegalArgumentException(new StringBuilder().append("Failed to widen type ").append(p8).append(" with concrete-type annotation (value ").append(v1.getName()).append("), method \'").append(p7.getName()).append("\': ").append(v0.getMessage()).toString());
            }
        }
        return com.flurry.org.codehaus.jackson.map.ser.BasicSerializerFactory.modifySecondaryTypesByAnnotation(p6, p7, p8);
    }

    protected boolean usesStaticTyping(com.flurry.org.codehaus.jackson.map.SerializationConfig p8, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p9, com.flurry.org.codehaus.jackson.map.TypeSerializer p10, com.flurry.org.codehaus.jackson.map.BeanProperty p11)
    {
        int v3 = 0;
        if (p10 == null) {
            com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v0 = p8.getAnnotationIntrospector();
            com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing v1 = v0.findSerializationTyping(p9.getClassInfo());
            if (v1 == null) {
                if (p8.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.USE_STATIC_TYPING)) {
                    v3 = 1;
                    return v3;
                }
            } else {
                if (v1 == com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing.STATIC) {
                    v3 = 1;
                    return v3;
                }
            }
            if (p11 != null) {
                com.flurry.org.codehaus.jackson.type.JavaType v2 = p11.getType();
                if (v2.isContainerType()) {
                    if (v0.findSerializationContentType(p11.getMember(), p11.getType()) == null) {
                        if (((v2 instanceof com.flurry.org.codehaus.jackson.map.type.MapType)) && (v0.findSerializationKeyType(p11.getMember(), p11.getType()) != null)) {
                            v3 = 1;
                        }
                    } else {
                        v3 = 1;
                    }
                }
            }
        }
        return v3;
    }
}
