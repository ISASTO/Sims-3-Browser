package com.flurry.org.codehaus.jackson.map.deser;
public final class SettableBeanProperty$InnerClassProperty extends com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty {
    protected final reflect.Constructor _creator;
    protected final com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty _delegate;

    protected SettableBeanProperty$InnerClassProperty(com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$InnerClassProperty p2, com.flurry.org.codehaus.jackson.map.JsonDeserializer p3)
    {
        super(p2, p3);
        super._delegate = p2._delegate.withValueDeserializer(p3);
        super._creator = p2._creator;
        return;
    }

    public SettableBeanProperty$InnerClassProperty(com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty p1, reflect.Constructor p2)
    {
        super(p1);
        super._delegate = p1;
        super._creator = p2;
        return;
    }

    public void deserializeAndSet(com.flurry.org.codehaus.jackson.JsonParser p7, com.flurry.org.codehaus.jackson.map.DeserializationContext p8, Object p9)
    {
        int v2;
        if (p7.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
            if (this._valueTypeDeserializer == null) {
                try {
                    com.flurry.org.codehaus.jackson.map.JsonDeserializer v3_13 = this._creator;
                    String v4_8 = new Object[1];
                    v4_8[0] = p9;
                    v2 = v3_13.newInstance(v4_8);
                } catch (Exception v0) {
                    com.flurry.org.codehaus.jackson.map.util.ClassUtil.unwrapAndThrowAsIAE(v0, new StringBuilder().append("Failed to instantiate class ").append(this._creator.getDeclaringClass().getName()).append(", problem: ").append(v0.getMessage()).toString());
                    v2 = 0;
                }
                this._valueDeserializer.deserialize(p7, p8, v2);
            } else {
                v2 = this._valueDeserializer.deserializeWithType(p7, p8, this._valueTypeDeserializer);
            }
        } else {
            if (this._nullProvider != null) {
                v2 = this._nullProvider.nullValue(p8);
            } else {
                v2 = 0;
            }
        }
        this.set(p9, v2);
        return;
    }

    public otation.Annotation getAnnotation(Class p2)
    {
        return this._delegate.getAnnotation(p2);
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember getMember()
    {
        return this._delegate.getMember();
    }

    public final void set(Object p2, Object p3)
    {
        this._delegate.set(p2, p3);
        return;
    }

    public com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$InnerClassProperty withValueDeserializer(com.flurry.org.codehaus.jackson.map.JsonDeserializer p2)
    {
        return new com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$InnerClassProperty(this, p2);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty withValueDeserializer(com.flurry.org.codehaus.jackson.map.JsonDeserializer p2)
    {
        return this.withValueDeserializer(p2);
    }
}
