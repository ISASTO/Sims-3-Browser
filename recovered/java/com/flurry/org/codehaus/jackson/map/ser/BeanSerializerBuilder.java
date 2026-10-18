package com.flurry.org.codehaus.jackson.map.ser;
public class BeanSerializerBuilder {
    private static final com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[] NO_PROPERTIES;
    protected com.flurry.org.codehaus.jackson.map.ser.AnyGetterWriter _anyGetter;
    protected final com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription _beanDesc;
    protected Object _filterId;
    protected com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[] _filteredProperties;
    protected java.util.List _properties;

    static BeanSerializerBuilder()
    {
        com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[] v0_1 = new com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[0];
        com.flurry.org.codehaus.jackson.map.ser.BeanSerializerBuilder.NO_PROPERTIES = v0_1;
        return;
    }

    public BeanSerializerBuilder(com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p1)
    {
        this._beanDesc = p1;
        return;
    }

    protected BeanSerializerBuilder(com.flurry.org.codehaus.jackson.map.ser.BeanSerializerBuilder p2)
    {
        this._beanDesc = p2._beanDesc;
        this._properties = p2._properties;
        this._filteredProperties = p2._filteredProperties;
        this._anyGetter = p2._anyGetter;
        this._filterId = p2._filterId;
        return;
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer build()
    {
        if ((this._properties != null) && (!this._properties.isEmpty())) {
            com.flurry.org.codehaus.jackson.type.JavaType v1_0 = new com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[this._properties.size()];
            com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[] v2_1 = ((com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[]) this._properties.toArray(v1_0));
            com.flurry.org.codehaus.jackson.map.ser.BeanSerializer v0_4 = new com.flurry.org.codehaus.jackson.map.ser.BeanSerializer(this._beanDesc.getType(), v2_1, this._filteredProperties, this._anyGetter, this._filterId);
        } else {
            if (this._anyGetter != null) {
                v2_1 = com.flurry.org.codehaus.jackson.map.ser.BeanSerializerBuilder.NO_PROPERTIES;
            } else {
                v0_4 = 0;
            }
        }
        return v0_4;
    }

    public com.flurry.org.codehaus.jackson.map.ser.BeanSerializer createDummy()
    {
        return com.flurry.org.codehaus.jackson.map.ser.BeanSerializer.createDummy(this._beanDesc.getBeanClass());
    }

    public com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription getBeanDescription()
    {
        return this._beanDesc;
    }

    public com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[] getFilteredProperties()
    {
        return this._filteredProperties;
    }

    public java.util.List getProperties()
    {
        return this._properties;
    }

    public boolean hasProperties()
    {
        if ((this._properties == null) || (this._properties.size() <= 0)) {
            int v0_3 = 0;
        } else {
            v0_3 = 1;
        }
        return v0_3;
    }

    public void setAnyGetter(com.flurry.org.codehaus.jackson.map.ser.AnyGetterWriter p1)
    {
        this._anyGetter = p1;
        return;
    }

    public void setFilterId(Object p1)
    {
        this._filterId = p1;
        return;
    }

    public void setFilteredProperties(com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter[] p1)
    {
        this._filteredProperties = p1;
        return;
    }

    public void setProperties(java.util.List p1)
    {
        this._properties = p1;
        return;
    }
}
