package com.flurry.org.codehaus.jackson.map;
public class DeserializationConfig extends com.flurry.org.codehaus.jackson.map.MapperConfig$Impl {
    protected final com.flurry.org.codehaus.jackson.node.JsonNodeFactory _nodeFactory;
    protected com.flurry.org.codehaus.jackson.map.util.LinkedNode _problemHandlers;
    protected boolean _sortPropertiesAlphabetically;

    public DeserializationConfig(com.flurry.org.codehaus.jackson.map.ClassIntrospector p10, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p11, com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p12, com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver p13, com.flurry.org.codehaus.jackson.map.PropertyNamingStrategy p14, com.flurry.org.codehaus.jackson.map.type.TypeFactory p15, com.flurry.org.codehaus.jackson.map.HandlerInstantiator p16)
    {
        super(p10, p11, p12, p13, p14, p15, p16, com.flurry.org.codehaus.jackson.map.DeserializationConfig.collectFeatureDefaults(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature));
        super._nodeFactory = com.flurry.org.codehaus.jackson.node.JsonNodeFactory.instance;
        return;
    }

    protected DeserializationConfig(com.flurry.org.codehaus.jackson.map.DeserializationConfig p2)
    {
        this(p2, p2._base);
        return;
    }

    protected DeserializationConfig(com.flurry.org.codehaus.jackson.map.DeserializationConfig p2, int p3)
    {
        super(p2, p3);
        super._problemHandlers = p2._problemHandlers;
        super._nodeFactory = p2._nodeFactory;
        super._sortPropertiesAlphabetically = p2._sortPropertiesAlphabetically;
        return;
    }

    protected DeserializationConfig(com.flurry.org.codehaus.jackson.map.DeserializationConfig p2, com.flurry.org.codehaus.jackson.map.MapperConfig$Base p3)
    {
        super(p2, p3, p2._subtypeResolver);
        super._problemHandlers = p2._problemHandlers;
        super._nodeFactory = p2._nodeFactory;
        super._sortPropertiesAlphabetically = p2._sortPropertiesAlphabetically;
        return;
    }

    protected DeserializationConfig(com.flurry.org.codehaus.jackson.map.DeserializationConfig p2, com.flurry.org.codehaus.jackson.node.JsonNodeFactory p3)
    {
        super(p2);
        super._problemHandlers = p2._problemHandlers;
        super._nodeFactory = p3;
        super._sortPropertiesAlphabetically = p2._sortPropertiesAlphabetically;
        return;
    }

    private DeserializationConfig(com.flurry.org.codehaus.jackson.map.DeserializationConfig p2, java.util.HashMap p3, com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver p4)
    {
        this(p2, p2._base);
        this._mixInAnnotations = p3;
        this._subtypeResolver = p4;
        return;
    }

    public void addHandler(com.flurry.org.codehaus.jackson.map.DeserializationProblemHandler p3)
    {
        if (!com.flurry.org.codehaus.jackson.map.util.LinkedNode.contains(this._problemHandlers, p3)) {
            this._problemHandlers = new com.flurry.org.codehaus.jackson.map.util.LinkedNode(p3, this._problemHandlers);
        }
        return;
    }

    public boolean canOverrideAccessModifiers()
    {
        return this.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.CAN_OVERRIDE_ACCESS_MODIFIERS);
    }

    public void clearHandlers()
    {
        this._problemHandlers = 0;
        return;
    }

    public com.flurry.org.codehaus.jackson.map.DeserializationConfig createUnshared(com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver p3)
    {
        java.util.HashMap v0 = this._mixInAnnotations;
        this._mixInAnnotationsShared = 1;
        return new com.flurry.org.codehaus.jackson.map.DeserializationConfig(this, v0, p3);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig createUnshared(com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver p2)
    {
        return this.createUnshared(p2);
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer deserializerInstance(com.flurry.org.codehaus.jackson.map.introspect.Annotated p4, Class p5)
    {
        com.flurry.org.codehaus.jackson.map.JsonDeserializer v0;
        com.flurry.org.codehaus.jackson.map.HandlerInstantiator v1 = this.getHandlerInstantiator();
        if (v1 == null) {
            v0 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) com.flurry.org.codehaus.jackson.map.util.ClassUtil.createInstance(p5, this.canOverrideAccessModifiers()));
        } else {
            v0 = v1.deserializerInstance(this, p4, p5);
            if (v0 == null) {
            }
        }
        return v0;
    }

    public void disable(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature p1)
    {
        super.disable(p1);
        return;
    }

    public bridge synthetic void disable(com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature p1)
    {
        this.disable(((com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature) p1));
        return;
    }

    public void enable(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature p1)
    {
        super.enable(p1);
        return;
    }

    public bridge synthetic void enable(com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature p1)
    {
        this.enable(((com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature) p1));
        return;
    }

    public void fromAnnotations(Class p6)
    {
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v1 = this.getAnnotationIntrospector();
        this._base = this._base.withVisibilityChecker(v1.findAutoDetectVisibility(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass.construct(p6, v1, 0), this.getDefaultVisibilityChecker()));
        return;
    }

    public com.flurry.org.codehaus.jackson.map.AnnotationIntrospector getAnnotationIntrospector()
    {
        com.flurry.org.codehaus.jackson.map.introspect.NopAnnotationIntrospector v0_2;
        if (!this.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_ANNOTATIONS)) {
            v0_2 = com.flurry.org.codehaus.jackson.map.introspect.NopAnnotationIntrospector.instance;
        } else {
            v0_2 = super.getAnnotationIntrospector();
        }
        return v0_2;
    }

    public com.flurry.org.codehaus.jackson.Base64Variant getBase64Variant()
    {
        return com.flurry.org.codehaus.jackson.Base64Variants.getDefaultVariant();
    }

    public com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker getDefaultVisibilityChecker()
    {
        com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker v0 = super.getDefaultVisibilityChecker();
        if (!this.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.AUTO_DETECT_SETTERS)) {
            v0 = v0.withSetterVisibility(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.NONE);
        }
        if (!this.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.AUTO_DETECT_CREATORS)) {
            v0 = v0.withCreatorVisibility(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.NONE);
        }
        if (!this.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.AUTO_DETECT_FIELDS)) {
            v0 = v0.withFieldVisibility(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.NONE);
        }
        return v0;
    }

    public final com.flurry.org.codehaus.jackson.node.JsonNodeFactory getNodeFactory()
    {
        return this._nodeFactory;
    }

    public com.flurry.org.codehaus.jackson.map.util.LinkedNode getProblemHandlers()
    {
        return this._problemHandlers;
    }

    public com.flurry.org.codehaus.jackson.map.BeanDescription introspect(com.flurry.org.codehaus.jackson.type.JavaType p2)
    {
        return this.getClassIntrospector().forDeserialization(this, p2, this);
    }

    public com.flurry.org.codehaus.jackson.map.BeanDescription introspectClassAnnotations(com.flurry.org.codehaus.jackson.type.JavaType p2)
    {
        return this.getClassIntrospector().forClassAnnotations(this, p2, this);
    }

    public com.flurry.org.codehaus.jackson.map.BeanDescription introspectDirectClassAnnotations(com.flurry.org.codehaus.jackson.type.JavaType p2)
    {
        return this.getClassIntrospector().forDirectClassAnnotations(this, p2, this);
    }

    public com.flurry.org.codehaus.jackson.map.BeanDescription introspectForCreation(com.flurry.org.codehaus.jackson.type.JavaType p2)
    {
        return this.getClassIntrospector().forCreation(this, p2, this);
    }

    public boolean isAnnotationProcessingEnabled()
    {
        return this.isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature.USE_ANNOTATIONS);
    }

    public boolean isEnabled(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature p3)
    {
        int v0_2;
        if ((this._featureFlags & p3.getMask()) == 0) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public bridge synthetic boolean isEnabled(com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature p2)
    {
        return super.isEnabled(p2);
    }

    public com.flurry.org.codehaus.jackson.map.KeyDeserializer keyDeserializerInstance(com.flurry.org.codehaus.jackson.map.introspect.Annotated p4, Class p5)
    {
        com.flurry.org.codehaus.jackson.map.KeyDeserializer v1;
        com.flurry.org.codehaus.jackson.map.HandlerInstantiator v0 = this.getHandlerInstantiator();
        if (v0 == null) {
            v1 = ((com.flurry.org.codehaus.jackson.map.KeyDeserializer) com.flurry.org.codehaus.jackson.map.util.ClassUtil.createInstance(p5, this.canOverrideAccessModifiers()));
        } else {
            v1 = v0.keyDeserializerInstance(this, p4, p5);
            if (v1 == null) {
            }
        }
        return v1;
    }

    protected com.flurry.org.codehaus.jackson.map.DeserializationConfig passSerializationFeatures(int p2)
    {
        int v0_3;
        if ((com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.SORT_PROPERTIES_ALPHABETICALLY.getMask() & p2) == 0) {
            v0_3 = 0;
        } else {
            v0_3 = 1;
        }
        this._sortPropertiesAlphabetically = v0_3;
        return this;
    }

    public void set(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature p1, boolean p2)
    {
        super.set(p1, p2);
        return;
    }

    public bridge synthetic void set(com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature p1, boolean p2)
    {
        this.set(((com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature) p1), p2);
        return;
    }

    public boolean shouldSortPropertiesAlphabetically()
    {
        return this._sortPropertiesAlphabetically;
    }

    public com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator valueInstantiatorInstance(com.flurry.org.codehaus.jackson.map.introspect.Annotated p4, Class p5)
    {
        com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator v1;
        com.flurry.org.codehaus.jackson.map.HandlerInstantiator v0 = this.getHandlerInstantiator();
        if (v0 == null) {
            v1 = ((com.flurry.org.codehaus.jackson.map.deser.ValueInstantiator) com.flurry.org.codehaus.jackson.map.util.ClassUtil.createInstance(p5, this.canOverrideAccessModifiers()));
        } else {
            v1 = v0.valueInstantiatorInstance(this, p4, p5);
            if (v1 == null) {
            }
        }
        return v1;
    }

    public varargs com.flurry.org.codehaus.jackson.map.DeserializationConfig with(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature[] p7)
    {
        int v2 = this._featureFlags;
        int v4 = p7.length;
        int v3 = 0;
        while (v3 < v4) {
            v2 |= p7[v3].getMask();
            v3++;
        }
        return new com.flurry.org.codehaus.jackson.map.DeserializationConfig(this, v2);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig$Impl with(com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature[] p2)
    {
        return this.with(((com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature[]) p2));
    }

    public com.flurry.org.codehaus.jackson.map.DeserializationConfig withAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p3)
    {
        return new com.flurry.org.codehaus.jackson.map.DeserializationConfig(this, this._base.withAnnotationIntrospector(p3));
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p2)
    {
        return this.withAnnotationIntrospector(p2);
    }

    public com.flurry.org.codehaus.jackson.map.DeserializationConfig withAppendedAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p3)
    {
        return new com.flurry.org.codehaus.jackson.map.DeserializationConfig(this, this._base.withAppendedAnnotationIntrospector(p3));
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withAppendedAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p2)
    {
        return this.withAppendedAnnotationIntrospector(p2);
    }

    public com.flurry.org.codehaus.jackson.map.DeserializationConfig withClassIntrospector(com.flurry.org.codehaus.jackson.map.ClassIntrospector p3)
    {
        return new com.flurry.org.codehaus.jackson.map.DeserializationConfig(this, this._base.withClassIntrospector(p3));
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withClassIntrospector(com.flurry.org.codehaus.jackson.map.ClassIntrospector p2)
    {
        return this.withClassIntrospector(p2);
    }

    public com.flurry.org.codehaus.jackson.map.DeserializationConfig withDateFormat(java.text.DateFormat p3)
    {
        if (p3 != this._base.getDateFormat()) {
            this = new com.flurry.org.codehaus.jackson.map.DeserializationConfig(this, this._base.withDateFormat(p3));
        }
        return this;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withDateFormat(java.text.DateFormat p2)
    {
        return this.withDateFormat(p2);
    }

    public com.flurry.org.codehaus.jackson.map.DeserializationConfig withHandlerInstantiator(com.flurry.org.codehaus.jackson.map.HandlerInstantiator p3)
    {
        if (p3 != this._base.getHandlerInstantiator()) {
            this = new com.flurry.org.codehaus.jackson.map.DeserializationConfig(this, this._base.withHandlerInstantiator(p3));
        }
        return this;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withHandlerInstantiator(com.flurry.org.codehaus.jackson.map.HandlerInstantiator p2)
    {
        return this.withHandlerInstantiator(p2);
    }

    public com.flurry.org.codehaus.jackson.map.DeserializationConfig withInsertedAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p3)
    {
        return new com.flurry.org.codehaus.jackson.map.DeserializationConfig(this, this._base.withInsertedAnnotationIntrospector(p3));
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withInsertedAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p2)
    {
        return this.withInsertedAnnotationIntrospector(p2);
    }

    public com.flurry.org.codehaus.jackson.map.DeserializationConfig withNodeFactory(com.flurry.org.codehaus.jackson.node.JsonNodeFactory p2)
    {
        return new com.flurry.org.codehaus.jackson.map.DeserializationConfig(this, p2);
    }

    public com.flurry.org.codehaus.jackson.map.DeserializationConfig withPropertyNamingStrategy(com.flurry.org.codehaus.jackson.map.PropertyNamingStrategy p3)
    {
        return new com.flurry.org.codehaus.jackson.map.DeserializationConfig(this, this._base.withPropertyNamingStrategy(p3));
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withPropertyNamingStrategy(com.flurry.org.codehaus.jackson.map.PropertyNamingStrategy p2)
    {
        return this.withPropertyNamingStrategy(p2);
    }

    public com.flurry.org.codehaus.jackson.map.DeserializationConfig withSubtypeResolver(com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver p2)
    {
        com.flurry.org.codehaus.jackson.map.DeserializationConfig v0_1 = new com.flurry.org.codehaus.jackson.map.DeserializationConfig(this);
        v0_1._subtypeResolver = p2;
        return v0_1;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withSubtypeResolver(com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver p2)
    {
        return this.withSubtypeResolver(p2);
    }

    public com.flurry.org.codehaus.jackson.map.DeserializationConfig withTypeFactory(com.flurry.org.codehaus.jackson.map.type.TypeFactory p3)
    {
        if (p3 != this._base.getTypeFactory()) {
            this = new com.flurry.org.codehaus.jackson.map.DeserializationConfig(this, this._base.withTypeFactory(p3));
        }
        return this;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withTypeFactory(com.flurry.org.codehaus.jackson.map.type.TypeFactory p2)
    {
        return this.withTypeFactory(p2);
    }

    public com.flurry.org.codehaus.jackson.map.DeserializationConfig withTypeResolverBuilder(com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder p3)
    {
        return new com.flurry.org.codehaus.jackson.map.DeserializationConfig(this, this._base.withTypeResolverBuilder(p3));
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withTypeResolverBuilder(com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder p2)
    {
        return this.withTypeResolverBuilder(p2);
    }

    public com.flurry.org.codehaus.jackson.map.DeserializationConfig withVisibility(com.flurry.org.codehaus.jackson.annotate.JsonMethod p3, com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p4)
    {
        return new com.flurry.org.codehaus.jackson.map.DeserializationConfig(this, this._base.withVisibility(p3, p4));
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withVisibility(com.flurry.org.codehaus.jackson.annotate.JsonMethod p2, com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p3)
    {
        return this.withVisibility(p2, p3);
    }

    public com.flurry.org.codehaus.jackson.map.DeserializationConfig withVisibilityChecker(com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p3)
    {
        return new com.flurry.org.codehaus.jackson.map.DeserializationConfig(this, this._base.withVisibilityChecker(p3));
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withVisibilityChecker(com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p2)
    {
        return this.withVisibilityChecker(p2);
    }

    public varargs com.flurry.org.codehaus.jackson.map.DeserializationConfig without(com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature[] p7)
    {
        int v2 = this._featureFlags;
        int v4 = p7.length;
        int v3 = 0;
        while (v3 < v4) {
            v2 &= (p7[v3].getMask() ^ -1);
            v3++;
        }
        return new com.flurry.org.codehaus.jackson.map.DeserializationConfig(this, v2);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig$Impl without(com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature[] p2)
    {
        return this.without(((com.flurry.org.codehaus.jackson.map.DeserializationConfig$Feature[]) p2));
    }
}
