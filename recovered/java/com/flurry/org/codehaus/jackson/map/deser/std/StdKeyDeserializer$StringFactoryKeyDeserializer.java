package com.flurry.org.codehaus.jackson.map.deser.std;
final class StdKeyDeserializer$StringFactoryKeyDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer {
    final reflect.Method _factoryMethod;

    public StdKeyDeserializer$StringFactoryKeyDeserializer(reflect.Method p2)
    {
        super(p2.getDeclaringClass());
        super._factoryMethod = p2;
        return;
    }

    public Object _parse(String p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6)
    {
        Object v0_0 = this._factoryMethod;
        Object[] v2_1 = new Object[1];
        v2_1[0] = p5;
        return 億.invokeHook(v0_0, 0, v2_1);
    }
}
