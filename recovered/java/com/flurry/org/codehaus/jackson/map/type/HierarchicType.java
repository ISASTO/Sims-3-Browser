package com.flurry.org.codehaus.jackson.map.type;
public class HierarchicType {
    protected final reflect.Type _actualType;
    protected final reflect.ParameterizedType _genericType;
    protected final Class _rawClass;
    protected com.flurry.org.codehaus.jackson.map.type.HierarchicType _subType;
    protected com.flurry.org.codehaus.jackson.map.type.HierarchicType _superType;

    public HierarchicType(reflect.Type p4)
    {
        this._actualType = p4;
        if (!(p4 instanceof Class)) {
            if (!(p4 instanceof reflect.ParameterizedType)) {
                throw new IllegalArgumentException(new StringBuilder().append("Type ").append(p4.getClass().getName()).append(" can not be used to construct HierarchicType").toString());
            } else {
                this._genericType = ((reflect.ParameterizedType) p4);
                this._rawClass = ((Class) this._genericType.getRawType());
            }
        } else {
            this._rawClass = ((Class) p4);
            this._genericType = 0;
        }
        return;
    }

    private HierarchicType(reflect.Type p1, Class p2, reflect.ParameterizedType p3, com.flurry.org.codehaus.jackson.map.type.HierarchicType p4, com.flurry.org.codehaus.jackson.map.type.HierarchicType p5)
    {
        this._actualType = p1;
        this._rawClass = p2;
        this._genericType = p3;
        this._superType = p4;
        this._subType = p5;
        return;
    }

    public final reflect.ParameterizedType asGeneric()
    {
        return this._genericType;
    }

    public com.flurry.org.codehaus.jackson.map.type.HierarchicType deepCloneWithoutSubtype()
    {
        com.flurry.org.codehaus.jackson.map.type.HierarchicType v4;
        if (this._superType != null) {
            v4 = this._superType.deepCloneWithoutSubtype();
        } else {
            v4 = 0;
        }
        com.flurry.org.codehaus.jackson.map.type.HierarchicType v0_0 = new com.flurry.org.codehaus.jackson.map.type.HierarchicType(this._actualType, this._rawClass, this._genericType, v4, 0);
        if (v4 != null) {
            v4.setSubType(v0_0);
        }
        return v0_0;
    }

    public final Class getRawClass()
    {
        return this._rawClass;
    }

    public final com.flurry.org.codehaus.jackson.map.type.HierarchicType getSubType()
    {
        return this._subType;
    }

    public final com.flurry.org.codehaus.jackson.map.type.HierarchicType getSuperType()
    {
        return this._superType;
    }

    public final boolean isGeneric()
    {
        int v0_1;
        if (this._genericType == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public void setSubType(com.flurry.org.codehaus.jackson.map.type.HierarchicType p1)
    {
        this._subType = p1;
        return;
    }

    public void setSuperType(com.flurry.org.codehaus.jackson.map.type.HierarchicType p1)
    {
        this._superType = p1;
        return;
    }

    public String toString()
    {
        String v0_2;
        if (this._genericType == null) {
            v0_2 = this._rawClass.getName();
        } else {
            v0_2 = this._genericType.toString();
        }
        return v0_2;
    }
}
