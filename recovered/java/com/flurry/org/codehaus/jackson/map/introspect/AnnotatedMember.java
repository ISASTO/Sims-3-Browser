package com.flurry.org.codehaus.jackson.map.introspect;
public abstract class AnnotatedMember extends com.flurry.org.codehaus.jackson.map.introspect.Annotated {
    protected final com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap _annotations;

    protected AnnotatedMember(com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap p1)
    {
        this._annotations = p1;
        return;
    }

    public final void fixAccess()
    {
        com.flurry.org.codehaus.jackson.map.util.ClassUtil.checkAndFixAccess(this.getMember());
        return;
    }

    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap getAllAnnotations()
    {
        return this._annotations;
    }

    public abstract Class getDeclaringClass();

    public abstract reflect.Member getMember();

    public abstract void setValue(Object p0, Object p1);
}
