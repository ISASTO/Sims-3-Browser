package com.flurry.org.codehaus.jackson.map;
public class AnnotationIntrospector$Pair extends com.flurry.org.codehaus.jackson.map.AnnotationIntrospector {
    protected final com.flurry.org.codehaus.jackson.map.AnnotationIntrospector _primary;
    protected final com.flurry.org.codehaus.jackson.map.AnnotationIntrospector _secondary;

    public AnnotationIntrospector$Pair(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p1, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p2)
    {
        this._primary = p1;
        this._secondary = p2;
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.AnnotationIntrospector create(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p1, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p2)
    {
        if (p1 != null) {
            if (p2 != null) {
                p2 = new com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$Pair(p1, p2);
            } else {
                p2 = p1;
            }
        }
        return p2;
    }

    public java.util.Collection allIntrospectors()
    {
        return this.allIntrospectors(new java.util.ArrayList());
    }

    public java.util.Collection allIntrospectors(java.util.Collection p2)
    {
        this._primary.allIntrospectors(p2);
        this._secondary.allIntrospectors(p2);
        return p2;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker findAutoDetectVisibility(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p2, com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p3)
    {
        return this._primary.findAutoDetectVisibility(p2, this._secondary.findAutoDetectVisibility(p2, p3));
    }

    public Boolean findCachability(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p3)
    {
        Boolean v0 = this._primary.findCachability(p3);
        if (v0 == null) {
            v0 = this._secondary.findCachability(p3);
        }
        return v0;
    }

    public Class findContentDeserializer(com.flurry.org.codehaus.jackson.map.introspect.Annotated p3)
    {
        Class v0 = this._primary.findContentDeserializer(p3);
        if ((v0 == null) || (v0 == com.flurry.org.codehaus.jackson.map.JsonDeserializer$None)) {
            v0 = this._secondary.findContentDeserializer(p3);
        }
        return v0;
    }

    public Class findContentSerializer(com.flurry.org.codehaus.jackson.map.introspect.Annotated p3)
    {
        Class v0 = this._primary.findContentSerializer(p3);
        if ((v0 == null) || (v0 == com.flurry.org.codehaus.jackson.map.JsonSerializer$None)) {
            v0 = this._secondary.findContentSerializer(p3);
        }
        return v0;
    }

    public String findDeserializablePropertyName(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField p4)
    {
        String v0 = this._primary.findDeserializablePropertyName(p4);
        if (v0 != null) {
            if (v0.length() == 0) {
                String v1 = this._secondary.findDeserializablePropertyName(p4);
                if (v1 != null) {
                    v0 = v1;
                }
            }
        } else {
            v0 = this._secondary.findDeserializablePropertyName(p4);
        }
        return v0;
    }

    public Class findDeserializationContentType(com.flurry.org.codehaus.jackson.map.introspect.Annotated p3, com.flurry.org.codehaus.jackson.type.JavaType p4, String p5)
    {
        Class v0 = this._primary.findDeserializationContentType(p3, p4, p5);
        if (v0 == null) {
            v0 = this._secondary.findDeserializationContentType(p3, p4, p5);
        }
        return v0;
    }

    public Class findDeserializationKeyType(com.flurry.org.codehaus.jackson.map.introspect.Annotated p3, com.flurry.org.codehaus.jackson.type.JavaType p4, String p5)
    {
        Class v0 = this._primary.findDeserializationKeyType(p3, p4, p5);
        if (v0 == null) {
            v0 = this._secondary.findDeserializationKeyType(p3, p4, p5);
        }
        return v0;
    }

    public Class findDeserializationType(com.flurry.org.codehaus.jackson.map.introspect.Annotated p3, com.flurry.org.codehaus.jackson.type.JavaType p4, String p5)
    {
        Class v0 = this._primary.findDeserializationType(p3, p4, p5);
        if (v0 == null) {
            v0 = this._secondary.findDeserializationType(p3, p4, p5);
        }
        return v0;
    }

    public Object findDeserializer(com.flurry.org.codehaus.jackson.map.introspect.Annotated p3)
    {
        Object v0 = this._primary.findDeserializer(p3);
        if (v0 == null) {
            v0 = this._secondary.findDeserializer(p3);
        }
        return v0;
    }

    public String findEnumValue(Enum p3)
    {
        String v0 = this._primary.findEnumValue(p3);
        if (v0 == null) {
            v0 = this._secondary.findEnumValue(p3);
        }
        return v0;
    }

    public Object findFilterId(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p3)
    {
        Object v0 = this._primary.findFilterId(p3);
        if (v0 == null) {
            v0 = this._secondary.findFilterId(p3);
        }
        return v0;
    }

    public String findGettablePropertyName(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p4)
    {
        String v0 = this._primary.findGettablePropertyName(p4);
        if (v0 != null) {
            if (v0.length() == 0) {
                String v1 = this._secondary.findGettablePropertyName(p4);
                if (v1 != null) {
                    v0 = v1;
                }
            }
        } else {
            v0 = this._secondary.findGettablePropertyName(p4);
        }
        return v0;
    }

    public Boolean findIgnoreUnknownProperties(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p3)
    {
        Boolean v0 = this._primary.findIgnoreUnknownProperties(p3);
        if (v0 == null) {
            v0 = this._secondary.findIgnoreUnknownProperties(p3);
        }
        return v0;
    }

    public Object findInjectableValueId(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p3)
    {
        Object v0 = this._primary.findInjectableValueId(p3);
        if (v0 == null) {
            v0 = this._secondary.findInjectableValueId(p3);
        }
        return v0;
    }

    public Class findKeyDeserializer(com.flurry.org.codehaus.jackson.map.introspect.Annotated p3)
    {
        Class v0 = this._primary.findKeyDeserializer(p3);
        if ((v0 == null) || (v0 == com.flurry.org.codehaus.jackson.map.KeyDeserializer$None)) {
            v0 = this._secondary.findKeyDeserializer(p3);
        }
        return v0;
    }

    public Class findKeySerializer(com.flurry.org.codehaus.jackson.map.introspect.Annotated p3)
    {
        Class v0 = this._primary.findKeySerializer(p3);
        if ((v0 == null) || (v0 == com.flurry.org.codehaus.jackson.map.JsonSerializer$None)) {
            v0 = this._secondary.findKeySerializer(p3);
        }
        return v0;
    }

    public String[] findPropertiesToIgnore(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p3)
    {
        String[] v0 = this._primary.findPropertiesToIgnore(p3);
        if (v0 == null) {
            v0 = this._secondary.findPropertiesToIgnore(p3);
        }
        return v0;
    }

    public com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder findPropertyContentTypeResolver(com.flurry.org.codehaus.jackson.map.MapperConfig p3, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p4, com.flurry.org.codehaus.jackson.type.JavaType p5)
    {
        com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder v0 = this._primary.findPropertyContentTypeResolver(p3, p4, p5);
        if (v0 == null) {
            v0 = this._secondary.findPropertyContentTypeResolver(p3, p4, p5);
        }
        return v0;
    }

    public String findPropertyNameForParam(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter p3)
    {
        String v0 = this._primary.findPropertyNameForParam(p3);
        if (v0 == null) {
            v0 = this._secondary.findPropertyNameForParam(p3);
        }
        return v0;
    }

    public com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder findPropertyTypeResolver(com.flurry.org.codehaus.jackson.map.MapperConfig p3, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p4, com.flurry.org.codehaus.jackson.type.JavaType p5)
    {
        com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder v0 = this._primary.findPropertyTypeResolver(p3, p4, p5);
        if (v0 == null) {
            v0 = this._secondary.findPropertyTypeResolver(p3, p4, p5);
        }
        return v0;
    }

    public com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty findReferenceType(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p3)
    {
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty v0 = this._primary.findReferenceType(p3);
        if (v0 == null) {
            v0 = this._secondary.findReferenceType(p3);
        }
        return v0;
    }

    public String findRootName(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p4)
    {
        String v0 = this._primary.findRootName(p4);
        if (v0 != null) {
            if (v0.length() <= 0) {
                String v1 = this._secondary.findRootName(p4);
                if (v1 != null) {
                    v0 = v1;
                }
            }
        } else {
            v0 = this._secondary.findRootName(p4);
        }
        return v0;
    }

    public String findSerializablePropertyName(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField p4)
    {
        String v0 = this._primary.findSerializablePropertyName(p4);
        if (v0 != null) {
            if (v0.length() == 0) {
                String v1 = this._secondary.findSerializablePropertyName(p4);
                if (v1 != null) {
                    v0 = v1;
                }
            }
        } else {
            v0 = this._secondary.findSerializablePropertyName(p4);
        }
        return v0;
    }

    public Class findSerializationContentType(com.flurry.org.codehaus.jackson.map.introspect.Annotated p3, com.flurry.org.codehaus.jackson.type.JavaType p4)
    {
        Class v0 = this._primary.findSerializationContentType(p3, p4);
        if (v0 == null) {
            v0 = this._secondary.findSerializationContentType(p3, p4);
        }
        return v0;
    }

    public com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion findSerializationInclusion(com.flurry.org.codehaus.jackson.map.introspect.Annotated p2, com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion p3)
    {
        return this._primary.findSerializationInclusion(p2, this._secondary.findSerializationInclusion(p2, p3));
    }

    public Class findSerializationKeyType(com.flurry.org.codehaus.jackson.map.introspect.Annotated p3, com.flurry.org.codehaus.jackson.type.JavaType p4)
    {
        Class v0 = this._primary.findSerializationKeyType(p3, p4);
        if (v0 == null) {
            v0 = this._secondary.findSerializationKeyType(p3, p4);
        }
        return v0;
    }

    public String[] findSerializationPropertyOrder(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p3)
    {
        String[] v0 = this._primary.findSerializationPropertyOrder(p3);
        if (v0 == null) {
            v0 = this._secondary.findSerializationPropertyOrder(p3);
        }
        return v0;
    }

    public Boolean findSerializationSortAlphabetically(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p3)
    {
        Boolean v0 = this._primary.findSerializationSortAlphabetically(p3);
        if (v0 == null) {
            v0 = this._secondary.findSerializationSortAlphabetically(p3);
        }
        return v0;
    }

    public Class findSerializationType(com.flurry.org.codehaus.jackson.map.introspect.Annotated p3)
    {
        Class v0 = this._primary.findSerializationType(p3);
        if (v0 == null) {
            v0 = this._secondary.findSerializationType(p3);
        }
        return v0;
    }

    public com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing findSerializationTyping(com.flurry.org.codehaus.jackson.map.introspect.Annotated p3)
    {
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing v0 = this._primary.findSerializationTyping(p3);
        if (v0 == null) {
            v0 = this._secondary.findSerializationTyping(p3);
        }
        return v0;
    }

    public Class[] findSerializationViews(com.flurry.org.codehaus.jackson.map.introspect.Annotated p3)
    {
        Class[] v0 = this._primary.findSerializationViews(p3);
        if (v0 == null) {
            v0 = this._secondary.findSerializationViews(p3);
        }
        return v0;
    }

    public Object findSerializer(com.flurry.org.codehaus.jackson.map.introspect.Annotated p3)
    {
        Object v0 = this._primary.findSerializer(p3);
        if (v0 == null) {
            v0 = this._secondary.findSerializer(p3);
        }
        return v0;
    }

    public String findSettablePropertyName(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p4)
    {
        String v0 = this._primary.findSettablePropertyName(p4);
        if (v0 != null) {
            if (v0.length() == 0) {
                String v1 = this._secondary.findSettablePropertyName(p4);
                if (v1 != null) {
                    v0 = v1;
                }
            }
        } else {
            v0 = this._secondary.findSettablePropertyName(p4);
        }
        return v0;
    }

    public java.util.List findSubtypes(com.flurry.org.codehaus.jackson.map.introspect.Annotated p6)
    {
        java.util.ArrayList v0_1;
        java.util.List v1 = this._primary.findSubtypes(p6);
        java.util.List v2 = this._secondary.findSubtypes(p6);
        if ((v1 != null) && (!v1.isEmpty())) {
            if ((v2 != null) && (!v2.isEmpty())) {
                v0_1 = new java.util.ArrayList((v1.size() + v2.size()));
                v0_1.addAll(v1);
                v0_1.addAll(v2);
            } else {
                v0_1 = v1;
            }
        } else {
            v0_1 = v2;
        }
        return v0_1;
    }

    public String findTypeName(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p3)
    {
        String v0 = this._primary.findTypeName(p3);
        if ((v0 == null) || (v0.length() == 0)) {
            v0 = this._secondary.findTypeName(p3);
        }
        return v0;
    }

    public com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder findTypeResolver(com.flurry.org.codehaus.jackson.map.MapperConfig p3, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p4, com.flurry.org.codehaus.jackson.type.JavaType p5)
    {
        com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder v0 = this._primary.findTypeResolver(p3, p4, p5);
        if (v0 == null) {
            v0 = this._secondary.findTypeResolver(p3, p4, p5);
        }
        return v0;
    }

    public Object findValueInstantiator(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p3)
    {
        Object v0 = this._primary.findValueInstantiator(p3);
        if (v0 == null) {
            v0 = this._secondary.findValueInstantiator(p3);
        }
        return v0;
    }

    public boolean hasAnyGetterAnnotation(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p2)
    {
        if ((!this._primary.hasAnyGetterAnnotation(p2)) && (!this._secondary.hasAnyGetterAnnotation(p2))) {
            int v0_4 = 0;
        } else {
            v0_4 = 1;
        }
        return v0_4;
    }

    public boolean hasAnySetterAnnotation(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p2)
    {
        if ((!this._primary.hasAnySetterAnnotation(p2)) && (!this._secondary.hasAnySetterAnnotation(p2))) {
            int v0_4 = 0;
        } else {
            v0_4 = 1;
        }
        return v0_4;
    }

    public boolean hasAsValueAnnotation(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p2)
    {
        if ((!this._primary.hasAsValueAnnotation(p2)) && (!this._secondary.hasAsValueAnnotation(p2))) {
            int v0_4 = 0;
        } else {
            v0_4 = 1;
        }
        return v0_4;
    }

    public boolean hasCreatorAnnotation(com.flurry.org.codehaus.jackson.map.introspect.Annotated p2)
    {
        if ((!this._primary.hasCreatorAnnotation(p2)) && (!this._secondary.hasCreatorAnnotation(p2))) {
            int v0_4 = 0;
        } else {
            v0_4 = 1;
        }
        return v0_4;
    }

    public boolean hasIgnoreMarker(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p2)
    {
        if ((!this._primary.hasIgnoreMarker(p2)) && (!this._secondary.hasIgnoreMarker(p2))) {
            int v0_4 = 0;
        } else {
            v0_4 = 1;
        }
        return v0_4;
    }

    public boolean isHandled(otation.Annotation p2)
    {
        if ((!this._primary.isHandled(p2)) && (!this._secondary.isHandled(p2))) {
            int v0_4 = 0;
        } else {
            v0_4 = 1;
        }
        return v0_4;
    }

    public boolean isIgnorableConstructor(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor p2)
    {
        if ((!this._primary.isIgnorableConstructor(p2)) && (!this._secondary.isIgnorableConstructor(p2))) {
            int v0_4 = 0;
        } else {
            v0_4 = 1;
        }
        return v0_4;
    }

    public boolean isIgnorableField(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField p2)
    {
        if ((!this._primary.isIgnorableField(p2)) && (!this._secondary.isIgnorableField(p2))) {
            int v0_4 = 0;
        } else {
            v0_4 = 1;
        }
        return v0_4;
    }

    public boolean isIgnorableMethod(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p2)
    {
        if ((!this._primary.isIgnorableMethod(p2)) && (!this._secondary.isIgnorableMethod(p2))) {
            int v0_4 = 0;
        } else {
            v0_4 = 1;
        }
        return v0_4;
    }

    public Boolean isIgnorableType(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p3)
    {
        Boolean v0 = this._primary.isIgnorableType(p3);
        if (v0 == null) {
            v0 = this._secondary.isIgnorableType(p3);
        }
        return v0;
    }

    public Boolean shouldUnwrapProperty(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p3)
    {
        Boolean v0 = this._primary.shouldUnwrapProperty(p3);
        if (v0 == null) {
            v0 = this._secondary.shouldUnwrapProperty(p3);
        }
        return v0;
    }
}
