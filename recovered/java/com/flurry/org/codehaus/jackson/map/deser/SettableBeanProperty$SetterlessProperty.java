package com.flurry.org.codehaus.jackson.map.deser;
public final class SettableBeanProperty$SetterlessProperty extends com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty {
    protected final com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod _annotated;
    protected final reflect.Method _getter;

    protected SettableBeanProperty$SetterlessProperty(com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$SetterlessProperty p2, com.flurry.org.codehaus.jackson.map.JsonDeserializer p3)
    {
        super(p2, p3);
        super._annotated = p2._annotated;
        super._getter = p2._getter;
        return;
    }

    public SettableBeanProperty$SetterlessProperty(String p2, com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4, com.flurry.org.codehaus.jackson.map.util.Annotations p5, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p6)
    {
        super(p2, p3, p4, p5);
        super._annotated = p6;
        super._getter = p6.getAnnotated();
        return;
    }

    public final void deserializeAndSet(com.flurry.org.codehaus.jackson.JsonParser p7, com.flurry.org.codehaus.jackson.map.DeserializationContext p8, Object p9)
    {
        if (p7.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
            try {
                String v4_7 = new Object[0];
                Object v2 = 億.invokeHook(this._getter, p9, v4_7);
            } catch (Exception v0) {
                this._throwAsIOE(v0);
            }
            if (v2 != null) {
                this._valueDeserializer.deserialize(p7, p8, v2);
            } else {
                throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Problem deserializing \'setterless\' property \'").append(this.getName()).append("\': get method returned null").toString());
            }
        }
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
        throw new UnsupportedOperationException("Should never call \'set\' on setterless property");
    }

    public com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$SetterlessProperty withValueDeserializer(com.flurry.org.codehaus.jackson.map.JsonDeserializer p2)
    {
        return new com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$SetterlessProperty(this, p2);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty withValueDeserializer(com.flurry.org.codehaus.jackson.map.JsonDeserializer p2)
    {
        return this.withValueDeserializer(p2);
    }
}
