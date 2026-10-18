package com.flurry.org.codehaus.jackson.map.type;
public abstract class TypeBase extends com.flurry.org.codehaus.jackson.type.JavaType implements com.flurry.org.codehaus.jackson.map.JsonSerializableWithType {
    volatile String _canonicalName;

    protected TypeBase(Class p1, int p2)
    {
        super(p1, p2);
        return;
    }

    protected TypeBase(Class p1, int p2, Object p3, Object p4)
    {
        super(p1, p2);
        super._valueHandler = p3;
        super._typeHandler = p4;
        return;
    }

    protected static StringBuilder _classSignature(Class p7, StringBuilder p8, boolean p9)
    {
        if (!p7.isPrimitive()) {
            p8.append(76);
            String v3 = p7.getName();
            int v1 = 0;
            int v2 = v3.length();
            while (v1 < v2) {
                int v0 = v3.charAt(v1);
                if (v0 == 46) {
                    v0 = 47;
                }
                p8.append(v0);
                v1++;
            }
            if (p9) {
                p8.append(59);
            }
        } else {
            if (p7 != Boolean.TYPE) {
                if (p7 != Byte.TYPE) {
                    if (p7 != Short.TYPE) {
                        if (p7 != Character.TYPE) {
                            if (p7 != Integer.TYPE) {
                                if (p7 != Long.TYPE) {
                                    if (p7 != Float.TYPE) {
                                        if (p7 != Double.TYPE) {
                                            if (p7 != Void.TYPE) {
                                                throw new IllegalStateException(new StringBuilder().append("Unrecognized primitive type: ").append(p7.getName()).toString());
                                            } else {
                                                p8.append(86);
                                            }
                                        } else {
                                            p8.append(68);
                                        }
                                    } else {
                                        p8.append(70);
                                    }
                                } else {
                                    p8.append(74);
                                }
                            } else {
                                p8.append(73);
                            }
                        } else {
                            p8.append(67);
                        }
                    } else {
                        p8.append(83);
                    }
                } else {
                    p8.append(66);
                }
            } else {
                p8.append(90);
            }
        }
        return p8;
    }

    protected abstract String buildCanonicalName();

    public abstract StringBuilder getErasedSignature(StringBuilder p0);

    public abstract StringBuilder getGenericSignature(StringBuilder p0);

    public Object getTypeHandler()
    {
        return this._typeHandler;
    }

    public Object getValueHandler()
    {
        return this._valueHandler;
    }

    public void serialize(com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        p2.writeString(this.toCanonical());
        return;
    }

    public void serializeWithType(com.flurry.org.codehaus.jackson.JsonGenerator p1, com.flurry.org.codehaus.jackson.map.SerializerProvider p2, com.flurry.org.codehaus.jackson.map.TypeSerializer p3)
    {
        p3.writeTypePrefixForScalar(this, p1);
        this.serialize(p1, p2);
        p3.writeTypeSuffixForScalar(this, p1);
        return;
    }

    public String toCanonical()
    {
        String v0 = this._canonicalName;
        if (v0 == null) {
            v0 = this.buildCanonicalName();
        }
        return v0;
    }
}
