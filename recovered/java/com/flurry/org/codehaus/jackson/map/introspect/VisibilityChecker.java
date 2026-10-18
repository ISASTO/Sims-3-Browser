package com.flurry.org.codehaus.jackson.map.introspect;
public interface VisibilityChecker {

    public abstract boolean isCreatorVisible(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p0);

    public abstract boolean isCreatorVisible(reflect.Member p0);

    public abstract boolean isFieldVisible(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField p0);

    public abstract boolean isFieldVisible(reflect.Field p0);

    public abstract boolean isGetterVisible(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p0);

    public abstract boolean isGetterVisible(reflect.Method p0);

    public abstract boolean isIsGetterVisible(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p0);

    public abstract boolean isIsGetterVisible(reflect.Method p0);

    public abstract boolean isSetterVisible(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p0);

    public abstract boolean isSetterVisible(reflect.Method p0);

    public abstract com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker with(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p0);

    public abstract com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker with(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect p0);

    public abstract com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker withCreatorVisibility(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p0);

    public abstract com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker withFieldVisibility(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p0);

    public abstract com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker withGetterVisibility(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p0);

    public abstract com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker withIsGetterVisibility(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p0);

    public abstract com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker withSetterVisibility(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p0);

    public abstract com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker withVisibility(com.flurry.org.codehaus.jackson.annotate.JsonMethod p0, com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p1);
}
