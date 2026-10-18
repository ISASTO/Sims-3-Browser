package com.flurry.org.apache.avro.util;
 class WeakIdentityHashMap$1 implements java.util.Map$Entry {
    final synthetic com.flurry.org.apache.avro.util.WeakIdentityHashMap this$0;
    final synthetic Object val$key;
    final synthetic Object val$value;

    WeakIdentityHashMap$1(com.flurry.org.apache.avro.util.WeakIdentityHashMap p1, Object p2, Object p3)
    {
        this.this$0 = p1;
        this.val$key = p2;
        this.val$value = p3;
        return;
    }

    public Object getKey()
    {
        return this.val$key;
    }

    public Object getValue()
    {
        return this.val$value;
    }

    public Object setValue(Object p2)
    {
        throw new UnsupportedOperationException();
    }
}
