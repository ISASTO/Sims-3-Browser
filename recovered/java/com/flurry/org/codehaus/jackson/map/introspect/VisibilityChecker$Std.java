package com.flurry.org.codehaus.jackson.map.introspect;
public class VisibilityChecker$Std implements com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker {
    protected static final com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std DEFAULT;
    protected final com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility _creatorMinLevel;
    protected final com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility _fieldMinLevel;
    protected final com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility _getterMinLevel;
    protected final com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility _isGetterMinLevel;
    protected final com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility _setterMinLevel;

    static VisibilityChecker$Std()
    {
        com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.DEFAULT = new com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std(((com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect) com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.getAnnotation(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect)));
        return;
    }

    public VisibilityChecker$Std(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p2)
    {
        if (p2 != com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.DEFAULT) {
            this._getterMinLevel = p2;
            this._isGetterMinLevel = p2;
            this._setterMinLevel = p2;
            this._creatorMinLevel = p2;
            this._fieldMinLevel = p2;
        } else {
            this._getterMinLevel = com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.DEFAULT._getterMinLevel;
            this._isGetterMinLevel = com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.DEFAULT._isGetterMinLevel;
            this._setterMinLevel = com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.DEFAULT._setterMinLevel;
            this._creatorMinLevel = com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.DEFAULT._creatorMinLevel;
            this._fieldMinLevel = com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.DEFAULT._fieldMinLevel;
        }
        return;
    }

    public VisibilityChecker$Std(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p1, com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p2, com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p3, com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p4, com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p5)
    {
        this._getterMinLevel = p1;
        this._isGetterMinLevel = p2;
        this._setterMinLevel = p3;
        this._creatorMinLevel = p4;
        this._fieldMinLevel = p5;
        return;
    }

    public VisibilityChecker$Std(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect p3)
    {
        com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility v1_14;
        com.flurry.org.codehaus.jackson.annotate.JsonMethod[] v0 = p3.value();
        if (!com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.hasMethod(v0, com.flurry.org.codehaus.jackson.annotate.JsonMethod.GETTER)) {
            v1_14 = com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.NONE;
        } else {
            v1_14 = p3.getterVisibility();
        }
        com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility v1_2;
        this._getterMinLevel = v1_14;
        if (!com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.hasMethod(v0, com.flurry.org.codehaus.jackson.annotate.JsonMethod.IS_GETTER)) {
            v1_2 = com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.NONE;
        } else {
            v1_2 = p3.isGetterVisibility();
        }
        com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility v1_5;
        this._isGetterMinLevel = v1_2;
        if (!com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.hasMethod(v0, com.flurry.org.codehaus.jackson.annotate.JsonMethod.SETTER)) {
            v1_5 = com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.NONE;
        } else {
            v1_5 = p3.setterVisibility();
        }
        com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility v1_9;
        this._setterMinLevel = v1_5;
        if (!com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.hasMethod(v0, com.flurry.org.codehaus.jackson.annotate.JsonMethod.CREATOR)) {
            v1_9 = com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.NONE;
        } else {
            v1_9 = p3.creatorVisibility();
        }
        com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility v1_12;
        this._creatorMinLevel = v1_9;
        if (!com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.hasMethod(v0, com.flurry.org.codehaus.jackson.annotate.JsonMethod.FIELD)) {
            v1_12 = com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.NONE;
        } else {
            v1_12 = p3.fieldVisibility();
        }
        this._fieldMinLevel = v1_12;
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std defaultInstance()
    {
        return com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.DEFAULT;
    }

    private static boolean hasMethod(com.flurry.org.codehaus.jackson.annotate.JsonMethod[] p5, com.flurry.org.codehaus.jackson.annotate.JsonMethod p6)
    {
        int v2 = 0;
        while (v2 < p5.length) {
            com.flurry.org.codehaus.jackson.annotate.JsonMethod v1 = p5[v2];
            if ((v1 != p6) && (v1 != com.flurry.org.codehaus.jackson.annotate.JsonMethod.ALL)) {
                v2++;
            } else {
                int v4_0 = 1;
            }
            return v4_0;
        }
        v4_0 = 0;
        return v4_0;
    }

    public boolean isCreatorVisible(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p2)
    {
        return this.isCreatorVisible(p2.getMember());
    }

    public boolean isCreatorVisible(reflect.Member p2)
    {
        return this._creatorMinLevel.isVisible(p2);
    }

    public boolean isFieldVisible(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedField p2)
    {
        return this.isFieldVisible(p2.getAnnotated());
    }

    public boolean isFieldVisible(reflect.Field p2)
    {
        return this._fieldMinLevel.isVisible(p2);
    }

    public boolean isGetterVisible(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p2)
    {
        return this.isGetterVisible(p2.getAnnotated());
    }

    public boolean isGetterVisible(reflect.Method p2)
    {
        return this._getterMinLevel.isVisible(p2);
    }

    public boolean isIsGetterVisible(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p2)
    {
        return this.isIsGetterVisible(p2.getAnnotated());
    }

    public boolean isIsGetterVisible(reflect.Method p2)
    {
        return this._isGetterMinLevel.isVisible(p2);
    }

    public boolean isSetterVisible(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMethod p2)
    {
        return this.isSetterVisible(p2.getAnnotated());
    }

    public boolean isSetterVisible(reflect.Method p2)
    {
        return this._setterMinLevel.isVisible(p2);
    }

    public String toString()
    {
        return new StringBuilder("[Visibility:").append(" getter: ").append(this._getterMinLevel).append(", isGetter: ").append(this._isGetterMinLevel).append(", setter: ").append(this._setterMinLevel).append(", creator: ").append(this._creatorMinLevel).append(", field: ").append(this._fieldMinLevel).append("]").toString();
    }

    public com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std with(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p2)
    {
        com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std v0_2;
        if (p2 != com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.DEFAULT) {
            v0_2 = new com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std(p2);
        } else {
            v0_2 = com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.DEFAULT;
        }
        return v0_2;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std with(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect p5)
    {
        if (p5 != null) {
            com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility v2_0;
            com.flurry.org.codehaus.jackson.annotate.JsonMethod[] v1 = p5.value();
            if (!com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.hasMethod(v1, com.flurry.org.codehaus.jackson.annotate.JsonMethod.GETTER)) {
                v2_0 = com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.NONE;
            } else {
                v2_0 = p5.getterVisibility();
            }
            com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility v2_1;
            com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std v0_1 = this.withGetterVisibility(v2_0);
            if (!com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.hasMethod(v1, com.flurry.org.codehaus.jackson.annotate.JsonMethod.IS_GETTER)) {
                v2_1 = com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.NONE;
            } else {
                v2_1 = p5.isGetterVisibility();
            }
            com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility v2_2;
            com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std v0_2 = v0_1.withIsGetterVisibility(v2_1);
            if (!com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.hasMethod(v1, com.flurry.org.codehaus.jackson.annotate.JsonMethod.SETTER)) {
                v2_2 = com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.NONE;
            } else {
                v2_2 = p5.setterVisibility();
            }
            com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility v2_3;
            com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std v0_3 = v0_2.withSetterVisibility(v2_2);
            if (!com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.hasMethod(v1, com.flurry.org.codehaus.jackson.annotate.JsonMethod.CREATOR)) {
                v2_3 = com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.NONE;
            } else {
                v2_3 = p5.creatorVisibility();
            }
            com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility v2_4;
            com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std v0_4 = v0_3.withCreatorVisibility(v2_3);
            if (!com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.hasMethod(v1, com.flurry.org.codehaus.jackson.annotate.JsonMethod.FIELD)) {
                v2_4 = com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.NONE;
            } else {
                v2_4 = p5.fieldVisibility();
            }
            this = v0_4.withFieldVisibility(v2_4);
        }
        return this;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker with(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p2)
    {
        return this.with(p2);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker with(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect p2)
    {
        return this.with(p2);
    }

    public com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std withCreatorVisibility(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p7)
    {
        if (p7 == com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.DEFAULT) {
            p7 = com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.DEFAULT._creatorMinLevel;
        }
        if (this._creatorMinLevel != p7) {
            this = new com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std(this._getterMinLevel, this._isGetterMinLevel, this._setterMinLevel, p7, this._fieldMinLevel);
        }
        return this;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker withCreatorVisibility(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p2)
    {
        return this.withCreatorVisibility(p2);
    }

    public com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std withFieldVisibility(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p7)
    {
        if (p7 == com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.DEFAULT) {
            p7 = com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.DEFAULT._fieldMinLevel;
        }
        if (this._fieldMinLevel != p7) {
            this = new com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std(this._getterMinLevel, this._isGetterMinLevel, this._setterMinLevel, this._creatorMinLevel, p7);
        }
        return this;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker withFieldVisibility(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p2)
    {
        return this.withFieldVisibility(p2);
    }

    public com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std withGetterVisibility(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p7)
    {
        if (p7 == com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.DEFAULT) {
            p7 = com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.DEFAULT._getterMinLevel;
        }
        if (this._getterMinLevel != p7) {
            this = new com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std(p7, this._isGetterMinLevel, this._setterMinLevel, this._creatorMinLevel, this._fieldMinLevel);
        }
        return this;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker withGetterVisibility(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p2)
    {
        return this.withGetterVisibility(p2);
    }

    public com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std withIsGetterVisibility(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p7)
    {
        if (p7 == com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.DEFAULT) {
            p7 = com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.DEFAULT._isGetterMinLevel;
        }
        if (this._isGetterMinLevel != p7) {
            this = new com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std(this._getterMinLevel, p7, this._setterMinLevel, this._creatorMinLevel, this._fieldMinLevel);
        }
        return this;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker withIsGetterVisibility(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p2)
    {
        return this.withIsGetterVisibility(p2);
    }

    public com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std withSetterVisibility(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p7)
    {
        if (p7 == com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.DEFAULT) {
            p7 = com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std.DEFAULT._setterMinLevel;
        }
        if (this._setterMinLevel != p7) {
            this = new com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std(this._getterMinLevel, this._isGetterMinLevel, p7, this._creatorMinLevel, this._fieldMinLevel);
        }
        return this;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker withSetterVisibility(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p2)
    {
        return this.withSetterVisibility(p2);
    }

    public com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$Std withVisibility(com.flurry.org.codehaus.jackson.annotate.JsonMethod p3, com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p4)
    {
        switch (com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker$1.$SwitchMap$org$codehaus$jackson$annotate$JsonMethod[p3.ordinal()]) {
            case 1:
                this = this.withGetterVisibility(p4);
                break;
            case 2:
                this = this.withSetterVisibility(p4);
                break;
            case 3:
                this = this.withCreatorVisibility(p4);
                break;
            case 4:
                this = this.withFieldVisibility(p4);
                break;
            case 5:
                this = this.withIsGetterVisibility(p4);
                break;
            case 6:
                this = this.with(p4);
                break;
        }
        return this;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker withVisibility(com.flurry.org.codehaus.jackson.annotate.JsonMethod p2, com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p3)
    {
        return this.withVisibility(p2, p3);
    }
}
