package com.flurry.org.codehaus.jackson.map.annotate;
public interface annotation JsonDeserialize implements java.lang.annotation.Annotation {

    public abstract Class as();

    public abstract Class contentAs();

    public abstract Class contentUsing();

    public abstract Class keyAs();

    public abstract Class keyUsing();

    public abstract Class using();
}
