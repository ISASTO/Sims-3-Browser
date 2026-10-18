package com.flurry.org.codehaus.jackson.map.annotate;
public interface annotation JsonSerialize implements java.lang.annotation.Annotation {

    public abstract Class as();

    public abstract Class contentAs();

    public abstract Class contentUsing();

    public abstract com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion include();

    public abstract Class keyAs();

    public abstract Class keyUsing();

    public abstract com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing typing();

    public abstract Class using();
}
