package com.flurry.org.codehaus.jackson.map.deser;
public class CustomDeserializerFactory extends com.flurry.org.codehaus.jackson.map.deser.BeanDeserializerFactory {
    protected java.util.HashMap _directClassMappings;
    protected java.util.HashMap _mixInAnnotations;

    public CustomDeserializerFactory()
    {
        this(0);
        return;
    }

    protected CustomDeserializerFactory(com.flurry.org.codehaus.jackson.map.DeserializerFactory$Config p2)
    {
        super(p2);
        super._directClassMappings = 0;
        return;
    }

    public void addMixInAnnotationMapping(Class p3, Class p4)
    {
        if (this._mixInAnnotations == null) {
            this._mixInAnnotations = new java.util.HashMap();
        }
        this._mixInAnnotations.put(new com.flurry.org.codehaus.jackson.map.type.ClassKey(p3), p4);
        return;
    }

    public void addSpecificMapping(Class p3, com.flurry.org.codehaus.jackson.map.JsonDeserializer p4)
    {
        com.flurry.org.codehaus.jackson.map.type.ClassKey v0_1 = new com.flurry.org.codehaus.jackson.map.type.ClassKey(p3);
        if (this._directClassMappings == null) {
            this._directClassMappings = new java.util.HashMap();
        }
        this._directClassMappings.put(v0_1, p4);
        return;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer createArrayDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p4, com.flurry.org.codehaus.jackson.map.DeserializerProvider p5, com.flurry.org.codehaus.jackson.map.type.ArrayType p6, com.flurry.org.codehaus.jackson.map.BeanProperty p7)
    {
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v0_0;
        com.flurry.org.codehaus.jackson.map.type.ClassKey v1_1 = new com.flurry.org.codehaus.jackson.map.type.ClassKey(p6.getRawClass());
        if (this._directClassMappings == null) {
            v0_0 = super.createArrayDeserializer(p4, p5, p6, p7);
        } else {
            v0_0 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) this._directClassMappings.get(v1_1));
            if (v0_0 == null) {
            }
        }
        return v0_0;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer createBeanDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p5, com.flurry.org.codehaus.jackson.map.DeserializerProvider p6, com.flurry.org.codehaus.jackson.type.JavaType p7, com.flurry.org.codehaus.jackson.map.BeanProperty p8)
    {
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v1_0;
        com.flurry.org.codehaus.jackson.map.type.ClassKey v2_1 = new com.flurry.org.codehaus.jackson.map.type.ClassKey(p7.getRawClass());
        if (this._directClassMappings == null) {
            v1_0 = super.createBeanDeserializer(p5, p6, p7, p8);
        } else {
            v1_0 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) this._directClassMappings.get(v2_1));
            if (v1_0 == null) {
            }
        }
        return v1_0;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer createEnumDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p4, com.flurry.org.codehaus.jackson.map.DeserializerProvider p5, com.flurry.org.codehaus.jackson.type.JavaType p6, com.flurry.org.codehaus.jackson.map.BeanProperty p7)
    {
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v0_0;
        if (this._directClassMappings == null) {
            v0_0 = super.createEnumDeserializer(p4, p5, p6, p7);
        } else {
            v0_0 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) this._directClassMappings.get(new com.flurry.org.codehaus.jackson.map.type.ClassKey(p6.getRawClass())));
            if (v0_0 == null) {
            }
        }
        return v0_0;
    }

    public com.flurry.org.codehaus.jackson.map.DeserializerFactory withConfig(com.flurry.org.codehaus.jackson.map.DeserializerFactory$Config p4)
    {
        if (this.getClass() == com.flurry.org.codehaus.jackson.map.deser.CustomDeserializerFactory) {
            return new com.flurry.org.codehaus.jackson.map.deser.CustomDeserializerFactory(p4);
        } else {
            throw new IllegalStateException(new StringBuilder().append("Subtype of CustomDeserializerFactory (").append(this.getClass().getName()).append(") has not properly overridden method \'withAdditionalDeserializers\': can not instantiate subtype with ").append("additional deserializer definitions").toString());
        }
    }
}
