package com.flurry.org.codehaus.jackson.map;
public abstract class PropertyNamingStrategy$PropertyNamingStrategyBase extends com.flurry.org.codehaus.jackson.map.PropertyNamingStrategy {

    public PropertyNamingStrategy$PropertyNamingStrategyBase()
    {
        return;
    }

    public String nameForConstructorParameter(com.flurry.org.codehaus.jackson.map.MapperConfig p2, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter p3, String p4)
    {
        return this.translate(p4);
    }

    public String nameForField(com.flurry.org.codehaus.jackson.map.MapperConfig p2, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField p3, String p4)
    {
        return this.translate(p4);
    }

    public String nameForGetterMethod(com.flurry.org.codehaus.jackson.map.MapperConfig p2, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p3, String p4)
    {
        return this.translate(p4);
    }

    public String nameForSetterMethod(com.flurry.org.codehaus.jackson.map.MapperConfig p2, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p3, String p4)
    {
        return this.translate(p4);
    }

    public abstract String translate(String p0);
}
