package com.flurry.org.codehaus.jackson.map.module;
public class SimpleModule extends com.flurry.org.codehaus.jackson.map.Module {
    protected com.flurry.org.codehaus.jackson.map.module.SimpleAbstractTypeResolver _abstractTypes;
    protected com.flurry.org.codehaus.jackson.map.module.SimpleDeserializers _deserializers;
    protected com.flurry.org.codehaus.jackson.map.module.SimpleKeyDeserializers _keyDeserializers;
    protected com.flurry.org.codehaus.jackson.map.module.SimpleSerializers _keySerializers;
    protected java.util.HashMap _mixins;
    protected final String _name;
    protected com.flurry.org.codehaus.jackson.map.module.SimpleSerializers _serializers;
    protected com.flurry.org.codehaus.jackson.map.module.SimpleValueInstantiators _valueInstantiators;
    protected final com.flurry.org.codehaus.jackson.Version _version;

    public SimpleModule(String p2, com.flurry.org.codehaus.jackson.Version p3)
    {
        this._serializers = 0;
        this._deserializers = 0;
        this._keySerializers = 0;
        this._keyDeserializers = 0;
        this._abstractTypes = 0;
        this._valueInstantiators = 0;
        this._mixins = 0;
        this._name = p2;
        this._version = p3;
        return;
    }

    public com.flurry.org.codehaus.jackson.map.module.SimpleModule addAbstractTypeMapping(Class p2, Class p3)
    {
        if (this._abstractTypes == null) {
            this._abstractTypes = new com.flurry.org.codehaus.jackson.map.module.SimpleAbstractTypeResolver();
        }
        this._abstractTypes = this._abstractTypes.addMapping(p2, p3);
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.module.SimpleModule addDeserializer(Class p2, com.flurry.org.codehaus.jackson.map.JsonDeserializer p3)
    {
        if (this._deserializers == null) {
            this._deserializers = new com.flurry.org.codehaus.jackson.map.module.SimpleDeserializers();
        }
        this._deserializers.addDeserializer(p2, p3);
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.module.SimpleModule addKeyDeserializer(Class p2, com.flurry.org.codehaus.jackson.map.KeyDeserializer p3)
    {
        if (this._keyDeserializers == null) {
            this._keyDeserializers = new com.flurry.org.codehaus.jackson.map.module.SimpleKeyDeserializers();
        }
        this._keyDeserializers.addDeserializer(p2, p3);
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.module.SimpleModule addKeySerializer(Class p2, com.flurry.org.codehaus.jackson.map.JsonSerializer p3)
    {
        if (this._keySerializers == null) {
            this._keySerializers = new com.flurry.org.codehaus.jackson.map.module.SimpleSerializers();
        }
        this._keySerializers.addSerializer(p2, p3);
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.module.SimpleModule addSerializer(com.flurry.org.codehaus.jackson.map.JsonSerializer p2)
    {
        if (this._serializers == null) {
            this._serializers = new com.flurry.org.codehaus.jackson.map.module.SimpleSerializers();
        }
        this._serializers.addSerializer(p2);
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.module.SimpleModule addSerializer(Class p2, com.flurry.org.codehaus.jackson.map.JsonSerializer p3)
    {
        if (this._serializers == null) {
            this._serializers = new com.flurry.org.codehaus.jackson.map.module.SimpleSerializers();
        }
        this._serializers.addSerializer(p2, p3);
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.module.SimpleModule addValueInstantiator(Class p2, com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator p3)
    {
        if (this._valueInstantiators == null) {
            this._valueInstantiators = new com.flurry.org.codehaus.jackson.map.module.SimpleValueInstantiators();
        }
        this._valueInstantiators = this._valueInstantiators.addValueInstantiator(p2, p3);
        return this;
    }

    public String getModuleName()
    {
        return this._name;
    }

    public void setAbstractTypes(com.flurry.org.codehaus.jackson.map.module.SimpleAbstractTypeResolver p1)
    {
        this._abstractTypes = p1;
        return;
    }

    public void setDeserializers(com.flurry.org.codehaus.jackson.map.module.SimpleDeserializers p1)
    {
        this._deserializers = p1;
        return;
    }

    public void setKeyDeserializers(com.flurry.org.codehaus.jackson.map.module.SimpleKeyDeserializers p1)
    {
        this._keyDeserializers = p1;
        return;
    }

    public void setKeySerializers(com.flurry.org.codehaus.jackson.map.module.SimpleSerializers p1)
    {
        this._keySerializers = p1;
        return;
    }

    public com.flurry.org.codehaus.jackson.map.module.SimpleModule setMixInAnnotation(Class p2, Class p3)
    {
        if (this._mixins == null) {
            this._mixins = new java.util.HashMap();
        }
        this._mixins.put(p2, p3);
        return this;
    }

    public void setSerializers(com.flurry.org.codehaus.jackson.map.module.SimpleSerializers p1)
    {
        this._serializers = p1;
        return;
    }

    public void setValueInstantiators(com.flurry.org.codehaus.jackson.map.module.SimpleValueInstantiators p1)
    {
        this._valueInstantiators = p1;
        return;
    }

    public void setupModule(com.flurry.org.codehaus.jackson.map.Module$SetupContext p5)
    {
        if (this._serializers != null) {
            p5.addSerializers(this._serializers);
        }
        if (this._deserializers != null) {
            p5.addDeserializers(this._deserializers);
        }
        if (this._keySerializers != null) {
            p5.addKeySerializers(this._keySerializers);
        }
        if (this._keyDeserializers != null) {
            p5.addKeyDeserializers(this._keyDeserializers);
        }
        if (this._abstractTypes != null) {
            p5.addAbstractTypeResolver(this._abstractTypes);
        }
        if (this._valueInstantiators != null) {
            p5.addValueInstantiators(this._valueInstantiators);
        }
        if (this._mixins != null) {
            java.util.Iterator v1 = this._mixins.entrySet().iterator();
            while (v1.hasNext()) {
                java.util.Map$Entry v0_1 = ((java.util.Map$Entry) v1.next());
                p5.setMixInAnnotations(((Class) v0_1.getKey()), ((Class) v0_1.getValue()));
            }
        }
        return;
    }

    public com.flurry.org.codehaus.jackson.Version version()
    {
        return this._version;
    }
}
