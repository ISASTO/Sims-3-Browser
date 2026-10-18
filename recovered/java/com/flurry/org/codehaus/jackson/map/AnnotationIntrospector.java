package com.flurry.org.codehaus.jackson.map;
public abstract class AnnotationIntrospector {

    public AnnotationIntrospector()
    {
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.AnnotationIntrospector nopInstance()
    {
        return com.flurry.org.codehaus.jackson.map.introspect.NopAnnotationIntrospector.instance;
    }

    public static com.flurry.org.codehaus.jackson.map.AnnotationIntrospector pair(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p1, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p2)
    {
        return new com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$Pair(p1, p2);
    }

    public java.util.Collection allIntrospectors()
    {
        return java.util.Collections.singletonList(this);
    }

    public java.util.Collection allIntrospectors(java.util.Collection p1)
    {
        p1.add(this);
        return p1;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker findAutoDetectVisibility(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p1, com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p2)
    {
        return p2;
    }

    public Boolean findCachability(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p2)
    {
        return 0;
    }

    public abstract Class findContentDeserializer(com.flurry.org.codehaus.jackson.map.introspect.Annotated p0);

    public Class findContentSerializer(com.flurry.org.codehaus.jackson.map.introspect.Annotated p2)
    {
        return 0;
    }

    public abstract String findDeserializablePropertyName(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField p0);

    public abstract Class findDeserializationContentType(com.flurry.org.codehaus.jackson.map.introspect.Annotated p0, com.flurry.org.codehaus.jackson.type.JavaType p1, String p2);

    public abstract Class findDeserializationKeyType(com.flurry.org.codehaus.jackson.map.introspect.Annotated p0, com.flurry.org.codehaus.jackson.type.JavaType p1, String p2);

    public abstract Class findDeserializationType(com.flurry.org.codehaus.jackson.map.introspect.Annotated p0, com.flurry.org.codehaus.jackson.type.JavaType p1, String p2);

    public abstract Object findDeserializer(com.flurry.org.codehaus.jackson.map.introspect.Annotated p0);

    public abstract String findEnumValue(Enum p0);

    public Object findFilterId(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p2)
    {
        return 0;
    }

    public abstract String findGettablePropertyName(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p0);

    public abstract Boolean findIgnoreUnknownProperties(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p0);

    public Object findInjectableValueId(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p2)
    {
        return 0;
    }

    public abstract Class findKeyDeserializer(com.flurry.org.codehaus.jackson.map.introspect.Annotated p0);

    public Class findKeySerializer(com.flurry.org.codehaus.jackson.map.introspect.Annotated p2)
    {
        return 0;
    }

    public abstract String[] findPropertiesToIgnore(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p0);

    public com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder findPropertyContentTypeResolver(com.flurry.org.codehaus.jackson.map.MapperConfig p2, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p3, com.flurry.org.codehaus.jackson.type.JavaType p4)
    {
        return 0;
    }

    public abstract String findPropertyNameForParam(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter p0);

    public com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder findPropertyTypeResolver(com.flurry.org.codehaus.jackson.map.MapperConfig p2, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p3, com.flurry.org.codehaus.jackson.type.JavaType p4)
    {
        return 0;
    }

    public com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$ReferenceProperty findReferenceType(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p2)
    {
        return 0;
    }

    public abstract String findRootName(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p0);

    public abstract String findSerializablePropertyName(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField p0);

    public Class findSerializationContentType(com.flurry.org.codehaus.jackson.map.introspect.Annotated p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        return 0;
    }

    public com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion findSerializationInclusion(com.flurry.org.codehaus.jackson.map.introspect.Annotated p1, com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion p2)
    {
        return p2;
    }

    public Class findSerializationKeyType(com.flurry.org.codehaus.jackson.map.introspect.Annotated p2, com.flurry.org.codehaus.jackson.type.JavaType p3)
    {
        return 0;
    }

    public abstract String[] findSerializationPropertyOrder(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p0);

    public abstract Boolean findSerializationSortAlphabetically(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p0);

    public abstract Class findSerializationType(com.flurry.org.codehaus.jackson.map.introspect.Annotated p0);

    public abstract com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing findSerializationTyping(com.flurry.org.codehaus.jackson.map.introspect.Annotated p0);

    public abstract Class[] findSerializationViews(com.flurry.org.codehaus.jackson.map.introspect.Annotated p0);

    public abstract Object findSerializer(com.flurry.org.codehaus.jackson.map.introspect.Annotated p0);

    public abstract String findSettablePropertyName(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p0);

    public java.util.List findSubtypes(com.flurry.org.codehaus.jackson.map.introspect.Annotated p2)
    {
        return 0;
    }

    public String findTypeName(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p2)
    {
        return 0;
    }

    public com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder findTypeResolver(com.flurry.org.codehaus.jackson.map.MapperConfig p2, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p3, com.flurry.org.codehaus.jackson.type.JavaType p4)
    {
        return 0;
    }

    public Object findValueInstantiator(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p2)
    {
        return 0;
    }

    public boolean hasAnyGetterAnnotation(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p2)
    {
        return 0;
    }

    public boolean hasAnySetterAnnotation(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p2)
    {
        return 0;
    }

    public abstract boolean hasAsValueAnnotation(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p0);

    public boolean hasCreatorAnnotation(com.flurry.org.codehaus.jackson.map.introspect.Annotated p2)
    {
        return 0;
    }

    public boolean hasIgnoreMarker(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p2)
    {
        int v0_1;
        if (!(p2 instanceof com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod)) {
            if (!(p2 instanceof com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField)) {
                if (!(p2 instanceof com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor)) {
                    v0_1 = 0;
                } else {
                    v0_1 = this.isIgnorableConstructor(((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor) p2));
                }
            } else {
                v0_1 = this.isIgnorableField(((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField) p2));
            }
        } else {
            v0_1 = this.isIgnorableMethod(((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) p2));
        }
        return v0_1;
    }

    public abstract boolean isHandled(otation.Annotation p0);

    public abstract boolean isIgnorableConstructor(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor p0);

    public abstract boolean isIgnorableField(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField p0);

    public abstract boolean isIgnorableMethod(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p0);

    public Boolean isIgnorableType(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p2)
    {
        return 0;
    }

    public Boolean shouldUnwrapProperty(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p2)
    {
        return 0;
    }
}
