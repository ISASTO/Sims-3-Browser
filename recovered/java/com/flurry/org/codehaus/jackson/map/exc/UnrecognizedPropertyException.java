package com.flurry.org.codehaus.jackson.map.exc;
public class UnrecognizedPropertyException extends com.flurry.org.codehaus.jackson.map.JsonMappingException {
    private static final long serialVersionUID = 1;
    protected final Class _referringClass;
    protected final String _unrecognizedPropertyName;

    public UnrecognizedPropertyException(String p1, com.flurry.org.codehaus.jackson.JsonLocation p2, Class p3, String p4)
    {
        super(p1, p2);
        super._referringClass = p3;
        super._unrecognizedPropertyName = p4;
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.exc.UnrecognizedPropertyException from(com.flurry.org.codehaus.jackson.JsonParser p5, Object p6, String p7)
    {
        if (p6 != null) {
            Class v2_0;
            if (!(p6 instanceof Class)) {
                v2_0 = p6.getClass();
            } else {
                v2_0 = ((Class) p6);
            }
            com.flurry.org.codehaus.jackson.map.exc.UnrecognizedPropertyException v0_1 = new com.flurry.org.codehaus.jackson.map.exc.UnrecognizedPropertyException(new StringBuilder().append("Unrecognized field \"").append(p7).append("\" (Class ").append(v2_0.getName()).append("), not marked as ignorable").toString(), p5.getCurrentLocation(), v2_0, p7);
            v0_1.prependPath(p6, p7);
            return v0_1;
        } else {
            throw new IllegalArgumentException();
        }
    }

    public Class getReferringClass()
    {
        return this._referringClass;
    }

    public String getUnrecognizedPropertyName()
    {
        return this._unrecognizedPropertyName;
    }
}
