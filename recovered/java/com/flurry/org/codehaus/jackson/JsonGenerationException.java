package com.flurry.org.codehaus.jackson;
public class JsonGenerationException extends com.flurry.org.codehaus.jackson.JsonProcessingException {
    static final long serialVersionUID = 123;

    public JsonGenerationException(String p2)
    {
        super(p2, ((com.flurry.org.codehaus.jackson.JsonLocation) 0));
        return;
    }

    public JsonGenerationException(String p2, Throwable p3)
    {
        super(p2, ((com.flurry.org.codehaus.jackson.JsonLocation) 0), p3);
        return;
    }

    public JsonGenerationException(Throwable p1)
    {
        super(p1);
        return;
    }
}
