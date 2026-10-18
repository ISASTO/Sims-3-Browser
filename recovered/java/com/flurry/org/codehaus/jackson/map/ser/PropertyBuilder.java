package com.flurry.org.codehaus.jackson.map.ser;
public class PropertyBuilder {
    protected final com.flurry.org.codehaus.jackson.map.AnnotationIntrospector _annotationIntrospector;
    protected final com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription _beanDesc;
    protected final com.flurry.org.codehaus.jackson.map.SerializationConfig _config;
    protected Object _defaultBean;
    protected final com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion _outputProps;

    public PropertyBuilder(com.flurry.org.codehaus.jackson.map.SerializationConfig p2, com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription p3)
    {
        this._config = p2;
        this._beanDesc = p3;
        this._outputProps = p3.findSerializationInclusion(p2.getSerializationInclusion());
        this._annotationIntrospector = this._config.getAnnotationIntrospector();
        return;
    }

    protected Object _throwWrapped(Exception p5, String p6, Object p7)
    {
        RuntimeException v0_0 = p5;
        while (v0_0.getCause() != null) {
            v0_0 = v0_0.getCause();
        }
        if (!(v0_0 instanceof Error)) {
            if (!(v0_0 instanceof RuntimeException)) {
                throw new IllegalArgumentException(new StringBuilder().append("Failed to get property \'").append(p6).append("\' of default ").append(p7.getClass().getName()).append(" instance").toString());
            } else {
                throw ((RuntimeException) v0_0);
            }
        } else {
            throw ((Error) v0_0);
        }
    }

    protected com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter buildWriter(String p20, com.flurry.org.codehaus.jackson.type.JavaType p21, com.flurry.org.codehaus.jackson.map.JsonSerializer p22, com.flurry.org.codehaus.jackson.map.TypeSerializer p23, com.flurry.org.codehaus.jackson.map.TypeSerializer p24, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p25, boolean p26)
    {
        reflect.Method v12;
        int v13;
        if (!(p25 instanceof com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField)) {
            v12 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) p25).getAnnotated();
            v13 = 0;
        } else {
            v12 = 0;
            v13 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField) p25).getAnnotated();
        }
        com.flurry.org.codehaus.jackson.type.JavaType v11 = this.findSerializationType(p25, p26, p21);
        if (p24 != null) {
            if (v11 == null) {
                v11 = p21;
            }
            if (v11.getContentType() != null) {
                v11 = v11.withContentTypeHandler(p24);
                v11.getContentType();
            } else {
                throw new IllegalStateException(new StringBuilder().append("Problem trying to create BeanPropertyWriter for property \'").append(p20).append("\' (of type ").append(this._beanDesc.getType()).append("); serialization type ").append(v11).append(" has no content").toString());
            }
        }
        Object v15 = 0;
        int v14 = 0;
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion v17 = this._annotationIntrospector.findSerializationInclusion(p25, this._outputProps);
        if (v17 != null) {
            switch (com.flurry.org.codehaus.jackson.map.ser.PropertyBuilder$1.$SwitchMap$org$codehaus$jackson$map$annotate$JsonSerialize$Inclusion[v17.ordinal()]) {
                case 1:
                    v15 = this.getDefaultValue(p20, v12, v13);
                    if (v15 != null) {
                        if (v15.getClass().isArray()) {
                            v15 = com.flurry.org.codehaus.jackson.map.util.Comparators.getArrayComparator(v15);
                        }
                    } else {
                        v14 = 1;
                    }
                    break;
                case 2:
                    v14 = 1;
                    v15 = this.getEmptyValueChecker(p20, p21);
                    break;
                case 3:
                    v14 = 1;
                case 4:
                    if (p21.isContainerType()) {
                        v15 = this.getContainerValueChecker(p20, p21);
                    }
                    break;
            }
        }
        com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter v4_1 = new com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter(p25, this._beanDesc.getClassAnnotations(), p20, p21, p22, p23, v11, v12, v13, v14, v15);
        Boolean v18 = this._annotationIntrospector.shouldUnwrapProperty(p25);
        if ((v18 != null) && (v18.booleanValue())) {
            v4_1 = v4_1.unwrappingWriter();
        }
        return v4_1;
    }

    protected com.flurry.org.codehaus.jackson.type.JavaType findSerializationType(com.flurry.org.codehaus.jackson.map.introspect.Annotated p8, boolean p9, com.flurry.org.codehaus.jackson.type.JavaType p10)
    {
        Class v2 = this._annotationIntrospector.findSerializationType(p8);
        if (v2 != null) {
            Class v0 = p10.getRawClass();
            if (!v2.isAssignableFrom(v0)) {
                if (v0.isAssignableFrom(v2)) {
                    p10 = this._config.constructSpecializedType(p10, v2);
                } else {
                    throw new IllegalArgumentException(new StringBuilder().append("Illegal concrete-type annotation for method \'").append(p8.getName()).append("\': class ").append(v2.getName()).append(" not a super-type of (declared) class ").append(v0.getName()).toString());
                }
            } else {
                p10 = p10.widenBy(v2);
            }
            p9 = 1;
        }
        com.flurry.org.codehaus.jackson.type.JavaType v1 = com.flurry.org.codehaus.jackson.map.ser.BeanSerializerFactory.modifySecondaryTypesByAnnotation(this._config, p8, p10);
        if (v1 != p10) {
            p9 = 1;
            p10 = v1;
        }
        if (p9 == 0) {
            com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing v3 = this._annotationIntrospector.findSerializationTyping(p8);
            if (v3 != null) {
                if (v3 != com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing.STATIC) {
                    p9 = 0;
                } else {
                    p9 = 1;
                }
            }
        }
        if (p9 == 0) {
            p10 = 0;
        }
        return p10;
    }

    public com.flurry.org.codehaus.jackson.map.util.Annotations getClassAnnotations()
    {
        return this._beanDesc.getClassAnnotations();
    }

    protected Object getContainerValueChecker(String p3, com.flurry.org.codehaus.jackson.type.JavaType p4)
    {
        com.flurry.org.codehaus.jackson.map.ser.PropertyBuilder$EmptyCollectionChecker v0_2;
        if (this._config.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_EMPTY_JSON_ARRAYS)) {
            v0_2 = 0;
        } else {
            if (!p4.isArrayType()) {
                if (!java.util.Collection.isAssignableFrom(p4.getRawClass())) {
                } else {
                    v0_2 = new com.flurry.org.codehaus.jackson.map.ser.PropertyBuilder$EmptyCollectionChecker();
                }
            } else {
                v0_2 = new com.flurry.org.codehaus.jackson.map.ser.PropertyBuilder$EmptyArrayChecker();
            }
        }
        return v0_2;
    }

    protected Object getDefaultBean()
    {
        if (this._defaultBean == null) {
            this._defaultBean = this._beanDesc.instantiateBean(this._config.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.CAN_OVERRIDE_ACCESS_MODIFIERS));
            if (this._defaultBean == null) {
                throw new IllegalArgumentException(new StringBuilder().append("Class ").append(this._beanDesc.getClassInfo().getAnnotated().getName()).append(" has no default constructor; can not instantiate default bean value to support \'properties=JsonSerialize.Inclusion.NON_DEFAULT\' annotation").toString());
            }
        }
        return this._defaultBean;
    }

    protected Object getDefaultValue(String p4, reflect.Method p5, reflect.Field p6)
    {
        Object v2_0;
        Object v0 = this.getDefaultBean();
        try {
            if (p5 == null) {
                v2_0 = p6.get(v0);
            } else {
                Object v2_2 = new Object[0];
                v2_0 = 億.invokeHook(p5, v0, v2_2);
            }
        } catch (Exception v1) {
            v2_0 = this._throwWrapped(v1, p4, v0);
        }
        return v2_0;
    }

    protected Object getEmptyValueChecker(String p3, com.flurry.org.codehaus.jackson.type.JavaType p4)
    {
        int v1_2;
        Class v0 = p4.getRawClass();
        if (v0 != String) {
            if (!p4.isArrayType()) {
                if (!java.util.Collection.isAssignableFrom(v0)) {
                    if (!java.util.Map.isAssignableFrom(v0)) {
                        v1_2 = 0;
                    } else {
                        v1_2 = new com.flurry.org.codehaus.jackson.map.ser.PropertyBuilder$EmptyMapChecker();
                    }
                } else {
                    v1_2 = new com.flurry.org.codehaus.jackson.map.ser.PropertyBuilder$EmptyCollectionChecker();
                }
            } else {
                v1_2 = new com.flurry.org.codehaus.jackson.map.ser.PropertyBuilder$EmptyArrayChecker();
            }
        } else {
            v1_2 = new com.flurry.org.codehaus.jackson.map.ser.PropertyBuilder$EmptyStringChecker();
        }
        return v1_2;
    }
}
