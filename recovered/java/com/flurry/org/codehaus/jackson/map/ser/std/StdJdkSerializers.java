package com.flurry.org.codehaus.jackson.map.ser.std;
public class StdJdkSerializers implements com.flurry.org.codehaus.jackson.map.util.Provider {

    public StdJdkSerializers()
    {
        return;
    }

    public java.util.Collection provide()
    {
        java.util.HashMap v0_1 = new java.util.HashMap();
        com.flurry.org.codehaus.jackson.map.ser.std.ToStringSerializer v1 = com.flurry.org.codehaus.jackson.map.ser.std.ToStringSerializer.instance;
        v0_1.put(java.net.URL, v1);
        v0_1.put(java.net.URI, v1);
        v0_1.put(java.util.Currency, v1);
        v0_1.put(java.util.UUID, v1);
        v0_1.put(java.util.regex.Pattern, v1);
        v0_1.put(java.util.Locale, v1);
        v0_1.put(java.util.Locale, v1);
        v0_1.put(java.util.concurrent.atomic.AtomicReference, com.flurry.org.codehaus.jackson.map.ser.std.StdJdkSerializers$AtomicReferenceSerializer);
        v0_1.put(java.util.concurrent.atomic.AtomicBoolean, com.flurry.org.codehaus.jackson.map.ser.std.StdJdkSerializers$AtomicBooleanSerializer);
        v0_1.put(java.util.concurrent.atomic.AtomicInteger, com.flurry.org.codehaus.jackson.map.ser.std.StdJdkSerializers$AtomicIntegerSerializer);
        v0_1.put(java.util.concurrent.atomic.AtomicLong, com.flurry.org.codehaus.jackson.map.ser.std.StdJdkSerializers$AtomicLongSerializer);
        v0_1.put(java.io.File, com.flurry.org.codehaus.jackson.map.ser.std.StdJdkSerializers$FileSerializer);
        v0_1.put(Class, com.flurry.org.codehaus.jackson.map.ser.std.StdJdkSerializers$ClassSerializer);
        v0_1.put(Void.TYPE, com.flurry.org.codehaus.jackson.map.ser.std.NullSerializer);
        return v0_1.entrySet();
    }
}
