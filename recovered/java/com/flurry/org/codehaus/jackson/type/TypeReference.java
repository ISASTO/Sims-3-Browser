package com.flurry.org.codehaus.jackson.type;
public abstract class TypeReference implements java.lang.Comparable {
    final reflect.Type _type;

    protected TypeReference()
    {
        reflect.ParameterizedType v0_0 = this.getClass().getGenericSuperclass();
        if (!(v0_0 instanceof Class)) {
            this._type = ((reflect.ParameterizedType) v0_0).getActualTypeArguments()[0];
            return;
        } else {
            throw new IllegalArgumentException("Internal error: TypeReference constructed without actual type information");
        }
    }

    public int compareTo(com.flurry.org.codehaus.jackson.type.TypeReference p2)
    {
        return 0;
    }

    public bridge synthetic int compareTo(Object p2)
    {
        return this.compareTo(((com.flurry.org.codehaus.jackson.type.TypeReference) p2));
    }

    public reflect.Type getType()
    {
        return this._type;
    }
}
