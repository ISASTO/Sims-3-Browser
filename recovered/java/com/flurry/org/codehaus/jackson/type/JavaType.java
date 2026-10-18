package com.flurry.org.codehaus.jackson.type;
public abstract class JavaType {
    protected final Class _class;
    protected final int _hashCode;
    protected Object _typeHandler;
    protected Object _valueHandler;

    protected JavaType(Class p3, int p4)
    {
        this._class = p3;
        this._hashCode = (p3.getName().hashCode() + p4);
        this._valueHandler = 0;
        this._typeHandler = 0;
        return;
    }

    protected void _assertSubclass(Class p4, Class p5)
    {
        if (this._class.isAssignableFrom(p4)) {
            return;
        } else {
            throw new IllegalArgumentException(new StringBuilder().append("Class ").append(p4.getName()).append(" is not assignable to ").append(this._class.getName()).toString());
        }
    }

    protected abstract com.flurry.org.codehaus.jackson.type.JavaType _narrow(Class p0);

    protected com.flurry.org.codehaus.jackson.type.JavaType _widen(Class p2)
    {
        return this._narrow(p2);
    }

    public com.flurry.org.codehaus.jackson.type.JavaType containedType(int p2)
    {
        return 0;
    }

    public int containedTypeCount()
    {
        return 0;
    }

    public String containedTypeName(int p2)
    {
        return 0;
    }

    public abstract boolean equals(Object p0);

    public com.flurry.org.codehaus.jackson.type.JavaType forcedNarrowBy(Class p4)
    {
        if (p4 != this._class) {
            com.flurry.org.codehaus.jackson.type.JavaType v0 = this._narrow(p4);
            if (this._valueHandler != v0.getValueHandler()) {
                v0 = v0.withValueHandler(this._valueHandler);
            }
            if (this._typeHandler != v0.getTypeHandler()) {
                v0 = v0.withTypeHandler(this._typeHandler);
            }
            this = v0;
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.type.JavaType getContentType()
    {
        return 0;
    }

    public String getErasedSignature()
    {
        StringBuilder v0_1 = new StringBuilder(40);
        this.getErasedSignature(v0_1);
        return v0_1.toString();
    }

    public abstract StringBuilder getErasedSignature(StringBuilder p0);

    public String getGenericSignature()
    {
        StringBuilder v0_1 = new StringBuilder(40);
        this.getGenericSignature(v0_1);
        return v0_1.toString();
    }

    public abstract StringBuilder getGenericSignature(StringBuilder p0);

    public com.flurry.org.codehaus.jackson.type.JavaType getKeyType()
    {
        return 0;
    }

    public final Class getRawClass()
    {
        return this._class;
    }

    public Object getTypeHandler()
    {
        return this._typeHandler;
    }

    public Object getValueHandler()
    {
        return this._valueHandler;
    }

    public boolean hasGenericTypes()
    {
        int v0_1;
        if (this.containedTypeCount() <= 0) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public final boolean hasRawClass(Class p2)
    {
        int v0_1;
        if (this._class != p2) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public final int hashCode()
    {
        return this._hashCode;
    }

    public boolean isAbstract()
    {
        return reflect.Modifier.isAbstract(this._class.getModifiers());
    }

    public boolean isArrayType()
    {
        return 0;
    }

    public boolean isCollectionLikeType()
    {
        return 0;
    }

    public boolean isConcrete()
    {
        int v1 = 1;
        if (((this._class.getModifiers() & 1536) != 0) && (!this._class.isPrimitive())) {
            v1 = 0;
        }
        return v1;
    }

    public abstract boolean isContainerType();

    public final boolean isEnumType()
    {
        return this._class.isEnum();
    }

    public final boolean isFinal()
    {
        return reflect.Modifier.isFinal(this._class.getModifiers());
    }

    public final boolean isInterface()
    {
        return this._class.isInterface();
    }

    public boolean isMapLikeType()
    {
        return 0;
    }

    public final boolean isPrimitive()
    {
        return this._class.isPrimitive();
    }

    public boolean isThrowable()
    {
        return Throwable.isAssignableFrom(this._class);
    }

    public com.flurry.org.codehaus.jackson.type.JavaType narrowBy(Class p4)
    {
        if (p4 != this._class) {
            this._assertSubclass(p4, this._class);
            com.flurry.org.codehaus.jackson.type.JavaType v0 = this._narrow(p4);
            if (this._valueHandler != v0.getValueHandler()) {
                v0 = v0.withValueHandler(this._valueHandler);
            }
            if (this._typeHandler != v0.getTypeHandler()) {
                v0 = v0.withTypeHandler(this._typeHandler);
            }
            this = v0;
        }
        return this;
    }

    public abstract com.flurry.org.codehaus.jackson.type.JavaType narrowContentsBy(Class p0);

    public void setValueHandler(Object p4)
    {
        if ((p4 == null) || (this._valueHandler == null)) {
            this._valueHandler = p4;
            return;
        } else {
            throw new IllegalStateException(new StringBuilder().append("Trying to reset value handler for type [").append(this.toString()).append("]; old handler of type ").append(this._valueHandler.getClass().getName()).append(", new handler of type ").append(p4.getClass().getName()).toString());
        }
    }

    public abstract String toCanonical();

    public abstract String toString();

    public com.flurry.org.codehaus.jackson.type.JavaType widenBy(Class p2)
    {
        if (p2 != this._class) {
            this._assertSubclass(this._class, p2);
            this = this._widen(p2);
        }
        return this;
    }

    public abstract com.flurry.org.codehaus.jackson.type.JavaType widenContentsBy(Class p0);

    public abstract com.flurry.org.codehaus.jackson.type.JavaType withContentTypeHandler(Object p0);

    public com.flurry.org.codehaus.jackson.type.JavaType withContentValueHandler(Object p2)
    {
        this.getContentType().setValueHandler(p2);
        return this;
    }

    public abstract com.flurry.org.codehaus.jackson.type.JavaType withTypeHandler(Object p0);

    public com.flurry.org.codehaus.jackson.type.JavaType withValueHandler(Object p1)
    {
        this.setValueHandler(p1);
        return this;
    }
}
