package com.flurry.org.codehaus.jackson.map;
public abstract class PropertyNamingStrategy {
    public static final com.flurry.org.codehaus.jackson.map.PropertyNamingStrategy CAMEL_CASE_TO_LOWER_CASE_WITH_UNDERSCORES;

    static PropertyNamingStrategy()
    {
        com.flurry.org.codehaus.jackson.map.PropertyNamingStrategy.CAMEL_CASE_TO_LOWER_CASE_WITH_UNDERSCORES = new com.flurry.org.codehaus.jackson.map.PropertyNamingStrategy$LowerCaseWithUnderscoresStrategy();
        return;
    }

    public PropertyNamingStrategy()
    {
        return;
    }

    public String nameForConstructorParameter(com.flurry.org.codehaus.jackson.map.MapperConfig p1, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter p2, String p3)
    {
        return p3;
    }

    public String nameForField(com.flurry.org.codehaus.jackson.map.MapperConfig p1, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField p2, String p3)
    {
        return p3;
    }

    public String nameForGetterMethod(com.flurry.org.codehaus.jackson.map.MapperConfig p1, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p2, String p3)
    {
        return p3;
    }

    public String nameForSetterMethod(com.flurry.org.codehaus.jackson.map.MapperConfig p1, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p2, String p3)
    {
        return p3;
    }
}
