package com.flurry.org.codehaus.jackson.map.deser;
public abstract class SettableBeanProperty implements com.flurry.org.codehaus.jackson.map.BeanProperty {
    protected final com.flurry.org.codehaus.jackson.map.util.Annotations _contextAnnotations;
    protected String _managedReferenceName;
    protected com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$NullProvider _nullProvider;
    protected final String _propName;
    protected int _propertyIndex;
    protected final com.flurry.org.codehaus.jackson.type.JavaType _type;
    protected com.flurry.org.codehaus.jackson.map.JsonDeserializer _valueDeserializer;
    protected com.flurry.org.codehaus.jackson.map.TypeDeserializer _valueTypeDeserializer;

    protected SettableBeanProperty(com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty p2)
    {
        this._propertyIndex = -1;
        this._propName = p2._propName;
        this._type = p2._type;
        this._contextAnnotations = p2._contextAnnotations;
        this._valueDeserializer = p2._valueDeserializer;
        this._valueTypeDeserializer = p2._valueTypeDeserializer;
        this._nullProvider = p2._nullProvider;
        this._managedReferenceName = p2._managedReferenceName;
        this._propertyIndex = p2._propertyIndex;
        return;
    }

    protected SettableBeanProperty(com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty p4, com.flurry.org.codehaus.jackson.map.JsonDeserializer p5)
    {
        com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$NullProvider v1_0 = 0;
        this._propertyIndex = -1;
        this._propName = p4._propName;
        this._type = p4._type;
        this._contextAnnotations = p4._contextAnnotations;
        this._valueTypeDeserializer = p4._valueTypeDeserializer;
        this._managedReferenceName = p4._managedReferenceName;
        this._propertyIndex = p4._propertyIndex;
        this._valueDeserializer = p5;
        if (p5 != null) {
            Object v0 = p5.getNullValue();
            if (v0 != null) {
                v1_0 = new com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$NullProvider(this._type, v0);
            }
            this._nullProvider = v1_0;
        } else {
            this._nullProvider = 0;
        }
        return;
    }

    protected SettableBeanProperty(String p2, com.flurry.org.codehaus.jackson.type.JavaType p3, com.flurry.org.codehaus.jackson.map.TypeDeserializer p4, com.flurry.org.codehaus.jackson.map.util.Annotations p5)
    {
        this._propertyIndex = -1;
        if ((p2 != null) && (p2.length() != 0)) {
            this._propName = com.flurry.org.codehaus.jackson.util.InternCache.instance.intern(p2);
        } else {
            this._propName = "";
        }
        this._type = p3;
        this._contextAnnotations = p5;
        this._valueTypeDeserializer = p4;
        return;
    }

    protected java.io.IOException _throwAsIOE(Exception p5)
    {
        if (!(p5 instanceof java.io.IOException)) {
            if (!(p5 instanceof RuntimeException)) {
                Throwable v0 = p5;
                while (v0.getCause() != null) {
                    v0 = v0.getCause();
                }
                throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(v0.getMessage(), 0, v0);
            } else {
                throw ((RuntimeException) p5);
            }
        } else {
            throw ((java.io.IOException) p5);
        }
    }

    protected void _throwAsIOE(Exception p7, Object p8)
    {
        if (!(p7 instanceof IllegalArgumentException)) {
            this._throwAsIOE(p7);
            return;
        } else {
            String v0;
            if (p8 != null) {
                v0 = p8.getClass().getName();
            } else {
                v0 = "[NULL]";
            }
            StringBuilder v1 = new StringBuilder("Problem deserializing property \'").append(this.getPropertyName());
            v1.append("\' (expected type: ").append(this.getType());
            v1.append("; actual type: ").append(v0).append(")");
            String v2 = p7.getMessage();
            if (v2 == null) {
                v1.append(" (no error message provided)");
            } else {
                v1.append(", problem: ").append(v2);
            }
            throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(v1.toString(), 0, p7);
        }
    }

    public void assignIndex(int p4)
    {
        if (this._propertyIndex == -1) {
            this._propertyIndex = p4;
            return;
        } else {
            throw new IllegalStateException(new StringBuilder().append("Property \'").append(this.getName()).append("\' already had index (").append(this._propertyIndex).append("), trying to assign ").append(p4).toString());
        }
    }

    public final Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p4, com.flurry.org.codehaus.jackson.map.DeserializationContext p5)
    {
        Object v1_0;
        if (p4.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.VALUE_NULL) {
            if (this._valueTypeDeserializer == null) {
                v1_0 = this._valueDeserializer.deserialize(p4, p5);
            } else {
                v1_0 = this._valueDeserializer.deserializeWithType(p4, p5, this._valueTypeDeserializer);
            }
        } else {
            if (this._nullProvider != null) {
                v1_0 = this._nullProvider.nullValue(p5);
            } else {
                v1_0 = 0;
            }
        }
        return v1_0;
    }

    public abstract void deserializeAndSet(com.flurry.org.codehaus.jackson.JsonParser p0, com.flurry.org.codehaus.jackson.map.DeserializationContext p1, Object p2);

    public abstract otation.Annotation getAnnotation(Class p0);

    public otation.Annotation getContextAnnotation(Class p2)
    {
        return this._contextAnnotations.get(p2);
    }

    protected final Class getDeclaringClass()
    {
        return this.getMember().getDeclaringClass();
    }

    public Object getInjectableValueId()
    {
        return 0;
    }

    public String getManagedReferenceName()
    {
        return this._managedReferenceName;
    }

    public abstract com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember getMember();

    public final String getName()
    {
        return this._propName;
    }

    public int getPropertyIndex()
    {
        return this._propertyIndex;
    }

    public String getPropertyName()
    {
        return this._propName;
    }

    public int getProperytIndex()
    {
        return this.getPropertyIndex();
    }

    public com.flurry.org.codehaus.jackson.type.JavaType getType()
    {
        return this._type;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer getValueDeserializer()
    {
        return this._valueDeserializer;
    }

    public com.flurry.org.codehaus.jackson.map.TypeDeserializer getValueTypeDeserializer()
    {
        return this._valueTypeDeserializer;
    }

    public boolean hasValueDeserializer()
    {
        int v0_1;
        if (this._valueDeserializer == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean hasValueTypeDeserializer()
    {
        int v0_1;
        if (this._valueTypeDeserializer == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public abstract void set(Object p0, Object p1);

    public void setManagedReferenceName(String p1)
    {
        this._managedReferenceName = p1;
        return;
    }

    public void setValueDeserializer(com.flurry.org.codehaus.jackson.map.JsonDeserializer p5)
    {
        if (this._valueDeserializer == null) {
            com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$NullProvider v1_1;
            this._valueDeserializer = p5;
            Object v0 = this._valueDeserializer.getNullValue();
            if (v0 != null) {
                v1_1 = new com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty$NullProvider(this._type, v0);
            } else {
                v1_1 = 0;
            }
            this._nullProvider = v1_1;
            return;
        } else {
            throw new IllegalStateException(new StringBuilder().append("Already had assigned deserializer for property \'").append(this.getName()).append("\' (class ").append(this.getDeclaringClass().getName()).append(")").toString());
        }
    }

    public String toString()
    {
        return new StringBuilder().append("[property \'").append(this.getName()).append("\']").toString();
    }

    public abstract com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty withValueDeserializer(com.flurry.org.codehaus.jackson.map.JsonDeserializer p0);
}
