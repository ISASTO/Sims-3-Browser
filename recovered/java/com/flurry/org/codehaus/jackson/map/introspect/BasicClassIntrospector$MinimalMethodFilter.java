package com.flurry.org.codehaus.jackson.map.introspect;
 class BasicClassIntrospector$MinimalMethodFilter implements com.flurry.org.codehaus.jackson.map.introspect.MethodFilter {

    private BasicClassIntrospector$MinimalMethodFilter()
    {
        return;
    }

    synthetic BasicClassIntrospector$MinimalMethodFilter(com.flurry.org.codehaus.jackson.map.introspect.BasicClassIntrospector$1 p1)
    {
        return;
    }

    public boolean includeMethod(reflect.Method p4)
    {
        int v1 = 0;
        if ((!reflect.Modifier.isStatic(p4.getModifiers())) && (p4.getParameterTypes().length <= 2)) {
            v1 = 1;
        }
        return v1;
    }
}
