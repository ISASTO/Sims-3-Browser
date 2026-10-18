package com.flurry.org.codehaus.jackson.map.ser.impl;
public class SimpleFilterProvider extends com.flurry.org.codehaus.jackson.map.ser.FilterProvider {
    protected boolean _cfgFailOnUnknownId;
    protected com.flurry.org.codehaus.jackson.map.ser.BeanPropertyFilter _defaultFilter;
    protected final java.util.Map _filtersById;

    public SimpleFilterProvider()
    {
        this(new java.util.HashMap());
        return;
    }

    public SimpleFilterProvider(java.util.Map p2)
    {
        this._cfgFailOnUnknownId = 1;
        this._filtersById = p2;
        return;
    }

    public com.flurry.org.codehaus.jackson.map.ser.impl.SimpleFilterProvider addFilter(String p2, com.flurry.org.codehaus.jackson.map.ser.BeanPropertyFilter p3)
    {
        this._filtersById.put(p2, p3);
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ser.BeanPropertyFilter findFilter(Object p5)
    {
        com.flurry.org.codehaus.jackson.map.ser.BeanPropertyFilter v0_1 = ((com.flurry.org.codehaus.jackson.map.ser.BeanPropertyFilter) this._filtersById.get(p5));
        if (v0_1 == null) {
            v0_1 = this._defaultFilter;
            if ((v0_1 == null) && (this._cfgFailOnUnknownId)) {
                throw new IllegalArgumentException(new StringBuilder().append("No filter configured with id \'").append(p5).append("\' (type ").append(p5.getClass().getName()).append(")").toString());
            }
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.map.ser.BeanPropertyFilter getDefaultFilter()
    {
        return this._defaultFilter;
    }

    public com.flurry.org.codehaus.jackson.map.ser.BeanPropertyFilter removeFilter(String p2)
    {
        return ((com.flurry.org.codehaus.jackson.map.ser.BeanPropertyFilter) this._filtersById.remove(p2));
    }

    public com.flurry.org.codehaus.jackson.map.ser.impl.SimpleFilterProvider setDefaultFilter(com.flurry.org.codehaus.jackson.map.ser.BeanPropertyFilter p1)
    {
        this._defaultFilter = p1;
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.ser.impl.SimpleFilterProvider setFailOnUnknownId(boolean p1)
    {
        this._cfgFailOnUnknownId = p1;
        return this;
    }

    public boolean willFailOnUnknownId()
    {
        return this._cfgFailOnUnknownId;
    }
}
