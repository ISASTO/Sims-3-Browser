package com.flurry.org.codehaus.jackson.annotate;
public interface annotation JsonIgnoreProperties implements java.lang.annotation.Annotation {

    public abstract boolean ignoreUnknown();

    public abstract String[] value();
}
