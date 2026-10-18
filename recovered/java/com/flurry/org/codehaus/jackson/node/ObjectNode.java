package com.flurry.org.codehaus.jackson.node;
public class ObjectNode extends com.flurry.org.codehaus.jackson.node.ContainerNode {
    protected java.util.LinkedHashMap _children;

    public ObjectNode(com.flurry.org.codehaus.jackson.node.JsonNodeFactory p2)
    {
        super(p2);
        super._children = 0;
        return;
    }

    private final com.flurry.org.codehaus.jackson.JsonNode _put(String p2, com.flurry.org.codehaus.jackson.JsonNode p3)
    {
        if (this._children == null) {
            this._children = new java.util.LinkedHashMap();
        }
        return ((com.flurry.org.codehaus.jackson.JsonNode) this._children.put(p2, p3));
    }

    public com.flurry.org.codehaus.jackson.JsonToken asToken()
    {
        return com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT;
    }

    public boolean equals(Object p11)
    {
        int v6 = 1;
        if (p11 != this) {
            if (p11 != null) {
                if (p11.getClass() == this.getClass()) {
                    if (((com.flurry.org.codehaus.jackson.node.ObjectNode) p11).size() == this.size()) {
                        if (this._children != null) {
                            java.util.Iterator v1 = this._children.entrySet().iterator();
                            while (v1.hasNext()) {
                                java.util.Map$Entry v0_1 = ((java.util.Map$Entry) v1.next());
                                com.flurry.org.codehaus.jackson.JsonNode v5_1 = ((com.flurry.org.codehaus.jackson.JsonNode) v0_1.getValue());
                                com.flurry.org.codehaus.jackson.JsonNode v4 = ((com.flurry.org.codehaus.jackson.node.ObjectNode) p11).get(((String) v0_1.getKey()));
                                if ((v4 == null) || (!v4.equals(v5_1))) {
                                    v6 = 0;
                                    break;
                                }
                            }
                        }
                    } else {
                        v6 = 0;
                    }
                } else {
                    v6 = 0;
                }
            } else {
                v6 = 0;
            }
        }
        return v6;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.JsonNode findParent(String p2)
    {
        return this.findParent(p2);
    }

    public com.flurry.org.codehaus.jackson.node.ObjectNode findParent(String p5)
    {
        if (this._children == null) {
            this = 0;
        } else {
            java.util.Iterator v1 = this._children.entrySet().iterator();
            while (v1.hasNext()) {
                java.util.Map$Entry v0_1 = ((java.util.Map$Entry) v1.next());
                if (!p5.equals(v0_1.getKey())) {
                    com.flurry.org.codehaus.jackson.node.ObjectNode v2_0 = ((com.flurry.org.codehaus.jackson.JsonNode) v0_1.getValue()).findParent(p5);
                    if (v2_0 != null) {
                        this = ((com.flurry.org.codehaus.jackson.node.ObjectNode) v2_0);
                    }
                }
            }
        }
        return this;
    }

    public java.util.List findParents(String p4, java.util.List p5)
    {
        if (this._children != null) {
            java.util.Iterator v1 = this._children.entrySet().iterator();
            while (v1.hasNext()) {
                java.util.Map$Entry v0_1 = ((java.util.Map$Entry) v1.next());
                if (!p4.equals(v0_1.getKey())) {
                    p5 = ((com.flurry.org.codehaus.jackson.JsonNode) v0_1.getValue()).findParents(p4, p5);
                } else {
                    if (p5 == null) {
                        p5 = new java.util.ArrayList();
                    }
                    p5.add(this);
                }
            }
        }
        return p5;
    }

    public com.flurry.org.codehaus.jackson.JsonNode findValue(String p5)
    {
        com.flurry.org.codehaus.jackson.JsonNode v3_1;
        if (this._children == null) {
            v3_1 = 0;
        } else {
            java.util.Iterator v1 = this._children.entrySet().iterator();
            while (v1.hasNext()) {
                java.util.Map$Entry v0_1 = ((java.util.Map$Entry) v1.next());
                if (!p5.equals(v0_1.getKey())) {
                    com.flurry.org.codehaus.jackson.JsonNode v2 = ((com.flurry.org.codehaus.jackson.JsonNode) v0_1.getValue()).findValue(p5);
                    if (v2 != null) {
                        v3_1 = v2;
                    }
                } else {
                    v3_1 = ((com.flurry.org.codehaus.jackson.JsonNode) v0_1.getValue());
                }
            }
        }
        return v3_1;
    }

    public java.util.List findValues(String p4, java.util.List p5)
    {
        if (this._children != null) {
            java.util.Iterator v1 = this._children.entrySet().iterator();
            while (v1.hasNext()) {
                java.util.Map$Entry v0_1 = ((java.util.Map$Entry) v1.next());
                if (!p4.equals(v0_1.getKey())) {
                    p5 = ((com.flurry.org.codehaus.jackson.JsonNode) v0_1.getValue()).findValues(p4, p5);
                } else {
                    if (p5 == null) {
                        p5 = new java.util.ArrayList();
                    }
                    p5.add(v0_1.getValue());
                }
            }
        }
        return p5;
    }

    public java.util.List findValuesAsText(String p4, java.util.List p5)
    {
        if (this._children != null) {
            java.util.Iterator v1 = this._children.entrySet().iterator();
            while (v1.hasNext()) {
                java.util.Map$Entry v0_1 = ((java.util.Map$Entry) v1.next());
                if (!p4.equals(v0_1.getKey())) {
                    p5 = ((com.flurry.org.codehaus.jackson.JsonNode) v0_1.getValue()).findValuesAsText(p4, p5);
                } else {
                    if (p5 == null) {
                        p5 = new java.util.ArrayList();
                    }
                    p5.add(((com.flurry.org.codehaus.jackson.JsonNode) v0_1.getValue()).asText());
                }
            }
        }
        return p5;
    }

    public com.flurry.org.codehaus.jackson.JsonNode get(int p2)
    {
        return 0;
    }

    public com.flurry.org.codehaus.jackson.JsonNode get(String p2)
    {
        int v0_1;
        if (this._children == null) {
            v0_1 = 0;
        } else {
            v0_1 = ((com.flurry.org.codehaus.jackson.JsonNode) this._children.get(p2));
        }
        return v0_1;
    }

    public java.util.Iterator getElements()
    {
        java.util.Iterator v0_3;
        if (this._children != null) {
            v0_3 = this._children.values().iterator();
        } else {
            v0_3 = com.flurry.org.codehaus.jackson.node.ContainerNode$NoNodesIterator.instance();
        }
        return v0_3;
    }

    public java.util.Iterator getFieldNames()
    {
        java.util.Iterator v0_3;
        if (this._children != null) {
            v0_3 = this._children.keySet().iterator();
        } else {
            v0_3 = com.flurry.org.codehaus.jackson.node.ContainerNode$NoStringsIterator.instance();
        }
        return v0_3;
    }

    public java.util.Iterator getFields()
    {
        java.util.Iterator v0_3;
        if (this._children != null) {
            v0_3 = this._children.entrySet().iterator();
        } else {
            v0_3 = com.flurry.org.codehaus.jackson.node.ObjectNode$NoFieldsIterator.instance;
        }
        return v0_3;
    }

    public int hashCode()
    {
        int v0_2;
        if (this._children != null) {
            v0_2 = this._children.hashCode();
        } else {
            v0_2 = -1;
        }
        return v0_2;
    }

    public boolean isObject()
    {
        return 1;
    }

    public com.flurry.org.codehaus.jackson.JsonNode path(int p2)
    {
        return com.flurry.org.codehaus.jackson.node.MissingNode.getInstance();
    }

    public com.flurry.org.codehaus.jackson.JsonNode path(String p3)
    {
        com.flurry.org.codehaus.jackson.node.MissingNode v0_1;
        if (this._children == null) {
            v0_1 = com.flurry.org.codehaus.jackson.node.MissingNode.getInstance();
        } else {
            v0_1 = ((com.flurry.org.codehaus.jackson.JsonNode) this._children.get(p3));
            if (v0_1 == null) {
            }
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.JsonNode put(String p2, com.flurry.org.codehaus.jackson.JsonNode p3)
    {
        if (p3 == null) {
            p3 = this.nullNode();
        }
        return this._put(p2, p3);
    }

    public void put(String p2, double p3)
    {
        this._put(p2, this.numberNode(p3));
        return;
    }

    public void put(String p2, float p3)
    {
        this._put(p2, this.numberNode(p3));
        return;
    }

    public void put(String p2, int p3)
    {
        this._put(p2, this.numberNode(p3));
        return;
    }

    public void put(String p2, long p3)
    {
        this._put(p2, this.numberNode(p3));
        return;
    }

    public void put(String p2, Boolean p3)
    {
        if (p3 != null) {
            this._put(p2, this.booleanNode(p3.booleanValue()));
        } else {
            this._put(p2, this.nullNode());
        }
        return;
    }

    public void put(String p3, Double p4)
    {
        if (p4 != null) {
            this._put(p3, this.numberNode(p4.doubleValue()));
        } else {
            this._put(p3, this.nullNode());
        }
        return;
    }

    public void put(String p2, Float p3)
    {
        if (p3 != null) {
            this._put(p2, this.numberNode(p3.floatValue()));
        } else {
            this._put(p2, this.nullNode());
        }
        return;
    }

    public void put(String p2, Integer p3)
    {
        if (p3 != null) {
            this._put(p2, this.numberNode(p3.intValue()));
        } else {
            this._put(p2, this.nullNode());
        }
        return;
    }

    public void put(String p3, Long p4)
    {
        if (p4 != null) {
            this._put(p3, this.numberNode(p4.longValue()));
        } else {
            this._put(p3, this.nullNode());
        }
        return;
    }

    public void put(String p2, String p3)
    {
        if (p3 != null) {
            this._put(p2, this.textNode(p3));
        } else {
            this.putNull(p2);
        }
        return;
    }

    public void put(String p2, java.math.BigDecimal p3)
    {
        if (p3 != null) {
            this._put(p2, this.numberNode(p3));
        } else {
            this.putNull(p2);
        }
        return;
    }

    public void put(String p2, boolean p3)
    {
        this._put(p2, this.booleanNode(p3));
        return;
    }

    public void put(String p2, byte[] p3)
    {
        if (p3 != null) {
            this._put(p2, this.binaryNode(p3));
        } else {
            this._put(p2, this.nullNode());
        }
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode putAll(com.flurry.org.codehaus.jackson.node.ObjectNode p3)
    {
        int v0 = p3.size();
        if (v0 > 0) {
            if (this._children == null) {
                this._children = new java.util.LinkedHashMap(v0);
            }
            p3.putContentsTo(this._children);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.JsonNode putAll(java.util.Map p6)
    {
        if (this._children != null) {
            java.util.Iterator v1 = p6.entrySet().iterator();
            while (v1.hasNext()) {
                java.util.Map$Entry v0_1 = ((java.util.Map$Entry) v1.next());
                com.flurry.org.codehaus.jackson.node.NullNode v2_1 = ((com.flurry.org.codehaus.jackson.JsonNode) v0_1.getValue());
                if (v2_1 == null) {
                    v2_1 = this.nullNode();
                }
                this._children.put(v0_1.getKey(), v2_1);
            }
        } else {
            this._children = new java.util.LinkedHashMap(p6);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.node.ArrayNode putArray(String p2)
    {
        com.flurry.org.codehaus.jackson.node.ArrayNode v0 = this.arrayNode();
        this._put(p2, v0);
        return v0;
    }

    protected void putContentsTo(java.util.Map p5)
    {
        if (this._children != null) {
            java.util.Iterator v1 = this._children.entrySet().iterator();
            while (v1.hasNext()) {
                java.util.Map$Entry v0_1 = ((java.util.Map$Entry) v1.next());
                p5.put(v0_1.getKey(), v0_1.getValue());
            }
        }
        return;
    }

    public void putNull(String p2)
    {
        this._put(p2, this.nullNode());
        return;
    }

    public com.flurry.org.codehaus.jackson.node.ObjectNode putObject(String p2)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v0 = this.objectNode();
        this._put(p2, v0);
        return v0;
    }

    public void putPOJO(String p2, Object p3)
    {
        this._put(p2, this.POJONode(p3));
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode remove(String p2)
    {
        int v0_1;
        if (this._children == null) {
            v0_1 = 0;
        } else {
            v0_1 = ((com.flurry.org.codehaus.jackson.JsonNode) this._children.remove(p2));
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.node.ObjectNode remove(java.util.Collection p4)
    {
        if (this._children != null) {
            java.util.Iterator v1 = p4.iterator();
            while (v1.hasNext()) {
                this._children.remove(((String) v1.next()));
            }
        }
        return this;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.node.ContainerNode removeAll()
    {
        return this.removeAll();
    }

    public com.flurry.org.codehaus.jackson.node.ObjectNode removeAll()
    {
        this._children = 0;
        return this;
    }

    public com.flurry.org.codehaus.jackson.node.ObjectNode retain(java.util.Collection p4)
    {
        if (this._children != null) {
            java.util.Iterator v0 = this._children.entrySet().iterator();
            while (v0.hasNext()) {
                if (!p4.contains(((java.util.Map$Entry) v0.next()).getKey())) {
                    v0.remove();
                }
            }
        }
        return this;
    }

    public varargs com.flurry.org.codehaus.jackson.node.ObjectNode retain(String[] p2)
    {
        return this.retain(java.util.Arrays.asList(p2));
    }

    public final void serialize(com.flurry.org.codehaus.jackson.JsonGenerator p4, com.flurry.org.codehaus.jackson.map.SerializerProvider p5)
    {
        p4.writeStartObject();
        if (this._children != null) {
            java.util.Iterator v1 = this._children.entrySet().iterator();
            while (v1.hasNext()) {
                java.util.Map$Entry v0_1 = ((java.util.Map$Entry) v1.next());
                p4.writeFieldName(((String) v0_1.getKey()));
                ((com.flurry.org.codehaus.jackson.node.BaseJsonNode) v0_1.getValue()).serialize(p4, p5);
            }
        }
        p4.writeEndObject();
        return;
    }

    public void serializeWithType(com.flurry.org.codehaus.jackson.JsonGenerator p4, com.flurry.org.codehaus.jackson.map.SerializerProvider p5, com.flurry.org.codehaus.jackson.map.TypeSerializer p6)
    {
        p6.writeTypePrefixForObject(this, p4);
        if (this._children != null) {
            java.util.Iterator v1 = this._children.entrySet().iterator();
            while (v1.hasNext()) {
                java.util.Map$Entry v0_1 = ((java.util.Map$Entry) v1.next());
                p4.writeFieldName(((String) v0_1.getKey()));
                ((com.flurry.org.codehaus.jackson.node.BaseJsonNode) v0_1.getValue()).serialize(p4, p5);
            }
        }
        p6.writeTypeSuffixForObject(this, p4);
        return;
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
        StringBuilder v3_1 = new StringBuilder(((this.size() << 4) + 32));
        v3_1.append("{");
        if (this._children != null) {
            int v0 = 0;
            java.util.Iterator v2 = this._children.entrySet().iterator();
            while (v2.hasNext()) {
                java.util.Map$Entry v1_1 = ((java.util.Map$Entry) v2.next());
                if (v0 > 0) {
                    v3_1.append(",");
                }
                v0++;
                com.flurry.org.codehaus.jackson.node.TextNode.appendQuoted(v3_1, ((String) v1_1.getKey()));
                v3_1.append(58);
                v3_1.append(((com.flurry.org.codehaus.jackson.JsonNode) v1_1.getValue()).toString());
            }
        }
        v3_1.append("}");
        return v3_1.toString();
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.JsonNode with(String p2)
    {
        return this.with(p2);
    }

    public com.flurry.org.codehaus.jackson.node.ObjectNode with(String p6)
    {
        com.flurry.org.codehaus.jackson.node.ObjectNode v0_0;
        if (this._children != null) {
            com.flurry.org.codehaus.jackson.node.ObjectNode v0_2 = ((com.flurry.org.codehaus.jackson.JsonNode) this._children.get(p6));
            if (v0_2 == null) {
                com.flurry.org.codehaus.jackson.node.ObjectNode v1 = this.objectNode();
                this._children.put(p6, v1);
                v0_0 = v1;
            } else {
                if (!(v0_2 instanceof com.flurry.org.codehaus.jackson.node.ObjectNode)) {
                    throw new UnsupportedOperationException(new StringBuilder().append("Property \'").append(p6).append("\' has value that is not of type ObjectNode (but ").append(v0_2.getClass().getName()).append(")").toString());
                } else {
                    v0_0 = ((com.flurry.org.codehaus.jackson.node.ObjectNode) v0_2);
                }
            }
        } else {
            this._children = new java.util.LinkedHashMap();
        }
        return v0_0;
    }
}
