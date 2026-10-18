package com.flurry.org.codehaus.jackson.node;
public final class ArrayNode extends com.flurry.org.codehaus.jackson.node.ContainerNode {
    protected java.util.ArrayList _children;

    public ArrayNode(com.flurry.org.codehaus.jackson.node.JsonNodeFactory p1)
    {
        super(p1);
        return;
    }

    private void _add(com.flurry.org.codehaus.jackson.JsonNode p2)
    {
        if (this._children == null) {
            this._children = new java.util.ArrayList();
        }
        this._children.add(p2);
        return;
    }

    private void _insert(int p3, com.flurry.org.codehaus.jackson.JsonNode p4)
    {
        if (this._children != null) {
            if (p3 >= 0) {
                if (p3 < this._children.size()) {
                    this._children.add(p3, p4);
                } else {
                    this._children.add(p4);
                }
            } else {
                this._children.add(0, p4);
            }
        } else {
            this._children = new java.util.ArrayList();
            this._children.add(p4);
        }
        return;
    }

    private boolean _sameChildren(java.util.ArrayList p6)
    {
        int v2_3;
        int v1 = p6.size();
        if (this.size() == v1) {
            int v0 = 0;
            while (v0 < v1) {
                if (((com.flurry.org.codehaus.jackson.JsonNode) this._children.get(v0)).equals(p6.get(v0))) {
                    v0++;
                } else {
                    v2_3 = 0;
                }
            }
            v2_3 = 1;
        } else {
            v2_3 = 0;
        }
        return v2_3;
    }

    public com.flurry.org.codehaus.jackson.JsonNode _set(int p4, com.flurry.org.codehaus.jackson.JsonNode p5)
    {
        if ((this._children != null) && ((p4 >= 0) && (p4 < this._children.size()))) {
            return ((com.flurry.org.codehaus.jackson.JsonNode) this._children.set(p4, p5));
        } else {
            throw new IndexOutOfBoundsException(new StringBuilder().append("Illegal index ").append(p4).append(", array size ").append(this.size()).toString());
        }
    }

    public void add(double p2)
    {
        this._add(this.numberNode(p2));
        return;
    }

    public void add(float p2)
    {
        this._add(this.numberNode(p2));
        return;
    }

    public void add(int p2)
    {
        this._add(this.numberNode(p2));
        return;
    }

    public void add(long p2)
    {
        this._add(this.numberNode(p2));
        return;
    }

    public void add(com.flurry.org.codehaus.jackson.JsonNode p1)
    {
        if (p1 == null) {
            p1 = this.nullNode();
        }
        this._add(p1);
        return;
    }

    public void add(Boolean p2)
    {
        if (p2 != null) {
            this._add(this.booleanNode(p2.booleanValue()));
        } else {
            this.addNull();
        }
        return;
    }

    public void add(Double p3)
    {
        if (p3 != null) {
            this._add(this.numberNode(p3.doubleValue()));
        } else {
            this.addNull();
        }
        return;
    }

    public void add(Float p2)
    {
        if (p2 != null) {
            this._add(this.numberNode(p2.floatValue()));
        } else {
            this.addNull();
        }
        return;
    }

    public void add(Integer p2)
    {
        if (p2 != null) {
            this._add(this.numberNode(p2.intValue()));
        } else {
            this.addNull();
        }
        return;
    }

    public void add(Long p3)
    {
        if (p3 != null) {
            this._add(this.numberNode(p3.longValue()));
        } else {
            this.addNull();
        }
        return;
    }

    public void add(String p2)
    {
        if (p2 != null) {
            this._add(this.textNode(p2));
        } else {
            this.addNull();
        }
        return;
    }

    public void add(java.math.BigDecimal p2)
    {
        if (p2 != null) {
            this._add(this.numberNode(p2));
        } else {
            this.addNull();
        }
        return;
    }

    public void add(boolean p2)
    {
        this._add(this.booleanNode(p2));
        return;
    }

    public void add(byte[] p2)
    {
        if (p2 != null) {
            this._add(this.binaryNode(p2));
        } else {
            this.addNull();
        }
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode addAll(com.flurry.org.codehaus.jackson.node.ArrayNode p4)
    {
        int v0 = p4.size();
        if (v0 > 0) {
            if (this._children == null) {
                this._children = new java.util.ArrayList((v0 + 2));
            }
            p4.addContentsTo(this._children);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.JsonNode addAll(java.util.Collection p3)
    {
        if (p3.size() > 0) {
            if (this._children != null) {
                this._children.addAll(p3);
            } else {
                this._children = new java.util.ArrayList(p3);
            }
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.node.ArrayNode addArray()
    {
        com.flurry.org.codehaus.jackson.node.ArrayNode v0 = this.arrayNode();
        this._add(v0);
        return v0;
    }

    protected void addContentsTo(java.util.List p4)
    {
        if (this._children != null) {
            java.util.Iterator v0 = this._children.iterator();
            while (v0.hasNext()) {
                p4.add(((com.flurry.org.codehaus.jackson.JsonNode) v0.next()));
            }
        }
        return;
    }

    public void addNull()
    {
        this._add(this.nullNode());
        return;
    }

    public com.flurry.org.codehaus.jackson.node.ObjectNode addObject()
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v0 = this.objectNode();
        this._add(v0);
        return v0;
    }

    public void addPOJO(Object p2)
    {
        if (p2 != null) {
            this._add(this.POJONode(p2));
        } else {
            this.addNull();
        }
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonToken asToken()
    {
        return com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY;
    }

    public boolean equals(Object p6)
    {
        int v1_0 = 1;
        if (p6 != this) {
            if (p6 != null) {
                if (p6.getClass() == this.getClass()) {
                    if ((this._children != null) && (this._children.size() != 0)) {
                        v1_0 = ((com.flurry.org.codehaus.jackson.node.ArrayNode) p6)._sameChildren(this._children);
                    } else {
                        if (((com.flurry.org.codehaus.jackson.node.ArrayNode) p6).size() != 0) {
                            v1_0 = 0;
                        }
                    }
                } else {
                    v1_0 = 0;
                }
            } else {
                v1_0 = 0;
            }
        }
        return v1_0;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.JsonNode findParent(String p2)
    {
        return this.findParent(p2);
    }

    public com.flurry.org.codehaus.jackson.node.ObjectNode findParent(String p5)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v2_1;
        if (this._children == null) {
            v2_1 = 0;
        } else {
            java.util.Iterator v0 = this._children.iterator();
            while (v0.hasNext()) {
                com.flurry.org.codehaus.jackson.node.ObjectNode v2_0 = ((com.flurry.org.codehaus.jackson.JsonNode) v0.next()).findParent(p5);
                if (v2_0 != null) {
                    v2_1 = ((com.flurry.org.codehaus.jackson.node.ObjectNode) v2_0);
                }
            }
        }
        return v2_1;
    }

    public java.util.List findParents(String p4, java.util.List p5)
    {
        if (this._children != null) {
            java.util.Iterator v0 = this._children.iterator();
            while (v0.hasNext()) {
                p5 = ((com.flurry.org.codehaus.jackson.JsonNode) v0.next()).findParents(p4, p5);
            }
        }
        return p5;
    }

    public com.flurry.org.codehaus.jackson.JsonNode findValue(String p5)
    {
        com.flurry.org.codehaus.jackson.JsonNode v2;
        if (this._children == null) {
            v2 = 0;
        } else {
            java.util.Iterator v0 = this._children.iterator();
            while (v0.hasNext()) {
                v2 = ((com.flurry.org.codehaus.jackson.JsonNode) v0.next()).findValue(p5);
                if (v2 != null) {
                }
            }
        }
        return v2;
    }

    public java.util.List findValues(String p4, java.util.List p5)
    {
        if (this._children != null) {
            java.util.Iterator v0 = this._children.iterator();
            while (v0.hasNext()) {
                p5 = ((com.flurry.org.codehaus.jackson.JsonNode) v0.next()).findValues(p4, p5);
            }
        }
        return p5;
    }

    public java.util.List findValuesAsText(String p4, java.util.List p5)
    {
        if (this._children != null) {
            java.util.Iterator v0 = this._children.iterator();
            while (v0.hasNext()) {
                p5 = ((com.flurry.org.codehaus.jackson.JsonNode) v0.next()).findValuesAsText(p4, p5);
            }
        }
        return p5;
    }

    public com.flurry.org.codehaus.jackson.JsonNode get(int p2)
    {
        if ((p2 < 0) || ((this._children == null) || (p2 >= this._children.size()))) {
            com.flurry.org.codehaus.jackson.JsonNode v0_2 = 0;
        } else {
            v0_2 = ((com.flurry.org.codehaus.jackson.JsonNode) this._children.get(p2));
        }
        return v0_2;
    }

    public com.flurry.org.codehaus.jackson.JsonNode get(String p2)
    {
        return 0;
    }

    public java.util.Iterator getElements()
    {
        java.util.Iterator v0_2;
        if (this._children != null) {
            v0_2 = this._children.iterator();
        } else {
            v0_2 = com.flurry.org.codehaus.jackson.node.ContainerNode$NoNodesIterator.instance();
        }
        return v0_2;
    }

    public int hashCode()
    {
        int v0;
        if (this._children != null) {
            v0 = this._children.size();
            java.util.Iterator v1 = this._children.iterator();
            while (v1.hasNext()) {
                com.flurry.org.codehaus.jackson.JsonNode v2_1 = ((com.flurry.org.codehaus.jackson.JsonNode) v1.next());
                if (v2_1 != null) {
                    v0 ^= v2_1.hashCode();
                }
            }
        } else {
            v0 = 1;
        }
        return v0;
    }

    public void insert(int p2, double p3)
    {
        this._insert(p2, this.numberNode(p3));
        return;
    }

    public void insert(int p2, float p3)
    {
        this._insert(p2, this.numberNode(p3));
        return;
    }

    public void insert(int p2, int p3)
    {
        this._insert(p2, this.numberNode(p3));
        return;
    }

    public void insert(int p2, long p3)
    {
        this._insert(p2, this.numberNode(p3));
        return;
    }

    public void insert(int p1, com.flurry.org.codehaus.jackson.JsonNode p2)
    {
        if (p2 == null) {
            p2 = this.nullNode();
        }
        this._insert(p1, p2);
        return;
    }

    public void insert(int p2, Boolean p3)
    {
        if (p3 != null) {
            this._insert(p2, this.booleanNode(p3.booleanValue()));
        } else {
            this.insertNull(p2);
        }
        return;
    }

    public void insert(int p3, Double p4)
    {
        if (p4 != null) {
            this._insert(p3, this.numberNode(p4.doubleValue()));
        } else {
            this.insertNull(p3);
        }
        return;
    }

    public void insert(int p2, Float p3)
    {
        if (p3 != null) {
            this._insert(p2, this.numberNode(p3.floatValue()));
        } else {
            this.insertNull(p2);
        }
        return;
    }

    public void insert(int p2, Integer p3)
    {
        if (p3 != null) {
            this._insert(p2, this.numberNode(p3.intValue()));
        } else {
            this.insertNull(p2);
        }
        return;
    }

    public void insert(int p3, Long p4)
    {
        if (p4 != null) {
            this._insert(p3, this.numberNode(p4.longValue()));
        } else {
            this.insertNull(p3);
        }
        return;
    }

    public void insert(int p2, String p3)
    {
        if (p3 != null) {
            this._insert(p2, this.textNode(p3));
        } else {
            this.insertNull(p2);
        }
        return;
    }

    public void insert(int p2, java.math.BigDecimal p3)
    {
        if (p3 != null) {
            this._insert(p2, this.numberNode(p3));
        } else {
            this.insertNull(p2);
        }
        return;
    }

    public void insert(int p2, boolean p3)
    {
        this._insert(p2, this.booleanNode(p3));
        return;
    }

    public void insert(int p2, byte[] p3)
    {
        if (p3 != null) {
            this._insert(p2, this.binaryNode(p3));
        } else {
            this.insertNull(p2);
        }
        return;
    }

    public com.flurry.org.codehaus.jackson.node.ArrayNode insertArray(int p2)
    {
        com.flurry.org.codehaus.jackson.node.ArrayNode v0 = this.arrayNode();
        this._insert(p2, v0);
        return v0;
    }

    public void insertNull(int p2)
    {
        this._insert(p2, this.nullNode());
        return;
    }

    public com.flurry.org.codehaus.jackson.node.ObjectNode insertObject(int p2)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v0 = this.objectNode();
        this._insert(p2, v0);
        return v0;
    }

    public void insertPOJO(int p2, Object p3)
    {
        if (p3 != null) {
            this._insert(p2, this.POJONode(p3));
        } else {
            this.insertNull(p2);
        }
        return;
    }

    public boolean isArray()
    {
        return 1;
    }

    public com.flurry.org.codehaus.jackson.JsonNode path(int p2)
    {
        if ((p2 < 0) || ((this._children == null) || (p2 >= this._children.size()))) {
            com.flurry.org.codehaus.jackson.JsonNode v0_2 = com.flurry.org.codehaus.jackson.node.MissingNode.getInstance();
        } else {
            v0_2 = ((com.flurry.org.codehaus.jackson.JsonNode) this._children.get(p2));
        }
        return v0_2;
    }

    public com.flurry.org.codehaus.jackson.JsonNode path(String p2)
    {
        return com.flurry.org.codehaus.jackson.node.MissingNode.getInstance();
    }

    public com.flurry.org.codehaus.jackson.JsonNode remove(int p2)
    {
        if ((p2 < 0) || ((this._children == null) || (p2 >= this._children.size()))) {
            com.flurry.org.codehaus.jackson.JsonNode v0_2 = 0;
        } else {
            v0_2 = ((com.flurry.org.codehaus.jackson.JsonNode) this._children.remove(p2));
        }
        return v0_2;
    }

    public com.flurry.org.codehaus.jackson.node.ArrayNode removeAll()
    {
        this._children = 0;
        return this;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.node.ContainerNode removeAll()
    {
        return this.removeAll();
    }

    public final void serialize(com.flurry.org.codehaus.jackson.JsonGenerator p4, com.flurry.org.codehaus.jackson.map.SerializerProvider p5)
    {
        p4.writeStartArray();
        if (this._children != null) {
            java.util.Iterator v0 = this._children.iterator();
            while (v0.hasNext()) {
                ((com.flurry.org.codehaus.jackson.node.BaseJsonNode) ((com.flurry.org.codehaus.jackson.JsonNode) v0.next())).serialize(p4, p5);
            }
        }
        p4.writeEndArray();
        return;
    }

    public void serializeWithType(com.flurry.org.codehaus.jackson.JsonGenerator p4, com.flurry.org.codehaus.jackson.map.SerializerProvider p5, com.flurry.org.codehaus.jackson.map.TypeSerializer p6)
    {
        p6.writeTypePrefixForArray(this, p4);
        if (this._children != null) {
            java.util.Iterator v0 = this._children.iterator();
            while (v0.hasNext()) {
                ((com.flurry.org.codehaus.jackson.node.BaseJsonNode) ((com.flurry.org.codehaus.jackson.JsonNode) v0.next())).serialize(p4, p5);
            }
        }
        p6.writeTypeSuffixForArray(this, p4);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode set(int p2, com.flurry.org.codehaus.jackson.JsonNode p3)
    {
        if (p3 == null) {
            p3 = this.nullNode();
        }
        return this._set(p2, p3);
    }

    public int size()
    {
        int v0_2;
        if (this._children != null) {
            v0_2 = this._children.size();
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    public String toString()
    {
        StringBuilder v2_1 = new StringBuilder(((this.size() << 4) + 16));
        v2_1.append(91);
        if (this._children != null) {
            int v0 = 0;
            int v1 = this._children.size();
            while (v0 < v1) {
                if (v0 > 0) {
                    v2_1.append(44);
                }
                v2_1.append(((com.flurry.org.codehaus.jackson.JsonNode) this._children.get(v0)).toString());
                v0++;
            }
        }
        v2_1.append(93);
        return v2_1.toString();
    }
}
