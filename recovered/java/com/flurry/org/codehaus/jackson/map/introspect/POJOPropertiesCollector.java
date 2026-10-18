package com.flurry.org.codehaus.jackson.map.introspect;
public class POJOPropertiesCollector {
    protected final com.flurry.org.codehaus.jackson.map.AnnotationIntrospector _annotationIntrospector;
    protected java.util.LinkedList _anyGetters;
    protected java.util.LinkedList _anySetters;
    protected final com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass _classDef;
    protected final com.flurry.org.codehaus.jackson.map.MapperConfig _config;
    protected java.util.LinkedList _creatorProperties;
    protected final boolean _forSerialization;
    protected java.util.Set _ignoredPropertyNames;
    protected java.util.Set _ignoredPropertyNamesForDeser;
    protected java.util.LinkedHashMap _injectables;
    protected java.util.LinkedList _jsonValueGetters;
    protected final java.util.LinkedHashMap _properties;
    protected final com.flurry.org.codehaus.jackson.type.JavaType _type;
    protected final com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker _visibilityChecker;

    protected POJOPropertiesCollector(com.flurry.org.codehaus.jackson.map.MapperConfig p3, boolean p4, com.flurry.org.codehaus.jackson.type.JavaType p5, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p6)
    {
        com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker v0_0 = 0;
        this._properties = new java.util.LinkedHashMap();
        this._creatorProperties = 0;
        this._anyGetters = 0;
        this._anySetters = 0;
        this._jsonValueGetters = 0;
        this._config = p3;
        this._forSerialization = p4;
        this._type = p5;
        this._classDef = p6;
        if (p3.isAnnotationProcessingEnabled()) {
            v0_0 = this._config.getAnnotationIntrospector();
        }
        this._annotationIntrospector = v0_0;
        if (this._annotationIntrospector != null) {
            this._visibilityChecker = this._annotationIntrospector.findAutoDetectVisibility(p6, this._config.getDefaultVisibilityChecker());
        } else {
            this._visibilityChecker = this._config.getDefaultVisibilityChecker();
        }
        return;
    }

    private void _addIgnored(com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder p3)
    {
        if (!this._forSerialization) {
            String v0 = p3.getName();
            this._ignoredPropertyNames = this.addToSet(this._ignoredPropertyNames, v0);
            if (p3.anyDeserializeIgnorals()) {
                this._ignoredPropertyNamesForDeser = this.addToSet(this._ignoredPropertyNamesForDeser, v0);
            }
        }
        return;
    }

    private java.util.Set addToSet(java.util.Set p1, String p2)
    {
        if (p1 == null) {
            p1 = new java.util.HashSet();
        }
        p1.add(p2);
        return p1;
    }

    protected void _addCreators()
    {
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v0 = this._annotationIntrospector;
        if (v0 != null) {
            java.util.Iterator v4_1 = this._classDef.getConstructors().iterator();
            while (v4_1.hasNext()) {
                com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor v1_1 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor) v4_1.next());
                if (this._creatorProperties == null) {
                    this._creatorProperties = new java.util.LinkedList();
                }
                int v3_1 = 0;
                int v5_1 = v1_1.getParameterCount();
                while (v3_1 < v5_1) {
                    com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter v7_1 = v1_1.getParameter(v3_1);
                    String v6_1 = v0.findPropertyNameForParam(v7_1);
                    if (v6_1 != null) {
                        com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder v8_1 = this._property(v6_1);
                        v8_1.addCtor(v7_1, v6_1, 1, 0);
                        this._creatorProperties.add(v8_1);
                    }
                    v3_1++;
                }
            }
            java.util.Iterator v4_0 = this._classDef.getStaticMethods().iterator();
            while (v4_0.hasNext()) {
                com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v2_1 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) v4_0.next());
                if (this._creatorProperties == null) {
                    this._creatorProperties = new java.util.LinkedList();
                }
                int v3_0 = 0;
                int v5_0 = v2_1.getParameterCount();
                while (v3_0 < v5_0) {
                    com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter v7_0 = v2_1.getParameter(v3_0);
                    String v6_0 = v0.findPropertyNameForParam(v7_0);
                    if (v6_0 != null) {
                        com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder v8_0 = this._property(v6_0);
                        v8_0.addCtor(v7_0, v6_0, 1, 0);
                        this._creatorProperties.add(v8_0);
                    }
                    v3_0++;
                }
            }
        }
        return;
    }

    protected void _addFields()
    {
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v0 = this._annotationIntrospector;
        java.util.Iterator v3 = this._classDef.fields().iterator();
        while (v3.hasNext()) {
            String v1;
            com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField v2_1 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField) v3.next());
            String v5 = v2_1.getName();
            if (v0 != null) {
                if (!this._forSerialization) {
                    v1 = v0.findDeserializablePropertyName(v2_1);
                } else {
                    v1 = v0.findSerializablePropertyName(v2_1);
                }
            } else {
                v1 = 0;
            }
            if ("".equals(v1)) {
                v1 = v5;
            }
            boolean v6;
            if (v1 == null) {
                v6 = 0;
            } else {
                v6 = 1;
            }
            if (!v6) {
                v6 = this._visibilityChecker.isFieldVisible(v2_1);
            }
            if ((v0 == null) || (!v0.hasIgnoreMarker(v2_1))) {
                int v4 = 0;
            } else {
                v4 = 1;
            }
            this._property(v5).addField(v2_1, v1, v6, v4);
        }
        return;
    }

    protected void _addInjectables()
    {
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v0 = this._annotationIntrospector;
        if (v0 != null) {
            java.util.Iterator v2_1 = this._classDef.fields().iterator();
            while (v2_1.hasNext()) {
                com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField v1_1 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField) v2_1.next());
                this._doAddInjectable(v0.findInjectableValueId(v1_1), v1_1);
            }
            java.util.Iterator v2_0 = this._classDef.memberMethods().iterator();
            while (v2_0.hasNext()) {
                com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v3_1 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) v2_0.next());
                if (v3_1.getParameterCount() == 1) {
                    this._doAddInjectable(v0.findInjectableValueId(v3_1), v3_1);
                }
            }
        }
        return;
    }

    protected void _addMethods()
    {
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v0 = this._annotationIntrospector;
        java.util.Iterator v3 = this._classDef.memberMethods().iterator();
        while (v3.hasNext()) {
            com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v6_1 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) v3.next());
            int v1 = v6_1.getParameterCount();
            if (v1 != 0) {
                if (v1 != 1) {
                    if ((v1 == 2) && ((v0 != null) && (v0.hasAnySetterAnnotation(v6_1)))) {
                        if (this._anySetters == null) {
                            this._anySetters = new java.util.LinkedList();
                        }
                        this._anySetters.add(v6_1);
                    }
                } else {
                    String v2_0;
                    if (v0 != null) {
                        v2_0 = v0.findSettablePropertyName(v6_1);
                    } else {
                        v2_0 = 0;
                    }
                    String v5_0;
                    int v7_0;
                    if (v2_0 != null) {
                        v5_0 = com.flurry.org.codehaus.jackson.map.util.BeanUtil.okNameForSetter(v6_1);
                        if (v5_0 == null) {
                            v5_0 = v6_1.getName();
                        }
                        if (v2_0.length() == 0) {
                            v2_0 = v5_0;
                        }
                        v7_0 = 1;
                    } else {
                        v5_0 = com.flurry.org.codehaus.jackson.map.util.BeanUtil.okNameForSetter(v6_1);
                        if (v5_0 != null) {
                            v7_0 = this._visibilityChecker.isSetterVisible(v6_1);
                        }
                    }
                    boolean v4_1;
                    if (v0 != null) {
                        v4_1 = v0.hasIgnoreMarker(v6_1);
                    } else {
                        v4_1 = 0;
                    }
                    this._property(v5_0).addSetter(v6_1, v2_0, v7_0, v4_1);
                }
            } else {
                if (v0 != null) {
                    if (!v0.hasAnyGetterAnnotation(v6_1)) {
                        if (v0.hasAsValueAnnotation(v6_1)) {
                            if (this._jsonValueGetters == null) {
                                this._jsonValueGetters = new java.util.LinkedList();
                            }
                            this._jsonValueGetters.add(v6_1);
                        }
                    } else {
                        if (this._anyGetters == null) {
                            this._anyGetters = new java.util.LinkedList();
                        }
                        this._anyGetters.add(v6_1);
                    }
                }
                String v2_1;
                if (v0 != null) {
                    v2_1 = v0.findGettablePropertyName(v6_1);
                } else {
                    v2_1 = 0;
                }
                int v7_1;
                String v5_1;
                if (v2_1 != null) {
                    v5_1 = com.flurry.org.codehaus.jackson.map.util.BeanUtil.okNameForGetter(v6_1);
                    if (v5_1 == null) {
                        v5_1 = v6_1.getName();
                    }
                    if (v2_1.length() == 0) {
                        v2_1 = v5_1;
                    }
                    v7_1 = 1;
                } else {
                    v5_1 = com.flurry.org.codehaus.jackson.map.util.BeanUtil.okNameForRegularGetter(v6_1, v6_1.getName());
                    if (v5_1 != null) {
                        v7_1 = this._visibilityChecker.isGetterVisible(v6_1);
                    } else {
                        v5_1 = com.flurry.org.codehaus.jackson.map.util.BeanUtil.okNameForIsGetter(v6_1, v6_1.getName());
                        if (v5_1 != null) {
                            v7_1 = this._visibilityChecker.isIsGetterVisible(v6_1);
                        }
                    }
                }
                boolean v4_0;
                if (v0 != null) {
                    v4_0 = v0.hasIgnoreMarker(v6_1);
                } else {
                    v4_0 = 0;
                }
                this._property(v5_1).addGetter(v6_1, v2_1, v7_1, v4_0);
            }
        }
        return;
    }

    protected void _doAddInjectable(Object p6, com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p7)
    {
        if (p6 != null) {
            if (this._injectables == null) {
                this._injectables = new java.util.LinkedHashMap();
            }
            if (((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember) this._injectables.put(p6, p7)) != null) {
                String v1;
                if (p6 != null) {
                    v1 = p6.getClass().getName();
                } else {
                    v1 = "[null]";
                }
                throw new IllegalArgumentException(new StringBuilder().append("Duplicate injectable value with id \'").append(String.valueOf(p6)).append("\' (of type ").append(v1).append(")").toString());
            }
        }
        return;
    }

    protected com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder _property(String p3)
    {
        com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder v0_1 = ((com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder) this._properties.get(p3));
        if (v0_1 == null) {
            v0_1 = new com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder(p3);
            this._properties.put(p3, v0_1);
        }
        return v0_1;
    }

    protected void _removeUnwantedProperties()
    {
        java.util.Iterator v1 = this._properties.entrySet().iterator();
        while (v1.hasNext()) {
            com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder v2_1 = ((com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder) ((java.util.Map$Entry) v1.next()).getValue());
            if (v2_1.anyVisible()) {
                if (v2_1.anyIgnorals()) {
                    this._addIgnored(v2_1);
                    if (v2_1.anyExplicitNames()) {
                        v2_1.removeIgnored();
                    } else {
                        v1.remove();
                    }
                }
                v2_1.removeNonVisible();
            } else {
                v1.remove();
            }
        }
        return;
    }

    protected void _renameProperties()
    {
        java.util.Iterator v2 = this._properties.entrySet().iterator();
        java.util.LinkedList v7_1 = 0;
        while (v2.hasNext()) {
            com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder v6_3 = ((com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder) ((java.util.Map$Entry) v2.next()).getValue());
            String v4 = v6_3.findNewName();
            if (v4 != null) {
                if (v7_1 == null) {
                    v7_1 = new java.util.LinkedList();
                }
                v7_1.add(v6_3.withName(v4));
                v2.remove();
            }
        }
        if (v7_1 != null) {
            java.util.Iterator v1 = v7_1.iterator();
            while (v1.hasNext()) {
                com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder v6_1 = ((com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder) v1.next());
                String v3 = v6_1.getName();
                com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder v5_1 = ((com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder) this._properties.get(v3));
                if (v5_1 != null) {
                    v5_1.addAll(v6_1);
                } else {
                    this._properties.put(v3, v6_1);
                }
            }
        }
        return;
    }

    protected void _renameUsing(com.flurry.org.codehaus.jackson.map.PropertyNamingStrategy p10)
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v8_6 = new com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder[this._properties.size()];
        com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder[] v6_1 = ((com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder[]) this._properties.values().toArray(v8_6));
        this._properties.clear();
        com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder[] v0 = v6_1;
        int v2 = v0.length;
        int v1 = 0;
        while (v1 < v2) {
            com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder v5 = v0[v1];
            String v3 = v5.getName();
            if (!this._forSerialization) {
                if (!v5.hasSetter()) {
                    if (!v5.hasConstructorParameter()) {
                        if (!v5.hasField()) {
                            if (v5.hasGetter()) {
                                v3 = p10.nameForGetterMethod(this._config, v5.getGetter(), v3);
                            }
                        } else {
                            v3 = p10.nameForField(this._config, v5.getField(), v3);
                        }
                    } else {
                        v3 = p10.nameForConstructorParameter(this._config, v5.getConstructorParameter(), v3);
                    }
                } else {
                    v3 = p10.nameForSetterMethod(this._config, v5.getSetter(), v3);
                }
            } else {
                if (!v5.hasGetter()) {
                    if (v5.hasField()) {
                        v3 = p10.nameForField(this._config, v5.getField(), v3);
                    }
                } else {
                    v3 = p10.nameForGetterMethod(this._config, v5.getGetter(), v3);
                }
            }
            if (!v3.equals(v5.getName())) {
                v5 = v5.withName(v3);
            }
            com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder v4_1 = ((com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder) this._properties.get(v3));
            if (v4_1 != null) {
                v4_1.addAll(v5);
            } else {
                this._properties.put(v3, v5);
            }
            v1++;
        }
        return;
    }

    protected void _sortProperties()
    {
        boolean v12;
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v5 = this._config.getAnnotationIntrospector();
        Boolean v1 = v5.findSerializationSortAlphabetically(this._classDef);
        if (v1 != null) {
            v12 = v1.booleanValue();
        } else {
            v12 = this._config.shouldSortPropertiesAlphabetically();
        }
        String[] v10 = v5.findSerializationPropertyOrder(this._classDef);
        if ((v12) || ((this._creatorProperties != null) || (v10 != null))) {
            java.util.LinkedHashMap v0_1;
            int v11 = this._properties.size();
            if (!v12) {
                v0_1 = new java.util.LinkedHashMap((v11 + v11));
            } else {
                v0_1 = new java.util.TreeMap();
            }
            int v3_0 = this._properties.values().iterator();
            while (v3_0.hasNext()) {
                com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder v9_5 = ((com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder) v3_0.next());
                v0_1.put(v9_5.getName(), v9_5);
            }
            java.util.LinkedHashMap v8_1 = new java.util.LinkedHashMap((v11 + v11));
            if (v10 != null) {
                String[] v2 = v10;
                int v6 = v2.length;
                int v4 = 0;
                while (v4 < v6) {
                    String v7 = v2[v4];
                    com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder v13_1 = ((com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder) v0_1.get(v7));
                    if (v13_1 == null) {
                        int v3_3 = this._properties.values().iterator();
                        while (v3_3.hasNext()) {
                            com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder v9_3 = ((com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder) v3_3.next());
                            if (v7.equals(v9_3.getInternalName())) {
                                v13_1 = v9_3;
                                v7 = v9_3.getName();
                                break;
                            }
                        }
                    }
                    if (v13_1 != null) {
                        v8_1.put(v7, v13_1);
                    }
                    v4++;
                }
            }
            if (this._creatorProperties != null) {
                int v3_2 = this._creatorProperties.iterator();
                while (v3_2.hasNext()) {
                    com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder v9_1 = ((com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder) v3_2.next());
                    v8_1.put(v9_1.getName(), v9_1);
                }
            }
            v8_1.putAll(v0_1);
            this._properties.clear();
            this._properties.putAll(v8_1);
        }
        return;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.POJOPropertiesCollector collect()
    {
        this._properties.clear();
        this._addFields();
        this._addMethods();
        this._addCreators();
        this._addInjectables();
        this._removeUnwantedProperties();
        this._renameProperties();
        com.flurry.org.codehaus.jackson.map.PropertyNamingStrategy v1 = this._config.getPropertyNamingStrategy();
        if (v1 != null) {
            this._renameUsing(v1);
        }
        java.util.Iterator v0_0 = this._properties.values().iterator();
        while (v0_0.hasNext()) {
            ((com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder) v0_0.next()).trimByVisibility();
        }
        java.util.Iterator v0_1 = this._properties.values().iterator();
        while (v0_1.hasNext()) {
            ((com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder) v0_1.next()).mergeAnnotations(this._forSerialization);
        }
        this._sortProperties();
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.AnnotationIntrospector getAnnotationIntrospector()
    {
        return this._annotationIntrospector;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod getAnyGetterMethod()
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v0_6;
        if (this._anyGetters == null) {
            v0_6 = 0;
        } else {
            if (this._anyGetters.size() > 1) {
                this.reportProblem(new StringBuilder().append("Multiple \'any-getters\' defined (").append(this._anyGetters.get(0)).append(" vs ").append(this._anyGetters.get(1)).append(")").toString());
            }
            v0_6 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) this._anyGetters.getFirst());
        }
        return v0_6;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod getAnySetterMethod()
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v0_6;
        if (this._anySetters == null) {
            v0_6 = 0;
        } else {
            if (this._anySetters.size() > 1) {
                this.reportProblem(new StringBuilder().append("Multiple \'any-setters\' defined (").append(this._anySetters.get(0)).append(" vs ").append(this._anySetters.get(1)).append(")").toString());
            }
            v0_6 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) this._anySetters.getFirst());
        }
        return v0_6;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass getClassDef()
    {
        return this._classDef;
    }

    public com.flurry.org.codehaus.jackson.map.MapperConfig getConfig()
    {
        return this._config;
    }

    public java.util.Set getIgnoredPropertyNames()
    {
        return this._ignoredPropertyNames;
    }

    public java.util.Set getIgnoredPropertyNamesForDeser()
    {
        return this._ignoredPropertyNamesForDeser;
    }

    public java.util.Map getInjectables()
    {
        return this._injectables;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod getJsonValueMethod()
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v0_10;
        if (this._jsonValueGetters == null) {
            v0_10 = 0;
        } else {
            if (this._jsonValueGetters.size() > 1) {
                this.reportProblem(new StringBuilder().append("Multiple value properties defined (").append(this._jsonValueGetters.get(0)).append(" vs ").append(this._jsonValueGetters.get(1)).append(")").toString());
            }
            v0_10 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) this._jsonValueGetters.get(0));
        }
        return v0_10;
    }

    public java.util.List getProperties()
    {
        return new java.util.ArrayList(this._properties.values());
    }

    protected java.util.Map getPropertyMap()
    {
        return this._properties;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType getType()
    {
        return this._type;
    }

    protected void reportProblem(String p4)
    {
        throw new IllegalArgumentException(new StringBuilder().append("Problem with definition of ").append(this._classDef).append(": ").append(p4).toString());
    }
}
