package com.flurry.org.codehaus.jackson.map.jsontype.impl;
public class StdSubtypeResolver extends com.flurry.org.codehaus.jackson.map.jsontype.SubtypeResolver {
    protected java.util.LinkedHashSet _registeredSubtypes;

    public StdSubtypeResolver()
    {
        return;
    }

    protected void _collectAndResolve(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p16, com.flurry.org.codehaus.jackson.map.jsontype.NamedType p17, com.flurry.org.codehaus.jackson.map.MapperConfig p18, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p19, java.util.HashMap p20)
    {
        if (!p17.hasName()) {
            String v10 = p19.findTypeName(p16);
            if (v10 != null) {
                p17 = new com.flurry.org.codehaus.jackson.map.jsontype.NamedType(p17.getType(), v10);
            }
        }
        if (!p20.containsKey(p17)) {
            p20.put(p17, p17);
            java.util.List v13 = p19.findSubtypes(p16);
            if ((v13 != null) && (!v13.isEmpty())) {
                java.util.Iterator v9 = v13.iterator();
                while (v9.hasNext()) {
                    com.flurry.org.codehaus.jackson.map.jsontype.NamedType v5_1 = ((com.flurry.org.codehaus.jackson.map.jsontype.NamedType) v9.next());
                    com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass v4 = com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass.constructWithoutSuperTypes(v5_1.getType(), p19, p18);
                    if (!v5_1.hasName()) {
                        v5_1 = new com.flurry.org.codehaus.jackson.map.jsontype.NamedType(v5_1.getType(), p19.findTypeName(v4));
                    }
                    this._collectAndResolve(v4, v5_1, p18, p19, p20);
                }
            }
        } else {
            if ((p17.hasName()) && (!((com.flurry.org.codehaus.jackson.map.jsontype.NamedType) p20.get(p17)).hasName())) {
                p20.put(p17, p17);
            }
        }
        return;
    }

    public java.util.Collection collectAndResolveSubtypes(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass p17, com.flurry.org.codehaus.jackson.map.MapperConfig p18, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p19)
    {
        java.util.HashMap v7_1 = new java.util.HashMap();
        if (this._registeredSubtypes != null) {
            Class v15 = p17.getRawType();
            java.util.Iterator v14 = this._registeredSubtypes.iterator();
            while (v14.hasNext()) {
                com.flurry.org.codehaus.jackson.map.jsontype.NamedType v4_1 = ((com.flurry.org.codehaus.jackson.map.jsontype.NamedType) v14.next());
                if (v15.isAssignableFrom(v4_1.getType())) {
                    this._collectAndResolve(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass.constructWithoutSuperTypes(v4_1.getType(), p19, p18), v4_1, p18, p19, v7_1);
                }
            }
        }
        this._collectAndResolve(p17, new com.flurry.org.codehaus.jackson.map.jsontype.NamedType(p17.getRawType(), 0), p18, p19, v7_1);
        return new java.util.ArrayList(v7_1.values());
    }

    public java.util.Collection collectAndResolveSubtypes(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedMember p21, com.flurry.org.codehaus.jackson.map.MapperConfig p22, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p23)
    {
        java.util.HashMap v7_1 = new java.util.HashMap();
        if (this._registeredSubtypes != null) {
            Class v18 = p21.getRawType();
            java.util.Iterator v17_0 = this._registeredSubtypes.iterator();
            while (v17_0.hasNext()) {
                com.flurry.org.codehaus.jackson.map.jsontype.NamedType v4_1 = ((com.flurry.org.codehaus.jackson.map.jsontype.NamedType) v17_0.next());
                if (v18.isAssignableFrom(v4_1.getType())) {
                    this._collectAndResolve(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass.constructWithoutSuperTypes(v4_1.getType(), p23, p22), v4_1, p22, p23, v7_1);
                }
            }
        }
        java.util.List v19 = p23.findSubtypes(p21);
        if (v19 != null) {
            java.util.Iterator v17_1 = v19.iterator();
            while (v17_1.hasNext()) {
                com.flurry.org.codehaus.jackson.map.jsontype.NamedType v10_1 = ((com.flurry.org.codehaus.jackson.map.jsontype.NamedType) v17_1.next());
                this._collectAndResolve(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass.constructWithoutSuperTypes(v10_1.getType(), p23, p22), v10_1, p22, p23, v7_1);
            }
        }
        this._collectAndResolve(com.flurry.org.codehaus.jackson.map.introspect.AnnotatedClass.constructWithoutSuperTypes(p21.getRawType(), p23, p22), new com.flurry.org.codehaus.jackson.map.jsontype.NamedType(p21.getRawType(), 0), p22, p23, v7_1);
        return new java.util.ArrayList(v7_1.values());
    }

    public varargs void registerSubtypes(com.flurry.org.codehaus.jackson.map.jsontype.NamedType[] p6)
    {
        if (this._registeredSubtypes == null) {
            this._registeredSubtypes = new java.util.LinkedHashSet();
        }
        int v2 = p6.length;
        int v1 = 0;
        while (v1 < v2) {
            this._registeredSubtypes.add(p6[v1]);
            v1++;
        }
        return;
    }

    public varargs void registerSubtypes(Class[] p6)
    {
        com.flurry.org.codehaus.jackson.map.jsontype.NamedType[] v2 = new com.flurry.org.codehaus.jackson.map.jsontype.NamedType[p6.length];
        int v0 = 0;
        int v1 = p6.length;
        while (v0 < v1) {
            v2[v0] = new com.flurry.org.codehaus.jackson.map.jsontype.NamedType(p6[v0]);
            v0++;
        }
        this.registerSubtypes(v2);
        return;
    }
}
