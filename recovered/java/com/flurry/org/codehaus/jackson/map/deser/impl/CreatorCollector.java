package com.flurry.org.codehaus.jackson.map.deser.impl;
public class CreatorCollector {
    final com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription _beanDesc;
    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams _booleanCreator;
    final boolean _canFixAccess;
    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor _defaultConstructor;
    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams _delegateCreator;
    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams _doubleCreator;
    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams _intCreator;
    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams _longCreator;
    protected com.flurry.org.codehaus.jackson.map.deser.impl.CreatorProperty[] _propertyBasedArgs;
    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams _propertyBasedCreator;
    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams _stringCreator;

    public CreatorCollector(com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p2, boolean p3)
    {
        this._propertyBasedArgs = 0;
        this._beanDesc = p2;
        this._canFixAccess = p3;
        return;
    }

    public void addBooleanCreator(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams p3)
    {
        this._booleanCreator = this.verifyNonDup(p3, this._booleanCreator, "boolean");
        return;
    }

    public void addDelegatingCreator(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams p3)
    {
        this._delegateCreator = this.verifyNonDup(p3, this._delegateCreator, "delegate");
        return;
    }

    public void addDoubleCreator(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams p3)
    {
        this._doubleCreator = this.verifyNonDup(p3, this._doubleCreator, "double");
        return;
    }

    public void addIntCreator(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams p3)
    {
        this._intCreator = this.verifyNonDup(p3, this._intCreator, "int");
        return;
    }

    public void addLongCreator(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams p3)
    {
        this._longCreator = this.verifyNonDup(p3, this._longCreator, "long");
        return;
    }

    public void addPropertyCreator(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams p9, com.flurry.org.codehaus.jackson.map.deser.impl.CreatorProperty[] p10)
    {
        this._propertyBasedCreator = this.verifyNonDup(p9, this._propertyBasedCreator, "property-based");
        if (p10.length > 1) {
            java.util.HashMap v3_1 = new java.util.HashMap();
            int v0 = 0;
            int v1 = p10.length;
            while (v0 < v1) {
                String v2 = p10[v0].getName();
                Integer v4_1 = ((Integer) v3_1.put(v2, Integer.valueOf(v0)));
                if (v4_1 == null) {
                    v0++;
                } else {
                    throw new IllegalArgumentException(new StringBuilder().append("Duplicate creator property \"").append(v2).append("\" (index ").append(v4_1).append(" vs ").append(v0).append(")").toString());
                }
            }
        }
        this._propertyBasedArgs = p10;
        return;
    }

    public void addStringCreator(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams p3)
    {
        this._stringCreator = this.verifyNonDup(p3, this._stringCreator, "String");
        return;
    }

    public com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator constructValueInstantiator(com.flurry.org.codehaus.jackson.map.DeserializationConfig p8)
    {
        com.flurry.org.codehaus.jackson.type.JavaType v3;
        com.flurry.org.codehaus.jackson.map.deser.std.StdValueInstantiator v0_1 = new com.flurry.org.codehaus.jackson.map.deser.std.StdValueInstantiator(p8, this._beanDesc.getType());
        if (this._delegateCreator != null) {
            v3 = this._beanDesc.bindingsForBeanType().resolveType(this._delegateCreator.getParameterType(0));
        } else {
            v3 = 0;
        }
        v0_1.configureFromObjectSettings(this._defaultConstructor, this._delegateCreator, v3, this._propertyBasedCreator, this._propertyBasedArgs);
        v0_1.configureFromStringCreator(this._stringCreator);
        v0_1.configureFromIntCreator(this._intCreator);
        v0_1.configureFromLongCreator(this._longCreator);
        v0_1.configureFromDoubleCreator(this._doubleCreator);
        v0_1.configureFromBooleanCreator(this._booleanCreator);
        return v0_1;
    }

    public void setDefaultConstructor(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor p1)
    {
        this._defaultConstructor = p1;
        return;
    }

    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams verifyNonDup(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams p4, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams p5, String p6)
    {
        if ((p5 == null) || (p5.getClass() != p4.getClass())) {
            if (this._canFixAccess) {
                com.flurry.org.codehaus.jackson.map.util.ClassUtil.checkAndFixAccess(((reflect.Member) p4.getAnnotated()));
            }
            return p4;
        } else {
            throw new IllegalArgumentException(new StringBuilder().append("Conflicting ").append(p6).append(" creators: already had ").append(p5).append(", encountered ").append(p4).toString());
        }
    }
}
