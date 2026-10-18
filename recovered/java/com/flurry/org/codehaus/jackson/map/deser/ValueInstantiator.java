package com.flurry.org.codehaus.jackson.map.deser;
public abstract class ValueInstantiator {

    public ValueInstantiator()
    {
        return;
    }

    public boolean canCreateFromBoolean()
    {
        return 0;
    }

    public boolean canCreateFromDouble()
    {
        return 0;
    }

    public boolean canCreateFromInt()
    {
        return 0;
    }

    public boolean canCreateFromLong()
    {
        return 0;
    }

    public boolean canCreateFromObjectWith()
    {
        return 0;
    }

    public boolean canCreateFromString()
    {
        return 0;
    }

    public boolean canCreateUsingDefault()
    {
        int v0_1;
        if (this.getDefaultCreator() == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean canCreateUsingDelegate()
    {
        int v0_1;
        if (this.getDelegateType() == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean canInstantiate()
    {
        if ((!this.canCreateUsingDefault()) && ((!this.canCreateUsingDelegate()) && ((!this.canCreateFromObjectWith()) && ((!this.canCreateFromString()) && ((!this.canCreateFromInt()) && ((!this.canCreateFromLong()) && ((!this.canCreateFromDouble()) && (!this.canCreateFromBoolean())))))))) {
            int v0_6 = 0;
        } else {
            v0_6 = 1;
        }
        return v0_6;
    }

    public Object createFromBoolean(boolean p4)
    {
        throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Can not instantiate value of type ").append(this.getValueTypeDesc()).append(" from JSON boolean value").toString());
    }

    public Object createFromDouble(double p4)
    {
        throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Can not instantiate value of type ").append(this.getValueTypeDesc()).append(" from JSON floating-point number").toString());
    }

    public Object createFromInt(int p4)
    {
        throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Can not instantiate value of type ").append(this.getValueTypeDesc()).append(" from JSON int number").toString());
    }

    public Object createFromLong(long p4)
    {
        throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Can not instantiate value of type ").append(this.getValueTypeDesc()).append(" from JSON long number").toString());
    }

    public Object createFromObjectWith(Object[] p4)
    {
        throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Can not instantiate value of type ").append(this.getValueTypeDesc()).append(" with arguments").toString());
    }

    public Object createFromString(String p4)
    {
        throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Can not instantiate value of type ").append(this.getValueTypeDesc()).append(" from JSON String").toString());
    }

    public Object createUsingDefault()
    {
        throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Can not instantiate value of type ").append(this.getValueTypeDesc()).append("; no default creator found").toString());
    }

    public Object createUsingDelegate(Object p4)
    {
        throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Can not instantiate value of type ").append(this.getValueTypeDesc()).append(" using delegate").toString());
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams getDefaultCreator()
    {
        return 0;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams getDelegateCreator()
    {
        return 0;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType getDelegateType()
    {
        return 0;
    }

    public com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty[] getFromObjectArguments()
    {
        return 0;
    }

    public abstract String getValueTypeDesc();

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams getWithArgsCreator()
    {
        return 0;
    }
}
