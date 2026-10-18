package com.flurry.org.codehaus.jackson.annotate;
public interface annotation JsonAutoDetect implements java.lang.annotation.Annotation {

    public abstract com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility creatorVisibility();

    public abstract com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility fieldVisibility();

    public abstract com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility getterVisibility();

    public abstract com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility isGetterVisibility();

    public abstract com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility setterVisibility();

    public abstract com.flurry.org.codehaus.jackson.annotate.JsonMethod[] value();
}
