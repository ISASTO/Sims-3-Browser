package com.flurry.org.codehaus.jackson.map.deser.std;
final class StdKeyDeserializer$EnumKD extends com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer {
    protected final com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod _factory;
    protected final com.flurry.org.codehaus.jackson.map.util.EnumResolver _resolver;

    protected StdKeyDeserializer$EnumKD(com.flurry.org.codehaus.jackson.map.util.EnumResolver p2, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p3)
    {
        super(p2.getEnumClass());
        super._resolver = p2;
        super._factory = p3;
        return;
    }

    public Object _parse(String p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6)
    {
        Enum v1;
        if (this._factory == null) {
            v1 = this._resolver.findEnum(p5);
            if (v1 == null) {
                throw p6.weirdKeyException(this._keyClass, p5, "not one of values for Enum class");
            }
        } else {
            try {
                v1 = this._factory.call1(p5);
            } catch (Exception v0) {
                com.flurry.org.codehaus.jackson.map.util.ClassUtil.unwrapAndThrowAsIAE(v0);
            }
        }
        return v1;
    }
}
