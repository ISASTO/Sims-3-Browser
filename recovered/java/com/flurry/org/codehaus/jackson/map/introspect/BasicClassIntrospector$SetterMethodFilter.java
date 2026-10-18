package com.flurry.org.codehaus.jackson.map.introspect;
public class BasicClassIntrospector$SetterMethodFilter implements com.flurry.org.codehaus.jackson.map.introspect.MethodFilter {

    public BasicClassIntrospector$SetterMethodFilter()
    {
        return;
    }

    public boolean includeMethod(reflect.Method p5)
    {
        int v1 = 0;
        if (!reflect.Modifier.isStatic(p5.getModifiers())) {
            switch (p5.getParameterTypes().length) {
                case 1:
                    v1 = 1;
                    break;
                case 2:
                    v1 = 1;
                    break;
                default:
            }
        }
        return v1;
    }
}
