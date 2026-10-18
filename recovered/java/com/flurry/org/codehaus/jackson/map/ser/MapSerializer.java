package com.flurry.org.codehaus.jackson.map.ser;
public class MapSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.MapSerializer {

    protected MapSerializer()
    {
        this(((java.util.HashSet) 0), 0, 0, 0, 0, 0, 0, 0);
        return;
    }

    protected MapSerializer(java.util.HashSet p10, com.flurry.org.codehaus.jackson.type.JavaType p11, com.flurry.org.codehaus.jackson.type.JavaType p12, boolean p13, com.flurry.org.codehaus.jackson.map.TypeSerializer p14, com.flurry.org.codehaus.jackson.map.JsonSerializer p15, com.flurry.org.codehaus.jackson.map.BeanProperty p16)
    {
        super(p10, p11, p12, p13, p14, p15, 0, p16);
        return;
    }

    protected MapSerializer(java.util.HashSet p1, com.flurry.org.codehaus.jackson.type.JavaType p2, com.flurry.org.codehaus.jackson.type.JavaType p3, boolean p4, com.flurry.org.codehaus.jackson.map.TypeSerializer p5, com.flurry.org.codehaus.jackson.map.JsonSerializer p6, com.flurry.org.codehaus.jackson.map.JsonSerializer p7, com.flurry.org.codehaus.jackson.map.BeanProperty p8)
    {
        super(p1, p2, p3, p4, p5, p6, p7, p8);
        return;
    }

    protected MapSerializer(java.util.HashSet p10, com.flurry.org.codehaus.jackson.type.JavaType p11, boolean p12, com.flurry.org.codehaus.jackson.map.TypeSerializer p13)
    {
        super(p10, com.flurry.org.codehaus.jackson.map.ser.MapSerializer.UNSPECIFIED_TYPE, p11, p12, p13, 0, 0, 0);
        return;
    }
}
