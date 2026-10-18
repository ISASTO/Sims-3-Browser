package com.flurry.org.codehaus.jackson.map;
public abstract class BeanPropertyDefinition implements com.flurry.org.codehaus.jackson.map.util.Named {

    public BeanPropertyDefinition()
    {
        return;
    }

    public boolean couldDeserialize()
    {
        int v0_1;
        if (this.getMutator() == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean couldSerialize()
    {
        int v0_1;
        if (this.getAccessor() == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public abstract com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember getAccessor();

    public abstract com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter getConstructorParameter();

    public abstract com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField getField();

    public abstract com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod getGetter();

    public abstract String getInternalName();

    public abstract com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember getMutator();

    public abstract String getName();

    public abstract com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod getSetter();

    public abstract boolean hasConstructorParameter();

    public abstract boolean hasField();

    public abstract boolean hasGetter();

    public abstract boolean hasSetter();
}
