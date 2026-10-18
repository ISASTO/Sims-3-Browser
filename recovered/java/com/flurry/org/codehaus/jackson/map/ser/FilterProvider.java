package com.flurry.org.codehaus.jackson.map.ser;
public abstract class FilterProvider {

    public FilterProvider()
    {
        return;
    }

    public abstract com.flurry.org.codehaus.jackson.map.ser.BeanPropertyFilter findFilter(Object p0);
}
