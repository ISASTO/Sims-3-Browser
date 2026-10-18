package com.flurry.org.apache.avro.reflect;
 class ReflectDatumWriter$1 implements java.util.Iterator {
    private int i;
    private final int length;
    final synthetic com.flurry.org.apache.avro.reflect.ReflectDatumWriter this$0;
    final synthetic Object val$array;

    ReflectDatumWriter$1(com.flurry.org.apache.avro.reflect.ReflectDatumWriter p2, Object p3)
    {
        this.this$0 = p2;
        this.val$array = p3;
        this.i = 0;
        this.length = reflect.Array.getLength(this.val$array);
        return;
    }

    public boolean hasNext()
    {
        int v0_1;
        if (this.i >= this.length) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public Object next()
    {
        Object v0_0 = this.val$array;
        int v1 = this.i;
        this.i = (v1 + 1);
        return reflect.Array.get(v0_0, v1);
    }

    public void remove()
    {
        throw new UnsupportedOperationException();
    }
}
