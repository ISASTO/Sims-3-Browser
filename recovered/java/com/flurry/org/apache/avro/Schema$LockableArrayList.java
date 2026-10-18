package com.flurry.org.apache.avro;
 class Schema$LockableArrayList extends java.util.ArrayList {
    private static final long serialVersionUID = 1;
    private boolean locked;

    public Schema$LockableArrayList()
    {
        this.locked = 0;
        return;
    }

    public Schema$LockableArrayList(int p2)
    {
        super(p2);
        super.locked = 0;
        return;
    }

    public Schema$LockableArrayList(java.util.List p2)
    {
        super(p2);
        super.locked = 0;
        return;
    }

    private void ensureUnlocked()
    {
        if (!this.locked) {
            return;
        } else {
            throw new IllegalStateException();
        }
    }

    public boolean add(Object p2)
    {
        this.ensureUnlocked();
        return super.add(p2);
    }

    public boolean addAll(int p2, java.util.Collection p3)
    {
        this.ensureUnlocked();
        return super.addAll(p2, p3);
    }

    public boolean addAll(java.util.Collection p2)
    {
        this.ensureUnlocked();
        return super.addAll(p2);
    }

    public void clear()
    {
        this.ensureUnlocked();
        super.clear();
        return;
    }

    public java.util.List lock()
    {
        this.locked = 1;
        return this;
    }

    public Object remove(int p2)
    {
        this.ensureUnlocked();
        return super.remove(p2);
    }

    public boolean remove(Object p2)
    {
        this.ensureUnlocked();
        return super.remove(p2);
    }

    public boolean removeAll(java.util.Collection p2)
    {
        this.ensureUnlocked();
        return super.removeAll(p2);
    }

    public boolean retainAll(java.util.Collection p2)
    {
        this.ensureUnlocked();
        return super.retainAll(p2);
    }
}
