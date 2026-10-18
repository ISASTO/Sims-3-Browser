package com.flurry.org.codehaus.jackson.map.util;
public class RootNameLookup {
    protected com.flurry.org.codehaus.jackson.map.util.LRUMap _rootNames;

    public RootNameLookup()
    {
        return;
    }

    public com.flurry.org.codehaus.jackson.io.SerializedString findRootName(com.flurry.org.codehaus.jackson.type.JavaType p2, com.flurry.org.codehaus.jackson.map.MapperConfig p3)
    {
        return this.findRootName(p2.getRawClass(), p3);
    }

    public declared_synchronized com.flurry.org.codehaus.jackson.io.SerializedString findRootName(Class p10, com.flurry.org.codehaus.jackson.map.MapperConfig p11)
    {
        try {
            com.flurry.org.codehaus.jackson.io.SerializedString v4_1;
            com.flurry.org.codehaus.jackson.map.type.ClassKey v3_1 = new com.flurry.org.codehaus.jackson.map.type.ClassKey(p10);
        } catch (com.flurry.org.codehaus.jackson.map.util.LRUMap v6_3) {
            throw v6_3;
        }
        if (this._rootNames != null) {
            v4_1 = ((com.flurry.org.codehaus.jackson.io.SerializedString) this._rootNames.get(v3_1));
            if (v4_1 == null) {
                String v5 = p11.getAnnotationIntrospector().findRootName(((com.flurry.org.codehaus.jackson.map.introspect.BasicBeanDescription) p11.introspectClassAnnotations(p10)).getClassInfo());
                if (v5 == null) {
                    v5 = p10.getSimpleName();
                }
                v4_1 = new com.flurry.org.codehaus.jackson.io.SerializedString(v5);
                this._rootNames.put(v3_1, v4_1);
            }
        } else {
            this._rootNames = new com.flurry.org.codehaus.jackson.map.util.LRUMap(20, 200);
        }
        return v4_1;
    }
}
