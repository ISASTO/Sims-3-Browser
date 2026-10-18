package com.flurry.org.codehaus.jackson.map.deser.impl;
final class PropertyValue$Map extends com.flurry.org.codehaus.jackson.map.deser.impl.PropertyValue {
    final Object _key;

    public PropertyValue$Map(com.flurry.org.codehaus.jackson.map.deser.impl.PropertyValue p1, Object p2, Object p3)
    {
        super(p1, p2);
        super._key = p3;
        return;
    }

    public void assign(Object p3)
    {
        ((java.util.Map) p3).put(this._key, this.value);
        return;
    }
}
