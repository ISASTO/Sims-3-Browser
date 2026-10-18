package com.flurry.org.codehaus.jackson.map.deser.impl;
public class CreatorProperty extends com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty {
    protected final com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter _annotated;
    protected final Object _injectableValueId;

    protected CreatorProperty(com.flurry.org.codehaus.jackson.map.deser.impl.CreatorProperty p2, com.flurry.org.codehaus.jackson.map.JsonDeserializer p3)
    {
        super(p2, p3);
        super._annotated = p2._annotated;
        super._injectableValueId = p2._injectableValueId;
        return;
    }

    public CreatorProperty(String p1, com.flurry.org.codehaus.jackson.type.JavaType p2, com.flurry.org.codehaus.jackson.map.TypeDeserializer p3, com.flurry.org.codehaus.jackson.map.util.Annotations p4, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter p5, int p6, Object p7)
    {
        super(p1, p2, p3, p4);
        super._annotated = p5;
        super._propertyIndex = p6;
        super._injectableValueId = p7;
        return;
    }

    public void deserializeAndSet(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, Object p4)
    {
        this.set(p4, this.deserialize(p2, p3));
        return;
    }

    public Object findInjectableValue(com.flurry.org.codehaus.jackson.map.DeserializationContext p4, Object p5)
    {
        if (this._injectableValueId != null) {
            return p4.findInjectableValue(this._injectableValueId, this, p5);
        } else {
            throw new IllegalStateException(new StringBuilder().append("Property \'").append(this.getName()).append("\' (type ").append(this.getClass().getName()).append(") has no injectable value id configured").toString());
        }
    }

    public otation.Annotation getAnnotation(Class p2)
    {
        otation.Annotation v0_2;
        if (this._annotated != null) {
            v0_2 = this._annotated.getAnnotation(p2);
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    public Object getInjectableValueId()
    {
        return this._injectableValueId;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember getMember()
    {
        return this._annotated;
    }

    public void inject(com.flurry.org.codehaus.jackson.map.DeserializationContext p2, Object p3)
    {
        this.set(p3, this.findInjectableValue(p2, p3));
        return;
    }

    public void set(Object p1, Object p2)
    {
        return;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty withValueDeserializer(com.flurry.org.codehaus.jackson.map.JsonDeserializer p2)
    {
        return this.withValueDeserializer(p2);
    }

    public com.flurry.org.codehaus.jackson.map.deser.impl.CreatorProperty withValueDeserializer(com.flurry.org.codehaus.jackson.map.JsonDeserializer p2)
    {
        return new com.flurry.org.codehaus.jackson.map.deser.impl.CreatorProperty(this, p2);
    }
}
