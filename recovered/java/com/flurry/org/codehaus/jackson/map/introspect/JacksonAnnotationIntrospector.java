package com.flurry.org.codehaus.jackson.map.introspect;
public class JacksonAnnotationIntrospector extends com.flurry.org.codehaus.jackson.map.AnnotationIntrospector {

    public JacksonAnnotationIntrospector()
    {
        return;
    }

    protected com.flurry.org.codehaus.jackson.map.jsontype.impl.StdTypeResolverBuilder _constructNoTypeResolverBuilder()
    {
        return com.flurry.org.codehaus.jackson.map.jsontype.impl.StdTypeResolverBuilder.noTypeInfoBuilder();
    }

    protected com.flurry.org.codehaus.jackson.map.jsontype.impl.StdTypeResolverBuilder _constructStdTypeResolverBuilder()
    {
        return new com.flurry.org.codehaus.jackson.map.jsontype.impl.StdTypeResolverBuilder();
    }

    protected com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder _findTypeResolver(com.flurry.org.codehaus.jackson.map.MapperConfig p11, com.flurry.org.codehaus.jackson.map.introspect.Annotated p12, com.flurry.org.codehaus.jackson.type.JavaType p13)
    {
        com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder v0_1;
        com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder v0_0;
        com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo v5_1 = ((com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo) p12.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo));
        com.flurry.org.codehaus.jackson.map.annotate.JsonTypeResolver v6_1 = ((com.flurry.org.codehaus.jackson.map.annotate.JsonTypeResolver) p12.getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonTypeResolver));
        if (v6_1 == null) {
            if (v5_1 != null) {
                if (v5_1.use() != com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id.NONE) {
                    v0_0 = this._constructStdTypeResolverBuilder();
                    com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver v2;
                    com.flurry.org.codehaus.jackson.map.annotate.JsonTypeIdResolver v3_1 = ((com.flurry.org.codehaus.jackson.map.annotate.JsonTypeIdResolver) p12.getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonTypeIdResolver));
                    if (v3_1 != null) {
                        v2 = p11.typeIdResolverInstance(p12, v3_1.value());
                    } else {
                        v2 = 0;
                    }
                    if (v2 != null) {
                        v2.init(p13);
                    }
                    com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder v0_2 = v0_0.init(v5_1.use(), v2);
                    com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As v4 = v5_1.include();
                    if ((v4 == com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As.EXTERNAL_PROPERTY) && ((p12 instanceof com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass))) {
                        v4 = com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As.PROPERTY;
                    }
                    v0_1 = v0_2.inclusion(v4).typeProperty(v5_1.property());
                    Class v1 = v5_1.defaultImpl();
                    if (v1 != com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$None) {
                        v0_1 = v0_1.defaultImpl(v1);
                    }
                } else {
                    v0_1 = this._constructNoTypeResolverBuilder();
                }
            } else {
                v0_1 = 0;
            }
        } else {
            if (v5_1 != null) {
                v0_0 = p11.typeResolverBuilderInstance(p12, v6_1.value());
            } else {
                v0_1 = 0;
            }
        }
        return v0_1;
    }

    protected boolean _isIgnorable(com.flurry.org.codehaus.jackson.map.introspect.Annotated p3)
    {
        int v1_2;
        com.flurry.org.codehaus.jackson.annotate.JsonIgnore v0_1 = ((com.flurry.org.codehaus.jackson.annotate.JsonIgnore) p3.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonIgnore));
        if ((v0_1 == null) || (!v0_1.value())) {
            v1_2 = 0;
        } else {
            v1_2 = 1;
        }
        return v1_2;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker findAutoDetectVisibility(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p3, com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p4)
    {
        com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect v0_1 = ((com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect) p3.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect));
        if (v0_1 != null) {
            p4 = p4.with(v0_1);
        }
        return p4;
    }

    public Boolean findCachability(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p3)
    {
        Boolean v1_1;
        com.flurry.org.codehaus.jackson.map.annotate.JsonCachable v0_1 = ((com.flurry.org.codehaus.jackson.map.annotate.JsonCachable) p3.getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonCachable));
        if (v0_1 != null) {
            if (!v0_1.value()) {
                v1_1 = Boolean.FALSE;
            } else {
                v1_1 = Boolean.TRUE;
            }
        } else {
            v1_1 = 0;
        }
        return v1_1;
    }

    public Class findContentDeserializer(com.flurry.org.codehaus.jackson.map.introspect.Annotated p4)
    {
        int v1;
        com.flurry.org.codehaus.jackson.map.annotate.JsonDeserialize v0_1 = ((com.flurry.org.codehaus.jackson.map.annotate.JsonDeserialize) p4.getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonDeserialize));
        if (v0_1 == null) {
            v1 = 0;
        } else {
            v1 = v0_1.contentUsing();
            if (v1 == com.flurry.org.codehaus.jackson.map.JsonDeserializer$None) {
            }
        }
        return v1;
    }

    public Class findContentSerializer(com.flurry.org.codehaus.jackson.map.introspect.Annotated p4)
    {
        int v1;
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize v0_1 = ((com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize) p4.getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize));
        if (v0_1 == null) {
            v1 = 0;
        } else {
            v1 = v0_1.contentUsing();
            if (v1 == com.flurry.org.codehaus.jackson.map.JsonSerializer$None) {
            }
        }
        return v1;
    }

    public String findDeserializablePropertyName(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField p3)
    {
        int v1_6;
        com.flurry.org.codehaus.jackson.annotate.JsonProperty v0_1 = ((com.flurry.org.codehaus.jackson.annotate.JsonProperty) p3.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonProperty));
        if (v0_1 == null) {
            if ((!p3.hasAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonDeserialize)) && ((!p3.hasAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonView)) && ((!p3.hasAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonBackReference)) && (!p3.hasAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonManagedReference))))) {
                v1_6 = 0;
            } else {
                v1_6 = "";
            }
        } else {
            v1_6 = v0_1.value();
        }
        return v1_6;
    }

    public Class findDeserializationContentType(com.flurry.org.codehaus.jackson.map.introspect.Annotated p4, com.flurry.org.codehaus.jackson.type.JavaType p5, String p6)
    {
        int v1;
        com.flurry.org.codehaus.jackson.map.annotate.JsonDeserialize v0_1 = ((com.flurry.org.codehaus.jackson.map.annotate.JsonDeserialize) p4.getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonDeserialize));
        if (v0_1 == null) {
            v1 = 0;
        } else {
            v1 = v0_1.contentAs();
            if (v1 == com.flurry.org.codehaus.jackson.map.annotate.NoClass) {
            }
        }
        return v1;
    }

    public Class findDeserializationKeyType(com.flurry.org.codehaus.jackson.map.introspect.Annotated p4, com.flurry.org.codehaus.jackson.type.JavaType p5, String p6)
    {
        int v1;
        com.flurry.org.codehaus.jackson.map.annotate.JsonDeserialize v0_1 = ((com.flurry.org.codehaus.jackson.map.annotate.JsonDeserialize) p4.getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonDeserialize));
        if (v0_1 == null) {
            v1 = 0;
        } else {
            v1 = v0_1.keyAs();
            if (v1 == com.flurry.org.codehaus.jackson.map.annotate.NoClass) {
            }
        }
        return v1;
    }

    public Class findDeserializationType(com.flurry.org.codehaus.jackson.map.introspect.Annotated p4, com.flurry.org.codehaus.jackson.type.JavaType p5, String p6)
    {
        int v1;
        com.flurry.org.codehaus.jackson.map.annotate.JsonDeserialize v0_1 = ((com.flurry.org.codehaus.jackson.map.annotate.JsonDeserialize) p4.getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonDeserialize));
        if (v0_1 == null) {
            v1 = 0;
        } else {
            v1 = v0_1.as();
            if (v1 == com.flurry.org.codehaus.jackson.map.annotate.NoClass) {
            }
        }
        return v1;
    }

    public Class findDeserializer(com.flurry.org.codehaus.jackson.map.introspect.Annotated p4)
    {
        int v1;
        com.flurry.org.codehaus.jackson.map.annotate.JsonDeserialize v0_1 = ((com.flurry.org.codehaus.jackson.map.annotate.JsonDeserialize) p4.getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonDeserialize));
        if (v0_1 == null) {
            v1 = 0;
        } else {
            v1 = v0_1.using();
            if (v1 == com.flurry.org.codehaus.jackson.map.JsonDeserializer$None) {
            }
        }
        return v1;
    }

    public bridge synthetic Object findDeserializer(com.flurry.org.codehaus.jackson.map.introspect.Annotated p2)
    {
        return this.findDeserializer(p2);
    }

    public String findEnumValue(Enum p2)
    {
        return p2.name();
    }

    public Object findFilterId(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p4)
    {
        int v1;
        com.flurry.org.codehaus.jackson.map.annotate.JsonFilter v0_1 = ((com.flurry.org.codehaus.jackson.map.annotate.JsonFilter) p4.getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonFilter));
        if (v0_1 == null) {
            v1 = 0;
        } else {
            v1 = v0_1.value();
            if (v1.length() <= 0) {
            }
        }
        return v1;
    }

    public String findGettablePropertyName(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p4)
    {
        int v2_5;
        com.flurry.org.codehaus.jackson.annotate.JsonProperty v1_1 = ((com.flurry.org.codehaus.jackson.annotate.JsonProperty) p4.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonProperty));
        if (v1_1 == null) {
            com.flurry.org.codehaus.jackson.annotate.JsonGetter v0_1 = ((com.flurry.org.codehaus.jackson.annotate.JsonGetter) p4.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonGetter));
            if (v0_1 == null) {
                if ((!p4.hasAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize)) && (!p4.hasAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonView))) {
                    v2_5 = 0;
                } else {
                    v2_5 = "";
                }
            } else {
                v2_5 = v0_1.value();
            }
        } else {
            v2_5 = v1_1.value();
        }
        return v2_5;
    }

    public Boolean findIgnoreUnknownProperties(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p3)
    {
        Boolean v1_2;
        com.flurry.org.codehaus.jackson.annotate.JsonIgnoreProperties v0_1 = ((com.flurry.org.codehaus.jackson.annotate.JsonIgnoreProperties) p3.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonIgnoreProperties));
        if (v0_1 != null) {
            v1_2 = Boolean.valueOf(v0_1.ignoreUnknown());
        } else {
            v1_2 = 0;
        }
        return v1_2;
    }

    public Object findInjectableValueId(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p5)
    {
        String v2;
        com.flurry.org.codehaus.jackson.map.annotate.JacksonInject v1_1 = ((com.flurry.org.codehaus.jackson.map.annotate.JacksonInject) p5.getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JacksonInject));
        if (v1_1 != null) {
            v2 = v1_1.value();
            if (v2.length() == 0) {
                if ((p5 instanceof com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod)) {
                    if (((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) p5).getParameterCount() != 0) {
                        v2 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) p5).getParameterClass(0).getName();
                    } else {
                        v2 = p5.getRawType().getName();
                    }
                } else {
                    v2 = p5.getRawType().getName();
                }
            }
        } else {
            v2 = 0;
        }
        return v2;
    }

    public Class findKeyDeserializer(com.flurry.org.codehaus.jackson.map.introspect.Annotated p4)
    {
        int v1;
        com.flurry.org.codehaus.jackson.map.annotate.JsonDeserialize v0_1 = ((com.flurry.org.codehaus.jackson.map.annotate.JsonDeserialize) p4.getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonDeserialize));
        if (v0_1 == null) {
            v1 = 0;
        } else {
            v1 = v0_1.keyUsing();
            if (v1 == com.flurry.org.codehaus.jackson.map.KeyDeserializer$None) {
            }
        }
        return v1;
    }

    public Class findKeySerializer(com.flurry.org.codehaus.jackson.map.introspect.Annotated p4)
    {
        int v1;
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize v0_1 = ((com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize) p4.getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize));
        if (v0_1 == null) {
            v1 = 0;
        } else {
            v1 = v0_1.keyUsing();
            if (v1 == com.flurry.org.codehaus.jackson.map.JsonSerializer$None) {
            }
        }
        return v1;
    }

    public String[] findPropertiesToIgnore(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p3)
    {
        String[] v1_1;
        com.flurry.org.codehaus.jackson.annotate.JsonIgnoreProperties v0_1 = ((com.flurry.org.codehaus.jackson.annotate.JsonIgnoreProperties) p3.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonIgnoreProperties));
        if (v0_1 != null) {
            v1_1 = v0_1.value();
        } else {
            v1_1 = 0;
        }
        return v1_1;
    }

    public com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder findPropertyContentTypeResolver(com.flurry.org.codehaus.jackson.map.MapperConfig p4, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p5, com.flurry.org.codehaus.jackson.type.JavaType p6)
    {
        if (p6.isContainerType()) {
            return this._findTypeResolver(p4, p5, p6);
        } else {
            throw new IllegalArgumentException(new StringBuilder().append("Must call method with a container type (got ").append(p6).append(")").toString());
        }
    }

    public String findPropertyNameForParam(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter p3)
    {
        String v1_1;
        if (p3 == null) {
            v1_1 = 0;
        } else {
            com.flurry.org.codehaus.jackson.annotate.JsonProperty v0_1 = ((com.flurry.org.codehaus.jackson.annotate.JsonProperty) p3.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonProperty));
            if (v0_1 == null) {
            } else {
                v1_1 = v0_1.value();
            }
        }
        return v1_1;
    }

    public com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder findPropertyTypeResolver(com.flurry.org.codehaus.jackson.map.MapperConfig p2, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p3, com.flurry.org.codehaus.jackson.type.JavaType p4)
    {
        com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder v0_1;
        if (!p4.isContainerType()) {
            v0_1 = this._findTypeResolver(p2, p3, p4);
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty findReferenceType(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p4)
    {
        int v2_1;
        com.flurry.org.codehaus.jackson.annotate.JsonManagedReference v0_1 = ((com.flurry.org.codehaus.jackson.annotate.JsonManagedReference) p4.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonManagedReference));
        if (v0_1 == null) {
            com.flurry.org.codehaus.jackson.annotate.JsonBackReference v1_1 = ((com.flurry.org.codehaus.jackson.annotate.JsonBackReference) p4.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonBackReference));
            if (v1_1 == null) {
                v2_1 = 0;
            } else {
                v2_1 = com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty.back(v1_1.value());
            }
        } else {
            v2_1 = com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty.managed(v0_1.value());
        }
        return v2_1;
    }

    public String findRootName(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p3)
    {
        String v1_1;
        com.flurry.org.codehaus.jackson.map.annotate.JsonRootName v0_1 = ((com.flurry.org.codehaus.jackson.map.annotate.JsonRootName) p3.getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonRootName));
        if (v0_1 != null) {
            v1_1 = v0_1.value();
        } else {
            v1_1 = 0;
        }
        return v1_1;
    }

    public String findSerializablePropertyName(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField p3)
    {
        int v1_2;
        com.flurry.org.codehaus.jackson.annotate.JsonProperty v0_1 = ((com.flurry.org.codehaus.jackson.annotate.JsonProperty) p3.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonProperty));
        if (v0_1 == null) {
            if ((!p3.hasAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize)) && (!p3.hasAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonView))) {
                v1_2 = 0;
            } else {
                v1_2 = "";
            }
        } else {
            v1_2 = v0_1.value();
        }
        return v1_2;
    }

    public Class findSerializationContentType(com.flurry.org.codehaus.jackson.map.introspect.Annotated p4, com.flurry.org.codehaus.jackson.type.JavaType p5)
    {
        int v1;
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize v0_1 = ((com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize) p4.getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize));
        if (v0_1 == null) {
            v1 = 0;
        } else {
            v1 = v0_1.contentAs();
            if (v1 == com.flurry.org.codehaus.jackson.map.annotate.NoClass) {
            }
        }
        return v1;
    }

    public com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion findSerializationInclusion(com.flurry.org.codehaus.jackson.map.introspect.Annotated p5, com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion p6)
    {
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion v3_1;
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize v0_1 = ((com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize) p5.getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize));
        if (v0_1 == null) {
            com.flurry.org.codehaus.jackson.annotate.JsonWriteNullProperties v1_1 = ((com.flurry.org.codehaus.jackson.annotate.JsonWriteNullProperties) p5.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonWriteNullProperties));
            if (v1_1 == null) {
                v3_1 = p6;
            } else {
                if (!v1_1.value()) {
                    v3_1 = com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion.NON_NULL;
                } else {
                    v3_1 = com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion.ALWAYS;
                }
            }
        } else {
            v3_1 = v0_1.include();
        }
        return v3_1;
    }

    public Class findSerializationKeyType(com.flurry.org.codehaus.jackson.map.introspect.Annotated p4, com.flurry.org.codehaus.jackson.type.JavaType p5)
    {
        int v1;
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize v0_1 = ((com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize) p4.getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize));
        if (v0_1 == null) {
            v1 = 0;
        } else {
            v1 = v0_1.keyAs();
            if (v1 == com.flurry.org.codehaus.jackson.map.annotate.NoClass) {
            }
        }
        return v1;
    }

    public String[] findSerializationPropertyOrder(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p3)
    {
        String[] v1_1;
        com.flurry.org.codehaus.jackson.annotate.JsonPropertyOrder v0_1 = ((com.flurry.org.codehaus.jackson.annotate.JsonPropertyOrder) p3.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonPropertyOrder));
        if (v0_1 != null) {
            v1_1 = v0_1.value();
        } else {
            v1_1 = 0;
        }
        return v1_1;
    }

    public Boolean findSerializationSortAlphabetically(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p3)
    {
        Boolean v1_2;
        com.flurry.org.codehaus.jackson.annotate.JsonPropertyOrder v0_1 = ((com.flurry.org.codehaus.jackson.annotate.JsonPropertyOrder) p3.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonPropertyOrder));
        if (v0_1 != null) {
            v1_2 = Boolean.valueOf(v0_1.alphabetic());
        } else {
            v1_2 = 0;
        }
        return v1_2;
    }

    public Class findSerializationType(com.flurry.org.codehaus.jackson.map.introspect.Annotated p4)
    {
        int v1;
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize v0_1 = ((com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize) p4.getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize));
        if (v0_1 == null) {
            v1 = 0;
        } else {
            v1 = v0_1.as();
            if (v1 == com.flurry.org.codehaus.jackson.map.annotate.NoClass) {
            }
        }
        return v1;
    }

    public com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing findSerializationTyping(com.flurry.org.codehaus.jackson.map.introspect.Annotated p3)
    {
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing v1_1;
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize v0_1 = ((com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize) p3.getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize));
        if (v0_1 != null) {
            v1_1 = v0_1.typing();
        } else {
            v1_1 = 0;
        }
        return v1_1;
    }

    public Class[] findSerializationViews(com.flurry.org.codehaus.jackson.map.introspect.Annotated p3)
    {
        Class[] v1_1;
        com.flurry.org.codehaus.jackson.map.annotate.JsonView v0_1 = ((com.flurry.org.codehaus.jackson.map.annotate.JsonView) p3.getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonView));
        if (v0_1 != null) {
            v1_1 = v0_1.value();
        } else {
            v1_1 = 0;
        }
        return v1_1;
    }

    public Object findSerializer(com.flurry.org.codehaus.jackson.map.introspect.Annotated p6)
    {
        com.flurry.org.codehaus.jackson.map.ser.std.RawSerializer v3_0;
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize v0_1 = ((com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize) p6.getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize));
        if (v0_1 == null) {
            com.flurry.org.codehaus.jackson.annotate.JsonRawValue v1_1 = ((com.flurry.org.codehaus.jackson.annotate.JsonRawValue) p6.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonRawValue));
            if ((v1_1 == null) || (!v1_1.value())) {
                v3_0 = 0;
            } else {
                v3_0 = new com.flurry.org.codehaus.jackson.map.ser.std.RawSerializer(p6.getRawType());
            }
        } else {
            v3_0 = v0_1.using();
            if (v3_0 == com.flurry.org.codehaus.jackson.map.JsonSerializer$None) {
            }
        }
        return v3_0;
    }

    public String findSettablePropertyName(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p4)
    {
        int v2_9;
        com.flurry.org.codehaus.jackson.annotate.JsonProperty v1_1 = ((com.flurry.org.codehaus.jackson.annotate.JsonProperty) p4.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonProperty));
        if (v1_1 == null) {
            com.flurry.org.codehaus.jackson.annotate.JsonSetter v0_1 = ((com.flurry.org.codehaus.jackson.annotate.JsonSetter) p4.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonSetter));
            if (v0_1 == null) {
                if ((!p4.hasAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonDeserialize)) && ((!p4.hasAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonView)) && ((!p4.hasAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonBackReference)) && (!p4.hasAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonManagedReference))))) {
                    v2_9 = 0;
                } else {
                    v2_9 = "";
                }
            } else {
                v2_9 = v0_1.value();
            }
        } else {
            v2_9 = v1_1.value();
        }
        return v2_9;
    }

    public java.util.List findSubtypes(com.flurry.org.codehaus.jackson.map.introspect.Annotated p11)
    {
        java.util.ArrayList v3_0;
        com.flurry.org.codehaus.jackson.annotate.JsonSubTypes v4_1 = ((com.flurry.org.codehaus.jackson.annotate.JsonSubTypes) p11.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonSubTypes));
        if (v4_1 != null) {
            com.flurry.org.codehaus.jackson.annotate.JsonSubTypes$Type[] v6 = v4_1.value();
            v3_0 = new java.util.ArrayList(v6.length);
            com.flurry.org.codehaus.jackson.annotate.JsonSubTypes$Type[] v0 = v6;
            int v2 = v0.length;
            int v1 = 0;
            while (v1 < v2) {
                com.flurry.org.codehaus.jackson.annotate.JsonSubTypes$Type v5 = v0[v1];
                v3_0.add(new com.flurry.org.codehaus.jackson.map.jsontype.NamedType(v5.value(), v5.name()));
                v1++;
            }
        } else {
            v3_0 = 0;
        }
        return v3_0;
    }

    public String findTypeName(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p3)
    {
        String v1_1;
        com.flurry.org.codehaus.jackson.annotate.JsonTypeName v0_1 = ((com.flurry.org.codehaus.jackson.annotate.JsonTypeName) p3.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonTypeName));
        if (v0_1 != null) {
            v1_1 = v0_1.value();
        } else {
            v1_1 = 0;
        }
        return v1_1;
    }

    public com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder findTypeResolver(com.flurry.org.codehaus.jackson.map.MapperConfig p2, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p3, com.flurry.org.codehaus.jackson.type.JavaType p4)
    {
        return this._findTypeResolver(p2, p3, p4);
    }

    public Object findValueInstantiator(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p3)
    {
        Class v1_1;
        com.flurry.org.codehaus.jackson.map.annotate.JsonValueInstantiator v0_1 = ((com.flurry.org.codehaus.jackson.map.annotate.JsonValueInstantiator) p3.getAnnotation(com.flurry.org.codehaus.jackson.map.annotate.JsonValueInstantiator));
        if (v0_1 != null) {
            v1_1 = v0_1.value();
        } else {
            v1_1 = 0;
        }
        return v1_1;
    }

    public boolean hasAnyGetterAnnotation(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p2)
    {
        return p2.hasAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonAnyGetter);
    }

    public boolean hasAnySetterAnnotation(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p2)
    {
        return p2.hasAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonAnySetter);
    }

    public boolean hasAsValueAnnotation(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p3)
    {
        int v1_2;
        com.flurry.org.codehaus.jackson.annotate.JsonValue v0_1 = ((com.flurry.org.codehaus.jackson.annotate.JsonValue) p3.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonValue));
        if ((v0_1 == null) || (!v0_1.value())) {
            v1_2 = 0;
        } else {
            v1_2 = 1;
        }
        return v1_2;
    }

    public boolean hasCreatorAnnotation(com.flurry.org.codehaus.jackson.map.introspect.Annotated p2)
    {
        return p2.hasAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonCreator);
    }

    public boolean hasIgnoreMarker(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p2)
    {
        return this._isIgnorable(p2);
    }

    public boolean isHandled(otation.Annotation p3)
    {
        int v1_2;
        if (p3.annotationType().getAnnotation(com.flurry.org.codehaus.jackson.annotate.JacksonAnnotation) == null) {
            v1_2 = 0;
        } else {
            v1_2 = 1;
        }
        return v1_2;
    }

    public boolean isIgnorableConstructor(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor p2)
    {
        return this._isIgnorable(p2);
    }

    public boolean isIgnorableField(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField p2)
    {
        return this._isIgnorable(p2);
    }

    public boolean isIgnorableMethod(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p2)
    {
        return this._isIgnorable(p2);
    }

    public Boolean isIgnorableType(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p3)
    {
        Boolean v1_2;
        com.flurry.org.codehaus.jackson.annotate.JsonIgnoreType v0_1 = ((com.flurry.org.codehaus.jackson.annotate.JsonIgnoreType) p3.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonIgnoreType));
        if (v0_1 != null) {
            v1_2 = Boolean.valueOf(v0_1.value());
        } else {
            v1_2 = 0;
        }
        return v1_2;
    }

    public Boolean shouldUnwrapProperty(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p3)
    {
        Boolean v1_2;
        com.flurry.org.codehaus.jackson.annotate.JsonUnwrapped v0_1 = ((com.flurry.org.codehaus.jackson.annotate.JsonUnwrapped) p3.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonUnwrapped));
        if ((v0_1 == null) || (!v0_1.enabled())) {
            v1_2 = 0;
        } else {
            v1_2 = Boolean.TRUE;
        }
        return v1_2;
    }
}
