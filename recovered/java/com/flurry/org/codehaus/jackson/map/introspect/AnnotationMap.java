package com.flurry.org.codehaus.jackson.map.introspect;
public final class AnnotationMap implements com.flurry.org.codehaus.jackson.map.util.Annotations {
    protected java.util.HashMap _annotations;

    public AnnotationMap()
    {
        return;
    }

    private AnnotationMap(java.util.HashMap p1)
    {
        this._annotations = p1;
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap merge(com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap p4, com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap p5)
    {
        if ((p4 != null) && ((p4._annotations != null) && (!p4._annotations.isEmpty()))) {
            if ((p5 != null) && ((p5._annotations != null) && (!p5._annotations.isEmpty()))) {
                java.util.HashMap v1_1 = new java.util.HashMap();
                java.util.Iterator v2_0 = p5._annotations.values().iterator();
                while (v2_0.hasNext()) {
                    otation.Annotation v0_3 = ((otation.Annotation) v2_0.next());
                    v1_1.put(v0_3.annotationType(), v0_3);
                }
                java.util.Iterator v2_1 = p4._annotations.values().iterator();
                while (v2_1.hasNext()) {
                    otation.Annotation v0_1 = ((otation.Annotation) v2_1.next());
                    v1_1.put(v0_1.annotationType(), v0_1);
                }
                p4 = new com.flurry.org.codehaus.jackson.map.introspect.AnnotationMap(v1_1);
            }
        } else {
            p4 = p5;
        }
        return p4;
    }

    protected final void _add(otation.Annotation p3)
    {
        if (this._annotations == null) {
            this._annotations = new java.util.HashMap();
        }
        this._annotations.put(p3.annotationType(), p3);
        return;
    }

    public void add(otation.Annotation p1)
    {
        this._add(p1);
        return;
    }

    public void addIfNotPresent(otation.Annotation p3)
    {
        if ((this._annotations == null) || (!this._annotations.containsKey(p3.annotationType()))) {
            this._add(p3);
        }
        return;
    }

    public otation.Annotation get(Class p2)
    {
        otation.Annotation v0_3;
        if (this._annotations != null) {
            v0_3 = ((otation.Annotation) this._annotations.get(p2));
        } else {
            v0_3 = 0;
        }
        return v0_3;
    }

    public int size()
    {
        int v0_2;
        if (this._annotations != null) {
            v0_2 = this._annotations.size();
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    public String toString()
    {
        String v0_2;
        if (this._annotations != null) {
            v0_2 = this._annotations.toString();
        } else {
            v0_2 = "[null]";
        }
        return v0_2;
    }
}
