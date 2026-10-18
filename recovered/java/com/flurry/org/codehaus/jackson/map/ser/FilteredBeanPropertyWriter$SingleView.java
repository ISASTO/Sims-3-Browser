package com.flurry.org.codehaus.jackson.map.ser;
final class FilteredBeanPropertyWriter$SingleView extends com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter {
    protected final com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter _delegate;
    protected final Class _view;

    protected FilteredBeanPropertyWriter$SingleView(com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter p1, Class p2)
    {
        super(p1);
        super._delegate = p1;
        super._view = p2;
        return;
    }

    public void serializeAsField(Object p3, com.flurry.org.codehaus.jackson.JsonGenerator p4, com.flurry.org.codehaus.jackson.map.SerializerProvider p5)
    {
        Class v0 = p5.getSerializationView();
        if ((v0 == null) || (this._view.isAssignableFrom(v0))) {
            this._delegate.serializeAsField(p3, p4, p5);
        }
        return;
    }

    public com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter withSerializer(com.flurry.org.codehaus.jackson.map.JsonSerializer p4)
    {
        return new com.flurry.org.codehaus.jackson.map.ser.FilteredBeanPropertyWriter$SingleView(this._delegate.withSerializer(p4), this._view);
    }
}
