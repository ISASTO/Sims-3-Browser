package com.flurry.org.codehaus.jackson.map.util;
public class BeanUtil {

    public BeanUtil()
    {
        return;
    }

    protected static boolean isCglibGetCallbacks(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p6)
    {
        int v4 = 0;
        Class v3 = p6.getRawType();
        if ((v3 != null) && (v3.isArray())) {
            Package v1 = v3.getComponentType().getPackage();
            if (v1 != null) {
                String v2 = v1.getName();
                if ((v2.startsWith("net.sf.cglib")) || (v2.startsWith("org.hibernate.repackage.cglib"))) {
                    v4 = 1;
                }
            }
        }
        return v4;
    }

    protected static boolean isGroovyMetaClassGetter(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p5)
    {
        int v2 = 0;
        Class v1 = p5.getRawType();
        if ((v1 != null) && (!v1.isArray())) {
            Package v0 = v1.getPackage();
            if ((v0 != null) && (v0.getName().startsWith("groovy.lang"))) {
                v2 = 1;
            }
        }
        return v2;
    }

    protected static boolean isGroovyMetaClassSetter(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p5)
    {
        int v2 = 0;
        Package v1 = p5.getParameterClass(0).getPackage();
        if ((v1 != null) && (v1.getName().startsWith("groovy.lang"))) {
            v2 = 1;
        }
        return v2;
    }

    protected static String manglePropertyName(String p5)
    {
        int v1 = p5.length();
        if (v1 != 0) {
            StringBuilder v3_1 = 0;
            int v0 = 0;
            while (v0 < v1) {
                char v4 = p5.charAt(v0);
                char v2 = Character.toLowerCase(v4);
                if (v4 == v2) {
                    break;
                }
                if (v3_1 == null) {
                    v3_1 = new StringBuilder(p5);
                }
                v3_1.setCharAt(v0, v2);
                v0++;
            }
            if (v3_1 != null) {
                p5 = v3_1.toString();
            }
        } else {
            p5 = 0;
        }
        return p5;
    }

    public static String okNameForGetter(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p2)
    {
        String v0 = p2.getName();
        String v1 = com.flurry.org.codehaus.jackson.map.util.BeanUtil.okNameForIsGetter(p2, v0);
        if (v1 == null) {
            v1 = com.flurry.org.codehaus.jackson.map.util.BeanUtil.okNameForRegularGetter(p2, v0);
        }
        return v1;
    }

    public static String okNameForIsGetter(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p3, String p4)
    {
        String v1_0 = 0;
        if (p4.startsWith("is")) {
            Class v0 = p3.getRawType();
            if ((v0 == Boolean) || (v0 == Boolean.TYPE)) {
                v1_0 = com.flurry.org.codehaus.jackson.map.util.BeanUtil.manglePropertyName(p4.substring(2));
            }
        }
        return v1_0;
    }

    public static String okNameForRegularGetter(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p2, String p3)
    {
        String v0_0 = 0;
        if (p3.startsWith("get")) {
            if (!"getCallbacks".equals(p3)) {
                if (("getMetaClass".equals(p3)) && (com.flurry.org.codehaus.jackson.map.util.BeanUtil.isGroovyMetaClassGetter(p2))) {
                    return v0_0;
                }
            } else {
                if (com.flurry.org.codehaus.jackson.map.util.BeanUtil.isCglibGetCallbacks(p2)) {
                    return v0_0;
                }
            }
            v0_0 = com.flurry.org.codehaus.jackson.map.util.BeanUtil.manglePropertyName(p3.substring(3));
        }
        return v0_0;
    }

    public static String okNameForSetter(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p3)
    {
        String v1 = 0;
        String v0_1 = p3.getName();
        if (v0_1.startsWith("set")) {
            String v0_0 = com.flurry.org.codehaus.jackson.map.util.BeanUtil.manglePropertyName(v0_1.substring(3));
            if ((v0_0 != null) && ((!"metaClass".equals(v0_0)) || (!com.flurry.org.codehaus.jackson.map.util.BeanUtil.isGroovyMetaClassSetter(p3)))) {
                v1 = v0_0;
            }
        }
        return v1;
    }
}
