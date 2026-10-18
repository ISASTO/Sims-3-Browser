package com.flurry.org.codehaus.jackson.map.deser.impl;
public class UnwrappedPropertyHandler {
    protected final java.util.ArrayList _properties;

    public UnwrappedPropertyHandler()
    {
        this._properties = new java.util.ArrayList();
        return;
    }

    public void addProperty(com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty p2)
    {
        this._properties.add(p2);
        return;
    }

    public Object processUnwrapped(com.flurry.org.codehaus.jackson.JsonParser p6, com.flurry.org.codehaus.jackson.map.DeserializationContext p7, Object p8, com.flurry.org.codehaus.jackson.util.TokenBuffer p9)
    {
        int v0 = 0;
        int v2 = this._properties.size();
        while (v0 < v2) {
            com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v3_1 = ((com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty) this._properties.get(v0));
            com.flurry.org.codehaus.jackson.JsonParser v1 = p9.asParser();
            v1.nextToken();
            v3_1.deserializeAndSet(v1, p7, p8);
            v0++;
        }
        return p8;
    }
}
