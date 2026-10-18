package com.flurry.org.codehaus.jackson.map.deser;
public final class SettableBeanProperty$MethodProperty extends com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty {
    protected final com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod _annotated;
    protected final reflect.Method _setter;

    protected SettableBeanProperty$MethodProperty(com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$MethodProperty p2, com.flurry.org.codehaus.jackson.map.JsonDeserializer p3)
    {
        super(p2, p3);
        super._annotated = p2._annotated;
        super._setter = p2._setter;
        return;
    }

    public SettableBeanProperty$MethodProperty(String p2, com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4, com.flurry.org.codehaus.jackson.map.util.Annotations p5, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p6)
    {
        super(p2, p3, p4, p5);
        super._annotated = p6;
        super._setter = p6.getAnnotated();
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

    public final void set(Object p5, Object p6)
    {
        try {
            reflect.Method v1 = this._setter;
            Object[] v2_1 = new Object[1];
            v2_1[0] = p6;
            億.invokeHook(v1, p5, v2_1);
        } catch (Exception v0) {
            this._throwAsIOE(v0, p6);
        }
        return;
    }

    public com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$MethodProperty withValueDeserializer(com.flurry.org.codehaus.jackson.map.JsonDeserializer p2)
    {
        return new com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$MethodProperty(this, p2);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty withValueDeserializer(com.flurry.org.codehaus.jackson.map.JsonDeserializer p2)
    {
        return this.withValueDeserializer(p2);
    }
}
