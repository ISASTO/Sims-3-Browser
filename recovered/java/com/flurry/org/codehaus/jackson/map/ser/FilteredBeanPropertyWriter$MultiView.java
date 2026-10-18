package com.flurry.org.codehaus.jackson.map.ser;
final class FilteredBeanPropertyWriter$MultiView extends com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter {
    protected final com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter _delegate;
    protected final Class[] _views;

    protected FilteredBeanPropertyWriter$MultiView(com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter p1, Class[] p2)
    {
        super(p1);
        super._delegate = p1;
        super._views = p2;
        return;
    }

    public void serializeAsField(Object p5, com.flurry.org.codehaus.jackson.JsonGenerator p6, com.flurry.org.codehaus.jackson.map.SerializerProvider p7)
    {
        Class v0 = p7.getSerializationView();
        if (v0 == null) {
            this._delegate.serializeAsField(p5, p6, p7);
        } else {
            int v1 = 0;
            int v2 = this._views.length;
            while ((v1 < v2) && (!this._views[v1].isAssignableFrom(v0))) {
                v1++;
            }
            if (v1 != v2) {
            }
        }
        return;
    }

    public com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter withSerializer(com.flurry.org.codehaus.jackson.map.JsonSerializer p4)
    {
        return new com.flurry.org.codehaus.jackson.map.ser.FilteredBeanPropertyWriter$MultiView(this._delegate.withSerializer(p4), this._views);
    }
}
