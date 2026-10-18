package com.flurry.org.codehaus.jackson.map.deser;
public final class SettableBeanProperty$ManagedReferenceProperty extends com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty {
    protected final com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty _backProperty;
    protected final boolean _isContainer;
    protected final com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty _managedProperty;
    protected final String _referenceName;

    protected SettableBeanProperty$ManagedReferenceProperty(com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$ManagedReferenceProperty p2, com.flurry.org.codehaus.jackson.map.JsonDeserializer p3)
    {
        super(p2, p3);
        super._referenceName = p2._referenceName;
        super._isContainer = p2._isContainer;
        super._managedProperty = p2._managedProperty;
        super._backProperty = p2._backProperty;
        return;
    }

    public SettableBeanProperty$ManagedReferenceProperty(String p4, com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty p5, com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty p6, com.flurry.org.codehaus.jackson.map.util.Annotations p7, boolean p8)
    {
        super(p5.getName(), p5.getType(), p5._valueTypeDeserializer, p7);
        super._referenceName = p4;
        super._managedProperty = p5;
        super._backProperty = p6;
        super._isContainer = p8;
        return;
    }

    public void deserializeAndSet(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, Object p4)
    {
        this.set(p4, this._managedProperty.deserialize(p2, p3));
        return;
    }

    public otation.Annotation getAnnotation(Class p2)
    {
        return this._managedProperty.getAnnotation(p2);
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember getMember()
    {
        return this._managedProperty.getMember();
    }

    public final void set(Object p8, Object p9)
    {
        this._managedProperty.set(p8, p9);
        if (p9 != null) {
            if (!this._isContainer) {
                this._backProperty.set(p9, p8);
            } else {
                if (!(p9 instanceof Object[])) {
                    if (!(p9 instanceof java.util.Collection)) {
                        if (!(p9 instanceof java.util.Map)) {
                            throw new IllegalStateException(new StringBuilder().append("Unsupported container type (").append(p9.getClass().getName()).append(") when resolving reference \'").append(this._referenceName).append("\'").toString());
                        } else {
                            int v1_0 = ((java.util.Map) p9).values().iterator();
                            while (v1_0.hasNext()) {
                                Object v3_0 = v1_0.next();
                                if (v3_0 != null) {
                                    this._backProperty.set(v3_0, p8);
                                }
                            }
                        }
                    } else {
                        int v1_1 = ((java.util.Collection) p9).iterator();
                        while (v1_1.hasNext()) {
                            Object v3_1 = v1_1.next();
                            if (v3_1 != null) {
                                this._backProperty.set(v3_1, p8);
                            }
                        }
                    }
                } else {
                    int v2 = ((Object[]) ((Object[]) p9)).length;
                    int v1_2 = 0;
                    while (v1_2 < v2) {
                        Object v3_2 = ((Object[]) ((Object[]) p9))[v1_2];
                        if (v3_2 != null) {
                            this._backProperty.set(v3_2, p8);
                        }
                        v1_2++;
                    }
                }
            }
        }
        return;
    }

    public com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$ManagedReferenceProperty withValueDeserializer(com.flurry.org.codehaus.jackson.map.JsonDeserializer p2)
    {
        return new com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$ManagedReferenceProperty(this, p2);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty withValueDeserializer(com.flurry.org.codehaus.jackson.map.JsonDeserializer p2)
    {
        return this.withValueDeserializer(p2);
    }
}
