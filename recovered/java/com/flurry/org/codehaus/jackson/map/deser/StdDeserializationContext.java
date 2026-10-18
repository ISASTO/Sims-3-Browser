package com.flurry.org.codehaus.jackson.map.deser;
public class StdDeserializationContext extends com.flurry.org.codehaus.jackson.map.DeserializationContext {
    static final int MAX_ERROR_STR_LEN = 500;
    protected com.flurry.org.codehaus.jackson.map.util.ArrayBuilders _arrayBuilders;
    protected java.text.DateFormat _dateFormat;
    protected final com.flurry.org.codehaus.jackson.map.DeserializerProvider _deserProvider;
    protected final com.flurry.org.codehaus.jackson.map.InjectableValues _injectableValues;
    protected com.flurry.org.codehaus.jackson.map.util.ObjectBuffer _objectBuffer;
    protected com.flurry.org.codehaus.jackson.JsonParser _parser;

    public StdDeserializationContext(com.flurry.org.codehaus.jackson.map.DeserializationConfig p1, com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializerProvider p3, com.flurry.org.codehaus.jackson.map.InjectableValues p4)
    {
        super(p1);
        super._parser = p2;
        super._deserProvider = p3;
        super._injectableValues = p4;
        return;
    }

    protected String _calcName(Class p3)
    {
        String v0_3;
        if (!p3.isArray()) {
            v0_3 = p3.getName();
        } else {
            v0_3 = new StringBuilder().append(this._calcName(p3.getComponentType())).append("[]").toString();
        }
        return v0_3;
    }

    protected String _desc(String p4)
    {
        if (p4.length() > 500) {
            p4 = new StringBuilder().append(p4.substring(0, 500)).append("]...[").append(p4.substring((p4.length() + -500))).toString();
        }
        return p4;
    }

    protected String _valueDesc()
    {
        try {
            String v1_2 = this._desc(this._parser.getText());
        } catch (Exception v0) {
            v1_2 = "[N/A]";
        }
        return v1_2;
    }

    public java.util.Calendar constructCalendar(java.util.Date p2)
    {
        java.util.Calendar v0 = java.util.Calendar.getInstance();
        v0.setTime(p2);
        return v0;
    }

    protected String determineClassName(Object p2)
    {
        return com.flurry.org.codehaus.jackson.map.util.ClassUtil.getClassDescription(p2);
    }

    public Object findInjectableValue(Object p4, com.flurry.org.codehaus.jackson.map.BeanProperty p5, Object p6)
    {
        if (this._injectableValues != null) {
            return this._injectableValues.findInjectableValue(p4, this, p5, p6);
        } else {
            throw new IllegalStateException(new StringBuilder().append("No \'injectableValues\' configured, can not inject value with id [").append(p4).append("]").toString());
        }
    }

    public final com.flurry.org.codehaus.jackson.map.util.ArrayBuilders getArrayBuilders()
    {
        if (this._arrayBuilders == null) {
            this._arrayBuilders = new com.flurry.org.codehaus.jackson.map.util.ArrayBuilders();
        }
        return this._arrayBuilders;
    }

    protected java.text.DateFormat getDateFormat()
    {
        if (this._dateFormat == null) {
            this._dateFormat = ((java.text.DateFormat) this._config.getDateFormat().clone());
        }
        return this._dateFormat;
    }

    public com.flurry.org.codehaus.jackson.map.DeserializerProvider getDeserializerProvider()
    {
        return this._deserProvider;
    }

    public com.flurry.org.codehaus.jackson.JsonParser getParser()
    {
        return this._parser;
    }

    public boolean handleUnknownProperty(com.flurry.org.codehaus.jackson.JsonParser p4, com.flurry.org.codehaus.jackson.map.JsonDeserializer p5, Object p6, String p7)
    {
        int v2_5;
        com.flurry.org.codehaus.jackson.map.util.LinkedNode v0 = this._config.getProblemHandlers();
        if (v0 == null) {
            v2_5 = 0;
        } else {
            com.flurry.org.codehaus.jackson.JsonParser v1 = this._parser;
            this._parser = p4;
            while (v0 != null) {
                try {
                    if (!((com.flurry.org.codehaus.jackson.map.DeserializationProblemHandler) v0.value()).handleUnknownProperty(this, p5, p6, p7)) {
                        v0 = v0.next();
                    } else {
                        v2_5 = 1;
                        this._parser = v1;
                    }
                } catch (int v2_4) {
                    this._parser = v1;
                    throw v2_4;
                }
            }
            this._parser = v1;
        }
        return v2_5;
    }

    public com.flurry.org.codehaus.jackson.map.JsonMappingException instantiationException(Class p4, String p5)
    {
        return com.flurry.org.codehaus.jackson.map.JsonMappingException.from(this._parser, new StringBuilder().append("Can not construct instance of ").append(p4.getName()).append(", problem: ").append(p5).toString());
    }

    public com.flurry.org.codehaus.jackson.map.JsonMappingException instantiationException(Class p4, Throwable p5)
    {
        return com.flurry.org.codehaus.jackson.map.JsonMappingException.from(this._parser, new StringBuilder().append("Can not construct instance of ").append(p4.getName()).append(", problem: ").append(p5.getMessage()).toString(), p5);
    }

    public final com.flurry.org.codehaus.jackson.map.util.ObjectBuffer leaseObjectBuffer()
    {
        com.flurry.org.codehaus.jackson.map.util.ObjectBuffer v0_0 = this._objectBuffer;
        if (v0_0 != null) {
            this._objectBuffer = 0;
        } else {
            v0_0 = new com.flurry.org.codehaus.jackson.map.util.ObjectBuffer();
        }
        return v0_0;
    }

    public com.flurry.org.codehaus.jackson.map.JsonMappingException mappingException(Class p2)
    {
        return this.mappingException(p2, this._parser.getCurrentToken());
    }

    public com.flurry.org.codehaus.jackson.map.JsonMappingException mappingException(Class p5, com.flurry.org.codehaus.jackson.JsonToken p6)
    {
        return com.flurry.org.codehaus.jackson.map.JsonMappingException.from(this._parser, new StringBuilder().append("Can not deserialize instance of ").append(this._calcName(p5)).append(" out of ").append(p6).append(" token").toString());
    }

    public java.util.Date parseDate(String p4)
    {
        try {
            return this.getDateFormat().parse(p4);
        } catch (java.text.ParseException v0) {
            throw new IllegalArgumentException(v0.getMessage());
        }
    }

    public final void returnObjectBuffer(com.flurry.org.codehaus.jackson.map.util.ObjectBuffer p3)
    {
        if ((this._objectBuffer == null) || (p3.initialCapacity() >= this._objectBuffer.initialCapacity())) {
            this._objectBuffer = p3;
        }
        return;
    }

    public com.flurry.org.codehaus.jackson.map.JsonMappingException unknownFieldException(Object p2, String p3)
    {
        return com.flurry.org.codehaus.jackson.map.exc.UnrecognizedPropertyException.from(this._parser, p2, p3);
    }

    public com.flurry.org.codehaus.jackson.map.JsonMappingException unknownTypeException(com.flurry.org.codehaus.jackson.type.JavaType p4, String p5)
    {
        return com.flurry.org.codehaus.jackson.map.JsonMappingException.from(this._parser, new StringBuilder().append("Could not resolve type id \'").append(p5).append("\' into a subtype of ").append(p4).toString());
    }

    public com.flurry.org.codehaus.jackson.map.JsonMappingException weirdKeyException(Class p4, String p5, String p6)
    {
        return com.flurry.org.codehaus.jackson.map.JsonMappingException.from(this._parser, new StringBuilder().append("Can not construct Map key of type ").append(p4.getName()).append(" from String \"").append(this._desc(p5)).append("\": ").append(p6).toString());
    }

    public com.flurry.org.codehaus.jackson.map.JsonMappingException weirdNumberException(Class p4, String p5)
    {
        return com.flurry.org.codehaus.jackson.map.JsonMappingException.from(this._parser, new StringBuilder().append("Can not construct instance of ").append(p4.getName()).append(" from number value (").append(this._valueDesc()).append("): ").append(p5).toString());
    }

    public com.flurry.org.codehaus.jackson.map.JsonMappingException weirdStringException(Class p4, String p5)
    {
        return com.flurry.org.codehaus.jackson.map.JsonMappingException.from(this._parser, new StringBuilder().append("Can not construct instance of ").append(p4.getName()).append(" from String value \'").append(this._valueDesc()).append("\': ").append(p5).toString());
    }

    public com.flurry.org.codehaus.jackson.map.JsonMappingException wrongTokenException(com.flurry.org.codehaus.jackson.JsonParser p3, com.flurry.org.codehaus.jackson.JsonToken p4, String p5)
    {
        return com.flurry.org.codehaus.jackson.map.JsonMappingException.from(p3, new StringBuilder().append("Unexpected token (").append(p3.getCurrentToken()).append("), expected ").append(p4).append(": ").append(p5).toString());
    }
}
