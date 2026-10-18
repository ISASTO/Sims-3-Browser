package com.flurry.org.apache.avro.reflect;
public class ReflectData$AllowNull extends com.flurry.org.apache.avro.reflect.ReflectData {
    private static final com.flurry.org.apache.avro.reflect.ReflectData$AllowNull INSTANCE;

    static ReflectData$AllowNull()
    {
        com.flurry.org.apache.avro.reflect.ReflectData$AllowNull.INSTANCE = new com.flurry.org.apache.avro.reflect.ReflectData$AllowNull();
        return;
    }

    public ReflectData$AllowNull()
    {
        return;
    }

    public static com.flurry.org.apache.avro.reflect.ReflectData$AllowNull get()
    {
        return com.flurry.org.apache.avro.reflect.ReflectData$AllowNull.INSTANCE;
    }

    protected com.flurry.org.apache.avro.Schema createFieldSchema(reflect.Field p3, java.util.Map p4)
    {
        return com.flurry.org.apache.avro.reflect.ReflectData$AllowNull.makeNullable(super.createFieldSchema(p3, p4));
    }
}
