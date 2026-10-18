package com.flurry.org.codehaus.jackson.map.ser.std;
public class StdContainerSerializers$IndexedListSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.AsArraySerializerBase {

    public StdContainerSerializers$IndexedListSerializer(com.flurry.org.codehaus.jackson.type.JavaType p8, boolean p9, com.flurry.org.codehaus.jackson.map.TypeSerializer p10, com.flurry.org.codehaus.jackson.map.BeanProperty p11, com.flurry.org.codehaus.jackson.map.JsonSerializer p12)
    {
        super(java.util.List, p8, p9, p10, p11, p12);
        return;
    }

    public com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase _withValueTypeSerializer(com.flurry.org.codehaus.jackson.map.TypeSerializer p7)
    {
        return new com.flurry.org.codehaus.jackson.map.ser.std.StdContainerSerializers$IndexedListSerializer(this._elementType, this._staticTyping, p7, this._property, this._elementSerializer);
    }

    public bridge synthetic void serializeContents(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serializeContents(((java.util.List) p1), p2, p3);
        return;
    }

    public void serializeContents(java.util.List p9, com.flurry.org.codehaus.jackson.JsonGenerator p10, com.flurry.org.codehaus.jackson.map.SerializerProvider p11)
    {
        if (this._elementSerializer == null) {
            if (this._valueTypeSerializer == null) {
                int v4 = p9.size();
                if (v4 != 0) {
                    int v3 = 0;
                    try {
                        com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap v6 = this._dynamicSerializers;
                    } catch (Exception v1) {
                        this.wrapAndThrow(p11, v1, p9, v3);
                    }
                    while (v3 < v4) {
                        Object v2 = p9.get(v3);
                        if (v2 != null) {
                            Class v0 = v2.getClass();
                            com.flurry.org.codehaus.jackson.map.JsonSerializer v5 = v6.serializerFor(v0);
                            if (v5 == null) {
                                if (!this._elementType.hasGenericTypes()) {
                                    v5 = this._findAndAddDynamic(v6, v0, p11);
                                } else {
                                    v5 = this._findAndAddDynamic(v6, p11.constructSpecializedType(this._elementType, v0), p11);
                                }
                                v6 = this._dynamicSerializers;
                            }
                            v5.serialize(v2, p10, p11);
                        } else {
                            p11.defaultSerializeNull(p10);
                        }
                        v3++;
                    }
                }
            } else {
                this.serializeTypedContents(p9, p10, p11);
            }
        } else {
            this.serializeContentsUsing(p9, p10, p11, this._elementSerializer);
        }
        return;
    }

    public void serializeContentsUsing(java.util.List p6, com.flurry.org.codehaus.jackson.JsonGenerator p7, com.flurry.org.codehaus.jackson.map.SerializerProvider p8, com.flurry.org.codehaus.jackson.map.JsonSerializer p9)
    {
        int v3 = p6.size();
        if (v3 != 0) {
            com.flurry.org.codehaus.jackson.map.TypeSerializer v4 = this._valueTypeSerializer;
            int v2 = 0;
            while (v2 < v3) {
                Object v1 = p6.get(v2);
                try {
                    if (v1 != null) {
                        if (v4 != null) {
                            p9.serializeWithType(v1, p7, p8, v4);
                        } else {
                            p9.serialize(v1, p7, p8);
                        }
                    } else {
                        p8.defaultSerializeNull(p7);
                    }
                    v2++;
                } catch (Exception v0) {
                    this.wrapAndThrow(p8, v0, p6, v2);
                }
            }
        }
        return;
    }

    public void serializeTypedContents(java.util.List p10, com.flurry.org.codehaus.jackson.JsonGenerator p11, com.flurry.org.codehaus.jackson.map.SerializerProvider p12)
    {
        int v4 = p10.size();
        if (v4 != 0) {
            int v3 = 0;
            try {
                com.flurry.org.codehaus.jackson.map.TypeSerializer v7 = this._valueTypeSerializer;
                com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap v6 = this._dynamicSerializers;
            } catch (Exception v1) {
                this.wrapAndThrow(p12, v1, p10, v3);
            }
            while (v3 < v4) {
                Object v2 = p10.get(v3);
                if (v2 != null) {
                    Class v0 = v2.getClass();
                    com.flurry.org.codehaus.jackson.map.JsonSerializer v5 = v6.serializerFor(v0);
                    if (v5 == null) {
                        if (!this._elementType.hasGenericTypes()) {
                            v5 = this._findAndAddDynamic(v6, v0, p12);
                        } else {
                            v5 = this._findAndAddDynamic(v6, p12.constructSpecializedType(this._elementType, v0), p12);
                        }
                        v6 = this._dynamicSerializers;
                    }
                    v5.serializeWithType(v2, p11, p12, v7);
                } else {
                    p12.defaultSerializeNull(p11);
                }
                v3++;
            }
        }
        return;
    }
}
