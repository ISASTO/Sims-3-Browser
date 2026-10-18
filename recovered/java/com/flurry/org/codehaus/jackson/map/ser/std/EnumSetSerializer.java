package com.flurry.org.codehaus.jackson.map.ser.std;
public class EnumSetSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.AsArraySerializerBase {

    public EnumSetSerializer(com.flurry.org.codehaus.jackson.type.JavaType p8, com.flurry.org.codehaus.jackson.map.BeanProperty p9)
    {
        super(java.util.EnumSet, p8, 1, 0, p9, 0);
        return;
    }

    public com.flurry.org.codehaus.jackson.map.ser.std.ContainerSerializerBase _withValueTypeSerializer(com.flurry.org.codehaus.jackson.map.TypeSerializer p1)
    {
        return this;
    }

    public bridge synthetic void serializeContents(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serializeContents(((java.util.EnumSet) p1), p2, p3);
        return;
    }

    public void serializeContents(java.util.EnumSet p6, com.flurry.org.codehaus.jackson.JsonGenerator p7, com.flurry.org.codehaus.jackson.map.SerializerProvider p8)
    {
        com.flurry.org.codehaus.jackson.map.JsonSerializer v1 = this._elementSerializer;
        java.util.Iterator v2 = p6.iterator();
        while (v2.hasNext()) {
            Enum v0_1 = ((Enum) v2.next());
            if (v1 == null) {
                v1 = p8.findValueSerializer(v0_1.getDeclaringClass(), this._property);
            }
            v1.serialize(v0_1, p7, p8);
        }
        return;
    }
}
