package com.flurry.org.codehaus.jackson.map.deser.std;
public class PrimitiveArrayDeserializers {
    static final com.flurry.org.codehaus.jackson.map.deser.std.PrimitiveArrayDeserializers instance;
    java.util.HashMap _allDeserializers;

    static PrimitiveArrayDeserializers()
    {
        com.flurry.org.codehaus.jackson.map.deser.std.PrimitiveArrayDeserializers.instance = new com.flurry.org.codehaus.jackson.map.deser.std.PrimitiveArrayDeserializers();
        return;
    }

    protected PrimitiveArrayDeserializers()
    {
        this._allDeserializers = new java.util.HashMap();
        this.add(Boolean.TYPE, new com.flurry.org.codehaus.jackson.map.deser.std.PrimitiveArrayDeserializers$BooleanDeser());
        this.add(Byte.TYPE, new com.flurry.org.codehaus.jackson.map.deser.std.PrimitiveArrayDeserializers$ByteDeser());
        this.add(Short.TYPE, new com.flurry.org.codehaus.jackson.map.deser.std.PrimitiveArrayDeserializers$ShortDeser());
        this.add(Integer.TYPE, new com.flurry.org.codehaus.jackson.map.deser.std.PrimitiveArrayDeserializers$IntDeser());
        this.add(Long.TYPE, new com.flurry.org.codehaus.jackson.map.deser.std.PrimitiveArrayDeserializers$LongDeser());
        this.add(Float.TYPE, new com.flurry.org.codehaus.jackson.map.deser.std.PrimitiveArrayDeserializers$FloatDeser());
        this.add(Double.TYPE, new com.flurry.org.codehaus.jackson.map.deser.std.PrimitiveArrayDeserializers$DoubleDeser());
        this.add(String, new com.flurry.org.codehaus.jackson.map.deser.std.PrimitiveArrayDeserializers$StringDeser());
        this.add(Character.TYPE, new com.flurry.org.codehaus.jackson.map.deser.std.PrimitiveArrayDeserializers$CharDeser());
        return;
    }

    private void add(Class p3, com.flurry.org.codehaus.jackson.map.JsonDeserializer p4)
    {
        this._allDeserializers.put(com.flurry.org.codehaus.jackson.map.type.TypeFactory.defaultInstance().constructType(p3), p4);
        return;
    }

    public static java.util.HashMap getAll()
    {
        return com.flurry.org.codehaus.jackson.map.deser.std.PrimitiveArrayDeserializers.instance._allDeserializers;
    }

    public Object deserializeWithType(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4)
    {
        return p4.deserializeTypedFromArray(p2, p3);
    }
}
