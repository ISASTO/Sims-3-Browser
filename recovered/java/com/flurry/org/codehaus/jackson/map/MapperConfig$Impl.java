package com.flurry.org.codehaus.jackson.map;
abstract class MapperConfig$Impl extends com.flurry.org.codehaus.jackson.map.MapperConfig {
    protected int _featureFlags;

    protected MapperConfig$Impl(com.flurry.org.codehaus.jackson.map.ClassIntrospector p1, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p2, com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p3, com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver p4, com.flurry.org.codehaus.jackson.map.PropertyNamingStrategy p5, com.flurry.org.codehaus.jackson.map.type.TypeFactory p6, com.flurry.org.codehaus.jackson.map.HandlerInstantiator p7, int p8)
    {
        super(p1, p2, p3, p4, p5, p6, p7)._featureFlags = p8;
        return;
    }

    protected MapperConfig$Impl(com.flurry.org.codehaus.jackson.map.MapperConfig$Impl p2)
    {
        super(p2);
        super._featureFlags = p2._featureFlags;
        return;
    }

    protected MapperConfig$Impl(com.flurry.org.codehaus.jackson.map.MapperConfig$Impl p1, int p2)
    {
        super(p1);
        super._featureFlags = p2;
        return;
    }

    protected MapperConfig$Impl(com.flurry.org.codehaus.jackson.map.MapperConfig$Impl p2, com.flurry.org.codehaus.jackson.map.MapperConfig$Base p3, com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver p4)
    {
        super(p2, p3, p4);
        super._featureFlags = p2._featureFlags;
        return;
    }

    static int collectFeatureDefaults(Class p6)
    {
        int v1 = 0;
        Enum[] v0_1 = ((Enum[]) p6.getEnumConstants());
        int v3 = v0_1.length;
        int v2 = 0;
        while (v2 < v3) {
            com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature v4_1 = v0_1[v2];
            if (((com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature) v4_1).enabledByDefault()) {
                v1 |= ((com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature) v4_1).getMask();
            }
            v2++;
        }
        return v1;
    }

    public void disable(com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature p3)
    {
        this._featureFlags = (this._featureFlags & (p3.getMask() ^ -1));
        return;
    }

    public void enable(com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature p3)
    {
        this._featureFlags = (this._featureFlags | p3.getMask());
        return;
    }

    public boolean isEnabled(com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature p3)
    {
        int v0_2;
        if ((this._featureFlags & p3.getMask()) == 0) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public void set(com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature p1, boolean p2)
    {
        if (!p2) {
            this.disable(p1);
        } else {
            this.enable(p1);
        }
        return;
    }

    public abstract varargs com.flurry.org.codehaus.jackson.map.MapperConfig$Impl with(com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature[] p0);

    public abstract varargs com.flurry.org.codehaus.jackson.map.MapperConfig$Impl without(com.flurry.org.codehaus.jackson.map.MapperConfig$ConfigFeature[] p0);
}
