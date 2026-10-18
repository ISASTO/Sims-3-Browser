package com.flurry.org.codehaus.jackson.annotate;
public interface annotation JsonTypeInfo implements java.lang.annotation.Annotation {

    public abstract Class defaultImpl();

    public abstract com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$As include();

    public abstract String property();

    public abstract com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id use();
}
