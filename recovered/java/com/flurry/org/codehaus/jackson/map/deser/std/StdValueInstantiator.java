package com.flurry.org.codehaus.jackson.map.deser.std;
public class StdValueInstantiator extends com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator {
    protected final boolean _cfgEmptyStringsAsObjects;
    protected com.flurry.org.codehaus.jackson.map.deser.impl.CreatorProperty[] _constructorArguments;
    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams _defaultCreator;
    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams _delegateCreator;
    protected com.flurry.org.codehaus.jackson.type.JavaType _delegateType;
    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams _fromBooleanCreator;
    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams _fromDoubleCreator;
    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams _fromIntCreator;
    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams _fromLongCreator;
    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams _fromStringCreator;
    protected final String _valueTypeDesc;
    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams _withArgsCreator;

    public StdValueInstantiator(com.flurry.org.codehaus.jackson.map.DeserializationConfig p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        String v0_2;
        if (p2 != null) {
            v0_2 = p2.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.ACCEPT_EMPTY_STRING_AS_NULL_OBJECT);
        } else {
            v0_2 = 0;
        }
        String v0_0;
        this._cfgEmptyStringsAsObjects = v0_2;
        if (p3 != null) {
            v0_0 = p3.toString();
        } else {
            v0_0 = "UNKNOWN TYPE";
        }
        this._valueTypeDesc = v0_0;
        return;
    }

    public StdValueInstantiator(com.flurry.org.codehaus.jackson.map.DeserializationConfig p2, Class p3)
    {
        String v0_2;
        if (p2 != null) {
            v0_2 = p2.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.ACCEPT_EMPTY_STRING_AS_NULL_OBJECT);
        } else {
            v0_2 = 0;
        }
        String v0_0;
        this._cfgEmptyStringsAsObjects = v0_2;
        if (p3 != null) {
            v0_0 = p3.getName();
        } else {
            v0_0 = "UNKNOWN TYPE";
        }
        this._valueTypeDesc = v0_0;
        return;
    }

    protected StdValueInstantiator(com.flurry.org.codehaus.jackson.map.deser.std.StdValueInstantiator p2)
    {
        this._cfgEmptyStringsAsObjects = p2._cfgEmptyStringsAsObjects;
        this._valueTypeDesc = p2._valueTypeDesc;
        this._defaultCreator = p2._defaultCreator;
        this._constructorArguments = p2._constructorArguments;
        this._withArgsCreator = p2._withArgsCreator;
        this._delegateType = p2._delegateType;
        this._delegateCreator = p2._delegateCreator;
        this._fromStringCreator = p2._fromStringCreator;
        this._fromIntCreator = p2._fromIntCreator;
        this._fromLongCreator = p2._fromLongCreator;
        this._fromDoubleCreator = p2._fromDoubleCreator;
        this._fromBooleanCreator = p2._fromBooleanCreator;
        return;
    }

    protected Object _createFromStringFallbacks(String p5)
    {
        int v1_6;
        if (this._fromBooleanCreator == null) {
            if ((!this._cfgEmptyStringsAsObjects) || (p5.length() != 0)) {
                throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Can not instantiate value of type ").append(this.getValueTypeDesc()).append(" from JSON String; no single-String constructor/factory method").toString());
            } else {
                v1_6 = 0;
            }
        } else {
            String v0 = p5.trim();
            if (!"true".equals(v0)) {
                if (!"false".equals(v0)) {
                } else {
                    v1_6 = this.createFromBoolean(0);
                }
            } else {
                v1_6 = this.createFromBoolean(1);
            }
        }
        return v1_6;
    }

    public boolean canCreateFromBoolean()
    {
        int v0_1;
        if (this._fromBooleanCreator == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean canCreateFromDouble()
    {
        int v0_1;
        if (this._fromDoubleCreator == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean canCreateFromInt()
    {
        int v0_1;
        if (this._fromIntCreator == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean canCreateFromLong()
    {
        int v0_1;
        if (this._fromLongCreator == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean canCreateFromObjectWith()
    {
        int v0_1;
        if (this._withArgsCreator == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean canCreateFromString()
    {
        int v0_1;
        if (this._fromStringCreator == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean canCreateUsingDefault()
    {
        int v0_1;
        if (this._defaultCreator == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public void configureFromBooleanCreator(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams p1)
    {
        this._fromBooleanCreator = p1;
        return;
    }

    public void configureFromDoubleCreator(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams p1)
    {
        this._fromDoubleCreator = p1;
        return;
    }

    public void configureFromIntCreator(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams p1)
    {
        this._fromIntCreator = p1;
        return;
    }

    public void configureFromLongCreator(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams p1)
    {
        this._fromLongCreator = p1;
        return;
    }

    public void configureFromObjectSettings(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams p1, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams p2, com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams p4, com.flurry.org.codehaus.jackson.map.deser.impl.CreatorProperty[] p5)
    {
        this._defaultCreator = p1;
        this._delegateCreator = p2;
        this._delegateType = p3;
        this._withArgsCreator = p4;
        this._constructorArguments = p5;
        return;
    }

    public void configureFromStringCreator(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams p1)
    {
        this._fromStringCreator = p1;
        return;
    }

    public Object createFromBoolean(boolean p5)
    {
        try {
            if (this._fromBooleanCreator == null) {
                throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Can not instantiate value of type ").append(this.getValueTypeDesc()).append(" from JSON boolean value; no single-boolean/Boolean-arg constructor/factory method").toString());
            } else {
                return this._fromBooleanCreator.call1(Boolean.valueOf(p5));
            }
        } catch (Exception v0) {
            throw this.wrapException(v0);
        }
    }

    public Object createFromDouble(double p5)
    {
        try {
            if (this._fromDoubleCreator == null) {
                throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Can not instantiate value of type ").append(this.getValueTypeDesc()).append(" from JSON floating-point number; no one-double/Double-arg constructor/factory method").toString());
            } else {
                return this._fromDoubleCreator.call1(Double.valueOf(p5));
            }
        } catch (Exception v0) {
            throw this.wrapException(v0);
        }
    }

    public Object createFromInt(int p5)
    {
        try {
            com.flurry.org.codehaus.jackson.map.JsonMappingException v1_4;
            if (this._fromIntCreator == null) {
                if (this._fromLongCreator == null) {
                    throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Can not instantiate value of type ").append(this.getValueTypeDesc()).append(" from JSON integral number; no single-int-arg constructor/factory method").toString());
                } else {
                    v1_4 = this._fromLongCreator.call1(Long.valueOf(((long) p5)));
                }
            } else {
                v1_4 = this._fromIntCreator.call1(Integer.valueOf(p5));
            }
        } catch (Exception v0) {
            throw this.wrapException(v0);
        }
        return v1_4;
    }

    public Object createFromLong(long p5)
    {
        try {
            if (this._fromLongCreator == null) {
                throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Can not instantiate value of type ").append(this.getValueTypeDesc()).append(" from JSON long integral number; no single-long-arg constructor/factory method").toString());
            } else {
                return this._fromLongCreator.call1(Long.valueOf(p5));
            }
        } catch (Exception v0) {
            throw this.wrapException(v0);
        }
    }

    public Object createFromObjectWith(Object[] p5)
    {
        if (this._withArgsCreator != null) {
            try {
                return this._withArgsCreator.call(p5);
            } catch (Exception v0_0) {
                throw this.wrapException(v0_0);
            } catch (Exception v0_1) {
                throw this.wrapException(v0_1);
            }
        } else {
            throw new IllegalStateException(new StringBuilder().append("No with-args constructor for ").append(this.getValueTypeDesc()).toString());
        }
    }

    public Object createFromString(String p3)
    {
        com.flurry.org.codehaus.jackson.map.JsonMappingException v1_1;
        if (this._fromStringCreator == null) {
            v1_1 = this._createFromStringFallbacks(p3);
        } else {
            try {
                v1_1 = this._fromStringCreator.call1(p3);
            } catch (Exception v0) {
                throw this.wrapException(v0);
            }
        }
        return v1_1;
    }

    public Object createUsingDefault()
    {
        if (this._defaultCreator != null) {
            try {
                return this._defaultCreator.call();
            } catch (Exception v0_0) {
                throw this.wrapException(v0_0);
            } catch (Exception v0_1) {
                throw this.wrapException(v0_1);
            }
        } else {
            throw new IllegalStateException(new StringBuilder().append("No default constructor for ").append(this.getValueTypeDesc()).toString());
        }
    }

    public Object createUsingDelegate(Object p5)
    {
        if (this._delegateCreator != null) {
            try {
                return this._delegateCreator.call1(p5);
            } catch (Exception v0_0) {
                throw this.wrapException(v0_0);
            } catch (Exception v0_1) {
                throw this.wrapException(v0_1);
            }
        } else {
            throw new IllegalStateException(new StringBuilder().append("No delegate constructor for ").append(this.getValueTypeDesc()).toString());
        }
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams getDefaultCreator()
    {
        return this._defaultCreator;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams getDelegateCreator()
    {
        return this._delegateCreator;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType getDelegateType()
    {
        return this._delegateType;
    }

    public com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty[] getFromObjectArguments()
    {
        return this._constructorArguments;
    }

    public String getValueTypeDesc()
    {
        return this._valueTypeDesc;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedWithParams getWithArgsCreator()
    {
        return this._withArgsCreator;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonMappingException wrapException(Throwable p4)
    {
        while (p4.getCause() != null) {
            p4 = p4.getCause();
        }
        return new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Instantiation of ").append(this.getValueTypeDesc()).append(" value failed: ").append(p4.getMessage()).toString(), p4);
    }
}
