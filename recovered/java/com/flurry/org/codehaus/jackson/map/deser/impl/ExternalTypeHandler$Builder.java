package com.flurry.org.codehaus.jackson.map.deser.impl;
public class ExternalTypeHandler$Builder {
    private final java.util.HashMap _nameToPropertyIndex;
    private final java.util.ArrayList _properties;

    public ExternalTypeHandler$Builder()
    {
        this._properties = new java.util.ArrayList();
        this._nameToPropertyIndex = new java.util.HashMap();
        return;
    }

    public void addExternal(com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty p4, String p5)
    {
        Integer v0 = Integer.valueOf(this._properties.size());
        this._properties.add(new com.flurry.org.codehaus.jackson.map.deser.impl.ExternalTypeHandler$ExtTypedProperty(p4, p5));
        this._nameToPropertyIndex.put(p4.getName(), v0);
        this._nameToPropertyIndex.put(p5, v0);
        return;
    }

    public com.flurry.org.codehaus.jackson.map.deser.impl.ExternalTypeHandler build()
    {
        java.util.HashMap v2_3 = new com.flurry.org.codehaus.jackson.map.deser.impl.ExternalTypeHandler$ExtTypedProperty[this._properties.size()];
        return new com.flurry.org.codehaus.jackson.map.deser.impl.ExternalTypeHandler(((com.flurry.org.codehaus.jackson.map.deser.impl.ExternalTypeHandler$ExtTypedProperty[]) this._properties.toArray(v2_3)), this._nameToPropertyIndex, 0, 0);
    }
}
