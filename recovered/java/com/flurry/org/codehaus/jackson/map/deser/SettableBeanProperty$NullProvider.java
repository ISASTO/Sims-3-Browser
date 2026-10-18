package com.flurry.org.codehaus.jackson.map.deser;
public final class SettableBeanProperty$NullProvider {
    private final boolean _isPrimitive;
    private final Object _nullValue;
    private final Class _rawType;

    protected SettableBeanProperty$NullProvider(com.flurry.org.codehaus.jackson.type.JavaType p2, Object p3)
    {
        this._nullValue = p3;
        this._isPrimitive = p2.isPrimitive();
        this._rawType = p2.getRawClass();
        return;
    }

    public Object nullValue(com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        if ((!this._isPrimitive) || (!p3.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.FAIL_ON_NULL_FOR_PRIMITIVES))) {
            return this._nullValue;
        } else {
            throw p3.mappingException(new StringBuilder().append("Can not map JSON null into type ").append(this._rawType.getName()).append(" (set DeserializationConfig.Feature.FAIL_ON_NULL_FOR_PRIMITIVES to \'false\' to allow)").toString());
        }
    }
}
