package com.flurry.org.codehaus.jackson.map.deser;
public class BeanDeserializerBuilder {
    protected com.flurry.org.codehaus.jackson.map.deser.SettableAnyProperty _anySetter;
    protected java.util.HashMap _backRefProperties;
    protected final com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription _beanDesc;
    protected java.util.HashSet _ignorableProps;
    protected boolean _ignoreAllUnknown;
    protected java.util.List _injectables;
    protected final java.util.HashMap _properties;
    protected com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator _valueInstantiator;

    protected BeanDeserializerBuilder(com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerBuilder p3)
    {
        this._properties = new java.util.LinkedHashMap();
        this._beanDesc = p3._beanDesc;
        this._anySetter = p3._anySetter;
        this._ignoreAllUnknown = p3._ignoreAllUnknown;
        this._properties.putAll(p3._properties);
        this._backRefProperties = com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerBuilder._copy(p3._backRefProperties);
        this._ignorableProps = p3._ignorableProps;
        this._valueInstantiator = p3._valueInstantiator;
        return;
    }

    public BeanDeserializerBuilder(com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p2)
    {
        this._properties = new java.util.LinkedHashMap();
        this._beanDesc = p2;
        return;
    }

    private static java.util.HashMap _copy(java.util.HashMap p1)
    {
        java.util.HashMap v0_1;
        if (p1 != null) {
            v0_1 = new java.util.HashMap(p1);
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }

    public void addBackReferenceProperty(String p3, com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty p4)
    {
        if (this._backRefProperties == null) {
            this._backRefProperties = new java.util.HashMap(4);
        }
        this._backRefProperties.put(p3, p4);
        if (this._properties != null) {
            this._properties.remove(p4.getName());
        }
        return;
    }

    public void addCreatorProperty(com.flurry.org.codehaus.jackson.map.BeanPropertyDefinition p1)
    {
        return;
    }

    public void addIgnorable(String p2)
    {
        if (this._ignorableProps == null) {
            this._ignorableProps = new java.util.HashSet();
        }
        this._ignorableProps.add(p2);
        return;
    }

    public void addInjectable(String p8, com.flurry.org.codehaus.jackson.type.JavaType p9, com.flurry.org.codehaus.jackson.map.util.Annotations p10, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p11, Object p12)
    {
        if (this._injectables == null) {
            this._injectables = new java.util.ArrayList();
        }
        this._injectables.add(new com.flurry.org.codehaus.jackson.map.deser.impl.ValueInjector(p8, p9, p10, p11, p12));
        return;
    }

    public void addOrReplaceProperty(com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty p3, boolean p4)
    {
        this._properties.put(p3.getName(), p3);
        return;
    }

    public void addProperty(com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty p5)
    {
        com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v0_1 = ((com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty) this._properties.put(p5.getName(), p5));
        if ((v0_1 == null) || (v0_1 == p5)) {
            return;
        } else {
            throw new IllegalArgumentException(new StringBuilder().append("Duplicate property \'").append(p5.getName()).append("\' for ").append(this._beanDesc.getType()).toString());
        }
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer build(com.flurry.org.codehaus.jackson.map.BeanProperty p11)
    {
        com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap v4_1 = new com.flurry.org.codehaus.jackson.map.deser.impl.BeanPropertyMap(this._properties.values());
        v4_1.assignIndexes();
        return new com.flurry.org.codehaus.jackson.map.deser.BeanDeserializer(this._beanDesc, p11, this._valueInstantiator, v4_1, this._backRefProperties, this._ignorableProps, this._ignoreAllUnknown, this._anySetter, this._injectables);
    }

    public java.util.Iterator getProperties()
    {
        return this._properties.values().iterator();
    }

    public com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator getValueInstantiator()
    {
        return this._valueInstantiator;
    }

    public boolean hasProperty(String p2)
    {
        return this._properties.containsKey(p2);
    }

    public com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty removeProperty(String p2)
    {
        return ((com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty) this._properties.remove(p2));
    }

    public void setAnySetter(com.flurry.org.codehaus.jackson.map.deser.SettableAnyProperty p3)
    {
        if ((this._anySetter == null) || (p3 == null)) {
            this._anySetter = p3;
            return;
        } else {
            throw new IllegalStateException("_anySetter already set to non-null");
        }
    }

    public void setIgnoreUnknownProperties(boolean p1)
    {
        this._ignoreAllUnknown = p1;
        return;
    }

    public void setValueInstantiator(com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator p1)
    {
        this._valueInstantiator = p1;
        return;
    }
}
