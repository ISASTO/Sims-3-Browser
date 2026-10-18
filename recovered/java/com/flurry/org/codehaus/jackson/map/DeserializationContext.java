package com.flurry.org.codehaus.jackson.map;
public abstract class DeserializationContext {
    protected final com.flurry.org.codehaus.jackson.map.DeserializationConfig _config;
    protected final int _featureFlags;

    protected DeserializationContext(com.flurry.org.codehaus.jackson.map.DeserializationConfig p2)
    {
        this._config = p2;
        this._featureFlags = p2._featureFlags;
        return;
    }

    public abstract java.util.Calendar constructCalendar(java.util.Date p0);

    public com.flurry.org.codehaus.jackson.type.JavaType constructType(Class p2)
    {
        return this._config.constructType(p2);
    }

    public abstract Object findInjectableValue(Object p0, com.flurry.org.codehaus.jackson.map.BeanProperty p1, Object p2);

    public abstract com.flurry.org.codehaus.jackson.map.util.ArrayBuilders getArrayBuilders();

    public com.flurry.org.codehaus.jackson.Base64Variant getBase64Variant()
    {
        return this._config.getBase64Variant();
    }

    public com.flurry.org.codehaus.jackson.map.DeserializationConfig getConfig()
    {
        return this._config;
    }

    public com.flurry.org.codehaus.jackson.map.DeserializerProvider getDeserializerProvider()
    {
        return 0;
    }

    public final com.flurry.org.codehaus.jackson.node.JsonNodeFactory getNodeFactory()
    {
        return this._config.getNodeFactory();
    }

    public abstract com.flurry.org.codehaus.jackson.JsonParser getParser();

    public com.flurry.org.codehaus.jackson.map.type.TypeFactory getTypeFactory()
    {
        return this._config.getTypeFactory();
    }

    public abstract boolean handleUnknownProperty(com.flurry.org.codehaus.jackson.JsonParser p0, com.flurry.org.codehaus.jackson.map.JsonDeserializer p1, Object p2, String p3);

    public abstract com.flurry.org.codehaus.jackson.map.JsonMappingException instantiationException(Class p0, String p1);

    public abstract com.flurry.org.codehaus.jackson.map.JsonMappingException instantiationException(Class p0, Throwable p1);

    public boolean isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature p3)
    {
        int v0_2;
        if ((this._featureFlags & p3.getMask()) == 0) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public abstract com.flurry.org.codehaus.jackson.map.util.ObjectBuffer leaseObjectBuffer();

    public abstract com.flurry.org.codehaus.jackson.map.JsonMappingException mappingException(Class p0);

    public abstract com.flurry.org.codehaus.jackson.map.JsonMappingException mappingException(Class p0, com.flurry.org.codehaus.jackson.JsonToken p1);

    public com.flurry.org.codehaus.jackson.map.JsonMappingException mappingException(String p2)
    {
        return com.flurry.org.codehaus.jackson.map.JsonMappingException.from(this.getParser(), p2);
    }

    public abstract java.util.Date parseDate(String p0);

    public abstract void returnObjectBuffer(com.flurry.org.codehaus.jackson.map.util.ObjectBuffer p0);

    public abstract com.flurry.org.codehaus.jackson.map.JsonMappingException unknownFieldException(Object p0, String p1);

    public abstract com.flurry.org.codehaus.jackson.map.JsonMappingException unknownTypeException(com.flurry.org.codehaus.jackson.type.JavaType p0, String p1);

    public abstract com.flurry.org.codehaus.jackson.map.JsonMappingException weirdKeyException(Class p0, String p1, String p2);

    public abstract com.flurry.org.codehaus.jackson.map.JsonMappingException weirdNumberException(Class p0, String p1);

    public abstract com.flurry.org.codehaus.jackson.map.JsonMappingException weirdStringException(Class p0, String p1);

    public abstract com.flurry.org.codehaus.jackson.map.JsonMappingException wrongTokenException(com.flurry.org.codehaus.jackson.JsonParser p0, com.flurry.org.codehaus.jackson.JsonToken p1, String p2);
}
