package com.flurry.org.codehaus.jackson.map.deser.impl;
final class PropertyValue$Regular extends com.flurry.org.codehaus.jackson.map.deser.impl.PropertyValue {
    final com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty _property;

    public PropertyValue$Regular(com.flurry.org.codehaus.jackson.map.deser.impl.PropertyValue p1, Object p2, com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty p3)
    {
        super(p1, p2);
        super._property = p3;
        return;
    }

    public void assign(Object p3)
    {
        this._property.set(p3, this.value);
        return;
    }
}
