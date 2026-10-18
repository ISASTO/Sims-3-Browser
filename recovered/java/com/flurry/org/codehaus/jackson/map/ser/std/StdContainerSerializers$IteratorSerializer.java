package com.flurry.org.codehaus.jackson.map.ser.std;
public class StdContainerSerializers$IteratorSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.AsArraySerializerBase {

    public StdContainerSerializers$IteratorSerializer(com.flurry.org.codehaus.jackson.type.JavaType p8, boolean p9, com.flurry.org.codehaus.jackson.map.TypeSerializer p10, com.flurry.org.codehaus.jackson.map.BeanProperty p11)
    {
        super(java.util.Iterator, p8, p9, p10, p11, 0);
        return;
    }

    public com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase _withValueTypeSerializer(com.flurry.org.codehaus.jackson.map.TypeSerializer p5)
    {
        return new com.flurry.org.codehaus.jackson.map.ser.std.StdContainerSerializers$IteratorSerializer(this._elementType, this._staticTyping, p5, this._property);
    }

    public bridge synthetic void serializeContents(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serializeContents(((java.util.Iterator) p1), p2, p3);
        return;
    }

    public void serializeContents(java.util.Iterator p8, com.flurry.org.codehaus.jackson.JsonGenerator p9, com.flurry.org.codehaus.jackson.map.SerializerProvider p10)
    {
        if (p8.hasNext()) {
            com.flurry.org.codehaus.jackson.map.TypeSerializer v5 = this._valueTypeSerializer;
            com.flurry.org.codehaus.jackson.map.JsonSerializer v4 = 0;
            Class v3 = 0;
            do {
                Object v2 = p8.next();
                if (v2 != null) {
                    com.flurry.org.codehaus.jackson.map.JsonSerializer v1;
                    Class v0 = v2.getClass();
                    if (v0 != v3) {
                        v1 = p10.findValueSerializer(v0, this._property);
                        v4 = v1;
                        v3 = v0;
                    } else {
                        v1 = v4;
                    }
                    if (v5 != null) {
                        v1.serializeWithType(v2, p9, p10, v5);
                    } else {
                        v1.serialize(v2, p9, p10);
                    }
                } else {
                    p10.defaultSerializeNull(p9);
                }
            } while(p8.hasNext());
        }
        return;
    }
}
