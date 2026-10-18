package com.flurry.org.apache.avro.generic;
public class GenericData$Array extends java.util.AbstractList implements com.flurry.org.apache.avro.generic.GenericArray, java.lang.Comparable {
    private static final Object[] EMPTY;
    private Object[] elements;
    private final com.flurry.org.apache.avro.Schema schema;
    private int size;

    static GenericData$Array()
    {
        Object[] v0_1 = new Object[0];
        com.flurry.org.apache.avro.generic.GenericData$Array.EMPTY = v0_1;
        return;
    }

    public GenericData$Array(int p4, com.flurry.org.apache.avro.Schema p5)
    {
        this.elements = com.flurry.org.apache.avro.generic.GenericData$Array.EMPTY;
        if ((p5 != null) && (com.flurry.org.apache.avro.Schema$Type.ARRAY.equals(p5.getType()))) {
            this.schema = p5;
            if (p4 != 0) {
                Object[] v0_1 = new Object[p4];
                this.elements = v0_1;
            }
            return;
        } else {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Not an array schema: ").append(p5).toString());
        }
    }

    public GenericData$Array(com.flurry.org.apache.avro.Schema p4, java.util.Collection p5)
    {
        this.elements = com.flurry.org.apache.avro.generic.GenericData$Array.EMPTY;
        if ((p4 != null) && (com.flurry.org.apache.avro.Schema$Type.ARRAY.equals(p4.getType()))) {
            this.schema = p4;
            if (p5 != null) {
                Object[] v0_2 = new Object[p5.size()];
                this.elements = v0_2;
                this.addAll(p5);
            }
            return;
        } else {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Not an array schema: ").append(p4).toString());
        }
    }

    static synthetic int access$100(com.flurry.org.apache.avro.generic.GenericData$Array p1)
    {
        return p1.size;
    }

    static synthetic Object[] access$200(com.flurry.org.apache.avro.generic.GenericData$Array p1)
    {
        return p1.elements;
    }

    public void add(int p6, Object p7)
    {
        if ((p6 <= this.size) && (p6 >= 0)) {
            if (this.size == this.elements.length) {
                Object[] v0 = new Object[(((this.size * 3) / 2) + 1)];
                System.arraycopy(this.elements, 0, v0, 0, this.size);
                this.elements = v0;
            }
            System.arraycopy(this.elements, p6, this.elements, (p6 + 1), (this.size - p6));
            this.elements[p6] = p7;
            this.size = (this.size + 1);
            return;
        } else {
            throw new IndexOutOfBoundsException(new StringBuilder().append("Index ").append(p6).append(" out of bounds.").toString());
        }
    }

    public boolean add(Object p5)
    {
        if (this.size == this.elements.length) {
            Object[] v0 = new Object[(((this.size * 3) / 2) + 1)];
            System.arraycopy(this.elements, 0, v0, 0, this.size);
            this.elements = v0;
        }
        int v1_2 = this.elements;
        int v2_1 = this.size;
        this.size = (v2_1 + 1);
        v1_2[v2_1] = p5;
        return 1;
    }

    public void clear()
    {
        this.size = 0;
        return;
    }

    public int compareTo(com.flurry.org.apache.avro.generic.GenericArray p3)
    {
        return com.flurry.org.apache.avro.generic.GenericData.get().compare(this, p3, this.getSchema());
    }

    public bridge synthetic int compareTo(Object p2)
    {
        return this.compareTo(((com.flurry.org.apache.avro.generic.GenericArray) p2));
    }

    public Object get(int p4)
    {
        if (p4 < this.size) {
            return this.elements[p4];
        } else {
            throw new IndexOutOfBoundsException(new StringBuilder().append("Index ").append(p4).append(" out of bounds.").toString());
        }
    }

    public com.flurry.org.apache.avro.Schema getSchema()
    {
        return this.schema;
    }

    public java.util.Iterator iterator()
    {
        return new com.flurry.org.apache.avro.generic.GenericData$Array$1(this);
    }

    public Object peek()
    {
        int v0_1;
        if (this.size >= this.elements.length) {
            v0_1 = 0;
        } else {
            v0_1 = this.elements[this.size];
        }
        return v0_1;
    }

    public Object remove(int p6)
    {
        if (p6 < this.size) {
            Object v0 = this.elements[p6];
            this.size = (this.size - 1);
            System.arraycopy(this.elements, (p6 + 1), this.elements, p6, (this.size - p6));
            this.elements[this.size] = 0;
            return v0;
        } else {
            throw new IndexOutOfBoundsException(new StringBuilder().append("Index ").append(p6).append(" out of bounds.").toString());
        }
    }

    public void reverse()
    {
        int v0 = 0;
        int v1 = (this.elements.length - 1);
        while (v0 < v1) {
            Object v2 = this.elements[v0];
            this.elements[v0] = this.elements[v1];
            this.elements[v1] = v2;
            v0++;
            v1--;
        }
        return;
    }

    public Object set(int p5, Object p6)
    {
        if (p5 < this.size) {
            Object v0 = this.elements[p5];
            this.elements[p5] = p6;
            return v0;
        } else {
            throw new IndexOutOfBoundsException(new StringBuilder().append("Index ").append(p5).append(" out of bounds.").toString());
        }
    }

    public int size()
    {
        return this.size;
    }

    public String toString()
    {
        StringBuffer v0_1 = new StringBuffer();
        v0_1.append("[");
        int v1 = 0;
        java.util.Iterator v3 = this.iterator();
        while (v3.hasNext()) {
            String v4_2;
            Object v2 = v3.next();
            if (v2 != null) {
                v4_2 = v2.toString();
            } else {
                v4_2 = "null";
            }
            v0_1.append(v4_2);
            v1++;
            if (v1 < this.size()) {
                v0_1.append(", ");
            }
        }
        v0_1.append("]");
        return v0_1.toString();
    }
}
