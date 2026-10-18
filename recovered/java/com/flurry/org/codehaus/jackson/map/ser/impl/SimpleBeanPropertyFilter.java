package com.flurry.org.codehaus.jackson.map.ser.impl;
public abstract class SimpleBeanPropertyFilter implements com.flurry.org.codehaus.jackson.map.ser.BeanPropertyFilter {

    protected SimpleBeanPropertyFilter()
    {
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.ser.impl.SimpleBeanPropertyFilter filterOutAllExcept(java.util.Set p1)
    {
        return new com.flurry.org.codehaus.jackson.map.ser.impl.SimpleBeanPropertyFilter$FilterExceptFilter(p1);
    }

    public static varargs com.flurry.org.codehaus.jackson.map.ser.impl.SimpleBeanPropertyFilter filterOutAllExcept(String[] p2)
    {
        java.util.HashSet v0_1 = new java.util.HashSet(p2.length);
        java.util.Collections.addAll(v0_1, p2);
        return new com.flurry.org.codehaus.jackson.map.ser.impl.SimpleBeanPropertyFilter$FilterExceptFilter(v0_1);
    }

    public static com.flurry.org.codehaus.jackson.map.ser.impl.SimpleBeanPropertyFilter serializeAllExcept(java.util.Set p1)
    {
        return new com.flurry.org.codehaus.jackson.map.ser.impl.SimpleBeanPropertyFilter$SerializeExceptFilter(p1);
    }

    public static varargs com.flurry.org.codehaus.jackson.map.ser.impl.SimpleBeanPropertyFilter serializeAllExcept(String[] p2)
    {
        java.util.HashSet v0_1 = new java.util.HashSet(p2.length);
        java.util.Collections.addAll(v0_1, p2);
        return new com.flurry.org.codehaus.jackson.map.ser.impl.SimpleBeanPropertyFilter$SerializeExceptFilter(v0_1);
    }
}
