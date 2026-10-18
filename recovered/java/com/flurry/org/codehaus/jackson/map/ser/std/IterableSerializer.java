package com.flurry.org.codehaus.jackson.map.ser.std;
public class IterableSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.AsArraySerializerBase {

    public IterableSerializer(com.flurry.org.codehaus.jackson.type.JavaType p8, boolean p9, com.flurry.org.codehaus.jackson.map.TypeSerializer p10, com.flurry.org.codehaus.jackson.map.BeanProperty p11)
    {
        super(Iterable, p8, p9, p10, p11, 0);
        return;
    }

    public com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase _withValueTypeSerializer(com.flurry.org.codehaus.jackson.map.TypeSerializer p5)
    {
        return new com.flurry.org.codehaus.jackson.map.ser.std.IterableSerializer(this._elementType, this._staticTyping, p5, this._property);
    }

    public void serializeContents(Iterable p9, com.flurry.org.codehaus.jackson.JsonGenerator p10, com.flurry.org.codehaus.jackson.map.SerializerProvider p11)
    {
        java.util.Iterator v3 = p9.iterator();
        if (v3.hasNext()) {
            com.flurry.org.codehaus.jackson.map.TypeSerializer v6 = this._valueTypeSerializer;
            com.flurry.org.codehaus.jackson.map.JsonSerializer v5 = 0;
            Class v4 = 0;
            do {
                Object v2 = v3.next();
                if (v2 != null) {
                    com.flurry.org.codehaus.jackson.map.JsonSerializer v1;
                    Class v0 = v2.getClass();
                    if (v0 != v4) {
                        v1 = p11.findValueSerializer(v0, this._property);
                        v5 = v1;
                        v4 = v0;
                    } else {
                        v1 = v5;
                    }
                    if (v6 != null) {
                        v1.serializeWithType(v2, p10, p11, v6);
                    } else {
                        v1.serialize(v2, p10, p11);
                    }
                } else {
                    p11.defaultSerializeNull(p10);
                }
            } while(v3.hasNext());
        }
        return;
    }

    public bridge synthetic void serializeContents(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serializeContents(((Iterable) p1), p2, p3);
        return;
    }
}
