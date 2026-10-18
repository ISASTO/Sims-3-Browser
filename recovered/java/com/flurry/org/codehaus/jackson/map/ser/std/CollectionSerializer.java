package com.flurry.org.codehaus.jackson.map.ser.std;
public class CollectionSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.AsArraySerializerBase {

    public CollectionSerializer(com.flurry.org.codehaus.jackson.type.JavaType p8, boolean p9, com.flurry.org.codehaus.jackson.map.TypeSerializer p10, com.flurry.org.codehaus.jackson.map.BeanProperty p11, com.flurry.org.codehaus.jackson.map.JsonSerializer p12)
    {
        super(java.util.Collection, p8, p9, p10, p11, p12);
        return;
    }

    public com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase _withValueTypeSerializer(com.flurry.org.codehaus.jackson.map.TypeSerializer p7)
    {
        return new com.flurry.org.codehaus.jackson.map.ser.std.CollectionSerializer(this._elementType, this._staticTyping, p7, this._property, this._elementSerializer);
    }

    public bridge synthetic void serializeContents(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serializeContents(((java.util.Collection) p1), p2, p3);
        return;
    }

    public void serializeContents(java.util.Collection p10, com.flurry.org.codehaus.jackson.JsonGenerator p11, com.flurry.org.codehaus.jackson.map.SerializerProvider p12)
    {
        if (this._elementSerializer == null) {
            java.util.Iterator v4 = p10.iterator();
            if (v4.hasNext()) {
                com.flurry.org.codehaus.jackson.map.ser.impl.PropertySerializerMap v6 = this._dynamicSerializers;
                com.flurry.org.codehaus.jackson.map.TypeSerializer v7 = this._valueTypeSerializer;
                int v3 = 0;
                try {
                    do {
                        Object v2 = v4.next();
                    } while(v4.hasNext());
                } catch (Exception v1) {
                    this.wrapAndThrow(p12, v1, p10, v3);
                }
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
                    if (v7 != null) {
                        v5.serializeWithType(v2, p11, p12, v7);
                    } else {
                        v5.serialize(v2, p11, p12);
                    }
                } else {
                    p12.defaultSerializeNull(p11);
                }
                v3++;
                if (!v4.hasNext()) {
                }
            }
        } else {
            this.serializeContentsUsing(p10, p11, p12, this._elementSerializer);
        }
        return;
    }

    public void serializeContentsUsing(java.util.Collection p7, com.flurry.org.codehaus.jackson.JsonGenerator p8, com.flurry.org.codehaus.jackson.map.SerializerProvider p9, com.flurry.org.codehaus.jackson.map.JsonSerializer p10)
    {
        java.util.Iterator v3 = p7.iterator();
        if (v3.hasNext()) {
            com.flurry.org.codehaus.jackson.map.TypeSerializer v4 = this._valueTypeSerializer;
            int v2 = 0;
            do {
                Object v1 = v3.next();
                if (v1 != null) {
                    if (v4 != null) {
                        p10.serializeWithType(v1, p8, p9, v4);
                        v2++;
                    } else {
                        p10.serialize(v1, p8, p9);
                    }
                } else {
                    p9.defaultSerializeNull(p8);
                }
            } while(v3.hasNext());
        }
        return;
    }
}
