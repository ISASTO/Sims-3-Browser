package com.flurry.org.codehaus.jackson.map.deser.std;
final class StdKeyDeserializer$StringCtorKeyDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer {
    protected final reflect.Constructor _ctor;

    public StdKeyDeserializer$StringCtorKeyDeserializer(reflect.Constructor p2)
    {
        super(p2.getDeclaringClass());
        super._ctor = p2;
        return;
    }

    public Object _parse(String p4, com.flurry.org.codehaus.jackson.map.DeserializationContext p5)
    {
        Object v0_0 = this._ctor;
        Object[] v1_1 = new Object[1];
        v1_1[0] = p4;
        return v0_0.newInstance(v1_1);
    }
}
