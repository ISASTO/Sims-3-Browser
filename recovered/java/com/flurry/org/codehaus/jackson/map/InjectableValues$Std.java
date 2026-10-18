package com.flurry.org.codehaus.jackson.map;
public class InjectableValues$Std extends com.flurry.org.codehaus.jackson.map.InjectableValues {
    protected final java.util.Map _values;

    public InjectableValues$Std()
    {
        this(new java.util.HashMap());
        return;
    }

    public InjectableValues$Std(java.util.Map p1)
    {
        this._values = p1;
        return;
    }

    public com.flurry.org.codehaus.jackson.map.InjectableValues$Std addValue(Class p3, Object p4)
    {
        this._values.put(p3.getName(), p4);
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.InjectableValues$Std addValue(String p2, Object p3)
    {
        this._values.put(p2, p3);
        return this;
    }

    public Object findInjectableValue(Object p7, com.flurry.org.codehaus.jackson.map.DeserializationContext p8, com.flurry.org.codehaus.jackson.map.BeanProperty p9, Object p10)
    {
        if ((p7 instanceof String)) {
            Object v1 = this._values.get(((String) p7));
            if ((v1 != null) || (this._values.containsKey(((String) p7)))) {
                return v1;
            } else {
                throw new IllegalArgumentException(new StringBuilder().append("No injectable id with value \'").append(((String) p7)).append("\' found (for property \'").append(p9.getName()).append("\')").toString());
            }
        } else {
            String v2;
            if (p7 != null) {
                v2 = p7.getClass().getName();
            } else {
                v2 = "[null]";
            }
            throw new IllegalArgumentException(new StringBuilder().append("Unrecognized inject value id type (").append(v2).append("), expecting String").toString());
        }
    }
}
