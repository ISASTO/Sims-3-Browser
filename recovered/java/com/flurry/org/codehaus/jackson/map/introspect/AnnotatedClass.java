package com.flurry.org.codehaus.jackson.map.introspect;
public final class AnnotatedClass extends com.flurry.org.codehaus.jackson.map.introspect.Annotated {
    private static final com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap[] NO_ANNOTATION_MAPS;
    protected final com.flurry.org.codehaus.jackson.map.AnnotationIntrospector _annotationIntrospector;
    protected final Class _class;
    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap _classAnnotations;
    protected java.util.List _constructors;
    protected java.util.List _creatorMethods;
    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor _defaultConstructor;
    protected java.util.List _fields;
    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethodMap _memberMethods;
    protected final com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver _mixInResolver;
    protected final Class _primaryMixIn;
    protected final java.util.List _superTypes;

    static AnnotatedClass()
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap[] v0_1 = new com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap[0];
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass.NO_ANNOTATION_MAPS = v0_1;
        return;
    }

    private AnnotatedClass(Class p3, java.util.List p4, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p5, com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver p6, com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap p7)
    {
        Class v0_0;
        this._class = p3;
        this._superTypes = p4;
        this._annotationIntrospector = p5;
        this._mixInResolver = p6;
        if (this._mixInResolver != null) {
            v0_0 = this._mixInResolver.findMixInClassFor(this._class);
        } else {
            v0_0 = 0;
        }
        this._primaryMixIn = v0_0;
        this._classAnnotations = p7;
        return;
    }

    private com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap _emptyAnnotationMap()
    {
        return new com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap();
    }

    private com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap[] _emptyAnnotationMaps(int p4)
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap[] v1;
        if (p4 != 0) {
            v1 = new com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap[p4];
            int v0 = 0;
            while (v0 < p4) {
                v1[v0] = this._emptyAnnotationMap();
                v0++;
            }
        } else {
            v1 = com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass.NO_ANNOTATION_MAPS;
        }
        return v1;
    }

    private boolean _isIncludableField(reflect.Field p4)
    {
        int v1 = 0;
        if (!p4.isSynthetic()) {
            int v0 = p4.getModifiers();
            if ((!reflect.Modifier.isStatic(v0)) && (!reflect.Modifier.isTransient(v0))) {
                v1 = 1;
            }
        }
        return v1;
    }

    public static com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass construct(Class p6, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p7, com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver p8)
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass v0_1 = new com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass(p6, com.flurry.org.codehaus.jackson.map.util.ClassUtil.findSuperTypes(p6, 0), p7, p8, 0);
        v0_1.resolveClassAnnotations();
        return v0_1;
    }

    public static com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass constructWithoutSuperTypes(Class p6, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p7, com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver p8)
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass v0_1 = new com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass(p6, java.util.Collections.emptyList(), p7, p8, 0);
        v0_1.resolveClassAnnotations();
        return v0_1;
    }

    protected void _addClassMixIns(com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap p2, Class p3)
    {
        if (this._mixInResolver != null) {
            this._addClassMixIns(p2, p3, this._mixInResolver.findMixInClassFor(p3));
        }
        return;
    }

    protected void _addClassMixIns(com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap p8, Class p9, Class p10)
    {
        if (p10 != null) {
            otation.Annotation[] v1_1 = p10.getDeclaredAnnotations();
            int v4_1 = v1_1.length;
            int v2_0 = 0;
            while (v2_0 < v4_1) {
                otation.Annotation v0_1 = v1_1[v2_0];
                if (this._annotationIntrospector.isHandled(v0_1)) {
                    p8.addIfNotPresent(v0_1);
                }
                v2_0++;
            }
            int v2_1 = com.flurry.org.codehaus.jackson.map.util.ClassUtil.findSuperTypes(p10, p9).iterator();
            while (v2_1.hasNext()) {
                otation.Annotation[] v1_0 = ((Class) v2_1.next()).getDeclaredAnnotations();
                int v4_0 = v1_0.length;
                int v3 = 0;
                while (v3 < v4_0) {
                    otation.Annotation v0_0 = v1_0[v3];
                    if (this._annotationIntrospector.isHandled(v0_0)) {
                        p8.addIfNotPresent(v0_0);
                    }
                    v3++;
                }
            }
        }
        return;
    }

    protected void _addConstructorMixIns(Class p12)
    {
        int v2;
        com.flurry.org.codehaus.jackson.map.introspect.MemberKey[] v3 = 0;
        if (this._constructors != null) {
            v2 = this._constructors.size();
        } else {
            v2 = 0;
        }
        reflect.Constructor[] v0 = p12.getDeclaredConstructors();
        int v7 = v0.length;
        int v5 = 0;
        while (v5 < v7) {
            reflect.Constructor v1 = v0[v5];
            if (v1.getParameterTypes().length != 0) {
                if (v3 == null) {
                    v3 = new com.flurry.org.codehaus.jackson.map.introspect.MemberKey[v2];
                    int v4_0 = 0;
                    while (v4_0 < v2) {
                        v3[v4_0] = new com.flurry.org.codehaus.jackson.map.introspect.MemberKey(((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor) this._constructors.get(v4_0)).getAnnotated());
                        v4_0++;
                    }
                }
                com.flurry.org.codehaus.jackson.map.introspect.MemberKey v6_1 = new com.flurry.org.codehaus.jackson.map.introspect.MemberKey(v1);
                int v4_1 = 0;
                while (v4_1 < v2) {
                    if (v6_1.equals(v3[v4_1])) {
                        this._addMixOvers(v1, ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor) this._constructors.get(v4_1)), 1);
                        break;
                    } else {
                        v4_1++;
                    }
                }
            } else {
                if (this._defaultConstructor != null) {
                    this._addMixOvers(v1, this._defaultConstructor, 0);
                }
            }
            v5++;
        }
        return;
    }

    protected void _addFactoryMixIns(Class p11)
    {
        com.flurry.org.codehaus.jackson.map.introspect.MemberKey[] v7 = 0;
        int v6 = this._creatorMethods.size();
        reflect.Method[] v0 = p11.getDeclaredMethods();
        int v4 = v0.length;
        int v2 = 0;
        while (v2 < v4) {
            reflect.Method v5 = v0[v2];
            if ((reflect.Modifier.isStatic(v5.getModifiers())) && (v5.getParameterTypes().length != 0)) {
                if (v7 == null) {
                    v7 = new com.flurry.org.codehaus.jackson.map.introspect.MemberKey[v6];
                    int v1_0 = 0;
                    while (v1_0 < v6) {
                        v7[v1_0] = new com.flurry.org.codehaus.jackson.map.introspect.MemberKey(((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) this._creatorMethods.get(v1_0)).getAnnotated());
                        v1_0++;
                    }
                }
                com.flurry.org.codehaus.jackson.map.introspect.MemberKey v3_1 = new com.flurry.org.codehaus.jackson.map.introspect.MemberKey(v5);
                int v1_1 = 0;
                while (v1_1 < v6) {
                    if (v3_1.equals(v7[v1_1])) {
                        this._addMixOvers(v5, ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) this._creatorMethods.get(v1_1)), 1);
                        break;
                    } else {
                        v1_1++;
                    }
                }
            }
            v2++;
        }
        return;
    }

    protected void _addFieldMixIns(Class p12, java.util.Map p13)
    {
        reflect.Field[] v1 = p12.getDeclaredFields();
        int v5 = v1.length;
        int v4 = 0;
        while (v4 < v5) {
            reflect.Field v8 = v1[v4];
            if (this._isIncludableField(v8)) {
                com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField v7_1 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField) p13.get(v8.getName()));
                if (v7_1 != null) {
                    otation.Annotation[] v2 = v8.getDeclaredAnnotations();
                    int v6 = v2.length;
                    int v3_0 = 0;
                    while (v3_0 < v6) {
                        otation.Annotation v0 = v2[v3_0];
                        if (this._annotationIntrospector.isHandled(v0)) {
                            v7_1.addOrOverride(v0);
                        }
                        v3_0++;
                    }
                }
            }
            v4++;
        }
        return;
    }

    protected void _addFields(java.util.Map p9, Class p10)
    {
        Class v5 = p10.getSuperclass();
        if (v5 != null) {
            this._addFields(p9, v5);
            reflect.Field[] v0 = p10.getDeclaredFields();
            int v3 = v0.length;
            int v2 = 0;
            while (v2 < v3) {
                reflect.Field v1 = v0[v2];
                if (this._isIncludableField(v1)) {
                    p9.put(v1.getName(), this._constructField(v1));
                }
                v2++;
            }
            if (this._mixInResolver != null) {
                Class v4 = this._mixInResolver.findMixInClassFor(p10);
                if (v4 != null) {
                    this._addFieldMixIns(v4, p9);
                }
            }
        }
        return;
    }

    protected void _addMemberMethods(Class p9, com.flurry.org.codehaus.jackson.map.introspect.MethodFilter p10, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethodMap p11, Class p12, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethodMap p13)
    {
        if (p12 != null) {
            this._addMethodMixIns(p10, p11, p12, p13);
        }
        if (p9 != null) {
            reflect.Method[] v0 = p9.getDeclaredMethods();
            int v2 = v0.length;
            int v1 = 0;
            while (v1 < v2) {
                reflect.Method v3 = v0[v1];
                if (this._isIncludableMethod(v3, p10)) {
                    com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v5_0 = p11.find(v3);
                    if (v5_0 != null) {
                        this._addMixUnders(v3, v5_0);
                        if ((v5_0.getDeclaringClass().isInterface()) && (!v3.getDeclaringClass().isInterface())) {
                            p11.add(v5_0.withMethod(v3));
                        }
                    } else {
                        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v4 = this._constructMethod(v3);
                        p11.add(v4);
                        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v5_1 = p13.remove(v3);
                        if (v5_1 != null) {
                            this._addMixOvers(v5_1.getAnnotated(), v4, 0);
                        }
                    }
                }
                v1++;
            }
        }
        return;
    }

    protected void _addMethodMixIns(com.flurry.org.codehaus.jackson.map.introspect.MethodFilter p7, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethodMap p8, Class p9, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethodMap p10)
    {
        reflect.Method[] v1 = p9.getDeclaredMethods();
        int v3 = v1.length;
        int v2 = 0;
        while (v2 < v3) {
            reflect.Method v4 = v1[v2];
            if (this._isIncludableMethod(v4, p7)) {
                com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v0 = p8.find(v4);
                if (v0 == null) {
                    p10.add(this._constructMethod(v4));
                } else {
                    this._addMixUnders(v4, v0);
                }
            }
            v2++;
        }
        return;
    }

    protected void _addMixOvers(reflect.Constructor p9, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor p10, boolean p11)
    {
        otation.Annotation[] v1_0 = p9.getDeclaredAnnotations();
        int v5_1 = v1_0.length;
        int v3_1 = 0;
        while (v3_1 < v5_1) {
            otation.Annotation v0_1 = v1_0[v3_1];
            if (this._annotationIntrospector.isHandled(v0_1)) {
                p10.addOrOverride(v0_1);
            }
            v3_1++;
        }
        if (p11) {
            otation.Annotation[][] v6 = p9.getParameterAnnotations();
            int v2 = 0;
            int v4 = v6.length;
            while (v2 < v4) {
                otation.Annotation[] v1_1 = v6[v2];
                int v5_0 = v1_1.length;
                int v3_0 = 0;
                while (v3_0 < v5_0) {
                    p10.addOrOverrideParam(v2, v1_1[v3_0]);
                    v3_0++;
                }
                v2++;
            }
        }
        return;
    }

    protected void _addMixOvers(reflect.Method p9, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p10, boolean p11)
    {
        otation.Annotation[] v1_0 = p9.getDeclaredAnnotations();
        int v5_1 = v1_0.length;
        int v3_1 = 0;
        while (v3_1 < v5_1) {
            otation.Annotation v0_1 = v1_0[v3_1];
            if (this._annotationIntrospector.isHandled(v0_1)) {
                p10.addOrOverride(v0_1);
            }
            v3_1++;
        }
        if (p11) {
            otation.Annotation[][] v6 = p9.getParameterAnnotations();
            int v2 = 0;
            int v4 = v6.length;
            while (v2 < v4) {
                otation.Annotation[] v1_1 = v6[v2];
                int v5_0 = v1_1.length;
                int v3_0 = 0;
                while (v3_0 < v5_0) {
                    p10.addOrOverrideParam(v2, v1_1[v3_0]);
                    v3_0++;
                }
                v2++;
            }
        }
        return;
    }

    protected void _addMixUnders(reflect.Method p6, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p7)
    {
        otation.Annotation[] v1 = p6.getDeclaredAnnotations();
        int v3 = v1.length;
        int v2 = 0;
        while (v2 < v3) {
            otation.Annotation v0 = v1[v2];
            if (this._annotationIntrospector.isHandled(v0)) {
                p7.addIfNotPresent(v0);
            }
            v2++;
        }
        return;
    }

    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap _collectRelevantAnnotations(otation.Annotation[] p7)
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap v1_1 = new com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap();
        if (p7 != null) {
            int v4 = p7.length;
            int v3 = 0;
            while (v3 < v4) {
                otation.Annotation v0 = p7[v3];
                if (this._annotationIntrospector.isHandled(v0)) {
                    v1_1.add(v0);
                }
                v3++;
            }
        }
        return v1_1;
    }

    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap[] _collectRelevantAnnotations(otation.Annotation[][] p5)
    {
        int v1 = p5.length;
        com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap[] v2 = new com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap[v1];
        int v0 = 0;
        while (v0 < v1) {
            v2[v0] = this._collectRelevantAnnotations(p5[v0]);
            v0++;
        }
        return v2;
    }

    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor _constructConstructor(reflect.Constructor p9, boolean p10)
    {
        IllegalStateException v5_15;
        if (this._annotationIntrospector != null) {
            if (!p10) {
                otation.Annotation[][] v2 = p9.getParameterAnnotations();
                int v3 = p9.getParameterTypes().length;
                com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap[] v4 = 0;
                if (v3 == v2.length) {
                    v4 = this._collectRelevantAnnotations(v2);
                } else {
                    Class v0 = p9.getDeclaringClass();
                    if ((!v0.isEnum()) || (v3 != (v2.length + 2))) {
                        if ((v0.isMemberClass()) && (v3 == (v2.length + 1))) {
                            otation.Annotation[][] v1_0 = v2;
                            v2 = new otation.Annotation[][(v1_0.length + 1)];
                            System.arraycopy(v1_0, 0, v2, 1, v1_0.length);
                            v4 = this._collectRelevantAnnotations(v2);
                        }
                    } else {
                        otation.Annotation[][] v1_1 = v2;
                        v2 = new otation.Annotation[][(v1_1.length + 2)];
                        System.arraycopy(v1_1, 0, v2, 2, v1_1.length);
                        v4 = this._collectRelevantAnnotations(v2);
                    }
                    if (v4 == null) {
                        throw new IllegalStateException(new StringBuilder().append("Internal error: constructor for ").append(p9.getDeclaringClass().getName()).append(" has mismatch: ").append(v3).append(" parameters; ").append(v2.length).append(" sets of annotations").toString());
                    }
                }
                v5_15 = new com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor(p9, this._collectRelevantAnnotations(p9.getDeclaredAnnotations()), v4);
            } else {
                v5_15 = new com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor(p9, this._collectRelevantAnnotations(p9.getDeclaredAnnotations()), 0);
            }
        } else {
            v5_15 = new com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor(p9, this._emptyAnnotationMap(), this._emptyAnnotationMaps(p9.getParameterTypes().length));
        }
        return v5_15;
    }

    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod _constructCreatorMethod(reflect.Method p4)
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v0_1;
        if (this._annotationIntrospector != null) {
            v0_1 = new com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod(p4, this._collectRelevantAnnotations(p4.getDeclaredAnnotations()), this._collectRelevantAnnotations(p4.getParameterAnnotations()));
        } else {
            v0_1 = new com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod(p4, this._emptyAnnotationMap(), this._emptyAnnotationMaps(p4.getParameterTypes().length));
        }
        return v0_1;
    }

    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField _constructField(reflect.Field p3)
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField v0_1;
        if (this._annotationIntrospector != null) {
            v0_1 = new com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField(p3, this._collectRelevantAnnotations(p3.getDeclaredAnnotations()));
        } else {
            v0_1 = new com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField(p3, this._emptyAnnotationMap());
        }
        return v0_1;
    }

    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod _constructMethod(reflect.Method p4)
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v0_1;
        if (this._annotationIntrospector != null) {
            v0_1 = new com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod(p4, this._collectRelevantAnnotations(p4.getDeclaredAnnotations()), 0);
        } else {
            v0_1 = new com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod(p4, this._emptyAnnotationMap(), 0);
        }
        return v0_1;
    }

    protected boolean _isIncludableMethod(reflect.Method p3, com.flurry.org.codehaus.jackson.map.introspect.MethodFilter p4)
    {
        int v0 = 0;
        if (((p4 == null) || (p4.includeMethod(p3))) && ((!p3.isSynthetic()) && (!p3.isBridge()))) {
            v0 = 1;
        }
        return v0;
    }

    public Iterable fields()
    {
        java.util.List v0_1;
        if (this._fields != null) {
            v0_1 = this._fields;
        } else {
            v0_1 = java.util.Collections.emptyList();
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod findMethod(String p2, Class[] p3)
    {
        return this._memberMethods.find(p2, p3);
    }

    protected com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap getAllAnnotations()
    {
        return this._classAnnotations;
    }

    public Class getAnnotated()
    {
        return this._class;
    }

    public bridge synthetic reflect.AnnotatedElement getAnnotated()
    {
        return this.getAnnotated();
    }

    public otation.Annotation getAnnotation(Class p2)
    {
        otation.Annotation v0_2;
        if (this._classAnnotations != null) {
            v0_2 = this._classAnnotations.get(p2);
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    public com.flurry.org.codehaus.jackson.map.util.Annotations getAnnotations()
    {
        return this._classAnnotations;
    }

    public java.util.List getConstructors()
    {
        java.util.List v0_1;
        if (this._constructors != null) {
            v0_1 = this._constructors;
        } else {
            v0_1 = java.util.Collections.emptyList();
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor getDefaultConstructor()
    {
        return this._defaultConstructor;
    }

    public int getFieldCount()
    {
        int v0_2;
        if (this._fields != null) {
            v0_2 = this._fields.size();
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    public reflect.Type getGenericType()
    {
        return this._class;
    }

    public int getMemberMethodCount()
    {
        return this._memberMethods.size();
    }

    public int getModifiers()
    {
        return this._class.getModifiers();
    }

    public String getName()
    {
        return this._class.getName();
    }

    public Class getRawType()
    {
        return this._class;
    }

    public java.util.List getStaticMethods()
    {
        java.util.List v0_1;
        if (this._creatorMethods != null) {
            v0_1 = this._creatorMethods;
        } else {
            v0_1 = java.util.Collections.emptyList();
        }
        return v0_1;
    }

    public boolean hasAnnotations()
    {
        int v0_2;
        if (this._classAnnotations.size() <= 0) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public Iterable memberMethods()
    {
        return this._memberMethods;
    }

    public void resolveClassAnnotations()
    {
        this._classAnnotations = new com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap();
        if (this._annotationIntrospector != null) {
            if (this._primaryMixIn != null) {
                this._addClassMixIns(this._classAnnotations, this._class, this._primaryMixIn);
            }
            otation.Annotation[] v1_0 = this._class.getDeclaredAnnotations();
            int v5_0 = v1_0.length;
            int v3_0 = 0;
            while (v3_0 < v5_0) {
                otation.Annotation v0_1 = v1_0[v3_0];
                if (this._annotationIntrospector.isHandled(v0_1)) {
                    this._classAnnotations.addIfNotPresent(v0_1);
                }
                v3_0++;
            }
            int v3_1 = this._superTypes.iterator();
            while (v3_1.hasNext()) {
                Class v2_1 = ((Class) v3_1.next());
                this._addClassMixIns(this._classAnnotations, v2_1);
                otation.Annotation[] v1_1 = v2_1.getDeclaredAnnotations();
                int v5_1 = v1_1.length;
                int v4 = 0;
                while (v4 < v5_1) {
                    otation.Annotation v0_0 = v1_1[v4];
                    if (this._annotationIntrospector.isHandled(v0_0)) {
                        this._classAnnotations.addIfNotPresent(v0_0);
                    }
                    v4++;
                }
            }
            this._addClassMixIns(this._classAnnotations, Object);
        }
        return;
    }

    public void resolveCreators(boolean p14)
    {
        this._constructors = 0;
        reflect.Constructor[] v3 = this._class.getDeclaredConstructors();
        reflect.Method[] v1_1 = v3;
        int v6_1 = v1_1.length;
        int v5_0 = 0;
        while (v5_0 < v6_1) {
            reflect.Constructor v2 = v1_1[v5_0];
            if (v2.getParameterTypes().length != 0) {
                if (p14) {
                    if (this._constructors == null) {
                        this._constructors = new java.util.ArrayList(Math.max(10, v3.length));
                    }
                    this._constructors.add(this._constructConstructor(v2, 0));
                }
            } else {
                this._defaultConstructor = this._constructConstructor(v2, 1);
            }
            v5_0++;
        }
        if ((this._primaryMixIn != null) && ((this._defaultConstructor != null) || (this._constructors != null))) {
            this._addConstructorMixIns(this._primaryMixIn);
        }
        if (this._annotationIntrospector != null) {
            if ((this._defaultConstructor != null) && (this._annotationIntrospector.isIgnorableConstructor(this._defaultConstructor))) {
                this._defaultConstructor = 0;
            }
            if (this._constructors != null) {
                int v4_0 = this._constructors.size();
                while(true) {
                    v4_0--;
                    if (v4_0 < 0) {
                        break;
                    }
                    if (this._annotationIntrospector.isIgnorableConstructor(((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor) this._constructors.get(v4_0)))) {
                        this._constructors.remove(v4_0);
                    }
                }
            }
        }
        this._creatorMethods = 0;
        if (p14) {
            reflect.Method[] v1_0 = this._class.getDeclaredMethods();
            int v6_0 = v1_0.length;
            int v5_1 = 0;
            while (v5_1 < v6_0) {
                reflect.Method v7 = v1_0[v5_1];
                if ((reflect.Modifier.isStatic(v7.getModifiers())) && (v7.getParameterTypes().length >= 1)) {
                    if (this._creatorMethods == null) {
                        this._creatorMethods = new java.util.ArrayList(8);
                    }
                    this._creatorMethods.add(this._constructCreatorMethod(v7));
                }
                v5_1++;
            }
            if ((this._primaryMixIn != null) && (this._creatorMethods != null)) {
                this._addFactoryMixIns(this._primaryMixIn);
            }
            if ((this._annotationIntrospector != null) && (this._creatorMethods != null)) {
                int v4_1 = this._creatorMethods.size();
                while(true) {
                    v4_1--;
                    if (v4_1 < 0) {
                        break;
                    }
                    if (this._annotationIntrospector.isIgnorableMethod(((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) this._creatorMethods.get(v4_1)))) {
                        this._creatorMethods.remove(v4_1);
                    }
                }
            }
        }
        return;
    }

    public void resolveFields()
    {
        java.util.LinkedHashMap v0_1 = new java.util.LinkedHashMap();
        this._addFields(v0_1, this._class);
        if (!v0_1.isEmpty()) {
            this._fields = new java.util.ArrayList(v0_1.size());
            this._fields.addAll(v0_1.values());
        } else {
            this._fields = java.util.Collections.emptyList();
        }
        return;
    }

    public void resolveFields(boolean p1)
    {
        this.resolveFields();
        return;
    }

    public void resolveMemberMethods(com.flurry.org.codehaus.jackson.map.introspect.MethodFilter p12)
    {
        this._memberMethods = new com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethodMap();
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethodMap v5_1 = new com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethodMap();
        this._addMemberMethods(this._class, p12, this._memberMethods, this._primaryMixIn, v5_1);
        java.util.Iterator v7 = this._superTypes.iterator();
        while (v7.hasNext()) {
            Class v4_1;
            Class v1_2 = ((Class) v7.next());
            if (this._mixInResolver != null) {
                v4_1 = this._mixInResolver.findMixInClassFor(v1_2);
            } else {
                v4_1 = 0;
            }
            this._addMemberMethods(v1_2, p12, this._memberMethods, v4_1, v5_1);
        }
        if (this._mixInResolver != null) {
            Class v4_0 = this._mixInResolver.findMixInClassFor(Object);
            if (v4_0 != null) {
                this._addMethodMixIns(p12, this._memberMethods, v4_0, v5_1);
            }
        }
        if ((this._annotationIntrospector != null) && (!v5_1.isEmpty())) {
            java.util.Iterator v8 = v5_1.iterator();
            while (v8.hasNext()) {
                com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v10_1 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) v8.next());
                try {
                    reflect.Method v9 = Object.getDeclaredMethod(v10_1.getName(), v10_1.getParameterClasses());
                } catch (com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethodMap v0) {
                }
                if (v9 != null) {
                    com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v6 = this._constructMethod(v9);
                    this._addMixOvers(v10_1.getAnnotated(), v6, 0);
                    this._memberMethods.add(v6);
                }
            }
        }
        return;
    }

    public void resolveMemberMethods(com.flurry.org.codehaus.jackson.map.introspect.MethodFilter p1, boolean p2)
    {
        this.resolveMemberMethods(p1);
        return;
    }

    public String toString()
    {
        return new StringBuilder().append("[AnnotedClass ").append(this._class.getName()).append("]").toString();
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.introspect.Annotated withAnnotations(com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap p2)
    {
        return this.withAnnotations(p2);
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass withAnnotations(com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap p7)
    {
        return new com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass(this._class, this._superTypes, this._annotationIntrospector, this._mixInResolver, p7);
    }
}
