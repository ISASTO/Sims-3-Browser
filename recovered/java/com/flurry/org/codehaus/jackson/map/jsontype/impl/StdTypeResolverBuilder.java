package com.flurry.org.codehaus.jackson.map.jsontype.impl;
public class StdTypeResolverBuilder implements com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder {
    protected com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver _customIdResolver;
    protected Class _defaultImpl;
    protected com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id _idType;
    protected com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As _includeAs;
    protected String _typeProperty;

    public StdTypeResolverBuilder()
    {
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.jsontype.impl.StdTypeResolverBuilder noTypeInfoBuilder()
    {
        return new com.flurry.org.codehaus.jackson.map.jsontype.impl.StdTypeResolverBuilder().init(com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id.NONE, 0);
    }

    public com.flurry.org.codehaus.jackson.map.TypeDeserializer buildTypeDeserializer(com.flurry.org.codehaus.jackson.map.DeserializationConfig p7, com.flurry.org.codehaus.jackson.type.JavaType p8, java.util.Collection p9, com.flurry.org.codehaus.jackson.map.BeanProperty p10)
    {
        com.flurry.org.codehaus.jackson.map.jsontype.impl.AsExternalTypeDeserializer v0_4;
        if (this._idType != com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id.NONE) {
            com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver v2_0 = this.idResolver(p7, p8, p9, 0, 1);
            switch (com.flurry.org.codehaus.jackson.map.jsontype.impl.StdTypeResolverBuilder$1.$SwitchMap$org$codehaus$jackson$annotate$JsonTypeInfo$As[this._includeAs.ordinal()]) {
                case 1:
                    v0_4 = new com.flurry.org.codehaus.jackson.map.jsontype.impl.AsArrayTypeDeserializer(p8, v2_0, p10, this._defaultImpl);
                    break;
                case 2:
                    v0_4 = new com.flurry.org.codehaus.jackson.map.jsontype.impl.AsPropertyTypeDeserializer(p8, v2_0, p10, this._defaultImpl, this._typeProperty);
                    break;
                case 3:
                    v0_4 = new com.flurry.org.codehaus.jackson.map.jsontype.impl.AsWrapperTypeDeserializer(p8, v2_0, p10, this._defaultImpl);
                    break;
                case 4:
                    v0_4 = new com.flurry.org.codehaus.jackson.map.jsontype.impl.AsExternalTypeDeserializer(p8, v2_0, p10, this._defaultImpl, this._typeProperty);
                    break;
                default:
                    throw new IllegalStateException(new StringBuilder().append("Do not know how to construct standard type serializer for inclusion type: ").append(this._includeAs).toString());
            }
        } else {
            v0_4 = 0;
        }
        return v0_4;
    }

    public com.flurry.org.codehaus.jackson.map.TypeSerializer buildTypeSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p8, com.flurry.org.codehaus.jackson.type.JavaType p9, java.util.Collection p10, com.flurry.org.codehaus.jackson.map.BeanProperty p11)
    {
        com.flurry.org.codehaus.jackson.map.jsontype.impl.AsExternalTypeSerializer v0_4;
        if (this._idType != com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id.NONE) {
            com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver v6 = this.idResolver(p8, p9, p10, 1, 0);
            switch (com.flurry.org.codehaus.jackson.map.jsontype.impl.StdTypeResolverBuilder$1.$SwitchMap$org$codehaus$jackson$annotate$JsonTypeInfo$As[this._includeAs.ordinal()]) {
                case 1:
                    v0_4 = new com.flurry.org.codehaus.jackson.map.jsontype.impl.AsArrayTypeSerializer(v6, p11);
                    break;
                case 2:
                    v0_4 = new com.flurry.org.codehaus.jackson.map.jsontype.impl.AsPropertyTypeSerializer(v6, p11, this._typeProperty);
                    break;
                case 3:
                    v0_4 = new com.flurry.org.codehaus.jackson.map.jsontype.impl.AsWrapperTypeSerializer(v6, p11);
                    break;
                case 4:
                    v0_4 = new com.flurry.org.codehaus.jackson.map.jsontype.impl.AsExternalTypeSerializer(v6, p11, this._typeProperty);
                    break;
                default:
                    throw new IllegalStateException(new StringBuilder().append("Do not know how to construct standard type serializer for inclusion type: ").append(this._includeAs).toString());
            }
        } else {
            v0_4 = 0;
        }
        return v0_4;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder defaultImpl(Class p2)
    {
        return this.defaultImpl(p2);
    }

    public com.flurry.org.codehaus.jackson.map.jsontype.impl.StdTypeResolverBuilder defaultImpl(Class p1)
    {
        this._defaultImpl = p1;
        return this;
    }

    public Class getDefaultImpl()
    {
        return this._defaultImpl;
    }

    public String getTypeProperty()
    {
        return this._typeProperty;
    }

    protected com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver idResolver(com.flurry.org.codehaus.jackson.map.MapperConfig p4, com.flurry.org.codehaus.jackson.type.JavaType p5, java.util.Collection p6, boolean p7, boolean p8)
    {
        int v0_1;
        if (this._customIdResolver == null) {
            if (this._idType != null) {
                switch (com.flurry.org.codehaus.jackson.map.jsontype.impl.StdTypeResolverBuilder$1.$SwitchMap$org$codehaus$jackson$annotate$JsonTypeInfo$Id[this._idType.ordinal()]) {
                    case 1:
                        v0_1 = new com.flurry.org.codehaus.jackson.map.jsontype.impl.ClassNameIdResolver(p5, p4.getTypeFactory());
                        break;
                    case 2:
                        v0_1 = new com.flurry.org.codehaus.jackson.map.jsontype.impl.MinimalClassNameIdResolver(p5, p4.getTypeFactory());
                        break;
                    case 3:
                        v0_1 = com.flurry.org.codehaus.jackson.map.jsontype.impl.TypeNameIdResolver.construct(p4, p5, p6, p7, p8);
                        break;
                    case 4:
                        v0_1 = 0;
                        break;
                    default:
                        throw new IllegalStateException(new StringBuilder().append("Do not know how to construct standard type id resolver for idType: ").append(this._idType).toString());
                }
            } else {
                throw new IllegalStateException("Can not build, \'init()\' not yet called");
            }
        } else {
            v0_1 = this._customIdResolver;
        }
        return v0_1;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder inclusion(com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As p2)
    {
        return this.inclusion(p2);
    }

    public com.flurry.org.codehaus.jackson.map.jsontype.impl.StdTypeResolverBuilder inclusion(com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As p3)
    {
        if (p3 != null) {
            this._includeAs = p3;
            return this;
        } else {
            throw new IllegalArgumentException("includeAs can not be null");
        }
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder init(com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id p2, com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver p3)
    {
        return this.init(p2, p3);
    }

    public com.flurry.org.codehaus.jackson.map.jsontype.impl.StdTypeResolverBuilder init(com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id p3, com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver p4)
    {
        if (p3 != null) {
            this._idType = p3;
            this._customIdResolver = p4;
            this._typeProperty = p3.getDefaultPropertyName();
            return this;
        } else {
            throw new IllegalArgumentException("idType can not be null");
        }
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder typeProperty(String p2)
    {
        return this.typeProperty(p2);
    }

    public com.flurry.org.codehaus.jackson.map.jsontype.impl.StdTypeResolverBuilder typeProperty(String p2)
    {
        if ((p2 == null) || (p2.length() == 0)) {
            p2 = this._idType.getDefaultPropertyName();
        }
        this._typeProperty = p2;
        return this;
    }
}
