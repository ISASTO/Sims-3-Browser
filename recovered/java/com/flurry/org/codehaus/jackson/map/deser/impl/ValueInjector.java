package com.flurry.org.codehaus.jackson.map.deser.impl;
public class ValueInjector extends com.flurry.org.codehaus.jackson.map.BeanProperty$Std {
    protected final Object _valueId;

    public ValueInjector(String p1, com.flurry.org.codehaus.jackson.type.JavaType p2, com.flurry.org.codehaus.jackson.map.util.Annotations p3, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p4, Object p5)
    {
        super(p1, p2, p3, p4);
        super._valueId = p5;
        return;
    }

    public Object findValue(com.flurry.org.codehaus.jackson.map.DeserializationContext p2, Object p3)
    {
        return p2.findInjectableValue(this._valueId, this, p3);
    }

    public void inject(com.flurry.org.codehaus.jackson.map.DeserializationContext p3, Object p4)
    {
        this._member.setValue(p4, this.findValue(p3, p4));
        return;
    }
}
