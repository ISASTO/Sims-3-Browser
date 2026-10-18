package com.flurry.org.codehaus.jackson.map.deser.impl;
final class ExternalTypeHandler$ExtTypedProperty {
    private final com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty _property;
    private final String _typePropertyName;

    public ExternalTypeHandler$ExtTypedProperty(com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty p1, String p2)
    {
        this._property = p1;
        this._typePropertyName = p2;
        return;
    }

    public com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty getProperty()
    {
        return this._property;
    }

    public String getTypePropertyName()
    {
        return this._typePropertyName;
    }

    public boolean hasTypePropertyName(String p2)
    {
        return p2.equals(this._typePropertyName);
    }
}
