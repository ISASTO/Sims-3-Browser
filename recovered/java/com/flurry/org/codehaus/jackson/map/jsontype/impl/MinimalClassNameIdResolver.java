package com.flurry.org.codehaus.jackson.map.jsontype.impl;
public class MinimalClassNameIdResolver extends com.flurry.org.codehaus.jackson.map.jsontype.impl.ClassNameIdResolver {
    protected final String _basePackageName;
    protected final String _basePackagePrefix;

    protected MinimalClassNameIdResolver(com.flurry.org.codehaus.jackson.type.JavaType p5, com.flurry.org.codehaus.jackson.map.type.TypeFactory p6)
    {
        super(p5, p6);
        String v0 = p5.getRawClass().getName();
        int v1 = v0.lastIndexOf(46);
        if (v1 >= 0) {
            super._basePackagePrefix = v0.substring(0, (v1 + 1));
            super._basePackageName = v0.substring(0, v1);
        } else {
            super._basePackageName = "";
            super._basePackagePrefix = ".";
        }
        return;
    }

    public com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id getMechanism()
    {
        return com.flurry.org.codehaus.jackson.annotate.JsonTypeInfo$Id.MINIMAL_CLASS;
    }

    public String idFromValue(Object p3)
    {
        String v0 = p3.getClass().getName();
        if (v0.startsWith(this._basePackagePrefix)) {
            v0 = v0.substring((this._basePackagePrefix.length() - 1));
        }
        return v0;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType typeFromId(String p4)
    {
        if (p4.startsWith(".")) {
            StringBuilder v0_0 = new StringBuilder((p4.length() + this._basePackageName.length()));
            if (this._basePackageName.length() != 0) {
                v0_0.append(this._basePackageName).append(p4);
            } else {
                v0_0.append(p4.substring(1));
            }
            p4 = v0_0.toString();
        }
        return super.typeFromId(p4);
    }
}
