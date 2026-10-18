package com.flurry.org.codehaus.jackson.map.deser;
public class BeanDeserializerFactory$ConfigImpl extends com.flurry.org.codehaus.jackson.map.DeserializerFactory$Config {
    protected static final com.flurry.org.codehaus.jackson.map.AbstractTypeResolver[] NO_ABSTRACT_TYPE_RESOLVERS;
    protected static final com.flurry.org.codehaus.jackson.map.KeyDeserializers[] NO_KEY_DESERIALIZERS;
    protected static final com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerModifier[] NO_MODIFIERS;
    protected static final com.flurry.org.codehaus.jackson.map.deser.ValueInstantiators[] NO_VALUE_INSTANTIATORS;
    protected final com.flurry.org.codehaus.jackson.map.AbstractTypeResolver[] _abstractTypeResolvers;
    protected final com.flurry.org.codehaus.jackson.map.Deserializers[] _additionalDeserializers;
    protected final com.flurry.org.codehaus.jackson.map.KeyDeserializers[] _additionalKeyDeserializers;
    protected final com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerModifier[] _modifiers;
    protected final com.flurry.org.codehaus.jackson.map.deser.ValueInstantiators[] _valueInstantiators;

    static BeanDeserializerFactory$ConfigImpl()
    {
        com.flurry.org.codehaus.jackson.map.deser.ValueInstantiators[] v0_0 = new com.flurry.org.codehaus.jackson.map.KeyDeserializers[0];
        com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory$ConfigImpl.NO_KEY_DESERIALIZERS = v0_0;
        com.flurry.org.codehaus.jackson.map.deser.ValueInstantiators[] v0_1 = new com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerModifier[0];
        com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory$ConfigImpl.NO_MODIFIERS = v0_1;
        com.flurry.org.codehaus.jackson.map.deser.ValueInstantiators[] v0_2 = new com.flurry.org.codehaus.jackson.map.AbstractTypeResolver[0];
        com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory$ConfigImpl.NO_ABSTRACT_TYPE_RESOLVERS = v0_2;
        com.flurry.org.codehaus.jackson.map.deser.ValueInstantiators[] v0_3 = new com.flurry.org.codehaus.jackson.map.deser.ValueInstantiators[0];
        com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory$ConfigImpl.NO_VALUE_INSTANTIATORS = v0_3;
        return;
    }

    public BeanDeserializerFactory$ConfigImpl()
    {
        this(0, 0, 0, 0, 0);
        return;
    }

    protected BeanDeserializerFactory$ConfigImpl(com.flurry.org.codehaus.jackson.map.Deserializers[] p1, com.flurry.org.codehaus.jackson.map.KeyDeserializers[] p2, com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerModifier[] p3, com.flurry.org.codehaus.jackson.map.AbstractTypeResolver[] p4, com.flurry.org.codehaus.jackson.map.deser.ValueInstantiators[] p5)
    {
        if (p1 == null) {
            p1 = com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory.access$000();
        }
        this._additionalDeserializers = p1;
        if (p2 == null) {
            p2 = com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory$ConfigImpl.NO_KEY_DESERIALIZERS;
        }
        this._additionalKeyDeserializers = p2;
        if (p3 == null) {
            p3 = com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory$ConfigImpl.NO_MODIFIERS;
        }
        this._modifiers = p3;
        if (p4 == null) {
            p4 = com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory$ConfigImpl.NO_ABSTRACT_TYPE_RESOLVERS;
        }
        this._abstractTypeResolvers = p4;
        if (p5 == null) {
            p5 = com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory$ConfigImpl.NO_VALUE_INSTANTIATORS;
        }
        this._valueInstantiators = p5;
        return;
    }

    public Iterable abstractTypeResolvers()
    {
        return com.flurry.org.codehaus.jackson.map.util.ArrayBuilders.arrayAsIterable(this._abstractTypeResolvers);
    }

    public Iterable deserializerModifiers()
    {
        return com.flurry.org.codehaus.jackson.map.util.ArrayBuilders.arrayAsIterable(this._modifiers);
    }

    public Iterable deserializers()
    {
        return com.flurry.org.codehaus.jackson.map.util.ArrayBuilders.arrayAsIterable(this._additionalDeserializers);
    }

    public boolean hasAbstractTypeResolvers()
    {
        int v0_2;
        if (this._abstractTypeResolvers.length <= 0) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public boolean hasDeserializerModifiers()
    {
        int v0_2;
        if (this._modifiers.length <= 0) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public boolean hasDeserializers()
    {
        int v0_2;
        if (this._additionalDeserializers.length <= 0) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public boolean hasKeyDeserializers()
    {
        int v0_2;
        if (this._additionalKeyDeserializers.length <= 0) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public boolean hasValueInstantiators()
    {
        int v0_2;
        if (this._valueInstantiators.length <= 0) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public Iterable keyDeserializers()
    {
        return com.flurry.org.codehaus.jackson.map.util.ArrayBuilders.arrayAsIterable(this._additionalKeyDeserializers);
    }

    public Iterable valueInstantiators()
    {
        return com.flurry.org.codehaus.jackson.map.util.ArrayBuilders.arrayAsIterable(this._valueInstantiators);
    }

    public com.flurry.org.codehaus.jackson.map.DeserializerFactory$Config withAbstractTypeResolver(com.flurry.org.codehaus.jackson.map.AbstractTypeResolver p7)
    {
        if (p7 != null) {
            return new com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory$ConfigImpl(this._additionalDeserializers, this._additionalKeyDeserializers, this._modifiers, ((com.flurry.org.codehaus.jackson.map.AbstractTypeResolver[]) com.flurry.org.codehaus.jackson.map.util.ArrayBuilders.insertInListNoDup(this._abstractTypeResolvers, p7)), this._valueInstantiators);
        } else {
            throw new IllegalArgumentException("Can not pass null resolver");
        }
    }

    public com.flurry.org.codehaus.jackson.map.DeserializerFactory$Config withAdditionalDeserializers(com.flurry.org.codehaus.jackson.map.Deserializers p7)
    {
        if (p7 != null) {
            return new com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory$ConfigImpl(((com.flurry.org.codehaus.jackson.map.Deserializers[]) com.flurry.org.codehaus.jackson.map.util.ArrayBuilders.insertInListNoDup(this._additionalDeserializers, p7)), this._additionalKeyDeserializers, this._modifiers, this._abstractTypeResolvers, this._valueInstantiators);
        } else {
            throw new IllegalArgumentException("Can not pass null Deserializers");
        }
    }

    public com.flurry.org.codehaus.jackson.map.DeserializerFactory$Config withAdditionalKeyDeserializers(com.flurry.org.codehaus.jackson.map.KeyDeserializers p7)
    {
        if (p7 != null) {
            return new com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory$ConfigImpl(this._additionalDeserializers, ((com.flurry.org.codehaus.jackson.map.KeyDeserializers[]) com.flurry.org.codehaus.jackson.map.util.ArrayBuilders.insertInListNoDup(this._additionalKeyDeserializers, p7)), this._modifiers, this._abstractTypeResolvers, this._valueInstantiators);
        } else {
            throw new IllegalArgumentException("Can not pass null KeyDeserializers");
        }
    }

    public com.flurry.org.codehaus.jackson.map.DeserializerFactory$Config withDeserializerModifier(com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerModifier p7)
    {
        if (p7 != null) {
            return new com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory$ConfigImpl(this._additionalDeserializers, this._additionalKeyDeserializers, ((com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerModifier[]) com.flurry.org.codehaus.jackson.map.util.ArrayBuilders.insertInListNoDup(this._modifiers, p7)), this._abstractTypeResolvers, this._valueInstantiators);
        } else {
            throw new IllegalArgumentException("Can not pass null modifier");
        }
    }

    public com.flurry.org.codehaus.jackson.map.DeserializerFactory$Config withValueInstantiators(com.flurry.org.codehaus.jackson.map.deser.ValueInstantiators p7)
    {
        if (p7 != null) {
            return new com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory$ConfigImpl(this._additionalDeserializers, this._additionalKeyDeserializers, this._modifiers, this._abstractTypeResolvers, ((com.flurry.org.codehaus.jackson.map.deser.ValueInstantiators[]) com.flurry.org.codehaus.jackson.map.util.ArrayBuilders.insertInListNoDup(this._valueInstantiators, p7)));
        } else {
            throw new IllegalArgumentException("Can not pass null resolver");
        }
    }
}
