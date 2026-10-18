package com.flurry.org.codehaus.jackson.map.introspect;
public final class BasicClassIntrospector$SetterAndGetterMethodFilter extends com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector$SetterMethodFilter {

    public BasicClassIntrospector$SetterAndGetterMethodFilter()
    {
        return;
    }

    public boolean includeMethod(reflect.Method p5)
    {
        int v1 = 1;
        if (!super.includeMethod(p5)) {
            if (com.flurry.org.codehaus.jackson.map.util.ClassUtil.hasGetterSignature(p5)) {
                Class v0 = p5.getReturnType();
                if ((!java.util.Collection.isAssignableFrom(v0)) && (!java.util.Map.isAssignableFrom(v0))) {
                    v1 = 0;
                }
            } else {
                v1 = 0;
            }
        }
        return v1;
    }
}
