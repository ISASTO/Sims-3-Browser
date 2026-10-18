package com.flurry.org.apache.avro.util;
public class WeakIdentityHashMap implements java.util.Map {
    private java.util.Map backingStore;
    private final ref.ReferenceQueue queue;

    public WeakIdentityHashMap()
    {
        this.queue = new ref.ReferenceQueue();
        this.backingStore = new java.util.HashMap();
        return;
    }

    static synthetic ref.ReferenceQueue access$000(com.flurry.org.apache.avro.util.WeakIdentityHashMap p1)
    {
        return p1.queue;
    }

    private declared_synchronized void reap()
    {
        try {
            ref.Reference v2 = this.queue.poll();
        } catch (ref.ReferenceQueue v3_3) {
            throw v3_3;
        }
        while (v2 != null) {
            this.backingStore.remove(((com.flurry.org.apache.avro.util.WeakIdentityHashMap$IdentityWeakReference) v2));
            v2 = this.queue.poll();
        }
        return;
    }

    public void clear()
    {
        this.backingStore.clear();
        this.reap();
        return;
    }

    public boolean containsKey(Object p3)
    {
        this.reap();
        return this.backingStore.containsKey(new com.flurry.org.apache.avro.util.WeakIdentityHashMap$IdentityWeakReference(this, p3));
    }

    public boolean containsValue(Object p2)
    {
        this.reap();
        return this.backingStore.containsValue(p2);
    }

    public java.util.Set entrySet()
    {
        this.reap();
        java.util.HashSet v4_1 = new java.util.HashSet();
        java.util.Iterator v1 = this.backingStore.entrySet().iterator();
        while (v1.hasNext()) {
            java.util.Map$Entry v3_1 = ((java.util.Map$Entry) v1.next());
            v4_1.add(new com.flurry.org.apache.avro.util.WeakIdentityHashMap$1(this, ((com.flurry.org.apache.avro.util.WeakIdentityHashMap$IdentityWeakReference) v3_1.getKey()).get(), v3_1.getValue()));
        }
        return java.util.Collections.unmodifiableSet(v4_1);
    }

    public boolean equals(Object p3)
    {
        return this.backingStore.equals(((com.flurry.org.apache.avro.util.WeakIdentityHashMap) p3).backingStore);
    }

    public Object get(Object p3)
    {
        this.reap();
        return this.backingStore.get(new com.flurry.org.apache.avro.util.WeakIdentityHashMap$IdentityWeakReference(this, p3));
    }

    public int hashCode()
    {
        this.reap();
        return this.backingStore.hashCode();
    }

    public boolean isEmpty()
    {
        this.reap();
        return this.backingStore.isEmpty();
    }

    public java.util.Set keySet()
    {
        this.reap();
        java.util.HashSet v2_1 = new java.util.HashSet();
        java.util.Iterator v0 = this.backingStore.keySet().iterator();
        while (v0.hasNext()) {
            v2_1.add(((com.flurry.org.apache.avro.util.WeakIdentityHashMap$IdentityWeakReference) v0.next()).get());
        }
        return java.util.Collections.unmodifiableSet(v2_1);
    }

    public Object put(Object p3, Object p4)
    {
        this.reap();
        return this.backingStore.put(new com.flurry.org.apache.avro.util.WeakIdentityHashMap$IdentityWeakReference(this, p3), p4);
    }

    public void putAll(java.util.Map p2)
    {
        throw new UnsupportedOperationException();
    }

    public Object remove(Object p3)
    {
        this.reap();
        return this.backingStore.remove(new com.flurry.org.apache.avro.util.WeakIdentityHashMap$IdentityWeakReference(this, p3));
    }

    public int size()
    {
        this.reap();
        return this.backingStore.size();
    }

    public java.util.Collection values()
    {
        this.reap();
        return this.backingStore.values();
    }
}
