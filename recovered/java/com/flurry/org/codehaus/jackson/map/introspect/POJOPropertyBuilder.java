package com.flurry.org.codehaus.jackson.map.introspect;
public class POJOPropertyBuilder extends com.flurry.org.codehaus.jackson.map.BeanPropertyDefinition implements java.lang.Comparable {
    protected com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node _ctorParameters;
    protected com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node _fields;
    protected com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node _getters;
    protected final String _internalName;
    protected final String _name;
    protected com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node _setters;

    public POJOPropertyBuilder(com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder p2, String p3)
    {
        this._internalName = p2._internalName;
        this._name = p3;
        this._fields = p2._fields;
        this._ctorParameters = p2._ctorParameters;
        this._getters = p2._getters;
        this._setters = p2._setters;
        return;
    }

    public POJOPropertyBuilder(String p1)
    {
        this._internalName = p1;
        this._name = p1;
        return;
    }

    private boolean _anyExplicitNames(com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node p2)
    {
        while (p2 != null) {
            if ((p2.explicitName == null) || (p2.explicitName.length() <= 0)) {
                p2 = p2.next;
            } else {
                int v0_0 = 1;
            }
            return v0_0;
        }
        v0_0 = 0;
        return v0_0;
    }

    private boolean _anyIgnorals(com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node p2)
    {
        while (p2 != null) {
            if (!p2.isMarkedIgnored) {
                p2 = p2.next;
            } else {
                int v0_0 = 1;
            }
            return v0_0;
        }
        v0_0 = 0;
        return v0_0;
    }

    private boolean _anyVisible(com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node p2)
    {
        while (p2 != null) {
            if (!p2.isVisible) {
                p2 = p2.next;
            } else {
                int v0_0 = 1;
            }
            return v0_0;
        }
        v0_0 = 0;
        return v0_0;
    }

    private varargs com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap _mergeAnnotations(int p3, com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node[] p4)
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap v0 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember) p4[p3].value).getAllAnnotations();
        int v3_1 = (p3 + 1);
        while (v3_1 < p4.length) {
            if (p4[v3_1] == null) {
                v3_1++;
            } else {
                v0 = com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap.merge(v0, this._mergeAnnotations(v3_1, p4));
                break;
            }
        }
        return v0;
    }

    private com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node _removeIgnored(com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node p1)
    {
        if (p1 != null) {
            p1 = p1.withoutIgnored();
        }
        return p1;
    }

    private com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node _removeNonVisible(com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node p1)
    {
        if (p1 != null) {
            p1 = p1.withoutNonVisible();
        }
        return p1;
    }

    private com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node _trimByVisibility(com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node p1)
    {
        if (p1 != null) {
            p1 = p1.trimByVisibility();
        }
        return p1;
    }

    private com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node findRenamed(com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node p5, com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node p6)
    {
        while (p5 != null) {
            String v0 = p5.explicitName;
            if ((v0 != null) && (!v0.equals(this._name))) {
                if (p6 != null) {
                    if (!v0.equals(p6.explicitName)) {
                        throw new IllegalStateException(new StringBuilder().append("Conflicting property name definitions: \'").append(p6.explicitName).append("\' (for ").append(p6.value).append(") vs \'").append(p5.explicitName).append("\' (for ").append(p5.value).append(")").toString());
                    }
                } else {
                    p6 = p5;
                }
            }
            p5 = p5.next;
        }
        return p6;
    }

    private static com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node merge(com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node p0, com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node p1)
    {
        if (p0 != null) {
            if (p1 != null) {
                p1 = com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node.access$000(p0, p1);
            } else {
                p1 = p0;
            }
        }
        return p1;
    }

    public void addAll(com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder p3)
    {
        this._fields = com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder.merge(this._fields, p3._fields);
        this._ctorParameters = com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder.merge(this._ctorParameters, p3._ctorParameters);
        this._getters = com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder.merge(this._getters, p3._getters);
        this._setters = com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder.merge(this._setters, p3._setters);
        return;
    }

    public void addCtor(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter p7, String p8, boolean p9, boolean p10)
    {
        this._ctorParameters = new com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node(p7, this._ctorParameters, p8, p9, p10);
        return;
    }

    public void addField(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField p7, String p8, boolean p9, boolean p10)
    {
        this._fields = new com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node(p7, this._fields, p8, p9, p10);
        return;
    }

    public void addGetter(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p7, String p8, boolean p9, boolean p10)
    {
        this._getters = new com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node(p7, this._getters, p8, p9, p10);
        return;
    }

    public void addSetter(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p7, String p8, boolean p9, boolean p10)
    {
        this._setters = new com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node(p7, this._setters, p8, p9, p10);
        return;
    }

    public boolean anyDeserializeIgnorals()
    {
        if ((!this._anyIgnorals(this._fields)) && ((!this._anyIgnorals(this._setters)) && (!this._anyIgnorals(this._ctorParameters)))) {
            int v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public boolean anyExplicitNames()
    {
        if ((!this._anyExplicitNames(this._fields)) && ((!this._anyExplicitNames(this._getters)) && ((!this._anyExplicitNames(this._setters)) && (!this._anyExplicitNames(this._ctorParameters))))) {
            int v0_4 = 0;
        } else {
            v0_4 = 1;
        }
        return v0_4;
    }

    public boolean anyIgnorals()
    {
        if ((!this._anyIgnorals(this._fields)) && ((!this._anyIgnorals(this._getters)) && ((!this._anyIgnorals(this._setters)) && (!this._anyIgnorals(this._ctorParameters))))) {
            int v0_4 = 0;
        } else {
            v0_4 = 1;
        }
        return v0_4;
    }

    public boolean anySerializeIgnorals()
    {
        if ((!this._anyIgnorals(this._fields)) && (!this._anyIgnorals(this._getters))) {
            int v0_4 = 0;
        } else {
            v0_4 = 1;
        }
        return v0_4;
    }

    public boolean anyVisible()
    {
        if ((!this._anyVisible(this._fields)) && ((!this._anyVisible(this._getters)) && ((!this._anyVisible(this._setters)) && (!this._anyVisible(this._ctorParameters))))) {
            int v0_4 = 0;
        } else {
            v0_4 = 1;
        }
        return v0_4;
    }

    public int compareTo(com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder p3)
    {
        int v0_1;
        if (this._ctorParameters == null) {
            if (p3._ctorParameters == null) {
                v0_1 = this.getName().compareTo(p3.getName());
            } else {
                v0_1 = 1;
            }
        } else {
            if (p3._ctorParameters != null) {
            } else {
                v0_1 = -1;
            }
        }
        return v0_1;
    }

    public bridge synthetic int compareTo(Object p2)
    {
        return this.compareTo(((com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder) p2));
    }

    public boolean couldSerialize()
    {
        if ((this._getters == null) && (this._fields == null)) {
            int v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public String findNewName()
    {
        String v1_2;
        com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node v0_1 = this.findRenamed(this._ctorParameters, this.findRenamed(this._setters, this.findRenamed(this._getters, this.findRenamed(this._fields, 0))));
        if (v0_1 != null) {
            v1_2 = v0_1.explicitName;
        } else {
            v1_2 = 0;
        }
        return v1_2;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember getAccessor()
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField v0 = this.getGetter();
        if (v0 == null) {
            v0 = this.getField();
        }
        return v0;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter getConstructorParameter()
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter v1_3;
        if (this._ctorParameters != null) {
            com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node v0 = this._ctorParameters;
            while (!(((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter) v0.value).getOwner() instanceof com.flurry.org.codehaus.jackson.map.introspect.AnnotatedConstructor)) {
                v0 = v0.next;
                if (v0 == null) {
                    v1_3 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter) this._ctorParameters.value);
                }
            }
            v1_3 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter) v0.value);
        } else {
            v1_3 = 0;
        }
        return v1_3;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField getField()
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField v0_1;
        if (this._fields != null) {
            v0_1 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField) this._fields.value);
            com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node v2 = this._fields.next;
            while (v2 != null) {
                com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField v4_1 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField) v2.value);
                Class v1 = v0_1.getDeclaringClass();
                Class v3 = v4_1.getDeclaringClass();
                if (v1 != v3) {
                    if (!v1.isAssignableFrom(v3)) {
                        if (!v3.isAssignableFrom(v1)) {
                            throw new IllegalArgumentException(new StringBuilder().append("Multiple fields representing property \"").append(this.getName()).append("\": ").append(v0_1.getFullName()).append(" vs ").append(v4_1.getFullName()).toString());
                        }
                    } else {
                        v0_1 = v4_1;
                    }
                    v2 = v2.next;
                }
            }
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod getGetter()
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v0_1;
        if (this._getters != null) {
            v0_1 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) this._getters.value);
            com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node v2 = this._getters.next;
            while (v2 != null) {
                com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v4_1 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) v2.value);
                Class v1 = v0_1.getDeclaringClass();
                Class v3 = v4_1.getDeclaringClass();
                if (v1 != v3) {
                    if (!v1.isAssignableFrom(v3)) {
                        if (!v3.isAssignableFrom(v1)) {
                            throw new IllegalArgumentException(new StringBuilder().append("Conflicting getter definitions for property \"").append(this.getName()).append("\": ").append(v0_1.getFullName()).append(" vs ").append(v4_1.getFullName()).toString());
                        }
                    } else {
                        v0_1 = v4_1;
                    }
                    v2 = v2.next;
                }
            }
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }

    public String getInternalName()
    {
        return this._internalName;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember getMutator()
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField v0 = this.getConstructorParameter();
        if (v0 == null) {
            v0 = this.getSetter();
            if (v0 == null) {
                v0 = this.getField();
            }
        }
        return v0;
    }

    public String getName()
    {
        return this._name;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod getSetter()
    {
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v3_1;
        if (this._setters != null) {
            v3_1 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) this._setters.value);
            com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node v0 = this._setters.next;
            while (v0 != null) {
                com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod v2_1 = ((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) v0.value);
                Class v4 = v3_1.getDeclaringClass();
                Class v1 = v2_1.getDeclaringClass();
                if (v4 != v1) {
                    if (!v4.isAssignableFrom(v1)) {
                        if (!v1.isAssignableFrom(v4)) {
                            throw new IllegalArgumentException(new StringBuilder().append("Conflicting setter definitions for property \"").append(this.getName()).append("\": ").append(v3_1.getFullName()).append(" vs ").append(v2_1.getFullName()).toString());
                        }
                    } else {
                        v3_1 = v2_1;
                    }
                    v0 = v0.next;
                }
            }
        } else {
            v3_1 = 0;
        }
        return v3_1;
    }

    public boolean hasConstructorParameter()
    {
        int v0_1;
        if (this._ctorParameters == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean hasField()
    {
        int v0_1;
        if (this._fields == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean hasGetter()
    {
        int v0_1;
        if (this._getters == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean hasSetter()
    {
        int v0_1;
        if (this._setters == null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public void mergeAnnotations(boolean p8)
    {
        if (!p8) {
            if (this._ctorParameters == null) {
                if (this._setters == null) {
                    if (this._fields != null) {
                        com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node v1_6 = new com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node[2];
                        v1_6[0] = this._fields;
                        v1_6[1] = this._getters;
                        this._fields = this._fields.withValue(((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField) this._fields.value).withAnnotations(this._mergeAnnotations(0, v1_6)));
                    }
                } else {
                    com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node v1_12 = new com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node[3];
                    v1_12[0] = this._setters;
                    v1_12[1] = this._fields;
                    v1_12[2] = this._getters;
                    this._setters = this._setters.withValue(((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) this._setters.value).withAnnotations(this._mergeAnnotations(0, v1_12)));
                }
            } else {
                com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node v1_18 = new com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node[4];
                v1_18[0] = this._ctorParameters;
                v1_18[1] = this._setters;
                v1_18[2] = this._fields;
                v1_18[3] = this._getters;
                this._ctorParameters = this._ctorParameters.withValue(((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedParameter) this._ctorParameters.value).withAnnotations(this._mergeAnnotations(0, v1_18)));
            }
        } else {
            if (this._getters == null) {
                if (this._fields != null) {
                    com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node v1_27 = new com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node[3];
                    v1_27[0] = this._fields;
                    v1_27[1] = this._ctorParameters;
                    v1_27[2] = this._setters;
                    this._fields = this._fields.withValue(((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField) this._fields.value).withAnnotations(this._mergeAnnotations(0, v1_27)));
                }
            } else {
                com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node v1_34 = new com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node[4];
                v1_34[0] = this._getters;
                v1_34[1] = this._fields;
                v1_34[2] = this._ctorParameters;
                v1_34[3] = this._setters;
                this._getters = this._getters.withValue(((com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod) this._getters.value).withAnnotations(this._mergeAnnotations(0, v1_34)));
            }
        }
        return;
    }

    public void removeIgnored()
    {
        this._fields = this._removeIgnored(this._fields);
        this._getters = this._removeIgnored(this._getters);
        this._setters = this._removeIgnored(this._setters);
        this._ctorParameters = this._removeIgnored(this._ctorParameters);
        return;
    }

    public void removeNonVisible()
    {
        this._getters = this._removeNonVisible(this._getters);
        this._ctorParameters = this._removeNonVisible(this._ctorParameters);
        if (this._getters == null) {
            this._fields = this._removeNonVisible(this._fields);
            this._setters = this._removeNonVisible(this._setters);
        }
        return;
    }

    public String toString()
    {
        StringBuilder v0_1 = new StringBuilder();
        v0_1.append("[Property \'").append(this._name).append("\'; ctors: ").append(this._ctorParameters).append(", field(s): ").append(this._fields).append(", getter(s): ").append(this._getters).append(", setter(s): ").append(this._setters);
        v0_1.append("]");
        return v0_1.toString();
    }

    public void trimByVisibility()
    {
        this._fields = this._trimByVisibility(this._fields);
        this._getters = this._trimByVisibility(this._getters);
        this._setters = this._trimByVisibility(this._setters);
        this._ctorParameters = this._trimByVisibility(this._ctorParameters);
        return;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder withName(String p2)
    {
        return new com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder(this, p2);
    }
}
