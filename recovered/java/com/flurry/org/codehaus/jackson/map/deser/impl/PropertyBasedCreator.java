package com.flurry.org.codehaus.jackson.map.deser.impl;
public final class PropertyBasedCreator {
    protected Object[] _defaultValues;
    protected final java.util.HashMap _properties;
    protected final com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty[] _propertiesWithInjectables;
    protected final com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator _valueInstantiator;

    public PropertyBasedCreator(com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator p10)
    {
        this._valueInstantiator = p10;
        this._properties = new java.util.HashMap();
        Object[] v1 = 0;
        com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty[] v0 = p10.getFromObjectArguments();
        com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty[] v6 = 0;
        int v2 = 0;
        int v4 = v0.length;
        while (v2 < v4) {
            com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v5 = v0[v2];
            this._properties.put(v5.getName(), v5);
            if (v5.getType().isPrimitive()) {
                if (v1 == null) {
                    v1 = new Object[v4];
                }
                v1[v2] = com.flurry.org.codehaus.jackson.map.util.ClassUtil.defaultValue(v5.getType().getRawClass());
            }
            if (v5.getInjectableValueId() != null) {
                if (v6 == null) {
                    v6 = new com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty[v4];
                }
                v6[v2] = v5;
            }
            v2++;
        }
        this._defaultValues = v1;
        this._propertiesWithInjectables = v6;
        return;
    }

    public void assignDeserializer(com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty p4, com.flurry.org.codehaus.jackson.map.JsonDeserializer p5)
    {
        com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v4_1 = p4.withValueDeserializer(p5);
        this._properties.put(v4_1.getName(), v4_1);
        Object v0 = p5.getNullValue();
        if (v0 != null) {
            if (this._defaultValues == null) {
                Object[] v1_2 = new Object[this._properties.size()];
                this._defaultValues = v1_2;
            }
            this._defaultValues[v4_1.getPropertyIndex()] = v0;
        }
        return;
    }

    public Object build(com.flurry.org.codehaus.jackson.map.deser.impl.PropertyValueBuffer p5)
    {
        Object v0 = this._valueInstantiator.createFromObjectWith(p5.getParameters(this._defaultValues));
        com.flurry.org.codehaus.jackson.map.deser.impl.PropertyValue v1 = p5.buffered();
        while (v1 != null) {
            v1.assign(v0);
            v1 = v1.next;
        }
        return v0;
    }

    public com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty findCreatorProperty(String p2)
    {
        return ((com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty) this._properties.get(p2));
    }

    public java.util.Collection getCreatorProperties()
    {
        return this._properties.values();
    }

    public com.flurry.org.codehaus.jackson.map.deser.impl.PropertyValueBuffer startBuilding(com.flurry.org.codehaus.jackson.JsonParser p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4)
    {
        com.flurry.org.codehaus.jackson.map.deser.impl.PropertyValueBuffer v0_1 = new com.flurry.org.codehaus.jackson.map.deser.impl.PropertyValueBuffer(p3, p4, this._properties.size());
        if (this._propertiesWithInjectables != null) {
            v0_1.inject(this._propertiesWithInjectables);
        }
        return v0_1;
    }
}
