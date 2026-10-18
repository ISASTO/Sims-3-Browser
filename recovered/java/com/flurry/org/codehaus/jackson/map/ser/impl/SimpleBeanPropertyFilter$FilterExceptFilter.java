package com.flurry.org.codehaus.jackson.map.ser.impl;
public class SimpleBeanPropertyFilter$FilterExceptFilter extends com.flurry.org.codehaus.jackson.map.ser.impl.SimpleBeanPropertyFilter {
    protected final java.util.Set _propertiesToInclude;

    public SimpleBeanPropertyFilter$FilterExceptFilter(java.util.Set p1)
    {
        this._propertiesToInclude = p1;
        return;
    }

    public void serializeAsField(Object p3, com.flurry.org.codehaus.jackson.JsonGenerator p4, com.flurry.org.codehaus.jackson.map.SerializerProvider p5, com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter p6)
    {
        if (this._propertiesToInclude.contains(p6.getName())) {
            p6.serializeAsField(p3, p4, p5);
        }
        return;
    }
}
