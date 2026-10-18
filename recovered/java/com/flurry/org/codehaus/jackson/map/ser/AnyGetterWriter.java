package com.flurry.org.codehaus.jackson.map.ser;
public class AnyGetterWriter {
    protected final reflect.Method _anyGetter;
    protected final com.flurry.org.codehaus.jackson.map.ser.std.MapSerializer _serializer;

    public AnyGetterWriter(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p2, com.flurry.org.codehaus.jackson.map.ser.std.MapSerializer p3)
    {
        this._anyGetter = p2.getAnnotated();
        this._serializer = p3;
        return;
    }

    public void getAndSerialize(Object p5, com.flurry.org.codehaus.jackson.JsonGenerator p6, com.flurry.org.codehaus.jackson.map.SerializerProvider p7)
    {
        String v2_4 = new Object[0];
        java.util.Map v0_0 = 億.invokeHook(this._anyGetter, p5, v2_4);
        if (v0_0 != null) {
            if ((v0_0 instanceof java.util.Map)) {
                this._serializer.serializeFields(((java.util.Map) v0_0), p6, p7);
            } else {
                throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Value returned by \'any-getter\' (").append(this._anyGetter.getName()).append("()) not java.util.Map but ").append(v0_0.getClass().getName()).toString());
            }
        }
        return;
    }

    public void resolve(com.flurry.org.codehaus.jackson.map.SerializerProvider p2)
    {
        this._serializer.resolve(p2);
        return;
    }
}
