package com.flurry.org.codehaus.jackson.map;
public abstract class MapperConfig implements com.flurry.org.codehaus.jackson.map.ClassIntrospector$MixInResolver {
    protected static final java.text.DateFormat DEFAULT_DATE_FORMAT;
    protected com.flurry.org.codehaus.jackson.map.MapperConfig$Base _base;
    protected java.util.HashMap _mixInAnnotations;
    protected boolean _mixInAnnotationsShared;
    protected com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver _subtypeResolver;

    static MapperConfig()
    {
        com.flurry.org.codehaus.jackson.map.MapperConfig.DEFAULT_DATE_FORMAT = com.flurry.org.codehaus.jackson.map.util.StdDateFormat.instance;
        return;
    }

    protected MapperConfig(com.flurry.org.codehaus.jackson.map.ClassIntrospector p10, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p11, com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p12, com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver p13, com.flurry.org.codehaus.jackson.map.PropertyNamingStrategy p14, com.flurry.org.codehaus.jackson.map.type.TypeFactory p15, com.flurry.org.codehaus.jackson.map.HandlerInstantiator p16)
    {
        this._base = new com.flurry.org.codehaus.jackson.map.MapperConfig$Base(p10, p11, p12, p14, p15, 0, com.flurry.org.codehaus.jackson.map.MapperConfig.DEFAULT_DATE_FORMAT, p16);
        this._subtypeResolver = p13;
        this._mixInAnnotationsShared = 1;
        return;
    }

    protected MapperConfig(com.flurry.org.codehaus.jackson.map.MapperConfig p3)
    {
        this(p3, p3._base, p3._subtypeResolver);
        return;
    }

    protected MapperConfig(com.flurry.org.codehaus.jackson.map.MapperConfig p2, com.flurry.org.codehaus.jackson.map.MapperConfig$Base p3, com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver p4)
    {
        this._base = p3;
        this._subtypeResolver = p4;
        this._mixInAnnotationsShared = 1;
        this._mixInAnnotations = p2._mixInAnnotations;
        return;
    }

    public final void addMixInAnnotations(Class p3, Class p4)
    {
        if (this._mixInAnnotations != null) {
            if (this._mixInAnnotationsShared) {
                this._mixInAnnotationsShared = 0;
                this._mixInAnnotations = new java.util.HashMap(this._mixInAnnotations);
            }
        } else {
            this._mixInAnnotationsShared = 0;
            this._mixInAnnotations = new java.util.HashMap();
        }
        this._mixInAnnotations.put(new com.flurry.org.codehaus.jackson.map.type.ClassKey(p3), p4);
        return;
    }

    public final void appendAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p3)
    {
        this._base = this._base.withAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$Pair.create(this.getAnnotationIntrospector(), p3));
        return;
    }

    public abstract boolean canOverrideAccessModifiers();

    public com.flurry.org.codehaus.jackson.type.JavaType constructSpecializedType(com.flurry.org.codehaus.jackson.type.JavaType p2, Class p3)
    {
        return this.getTypeFactory().constructSpecializedType(p2, p3);
    }

    public final com.flurry.org.codehaus.jackson.type.JavaType constructType(com.flurry.org.codehaus.jackson.type.TypeReference p4)
    {
        return this.getTypeFactory().constructType(p4.getType(), ((com.flurry.org.codehaus.jackson.map.type.TypeBindings) 0));
    }

    public final com.flurry.org.codehaus.jackson.type.JavaType constructType(Class p3)
    {
        return this.getTypeFactory().constructType(p3, ((com.flurry.org.codehaus.jackson.map.type.TypeBindings) 0));
    }

    public abstract com.flurry.org.codehaus.jackson.map.MapperConfig createUnshared(com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver p0);

    public final Class findMixInClassFor(Class p3)
    {
        Class v0_3;
        if (this._mixInAnnotations != null) {
            v0_3 = ((Class) this._mixInAnnotations.get(new com.flurry.org.codehaus.jackson.map.type.ClassKey(p3)));
        } else {
            v0_3 = 0;
        }
        return v0_3;
    }

    public abstract void fromAnnotations(Class p0);

    public com.flurry.org.codehaus.jackson.map.AnnotationIntrospector getAnnotationIntrospector()
    {
        return this._base.getAnnotationIntrospector();
    }

    public com.flurry.org.codehaus.jackson.map.ClassIntrospector getClassIntrospector()
    {
        return this._base.getClassIntrospector();
    }

    public final java.text.DateFormat getDateFormat()
    {
        return this._base.getDateFormat();
    }

    public final com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder getDefaultTyper(com.flurry.org.codehaus.jackson.type.JavaType p2)
    {
        return this._base.getTypeResolverBuilder();
    }

    public com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker getDefaultVisibilityChecker()
    {
        return this._base.getVisibilityChecker();
    }

    public final com.flurry.org.codehaus.jackson.map.HandlerInstantiator getHandlerInstantiator()
    {
        return this._base.getHandlerInstantiator();
    }

    public final com.flurry.org.codehaus.jackson.map.PropertyNamingStrategy getPropertyNamingStrategy()
    {
        return this._base.getPropertyNamingStrategy();
    }

    public final com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver getSubtypeResolver()
    {
        if (this._subtypeResolver == null) {
            this._subtypeResolver = new com.flurry.org.codehaus.jackson.map.jsontype.impl.StdSubtypeResolver();
        }
        return this._subtypeResolver;
    }

    public final com.flurry.org.codehaus.jackson.map.type.TypeFactory getTypeFactory()
    {
        return this._base.getTypeFactory();
    }

    public final void insertAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p3)
    {
        this._base = this._base.withAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$Pair.create(p3, this.getAnnotationIntrospector()));
        return;
    }

    public abstract com.flurry.org.codehaus.jackson.map.BeanDescription introspectClassAnnotations(com.flurry.org.codehaus.jackson.type.JavaType p0);

    public com.flurry.org.codehaus.jackson.map.BeanDescription introspectClassAnnotations(Class p2)
    {
        return this.introspectClassAnnotations(this.constructType(p2));
    }

    public abstract com.flurry.org.codehaus.jackson.map.BeanDescription introspectDirectClassAnnotations(com.flurry.org.codehaus.jackson.type.JavaType p0);

    public com.flurry.org.codehaus.jackson.map.BeanDescription introspectDirectClassAnnotations(Class p2)
    {
        return this.introspectDirectClassAnnotations(this.constructType(p2));
    }

    public abstract boolean isAnnotationProcessingEnabled();

    public abstract boolean isEnabled(com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature p0);

    public final int mixInCount()
    {
        int v0_2;
        if (this._mixInAnnotations != null) {
            v0_2 = this._mixInAnnotations.size();
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    public final void setAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p2)
    {
        this._base = this._base.withAnnotationIntrospector(p2);
        return;
    }

    public void setDateFormat(java.text.DateFormat p2)
    {
        if (p2 == null) {
            p2 = com.flurry.org.codehaus.jackson.map.MapperConfig.DEFAULT_DATE_FORMAT;
        }
        this._base = this._base.withDateFormat(p2);
        return;
    }

    public final void setMixInAnnotations(java.util.Map p6)
    {
        java.util.HashMap v2_0 = 0;
        if ((p6 != null) && (p6.size() > 0)) {
            v2_0 = new java.util.HashMap(p6.size());
            java.util.Iterator v1 = p6.entrySet().iterator();
            while (v1.hasNext()) {
                java.util.Map$Entry v0_1 = ((java.util.Map$Entry) v1.next());
                v2_0.put(new com.flurry.org.codehaus.jackson.map.type.ClassKey(((Class) v0_1.getKey())), v0_1.getValue());
            }
        }
        this._mixInAnnotationsShared = 0;
        this._mixInAnnotations = v2_0;
        return;
    }

    public abstract boolean shouldSortPropertiesAlphabetically();

    public com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver typeIdResolverInstance(com.flurry.org.codehaus.jackson.map.introspect.Annotated p4, Class p5)
    {
        com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver v0;
        com.flurry.org.codehaus.jackson.map.HandlerInstantiator v1 = this.getHandlerInstantiator();
        if (v1 == null) {
            v0 = ((com.flurry.org.codehaus.jackson.map.jsontype.TypeIdResolver) com.flurry.org.codehaus.jackson.map.util.ClassUtil.createInstance(p5, this.canOverrideAccessModifiers()));
        } else {
            v0 = v1.typeIdResolverInstance(this, p4, p5);
            if (v0 == null) {
            }
        }
        return v0;
    }

    public com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder typeResolverBuilderInstance(com.flurry.org.codehaus.jackson.map.introspect.Annotated p4, Class p5)
    {
        com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder v0;
        com.flurry.org.codehaus.jackson.map.HandlerInstantiator v1 = this.getHandlerInstantiator();
        if (v1 == null) {
            v0 = ((com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder) com.flurry.org.codehaus.jackson.map.util.ClassUtil.createInstance(p5, this.canOverrideAccessModifiers()));
        } else {
            v0 = v1.typeResolverBuilderInstance(this, p4, p5);
            if (v0 == null) {
            }
        }
        return v0;
    }

    public abstract com.flurry.org.codehaus.jackson.map.MapperConfig withAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p0);

    public abstract com.flurry.org.codehaus.jackson.map.MapperConfig withAppendedAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p0);

    public abstract com.flurry.org.codehaus.jackson.map.MapperConfig withClassIntrospector(com.flurry.org.codehaus.jackson.map.ClassIntrospector p0);

    public abstract com.flurry.org.codehaus.jackson.map.MapperConfig withDateFormat(java.text.DateFormat p0);

    public abstract com.flurry.org.codehaus.jackson.map.MapperConfig withHandlerInstantiator(com.flurry.org.codehaus.jackson.map.HandlerInstantiator p0);

    public abstract com.flurry.org.codehaus.jackson.map.MapperConfig withInsertedAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p0);

    public abstract com.flurry.org.codehaus.jackson.map.MapperConfig withPropertyNamingStrategy(com.flurry.org.codehaus.jackson.map.PropertyNamingStrategy p0);

    public abstract com.flurry.org.codehaus.jackson.map.MapperConfig withSubtypeResolver(com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver p0);

    public abstract com.flurry.org.codehaus.jackson.map.MapperConfig withTypeFactory(com.flurry.org.codehaus.jackson.map.type.TypeFactory p0);

    public abstract com.flurry.org.codehaus.jackson.map.MapperConfig withTypeResolverBuilder(com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder p0);

    public abstract com.flurry.org.codehaus.jackson.map.MapperConfig withVisibility(com.flurry.org.codehaus.jackson.annotate.JsonMethod p0, com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p1);

    public abstract com.flurry.org.codehaus.jackson.map.MapperConfig withVisibilityChecker(com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p0);
}
