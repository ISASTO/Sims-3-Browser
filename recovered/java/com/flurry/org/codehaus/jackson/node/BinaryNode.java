package com.flurry.org.codehaus.jackson.node;
public final class BinaryNode extends com.flurry.org.codehaus.jackson.node.ValueNode {
    static final com.flurry.org.codehaus.jackson.node.BinaryNode EMPTY_BINARY_NODE;
    final byte[] _data;

    static BinaryNode()
    {
        byte[] v1_1 = new byte[0];
        com.flurry.org.codehaus.jackson.node.BinaryNode.EMPTY_BINARY_NODE = new com.flurry.org.codehaus.jackson.node.BinaryNode(v1_1);
        return;
    }

    public BinaryNode(byte[] p1)
    {
        this._data = p1;
        return;
    }

    public BinaryNode(byte[] p3, int p4, int p5)
    {
        if ((p4 != 0) || (p5 != p3.length)) {
            byte[] v0_1 = new byte[p5];
            this._data = v0_1;
            System.arraycopy(p3, p4, this._data, 0, p5);
        } else {
            this._data = p3;
        }
        return;
    }

    public static com.flurry.org.codehaus.jackson.node.BinaryNode valueOf(byte[] p1)
    {
        com.flurry.org.codehaus.jackson.node.BinaryNode v0_2;
        if (p1 != null) {
            if (p1.length != 0) {
                v0_2 = new com.flurry.org.codehaus.jackson.node.BinaryNode(p1);
            } else {
                v0_2 = com.flurry.org.codehaus.jackson.node.BinaryNode.EMPTY_BINARY_NODE;
            }
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    public static com.flurry.org.codehaus.jackson.node.BinaryNode valueOf(byte[] p1, int p2, int p3)
    {
        com.flurry.org.codehaus.jackson.node.BinaryNode v0_1;
        if (p1 != null) {
            if (p3 != 0) {
                v0_1 = new com.flurry.org.codehaus.jackson.node.BinaryNode(p1, p2, p3);
            } else {
                v0_1 = com.flurry.org.codehaus.jackson.node.BinaryNode.EMPTY_BINARY_NODE;
            }
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }

    public String asText()
    {
        return com.flurry.org.codehaus.jackson.Base64Variants.getDefaultVariant().encode(this._data, 0);
    }

    public com.flurry.org.codehaus.jackson.JsonToken asToken()
    {
        return com.flurry.org.codehaus.jackson.JsonToken.VALUE_EMBEDDED_OBJECT;
    }

    public boolean equals(Object p4)
    {
        boolean v0_0 = 0;
        if (p4 != this) {
            if ((p4 != null) && (p4.getClass() == this.getClass())) {
                v0_0 = java.util.Arrays.equals(((com.flurry.org.codehaus.jackson.node.BinaryNode) p4)._data, this._data);
            }
        } else {
            v0_0 = 1;
        }
        return v0_0;
    }

    public byte[] getBinaryValue()
    {
        return this._data;
    }

    public int hashCode()
    {
        int v0_2;
        if (this._data != null) {
            v0_2 = this._data.length;
        } else {
            v0_2 = -1;
        }
        return v0_2;
    }

    public boolean isBinary()
    {
        return 1;
    }

    public final void serialize(com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        p2.writeBinary(this._data);
        return;
    }

    public String toString()
    {
        return com.flurry.org.codehaus.jackson.Base64Variants.getDefaultVariant().encode(this._data, 1);
    }
}
