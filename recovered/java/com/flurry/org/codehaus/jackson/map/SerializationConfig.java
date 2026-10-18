package com.flurry.org.codehaus.jackson.map;
public class SerializationConfig extends com.flurry.org.codehaus.jackson.map.MapperConfig$Impl {
    protected com.flurry.org.codehaus.jackson.map.ser.FilterProvider _filterProvider;
    protected com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion _serializationInclusion;
    protected Class _serializationView;

    public SerializationConfig(com.flurry.org.codehaus.jackson.map.ClassIntrospector p10, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p11, com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p12, com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver p13, com.flurry.org.codehaus.jackson.map.PropertyNamingStrategy p14, com.flurry.org.codehaus.jackson.map.type.TypeFactory p15, com.flurry.org.codehaus.jackson.map.HandlerInstantiator p16)
    {
        super(p10, p11, p12, p13, p14, p15, p16, com.flurry.org.codehaus.jackson.map.SerializationConfig.collectFeatureDefaults(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature));
        super._serializationInclusion = 0;
        super._filterProvider = 0;
        return;
    }

    protected SerializationConfig(com.flurry.org.codehaus.jackson.map.SerializationConfig p2)
    {
        this(p2, p2._base);
        return;
    }

    protected SerializationConfig(com.flurry.org.codehaus.jackson.map.SerializationConfig p2, int p3)
    {
        super(p2, p3);
        super._serializationInclusion = 0;
        super._serializationInclusion = p2._serializationInclusion;
        super._serializationView = p2._serializationView;
        super._filterProvider = p2._filterProvider;
        return;
    }

    protected SerializationConfig(com.flurry.org.codehaus.jackson.map.SerializationConfig p2, com.flurry.org.codehaus.jackson.map.MapperConfig$Base p3)
    {
        super(p2, p3, p2._subtypeResolver);
        super._serializationInclusion = 0;
        super._serializationInclusion = p2._serializationInclusion;
        super._serializationView = p2._serializationView;
        super._filterProvider = p2._filterProvider;
        return;
    }

    protected SerializationConfig(com.flurry.org.codehaus.jackson.map.SerializationConfig p3, com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion p4)
    {
        super(p3);
        super._serializationInclusion = 0;
        super._serializationInclusion = p4;
        if (p4 != com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion.NON_NULL) {
            super._featureFlags = (super._featureFlags | com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_NULL_PROPERTIES.getMask());
        } else {
            super._featureFlags = (super._featureFlags & (com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_NULL_PROPERTIES.getMask() ^ -1));
        }
        super._serializationView = p3._serializationView;
        super._filterProvider = p3._filterProvider;
        return;
    }

    protected SerializationConfig(com.flurry.org.codehaus.jackson.map.SerializationConfig p2, com.flurry.org.codehaus.jackson.map.ser.FilterProvider p3)
    {
        super(p2);
        super._serializationInclusion = 0;
        super._serializationInclusion = p2._serializationInclusion;
        super._serializationView = p2._serializationView;
        super._filterProvider = p3;
        return;
    }

    protected SerializationConfig(com.flurry.org.codehaus.jackson.map.SerializationConfig p2, Class p3)
    {
        super(p2);
        super._serializationInclusion = 0;
        super._serializationInclusion = p2._serializationInclusion;
        super._serializationView = p3;
        super._filterProvider = p2._filterProvider;
        return;
    }

    protected SerializationConfig(com.flurry.org.codehaus.jackson.map.SerializationConfig p2, java.util.HashMap p3, com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver p4)
    {
        this(p2, p2._base);
        this._mixInAnnotations = p3;
        this._subtypeResolver = p4;
        return;
    }

    public boolean canOverrideAccessModifiers()
    {
        return this.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.CAN_OVERRIDE_ACCESS_MODIFIERS);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig createUnshared(com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver p2)
    {
        return this.createUnshared(p2);
    }

    public com.flurry.org.codehaus.jackson.map.SerializationConfig createUnshared(com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver p3)
    {
        java.util.HashMap v0 = this._mixInAnnotations;
        this._mixInAnnotationsShared = 1;
        return new com.flurry.org.codehaus.jackson.map.SerializationConfig(this, v0, p3);
    }

    public bridge synthetic void disable(com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature p1)
    {
        this.disable(((com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature) p1));
        return;
    }

    public void disable(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature p1)
    {
        super.disable(p1);
        return;
    }

    public bridge synthetic void enable(com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature p1)
    {
        this.enable(((com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature) p1));
        return;
    }

    public void enable(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature p1)
    {
        super.enable(p1);
        return;
    }

    public void fromAnnotations(Class p8)
    {
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v1 = this.getAnnotationIntrospector();
        com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass v0 = com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass.construct(p8, v1, 0);
        this._base = this._base.withVisibilityChecker(v1.findAutoDetectVisibility(v0, this.getDefaultVisibilityChecker()));
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion v2 = v1.findSerializationInclusion(v0, 0);
        if (v2 != this._serializationInclusion) {
            this.setSerializationInclusion(v2);
        }
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing v3 = v1.findSerializationTyping(v0);
        if (v3 != null) {
            int v4_3;
            if (v3 != com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Typing.STATIC) {
                v4_3 = 0;
            } else {
                v4_3 = 1;
            }
            this.set(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.USE_STATIC_TYPING, v4_3);
        }
        return;
    }

    public com.flurry.org.codehaus.jackson.map.AnnotationIntrospector getAnnotationIntrospector()
    {
        com.flurry.org.codehaus.jackson.map.AnnotationIntrospector v0_2;
        if (!this.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.USE_ANNOTATIONS)) {
            v0_2 = com.flurry.org.codehaus.jackson.map.AnnotationIntrospector.nopInstance();
        } else {
            v0_2 = super.getAnnotationIntrospector();
        }
        return v0_2;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker getDefaultVisibilityChecker()
    {
        com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker v0 = super.getDefaultVisibilityChecker();
        if (!this.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.AUTO_DETECT_GETTERS)) {
            v0 = v0.withGetterVisibility(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.NONE);
        }
        if (!this.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.AUTO_DETECT_IS_GETTERS)) {
            v0 = v0.withIsGetterVisibility(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.NONE);
        }
        if (!this.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.AUTO_DETECT_FIELDS)) {
            v0 = v0.withFieldVisibility(com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility.NONE);
        }
        return v0;
    }

    public com.flurry.org.codehaus.jackson.map.ser.FilterProvider getFilterProvider()
    {
        return this._filterProvider;
    }

    public com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion getSerializationInclusion()
    {
        com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion v0_3;
        if (this._serializationInclusion == null) {
            if (!this.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_NULL_PROPERTIES)) {
                v0_3 = com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion.NON_NULL;
            } else {
                v0_3 = com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion.ALWAYS;
            }
        } else {
            v0_3 = this._serializationInclusion;
        }
        return v0_3;
    }

    public Class getSerializationView()
    {
        return this._serializationView;
    }

    public com.flurry.org.codehaus.jackson.map.BeanDescription introspect(com.flurry.org.codehaus.jackson.type.JavaType p2)
    {
        return this.getClassIntrospector().forSerialization(this, p2, this);
    }

    public com.flurry.org.codehaus.jackson.map.BeanDescription introspectClassAnnotations(com.flurry.org.codehaus.jackson.type.JavaType p2)
    {
        return this.getClassIntrospector().forClassAnnotations(this, p2, this);
    }

    public com.flurry.org.codehaus.jackson.map.BeanDescription introspectDirectClassAnnotations(com.flurry.org.codehaus.jackson.type.JavaType p2)
    {
        return this.getClassIntrospector().forDirectClassAnnotations(this, p2, this);
    }

    public boolean isAnnotationProcessingEnabled()
    {
        return this.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.USE_ANNOTATIONS);
    }

    public bridge synthetic boolean isEnabled(com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature p2)
    {
        return super.isEnabled(p2);
    }

    public boolean isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature p3)
    {
        int v0_2;
        if ((this._featureFlags & p3.getMask()) == 0) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer serializerInstance(com.flurry.org.codehaus.jackson.map.introspect.Annotated p4, Class p5)
    {
        com.flurry.org.codehaus.jackson.map.JsonSerializer v1;
        com.flurry.org.codehaus.jackson.map.HandlerInstantiator v0 = this.getHandlerInstantiator();
        if (v0 == null) {
            v1 = ((com.flurry.org.codehaus.jackson.map.JsonSerializer) com.flurry.org.codehaus.jackson.map.util.ClassUtil.createInstance(p5, this.canOverrideAccessModifiers()));
        } else {
            v1 = v0.serializerInstance(this, p4, p5);
            if (v1 == null) {
            }
        }
        return v1;
    }

    public bridge synthetic void set(com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature p1, boolean p2)
    {
        this.set(((com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature) p1), p2);
        return;
    }

    public void set(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature p1, boolean p2)
    {
        super.set(p1, p2);
        return;
    }

    public final void setDateFormat(java.text.DateFormat p3)
    {
        int v0;
        super.setDateFormat(p3);
        if (p3 != null) {
            v0 = 0;
        } else {
            v0 = 1;
        }
        this.set(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_DATES_AS_TIMESTAMPS, v0);
        return;
    }

    public void setSerializationInclusion(com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion p2)
    {
        this._serializationInclusion = p2;
        if (p2 != com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion.NON_NULL) {
            this.enable(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_NULL_PROPERTIES);
        } else {
            this.disable(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_NULL_PROPERTIES);
        }
        return;
    }

    public void setSerializationView(Class p1)
    {
        this._serializationView = p1;
        return;
    }

    public boolean shouldSortPropertiesAlphabetically()
    {
        return this.isEnabled(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.SORT_PROPERTIES_ALPHABETICALLY);
    }

    public String toString()
    {
        return new StringBuilder().append("[SerializationConfig: flags=0x").append(Integer.toHexString(this._featureFlags)).append("]").toString();
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig$Impl with(com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature[] p2)
    {
        return this.with(((com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature[]) p2));
    }

    public varargs com.flurry.org.codehaus.jackson.map.SerializationConfig with(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature[] p7)
    {
        int v2 = this._featureFlags;
        int v4 = p7.length;
        int v3 = 0;
        while (v3 < v4) {
            v2 |= p7[v3].getMask();
            v3++;
        }
        return new com.flurry.org.codehaus.jackson.map.SerializationConfig(this, v2);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p2)
    {
        return this.withAnnotationIntrospector(p2);
    }

    public com.flurry.org.codehaus.jackson.map.SerializationConfig withAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p3)
    {
        return new com.flurry.org.codehaus.jackson.map.SerializationConfig(this, this._base.withAnnotationIntrospector(p3));
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withAppendedAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p2)
    {
        return this.withAppendedAnnotationIntrospector(p2);
    }

    public com.flurry.org.codehaus.jackson.map.SerializationConfig withAppendedAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p3)
    {
        return new com.flurry.org.codehaus.jackson.map.SerializationConfig(this, this._base.withAppendedAnnotationIntrospector(p3));
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withClassIntrospector(com.flurry.org.codehaus.jackson.map.ClassIntrospector p2)
    {
        return this.withClassIntrospector(p2);
    }

    public com.flurry.org.codehaus.jackson.map.SerializationConfig withClassIntrospector(com.flurry.org.codehaus.jackson.map.ClassIntrospector p3)
    {
        return new com.flurry.org.codehaus.jackson.map.SerializationConfig(this, this._base.withClassIntrospector(p3));
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withDateFormat(java.text.DateFormat p2)
    {
        return this.withDateFormat(p2);
    }

    public com.flurry.org.codehaus.jackson.map.SerializationConfig withDateFormat(java.text.DateFormat p5)
    {
        com.flurry.org.codehaus.jackson.map.SerializationConfig v0_0;
        com.flurry.org.codehaus.jackson.map.SerializationConfig v0_2 = new com.flurry.org.codehaus.jackson.map.SerializationConfig(this, this._base.withDateFormat(p5));
        if (p5 != null) {
            com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature[] v1_3 = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature[1];
            v1_3[0] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_DATES_AS_TIMESTAMPS;
            v0_0 = v0_2.without(v1_3);
        } else {
            com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature[] v1_0 = new com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature[1];
            v1_0[0] = com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature.WRITE_DATES_AS_TIMESTAMPS;
            v0_0 = v0_2.with(v1_0);
        }
        return v0_0;
    }

    public com.flurry.org.codehaus.jackson.map.SerializationConfig withFilters(com.flurry.org.codehaus.jackson.map.ser.FilterProvider p2)
    {
        return new com.flurry.org.codehaus.jackson.map.SerializationConfig(this, p2);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withHandlerInstantiator(com.flurry.org.codehaus.jackson.map.HandlerInstantiator p2)
    {
        return this.withHandlerInstantiator(p2);
    }

    public com.flurry.org.codehaus.jackson.map.SerializationConfig withHandlerInstantiator(com.flurry.org.codehaus.jackson.map.HandlerInstantiator p3)
    {
        return new com.flurry.org.codehaus.jackson.map.SerializationConfig(this, this._base.withHandlerInstantiator(p3));
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withInsertedAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p2)
    {
        return this.withInsertedAnnotationIntrospector(p2);
    }

    public com.flurry.org.codehaus.jackson.map.SerializationConfig withInsertedAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p3)
    {
        return new com.flurry.org.codehaus.jackson.map.SerializationConfig(this, this._base.withInsertedAnnotationIntrospector(p3));
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withPropertyNamingStrategy(com.flurry.org.codehaus.jackson.map.PropertyNamingStrategy p2)
    {
        return this.withPropertyNamingStrategy(p2);
    }

    public com.flurry.org.codehaus.jackson.map.SerializationConfig withPropertyNamingStrategy(com.flurry.org.codehaus.jackson.map.PropertyNamingStrategy p3)
    {
        return new com.flurry.org.codehaus.jackson.map.SerializationConfig(this, this._base.withPropertyNamingStrategy(p3));
    }

    public com.flurry.org.codehaus.jackson.map.SerializationConfig withSerializationInclusion(com.flurry.org.codehaus.jackson.map.annotate.JsonSerialize$Inclusion p2)
    {
        return new com.flurry.org.codehaus.jackson.map.SerializationConfig(this, p2);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withSubtypeResolver(com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver p2)
    {
        return this.withSubtypeResolver(p2);
    }

    public com.flurry.org.codehaus.jackson.map.SerializationConfig withSubtypeResolver(com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver p2)
    {
        com.flurry.org.codehaus.jackson.map.SerializationConfig v0_1 = new com.flurry.org.codehaus.jackson.map.SerializationConfig(this);
        v0_1._subtypeResolver = p2;
        return v0_1;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withTypeFactory(com.flurry.org.codehaus.jackson.map.type.TypeFactory p2)
    {
        return this.withTypeFactory(p2);
    }

    public com.flurry.org.codehaus.jackson.map.SerializationConfig withTypeFactory(com.flurry.org.codehaus.jackson.map.type.TypeFactory p3)
    {
        return new com.flurry.org.codehaus.jackson.map.SerializationConfig(this, this._base.withTypeFactory(p3));
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withTypeResolverBuilder(com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder p2)
    {
        return this.withTypeResolverBuilder(p2);
    }

    public com.flurry.org.codehaus.jackson.map.SerializationConfig withTypeResolverBuilder(com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder p3)
    {
        return new com.flurry.org.codehaus.jackson.map.SerializationConfig(this, this._base.withTypeResolverBuilder(p3));
    }

    public com.flurry.org.codehaus.jackson.map.SerializationConfig withView(Class p2)
    {
        return new com.flurry.org.codehaus.jackson.map.SerializationConfig(this, p2);
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withVisibility(com.flurry.org.codehaus.jackson.annotate.JsonMethod p2, com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p3)
    {
        return this.withVisibility(p2, p3);
    }

    public com.flurry.org.codehaus.jackson.map.SerializationConfig withVisibility(com.flurry.org.codehaus.jackson.annotate.JsonMethod p3, com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p4)
    {
        return new com.flurry.org.codehaus.jackson.map.SerializationConfig(this, this._base.withVisibility(p3, p4));
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig withVisibilityChecker(com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p2)
    {
        return this.withVisibilityChecker(p2);
    }

    public com.flurry.org.codehaus.jackson.map.SerializationConfig withVisibilityChecker(com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p3)
    {
        return new com.flurry.org.codehaus.jackson.map.SerializationConfig(this, this._base.withVisibilityChecker(p3));
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.map.MapperConfig$Impl without(com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature[] p2)
    {
        return this.without(((com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature[]) p2));
    }

    public varargs com.flurry.org.codehaus.jackson.map.SerializationConfig without(com.flurry.org.codehaus.jackson.map.SerializationConfig$Feature[] p7)
    {
        int v2 = this._featureFlags;
        int v4 = p7.length;
        int v3 = 0;
        while (v3 < v4) {
            v2 &= (p7[v3].getMask() ^ -1);
            v3++;
        }
        return new com.flurry.org.codehaus.jackson.map.SerializationConfig(this, v2);
    }
}
