package com.flurry.org.codehaus.jackson.map.ser.std;
public class StdKeySerializers {
    protected static final com.flurry.org.codehaus.jackson.map.JsonSerializer DEFAULT_KEY_SERIALIZER;
    protected static final com.flurry.org.codehaus.jackson.map.JsonSerializer DEFAULT_STRING_SERIALIZER;

    static StdKeySerializers()
    {
        com.flurry.org.codehaus.jackson.map.ser.std.StdKeySerializers.DEFAULT_KEY_SERIALIZER = new com.flurry.org.codehaus.jackson.map.ser.std.StdKeySerializer();
        com.flurry.org.codehaus.jackson.map.ser.std.StdKeySerializers.DEFAULT_STRING_SERIALIZER = new com.flurry.org.codehaus.jackson.map.ser.std.StdKeySerializers$StringKeySerializer();
        return;
    }

    private StdKeySerializers()
    {
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.JsonSerializer getStdKeySerializer(com.flurry.org.codehaus.jackson.type.JavaType p2)
    {
        com.flurry.org.codehaus.jackson.map.JsonSerializer v1_2;
        if (p2 != null) {
            Class v0 = p2.getRawClass();
            if (v0 != String) {
                if (v0 != Object) {
                    if (!java.util.Date.isAssignableFrom(v0)) {
                        if (!java.util.Calendar.isAssignableFrom(v0)) {
                            v1_2 = com.flurry.org.codehaus.jackson.map.ser.std.StdKeySerializers.DEFAULT_KEY_SERIALIZER;
                        } else {
                            v1_2 = com.flurry.org.codehaus.jackson.map.ser.std.StdKeySerializers$CalendarKeySerializer.instance;
                        }
                    } else {
                        v1_2 = com.flurry.org.codehaus.jackson.map.ser.std.StdKeySerializers$DateKeySerializer.instance;
                    }
                } else {
                    v1_2 = com.flurry.org.codehaus.jackson.map.ser.std.StdKeySerializers.DEFAULT_KEY_SERIALIZER;
                }
            } else {
                v1_2 = com.flurry.org.codehaus.jackson.map.ser.std.StdKeySerializers.DEFAULT_STRING_SERIALIZER;
            }
        } else {
            v1_2 = com.flurry.org.codehaus.jackson.map.ser.std.StdKeySerializers.DEFAULT_KEY_SERIALIZER;
        }
        return v1_2;
    }
}
