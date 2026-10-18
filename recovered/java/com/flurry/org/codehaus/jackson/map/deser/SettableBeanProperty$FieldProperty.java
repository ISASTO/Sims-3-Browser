package com.flurry.org.codehaus.jackson.map.deser;
public final class SettableBeanProperty$FieldProperty extends com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty {
    protected final com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField _annotated;
    protected final reflect.Field _field;

    protected SettableBeanProperty$FieldProperty(com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$FieldProperty p2, com.flurry.org.codehaus.jackson.map.JsonDeserializer p3)
    {
        super(p2, p3);
        super._annotated = p2._annotated;
        super._field = p2._field;
        return;
    }

    public SettableBeanProperty$FieldProperty(String p2, com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4, com.flurry.org.codehaus.jackson.map.util.Annotations p5, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField p6)
    {
        super(p2, p3, p4, p5);
        super._annotated = p6;
        super._field = p6.getAnnotated();
        return;
    }

    public void deserializeAndSet(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3, Object p4)
    {
        this.set(p4, this.deserialize(p2, p3));
        return;
    }

    public otation.Annotation getAnnotation(Class p2)
    {
        return this._annotated.getAnnotation(p2);
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember getMember()
    {
        return this._annotated;
    }

    public final void set(Object p3, Object p4)
    {
        try {
            this._field.set(p3, p4);
        } catch (Exception v0) {
            this._throwAsIOE(v0, p4);
        }
        return;
    }

    public com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$FieldProperty withValueDeserializer(com.flurry.org.codehaus.jackson.map.JsonDeserializer p2)
    {
        return new com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$FieldProperty(this, p2);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty withValueDeserializer(com.flurry.org.codehaus.jackson.map.JsonDeserializer p2)
    {
        return this.withValueDeserializer(p2);
    }
}
