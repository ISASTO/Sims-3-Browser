package com.flurry.org.codehaus.jackson.map;
public class BeanProperty$Std implements com.flurry.org.codehaus.jackson.map.BeanProperty {
    protected final com.flurry.org.codehaus.jackson.map.util.Annotations _contextAnnotations;
    protected final com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember _member;
    protected final String _name;
    protected final com.flurry.org.codehaus.jackson.type.JavaType _type;

    public BeanProperty$Std(String p1, com.flurry.org.codehaus.jackson.type.JavaType p2, com.flurry.org.codehaus.jackson.map.util.Annotations p3, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p4)
    {
        this._name = p1;
        this._type = p2;
        this._member = p4;
        this._contextAnnotations = p3;
        return;
    }

    public otation.Annotation getAnnotation(Class p2)
    {
        return this._member.getAnnotation(p2);
    }

    public otation.Annotation getContextAnnotation(Class p2)
    {
        otation.Annotation v0_2;
        if (this._contextAnnotations != null) {
            v0_2 = this._contextAnnotations.get(p2);
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember getMember()
    {
        return this._member;
    }

    public String getName()
    {
        return this._name;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType getType()
    {
        return this._type;
    }

    public com.flurry.org.codehaus.jackson.map.BeanProperty$Std withType(com.flurry.org.codehaus.jackson.type.JavaType p5)
    {
        return new com.flurry.org.codehaus.jackson.map.BeanProperty$Std(this._name, p5, this._contextAnnotations, this._member);
    }
}
