package com.flurry.org.apache.avro.generic;
 class GenericData$Array$1 implements java.util.Iterator {
    private int position;
    final synthetic com.flurry.org.apache.avro.generic.GenericData$Array this$0;

    GenericData$Array$1(com.flurry.org.apache.avro.generic.GenericData$Array p2)
    {
        this.this$0 = p2;
        this.position = 0;
        return;
    }

    public boolean hasNext()
    {
        int v0_1;
        if (this.position >= com.flurry.org.apache.avro.generic.GenericData$Array.access$100(this.this$0)) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public Object next()
    {
        Object v0_1 = com.flurry.org.apache.avro.generic.GenericData$Array.access$200(this.this$0);
        int v1 = this.position;
        this.position = (v1 + 1);
        return v0_1[v1];
    }

    public void remove()
    {
        throw new UnsupportedOperationException();
    }
}
