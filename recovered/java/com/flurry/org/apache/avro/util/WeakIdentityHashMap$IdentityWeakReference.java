package com.flurry.org.apache.avro.util;
 class WeakIdentityHashMap$IdentityWeakReference extends java.lang.ref.WeakReference {
    int hash;
    final synthetic com.flurry.org.apache.avro.util.WeakIdentityHashMap this$0;

    WeakIdentityHashMap$IdentityWeakReference(com.flurry.org.apache.avro.util.WeakIdentityHashMap p2, Object p3)
    {
        this.this$0 = p2;
        super(p3, com.flurry.org.apache.avro.util.WeakIdentityHashMap.access$000(p2));
        super.hash = System.identityHashCode(p3);
        return;
    }

    public boolean equals(Object p5)
    {
        int v1 = 1;
        if ((this != p5) && (this.get() != ((com.flurry.org.apache.avro.util.WeakIdentityHashMap$IdentityWeakReference) p5).get())) {
            v1 = 0;
        }
        return v1;
    }

    public int hashCode()
    {
        return this.hash;
    }
}
