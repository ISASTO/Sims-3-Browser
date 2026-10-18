package com.flurry.org.codehaus.jackson;
public class JsonProcessingException extends java.io.IOException {
    static final long serialVersionUID = 123;
    protected com.flurry.org.codehaus.jackson.JsonLocation mLocation;

    protected JsonProcessingException(String p1)
    {
        super(p1);
        return;
    }

    protected JsonProcessingException(String p2, com.flurry.org.codehaus.jackson.JsonLocation p3)
    {
        this(p2, p3, 0);
        return;
    }

    protected JsonProcessingException(String p1, com.flurry.org.codehaus.jackson.JsonLocation p2, Throwable p3)
    {
        super(p1);
        if (p3 != null) {
            super.initCause(p3);
        }
        super.mLocation = p2;
        return;
    }

    protected JsonProcessingException(String p2, Throwable p3)
    {
        this(p2, 0, p3);
        return;
    }

    protected JsonProcessingException(Throwable p2)
    {
        this(0, 0, p2);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonLocation getLocation()
    {
        return this.mLocation;
    }

    public String getMessage()
    {
        String v1 = super.getMessage();
        if (v1 == null) {
            v1 = "N/A";
        }
        com.flurry.org.codehaus.jackson.JsonLocation v0 = this.getLocation();
        if (v0 != null) {
            StringBuilder v2_1 = new StringBuilder();
            v2_1.append(v1);
            v2_1.append(10);
            v2_1.append(" at ");
            v2_1.append(v0.toString());
            v1 = v2_1.toString();
        }
        return v1;
    }

    public String toString()
    {
        return new StringBuilder().append(this.getClass().getName()).append(": ").append(this.getMessage()).toString();
    }
}
