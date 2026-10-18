package com.flurry.org.codehaus.jackson.map.util;
public final class ClassUtil {

    public ClassUtil()
    {
        return;
    }

    private static void _addSuperTypes(Class p6, Class p7, java.util.Collection p8, boolean p9)
    {
        if ((p6 != p7) && ((p6 != null) && (p6 != Object))) {
            if (p9) {
                if (p8.contains(p6)) {
                    return;
                } else {
                    p8.add(p6);
                }
            }
            Class[] v0 = p6.getInterfaces();
            int v3 = v0.length;
            int v1 = 0;
            while (v1 < v3) {
                com.flurry.org.codehaus.jackson.map.util.ClassUtil._addSuperTypes(v0[v1], p7, p8, 1);
                v1++;
            }
            com.flurry.org.codehaus.jackson.map.util.ClassUtil._addSuperTypes(p6.getSuperclass(), p7, p8, 1);
        }
        return;
    }

    public static String canBeABeanType(Class p1)
    {
        int v0_2;
        if (!p1.isAnnotation()) {
            if (!p1.isArray()) {
                if (!p1.isEnum()) {
                    if (!p1.isPrimitive()) {
                        v0_2 = 0;
                    } else {
                        v0_2 = "primitive";
                    }
                } else {
                    v0_2 = "enum";
                }
            } else {
                v0_2 = "array";
            }
        } else {
            v0_2 = "annotation";
        }
        return v0_2;
    }

    public static void checkAndFixAccess(reflect.Member p6)
    {
        try {
            ((reflect.AccessibleObject) p6).setAccessible(1);
        } catch (SecurityException v2) {
            if (((reflect.AccessibleObject) p6).isAccessible()) {
            } else {
                throw new IllegalArgumentException(new StringBuilder().append("Can not access ").append(p6).append(" (from class ").append(p6.getDeclaringClass().getName()).append("; failed to set access: ").append(v2.getMessage()).toString());
            }
        }
        return;
    }

    public static Object createInstance(Class p5, boolean p6)
    {
        reflect.Constructor v0 = com.flurry.org.codehaus.jackson.map.util.ClassUtil.findConstructor(p5, p6);
        if (v0 != null) {
            try {
                int v2_8 = new Object[0];
                int v2_5 = v0.newInstance(v2_8);
            } catch (Exception v1) {
                com.flurry.org.codehaus.jackson.map.util.ClassUtil.unwrapAndThrowAsIAE(v1, new StringBuilder().append("Failed to instantiate class ").append(p5.getName()).append(", problem: ").append(v1.getMessage()).toString());
                v2_5 = 0;
            }
            return v2_5;
        } else {
            throw new IllegalArgumentException(new StringBuilder().append("Class ").append(p5.getName()).append(" has no default (no arg) constructor").toString());
        }
    }

    public static Object defaultValue(Class p3)
    {
        IllegalArgumentException v0_7;
        if (p3 != Integer.TYPE) {
            if (p3 != Long.TYPE) {
                if (p3 != Boolean.TYPE) {
                    if (p3 != Double.TYPE) {
                        if (p3 != Float.TYPE) {
                            if (p3 != Byte.TYPE) {
                                if (p3 != Short.TYPE) {
                                    if (p3 != Character.TYPE) {
                                        throw new IllegalArgumentException(new StringBuilder().append("Class ").append(p3.getName()).append(" is not a primitive type").toString());
                                    } else {
                                        v0_7 = Character.valueOf(0);
                                    }
                                } else {
                                    v0_7 = Short.valueOf(0);
                                }
                            } else {
                                v0_7 = Byte.valueOf(0);
                            }
                        } else {
                            v0_7 = Float.valueOf(0);
                        }
                    } else {
                        v0_7 = Double.valueOf(0);
                    }
                } else {
                    v0_7 = Boolean.FALSE;
                }
            } else {
                v0_7 = Long.valueOf(0);
            }
        } else {
            v0_7 = Integer.valueOf(0);
        }
        return v0_7;
    }

    public static reflect.Constructor findConstructor(Class p5, boolean p6)
    {
        try {
            IllegalArgumentException v2_1 = new Class[0];
            int v0 = p5.getDeclaredConstructor(v2_1);
        } catch (IllegalArgumentException v2) {
            v0 = 0;
            return v0;
        } catch (Exception v1) {
            com.flurry.org.codehaus.jackson.map.util.ClassUtil.unwrapAndThrowAsIAE(v1, new StringBuilder().append("Failed to find default constructor of class ").append(p5.getName()).append(", problem: ").append(v1.getMessage()).toString());
        }
        if (!p6) {
            if (reflect.Modifier.isPublic(v0.getModifiers())) {
                return v0;
            } else {
                throw new IllegalArgumentException(new StringBuilder().append("Default constructor for ").append(p5.getName()).append(" is not accessible (non-public?): not allowed to try modify access via Reflection: can not instantiate type").toString());
            }
        } else {
            com.flurry.org.codehaus.jackson.map.util.ClassUtil.checkAndFixAccess(v0);
            return v0;
        }
    }

    public static Class findEnumType(Class p2)
    {
        if (p2.getSuperclass() != Enum) {
            p2 = p2.getSuperclass();
        }
        return p2;
    }

    public static Class findEnumType(Enum p3)
    {
        Class v0 = p3.getClass();
        if (v0.getSuperclass() != Enum) {
            v0 = v0.getSuperclass();
        }
        return v0;
    }

    public static Class findEnumType(java.util.EnumMap p1)
    {
        Class v0_3;
        if (p1.isEmpty()) {
            v0_3 = com.flurry.org.codehaus.jackson.map.util.ClassUtil$EnumTypeLocator.instance.enumTypeFor(p1);
        } else {
            v0_3 = com.flurry.org.codehaus.jackson.map.util.ClassUtil.findEnumType(((Enum) p1.keySet().iterator().next()));
        }
        return v0_3;
    }

    public static Class findEnumType(java.util.EnumSet p1)
    {
        Class v0_2;
        if (p1.isEmpty()) {
            v0_2 = com.flurry.org.codehaus.jackson.map.util.ClassUtil$EnumTypeLocator.instance.enumTypeFor(p1);
        } else {
            v0_2 = com.flurry.org.codehaus.jackson.map.util.ClassUtil.findEnumType(((Enum) p1.iterator().next()));
        }
        return v0_2;
    }

    public static java.util.List findSuperTypes(Class p2, Class p3)
    {
        return com.flurry.org.codehaus.jackson.map.util.ClassUtil.findSuperTypes(p2, p3, new java.util.ArrayList(8));
    }

    public static java.util.List findSuperTypes(Class p1, Class p2, java.util.List p3)
    {
        com.flurry.org.codehaus.jackson.map.util.ClassUtil._addSuperTypes(p1, p2, p3, 0);
        return p3;
    }

    public static String getClassDescription(Object p2)
    {
        String v1_1;
        if (p2 != null) {
            Class v0;
            if (!(p2 instanceof Class)) {
                v0 = p2.getClass();
            } else {
                v0 = ((Class) p2);
            }
            v1_1 = v0.getName();
        } else {
            v1_1 = "unknown";
        }
        return v1_1;
    }

    public static Class getOuterClass(Class p2)
    {
        Class v0 = 0;
        try {
            if ((p2.getEnclosingMethod() == null) && (!reflect.Modifier.isStatic(p2.getModifiers()))) {
                v0 = p2.getEnclosingClass();
            }
        } catch (boolean v1) {
        } catch (boolean v1) {
        }
        return v0;
    }

    public static Throwable getRootCause(Throwable p1)
    {
        while (p1.getCause() != null) {
            p1 = p1.getCause();
        }
        return p1;
    }

    public static boolean hasGetterSignature(reflect.Method p4)
    {
        int v1 = 0;
        if (!reflect.Modifier.isStatic(p4.getModifiers())) {
            Class[] v0 = p4.getParameterTypes();
            if (((v0 == null) || (v0.length == 0)) && (Void.TYPE != p4.getReturnType())) {
                v1 = 1;
            }
        }
        return v1;
    }

    public static boolean isCollectionMapOrArray(Class p2)
    {
        int v0 = 1;
        if ((!p2.isArray()) && ((!java.util.Collection.isAssignableFrom(p2)) && (!java.util.Map.isAssignableFrom(p2)))) {
            v0 = 0;
        }
        return v0;
    }

    public static boolean isConcrete(Class p2)
    {
        int v1_1;
        if ((p2.getModifiers() & 1536) != 0) {
            v1_1 = 0;
        } else {
            v1_1 = 1;
        }
        return v1_1;
    }

    public static boolean isConcrete(reflect.Member p2)
    {
        int v1_1;
        if ((p2.getModifiers() & 1536) != 0) {
            v1_1 = 0;
        } else {
            v1_1 = 1;
        }
        return v1_1;
    }

    public static String isLocalType(Class p1)
    {
        return com.flurry.org.codehaus.jackson.map.util.ClassUtil.isLocalType(p1, 0);
    }

    public static String isLocalType(Class p1, boolean p2)
    {
        try {
            String v0_2;
            if (p1.getEnclosingMethod() == null) {
                if ((!p2) && ((p1.getEnclosingClass() != null) && (!reflect.Modifier.isStatic(p1.getModifiers())))) {
                    v0_2 = "non-static member class";
                    return v0_2;
                }
            } else {
                v0_2 = "local/anonymous";
                return v0_2;
            }
        } catch (String v0) {
        } catch (String v0) {
        }
        v0_2 = 0;
        return v0_2;
    }

    public static boolean isProxyType(Class p3)
    {
        int v1 = 1;
        if (!reflect.Proxy.isProxyClass(p3)) {
            String v0 = p3.getName();
            if ((!v0.startsWith("net.sf.cglib.proxy.")) && (!v0.startsWith("org.hibernate.proxy."))) {
                v1 = 0;
            }
        }
        return v1;
    }

    public static void throwAsIAE(Throwable p1)
    {
        com.flurry.org.codehaus.jackson.map.util.ClassUtil.throwAsIAE(p1, p1.getMessage());
        return;
    }

    public static void throwAsIAE(Throwable p1, String p2)
    {
        if (!(p1 instanceof RuntimeException)) {
            if (!(p1 instanceof Error)) {
                throw new IllegalArgumentException(p2, p1);
            } else {
                throw ((Error) p1);
            }
        } else {
            throw ((RuntimeException) p1);
        }
    }

    public static void throwRootCause(Throwable p1)
    {
        Error v1_1 = com.flurry.org.codehaus.jackson.map.util.ClassUtil.getRootCause(p1);
        if (!(v1_1 instanceof Exception)) {
            throw ((Error) v1_1);
        } else {
            throw ((Exception) v1_1);
        }
    }

    public static void unwrapAndThrowAsIAE(Throwable p1)
    {
        com.flurry.org.codehaus.jackson.map.util.ClassUtil.throwAsIAE(com.flurry.org.codehaus.jackson.map.util.ClassUtil.getRootCause(p1));
        return;
    }

    public static void unwrapAndThrowAsIAE(Throwable p1, String p2)
    {
        com.flurry.org.codehaus.jackson.map.util.ClassUtil.throwAsIAE(com.flurry.org.codehaus.jackson.map.util.ClassUtil.getRootCause(p1), p2);
        return;
    }

    public static Class wrapperType(Class p3)
    {
        IllegalArgumentException v0_7;
        if (p3 != Integer.TYPE) {
            if (p3 != Long.TYPE) {
                if (p3 != Boolean.TYPE) {
                    if (p3 != Double.TYPE) {
                        if (p3 != Float.TYPE) {
                            if (p3 != Byte.TYPE) {
                                if (p3 != Short.TYPE) {
                                    if (p3 != Character.TYPE) {
                                        throw new IllegalArgumentException(new StringBuilder().append("Class ").append(p3.getName()).append(" is not a primitive type").toString());
                                    } else {
                                        v0_7 = Character;
                                    }
                                } else {
                                    v0_7 = Short;
                                }
                            } else {
                                v0_7 = Byte;
                            }
                        } else {
                            v0_7 = Float;
                        }
                    } else {
                        v0_7 = Double;
                    }
                } else {
                    v0_7 = Boolean;
                }
            } else {
                v0_7 = Long;
            }
        } else {
            v0_7 = Integer;
        }
        return v0_7;
    }
}
