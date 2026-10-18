package com.flurry.org.codehaus.jackson.map.introspect;
public class BasicClassIntrospector$GetterMethodFilter implements com.flurry.org.codehaus.jackson.map.introspect.MethodFilter {

    private BasicClassIntrospector$GetterMethodFilter()
    {
        return;
    }

    synthetic BasicClassIntrospector$GetterMethodFilter(com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector$1 p1)
    {
        return;
    }

    public boolean includeMethod(reflect.Method p2)
    {
        return com.flurry.org.codehaus.jackson.map.util.ClassUtil.hasGetterSignature(p2);
    }
}
