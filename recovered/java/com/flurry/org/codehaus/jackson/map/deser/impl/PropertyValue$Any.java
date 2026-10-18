package com.flurry.org.codehaus.jackson.map.deser.impl;
final class PropertyValue$Any extends com.flurry.org.codehaus.jackson.map.deser.impl.PropertyValue {
    final com.flurry.org.codehaus.jackson.map.deser.SettableAnyProperty _property;
    final String _propertyName;

    public PropertyValue$Any(com.flurry.org.codehaus.jackson.map.deser.impl.PropertyValue p1, Object p2, com.flurry.org.codehaus.jackson.map.deser.SettableAnyProperty p3, String p4)
    {
        super(p1, p2);
        super._property = p3;
        super._propertyName = p4;
        return;
    }

    public void assign(Object p4)
    {
        this._property.set(p4, this._propertyName, this.value);
        return;
    }
}
