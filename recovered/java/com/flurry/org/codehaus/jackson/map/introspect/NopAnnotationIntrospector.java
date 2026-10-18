package com.flurry.org.codehaus.jackson.map.introspect;
public class NopAnnotationIntrospector extends com.flurry.org.codehaus.jackson.map.AnnotationIntrospector {
    public static final com.flurry.org.codehaus.jackson.map.introspect.NopAnnotationIntrospector instance;

    static NopAnnotationIntrospector()
    {
        com.flurry.org.codehaus.jackson.map.introspect.NopAnnotationIntrospector.instance = new com.flurry.org.codehaus.jackson.map.introspect.NopAnnotationIntrospector();
        return;
    }

    public NopAnnotationIntrospector()
    {
        return;
    }

    public Class findContentDeserializer(com.flurry.org.codehaus.jackson.map.introspect.Annotated p2)
    {
        return 0;
    }

    public String findDeserializablePropertyName(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField p2)
    {
        return 0;
    }

    public Class findDeserializationContentType(com.flurry.org.codehaus.jackson.map.introspect.Annotated p2, com.flurry.org.codehaus.jackson.type.JavaType p3, String p4)
    {
        return 0;
    }

    public Class findDeserializationKeyType(com.flurry.org.codehaus.jackson.map.introspect.Annotated p2, com.flurry.org.codehaus.jackson.type.JavaType p3, String p4)
    {
        return 0;
    }

    public Class findDeserializationType(com.flurry.org.codehaus.jackson.map.introspect.Annotated p2, com.flurry.org.codehaus.jackson.type.JavaType p3, String p4)
    {
        return 0;
    }

    public Object findDeserializer(com.flurry.org.codehaus.jackson.map.introspect.Annotated p2)
    {
        return 0;
    }

    public String findEnumValue(Enum p2)
    {
        return 0;
    }

    public String findGettablePropertyName(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p2)
    {
        return 0;
    }

    public Boolean findIgnoreUnknownProperties(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p2)
    {
        return 0;
    }

    public Class findKeyDeserializer(com.flurry.org.codehaus.jackson.map.introspect.Annotated p2)
    {
        return 0;
    }

    public String[] findPropertiesToIgnore(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p2)
    {
        return 0;
    }

    public String findPropertyNameForParam(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter p2)
    {
        return 0;
    }

    public String findRootName(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p2)
    {
        return 0;
    }

    public String findSerializablePropertyName(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField p2)
    {
        return 0;
    }

    public String[] findSerializationPropertyOrder(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p2)
    {
        return 0;
    }

    public Boolean findSerializationSortAlphabetically(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p2)
    {
        return 0;
    }

    public Class findSerializationType(com.flurry.org.codehaus.jackson.map.introspect.Annotated p2)
    {
        return 0;
    }

    public com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing findSerializationTyping(com.flurry.org.codehaus.jackson.map.introspect.Annotated p2)
    {
        return 0;
    }

    public Class[] findSerializationViews(com.flurry.org.codehaus.jackson.map.introspect.Annotated p2)
    {
        return 0;
    }

    public Object findSerializer(com.flurry.org.codehaus.jackson.map.introspect.Annotated p2)
    {
        return 0;
    }

    public String findSettablePropertyName(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p2)
    {
        return 0;
    }

    public boolean hasAsValueAnnotation(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p2)
    {
        return 0;
    }

    public boolean hasIgnoreMarker(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p2)
    {
        return 0;
    }

    public boolean isHandled(otation.Annotation p2)
    {
        return 0;
    }

    public boolean isIgnorableConstructor(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor p2)
    {
        return 0;
    }

    public boolean isIgnorableField(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField p2)
    {
        return 0;
    }

    public boolean isIgnorableMethod(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p2)
    {
        return 0;
    }
}
