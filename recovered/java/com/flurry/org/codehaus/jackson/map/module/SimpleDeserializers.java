package com.flurry.org.codehaus.jackson.map.module;
public class SimpleDeserializers implements com.flurry.org.codehaus.jackson.map.Deserializers {
    protected java.util.HashMap _classMappings;

    public SimpleDeserializers()
    {
        this._classMappings = 0;
        return;
    }

    public void addDeserializer(Class p3, com.flurry.org.codehaus.jackson.map.JsonDeserializer p4)
    {
        com.flurry.org.codehaus.jackson.map.type.ClassKey v0_1 = new com.flurry.org.codehaus.jackson.map.type.ClassKey(p3);
        if (this._classMappings == null) {
            this._classMappings = new java.util.HashMap();
        }
        this._classMappings.put(v0_1, p4);
        return;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer findArrayDeserializer(com.flurry.org.codehaus.jackson.map.type.ArrayType p4, com.flurry.org.codehaus.jackson.map.DeserializationConfig p5, com.flurry.org.codehaus.jackson.map.DeserializerProvider p6, com.flurry.org.codehaus.jackson.map.BeanProperty p7, com.flurry.org.codehaus.jackson.map.TypeDeserializer p8, com.flurry.org.codehaus.jackson.map.JsonDeserializer p9)
    {
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v0_1;
        if (this._classMappings != null) {
            v0_1 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) this._classMappings.get(new com.flurry.org.codehaus.jackson.map.type.ClassKey(p4.getRawClass())));
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer findBeanDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p4, com.flurry.org.codehaus.jackson.map.DeserializationConfig p5, com.flurry.org.codehaus.jackson.map.DeserializerProvider p6, com.flurry.org.codehaus.jackson.map.BeanDescription p7, com.flurry.org.codehaus.jackson.map.BeanProperty p8)
    {
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v0_1;
        if (this._classMappings != null) {
            v0_1 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) this._classMappings.get(new com.flurry.org.codehaus.jackson.map.type.ClassKey(p4.getRawClass())));
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer findCollectionDeserializer(com.flurry.org.codehaus.jackson.map.type.CollectionType p4, com.flurry.org.codehaus.jackson.map.DeserializationConfig p5, com.flurry.org.codehaus.jackson.map.DeserializerProvider p6, com.flurry.org.codehaus.jackson.map.BeanDescription p7, com.flurry.org.codehaus.jackson.map.BeanProperty p8, com.flurry.org.codehaus.jackson.map.TypeDeserializer p9, com.flurry.org.codehaus.jackson.map.JsonDeserializer p10)
    {
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v0_1;
        if (this._classMappings != null) {
            v0_1 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) this._classMappings.get(new com.flurry.org.codehaus.jackson.map.type.ClassKey(p4.getRawClass())));
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer findCollectionLikeDeserializer(com.flurry.org.codehaus.jackson.map.type.CollectionLikeType p4, com.flurry.org.codehaus.jackson.map.DeserializationConfig p5, com.flurry.org.codehaus.jackson.map.DeserializerProvider p6, com.flurry.org.codehaus.jackson.map.BeanDescription p7, com.flurry.org.codehaus.jackson.map.BeanProperty p8, com.flurry.org.codehaus.jackson.map.TypeDeserializer p9, com.flurry.org.codehaus.jackson.map.JsonDeserializer p10)
    {
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v0_1;
        if (this._classMappings != null) {
            v0_1 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) this._classMappings.get(new com.flurry.org.codehaus.jackson.map.type.ClassKey(p4.getRawClass())));
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer findEnumDeserializer(Class p3, com.flurry.org.codehaus.jackson.map.DeserializationConfig p4, com.flurry.org.codehaus.jackson.map.BeanDescription p5, com.flurry.org.codehaus.jackson.map.BeanProperty p6)
    {
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v0_3;
        if (this._classMappings != null) {
            v0_3 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) this._classMappings.get(new com.flurry.org.codehaus.jackson.map.type.ClassKey(p3)));
        } else {
            v0_3 = 0;
        }
        return v0_3;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer findMapDeserializer(com.flurry.org.codehaus.jackson.map.type.MapType p4, com.flurry.org.codehaus.jackson.map.DeserializationConfig p5, com.flurry.org.codehaus.jackson.map.DeserializerProvider p6, com.flurry.org.codehaus.jackson.map.BeanDescription p7, com.flurry.org.codehaus.jackson.map.BeanProperty p8, com.flurry.org.codehaus.jackson.map.KeyDeserializer p9, com.flurry.org.codehaus.jackson.map.TypeDeserializer p10, com.flurry.org.codehaus.jackson.map.JsonDeserializer p11)
    {
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v0_1;
        if (this._classMappings != null) {
            v0_1 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) this._classMappings.get(new com.flurry.org.codehaus.jackson.map.type.ClassKey(p4.getRawClass())));
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer findMapLikeDeserializer(com.flurry.org.codehaus.jackson.map.type.MapLikeType p4, com.flurry.org.codehaus.jackson.map.DeserializationConfig p5, com.flurry.org.codehaus.jackson.map.DeserializerProvider p6, com.flurry.org.codehaus.jackson.map.BeanDescription p7, com.flurry.org.codehaus.jackson.map.BeanProperty p8, com.flurry.org.codehaus.jackson.map.KeyDeserializer p9, com.flurry.org.codehaus.jackson.map.TypeDeserializer p10, com.flurry.org.codehaus.jackson.map.JsonDeserializer p11)
    {
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v0_1;
        if (this._classMappings != null) {
            v0_1 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) this._classMappings.get(new com.flurry.org.codehaus.jackson.map.type.ClassKey(p4.getRawClass())));
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer findTreeNodeDeserializer(Class p3, com.flurry.org.codehaus.jackson.map.DeserializationConfig p4, com.flurry.org.codehaus.jackson.map.BeanProperty p5)
    {
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v0_3;
        if (this._classMappings != null) {
            v0_3 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) this._classMappings.get(new com.flurry.org.codehaus.jackson.map.type.ClassKey(p3)));
        } else {
            v0_3 = 0;
        }
        return v0_3;
    }
}
