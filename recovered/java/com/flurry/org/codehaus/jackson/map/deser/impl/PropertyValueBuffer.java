package com.flurry.org.codehaus.jackson.map.deser.impl;
public final class PropertyValueBuffer {
    private com.flurry.org.codehaus.jackson.map.deser.impl.PropertyValue _buffered;
    final com.flurry.org.codehaus.jackson.map.DeserializationContext _context;
    final Object[] _creatorParameters;
    private int _paramsNeeded;
    final com.flurry.org.codehaus.jackson.JsonParser _parser;

    public PropertyValueBuffer(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, int p4)
    {
        this._parser = p2;
        this._context = p3;
        this._paramsNeeded = p4;
        Object[] v0 = new Object[p4];
        this._creatorParameters = v0;
        return;
    }

    public boolean assignParameter(int p2, Object p3)
    {
        int v0_3;
        this._creatorParameters[p2] = p3;
        int v0_2 = (this._paramsNeeded - 1);
        this._paramsNeeded = v0_2;
        if (v0_2 > 0) {
            v0_3 = 0;
        } else {
            v0_3 = 1;
        }
        return v0_3;
    }

    public void bufferAnyProperty(com.flurry.org.codehaus.jackson.map.deser.SettableAnyProperty p3, String p4, Object p5)
    {
        this._buffered = new com.flurry.org.codehaus.jackson.map.deser.impl.PropertyValue$Any(this._buffered, p5, p3, p4);
        return;
    }

    public void bufferMapProperty(Object p3, Object p4)
    {
        this._buffered = new com.flurry.org.codehaus.jackson.map.deser.impl.PropertyValue$Map(this._buffered, p4, p3);
        return;
    }

    public void bufferProperty(com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty p3, Object p4)
    {
        this._buffered = new com.flurry.org.codehaus.jackson.map.deser.impl.PropertyValue$Regular(this._buffered, p4, p3);
        return;
    }

    protected com.flurry.org.codehaus.jackson.map.deser.impl.PropertyValue buffered()
    {
        return this._buffered;
    }

    protected final Object[] getParameters(Object[] p5)
    {
        if (p5 != null) {
            int v0 = 0;
            int v1 = this._creatorParameters.length;
            while (v0 < v1) {
                if (this._creatorParameters[v0] == null) {
                    Object v2 = p5[v0];
                    if (v2 != null) {
                        this._creatorParameters[v0] = v2;
                    }
                }
                v0++;
            }
        }
        return this._creatorParameters;
    }

    public void inject(com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty[] p8)
    {
        int v0 = 0;
        int v1 = p8.length;
        while (v0 < v1) {
            com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v2 = p8[v0];
            if (v2 != null) {
                this._creatorParameters[v0] = this._context.findInjectableValue(v2.getInjectableValueId(), v2, 0);
            }
            v0++;
        }
        return;
    }
}
