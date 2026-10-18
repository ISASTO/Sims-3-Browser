package com.flurry.org.codehaus.jackson.map.ser;
public class BeanSerializerFactory$ConfigImpl extends com.flurry.org.codehaus.jackson.map.SerializerFactory$Config {
    protected static final com.flurry.org.codehaus.jackson.map.ser.BeanSerializerModifier[] NO_MODIFIERS;
    protected static final com.flurry.org.codehaus.jackson.map.Serializers[] NO_SERIALIZERS;
    protected final com.flurry.org.codehaus.jackson.map.Serializers[] _additionalKeySerializers;
    protected final com.flurry.org.codehaus.jackson.map.Serializers[] _additionalSerializers;
    protected final com.flurry.org.codehaus.jackson.map.ser.BeanSerializerModifier[] _modifiers;

    static BeanSerializerFactory$ConfigImpl()
    {
        com.flurry.org.codehaus.jackson.map.ser.BeanSerializerModifier[] v0_0 = new com.flurry.org.codehaus.jackson.map.Serializers[0];
        com.flurry.org.codehaus.jackson.map.ser.BeanSerializerFactory$ConfigImpl.NO_SERIALIZERS = v0_0;
        com.flurry.org.codehaus.jackson.map.ser.BeanSerializerModifier[] v0_1 = new com.flurry.org.codehaus.jackson.map.ser.BeanSerializerModifier[0];
        com.flurry.org.codehaus.jackson.map.ser.BeanSerializerFactory$ConfigImpl.NO_MODIFIERS = v0_1;
        return;
    }

    public BeanSerializerFactory$ConfigImpl()
    {
        this(0, 0, 0);
        return;
    }

    protected BeanSerializerFactory$ConfigImpl(com.flurry.org.codehaus.jackson.map.Serializers[] p1, com.flurry.org.codehaus.jackson.map.Serializers[] p2, com.flurry.org.codehaus.jackson.map.ser.BeanSerializerModifier[] p3)
    {
        if (p1 == null) {
            p1 = com.flurry.org.codehaus.jackson.map.ser.BeanSerializerFactory$ConfigImpl.NO_SERIALIZERS;
        }
        this._additionalSerializers = p1;
        if (p2 == null) {
            p2 = com.flurry.org.codehaus.jackson.map.ser.BeanSerializerFactory$ConfigImpl.NO_SERIALIZERS;
        }
        this._additionalKeySerializers = p2;
        if (p3 == null) {
            p3 = com.flurry.org.codehaus.jackson.map.ser.BeanSerializerFactory$ConfigImpl.NO_MODIFIERS;
        }
        this._modifiers = p3;
        return;
    }

    public boolean hasKeySerializers()
    {
        int v0_2;
        if (this._additionalKeySerializers.length <= 0) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public boolean hasSerializerModifiers()
    {
        int v0_2;
        if (this._modifiers.length <= 0) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public boolean hasSerializers()
    {
        int v0_2;
        if (this._additionalSerializers.length <= 0) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public Iterable keySerializers()
    {
        return com.flurry.org.codehaus.jackson.map.util.ArrayBuilders.arrayAsIterable(this._additionalKeySerializers);
    }

    public Iterable serializerModifiers()
    {
        return com.flurry.org.codehaus.jackson.map.util.ArrayBuilders.arrayAsIterable(this._modifiers);
    }

    public Iterable serializers()
    {
        return com.flurry.org.codehaus.jackson.map.util.ArrayBuilders.arrayAsIterable(this._additionalSerializers);
    }

    public com.flurry.org.codehaus.jackson.map.SerializerFactory$Config withAdditionalKeySerializers(com.flurry.org.codehaus.jackson.map.Serializers p5)
    {
        if (p5 != null) {
            return new com.flurry.org.codehaus.jackson.map.ser.BeanSerializerFactory$ConfigImpl(this._additionalSerializers, ((com.flurry.org.codehaus.jackson.map.Serializers[]) com.flurry.org.codehaus.jackson.map.util.ArrayBuilders.insertInListNoDup(this._additionalKeySerializers, p5)), this._modifiers);
        } else {
            throw new IllegalArgumentException("Can not pass null Serializers");
        }
    }

    public com.flurry.org.codehaus.jackson.map.SerializerFactory$Config withAdditionalSerializers(com.flurry.org.codehaus.jackson.map.Serializers p5)
    {
        if (p5 != null) {
            return new com.flurry.org.codehaus.jackson.map.ser.BeanSerializerFactory$ConfigImpl(((com.flurry.org.codehaus.jackson.map.Serializers[]) com.flurry.org.codehaus.jackson.map.util.ArrayBuilders.insertInListNoDup(this._additionalSerializers, p5)), this._additionalKeySerializers, this._modifiers);
        } else {
            throw new IllegalArgumentException("Can not pass null Serializers");
        }
    }

    public com.flurry.org.codehaus.jackson.map.SerializerFactory$Config withSerializerModifier(com.flurry.org.codehaus.jackson.map.ser.BeanSerializerModifier p5)
    {
        if (p5 != null) {
            return new com.flurry.org.codehaus.jackson.map.ser.BeanSerializerFactory$ConfigImpl(this._additionalSerializers, this._additionalKeySerializers, ((com.flurry.org.codehaus.jackson.map.ser.BeanSerializerModifier[]) com.flurry.org.codehaus.jackson.map.util.ArrayBuilders.insertInListNoDup(this._modifiers, p5)));
        } else {
            throw new IllegalArgumentException("Can not pass null modifier");
        }
    }
}
