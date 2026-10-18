package com.flurry.org.apache.avro;
public class Protocol {
    private static final java.util.Set MESSAGE_RESERVED = None;
    private static final java.util.Set PROTOCOL_RESERVED = None;
    public static final com.flurry.org.apache.avro.Schema SYSTEM_ERROR = None;
    public static final com.flurry.org.apache.avro.Schema SYSTEM_ERRORS = None;
    public static final long VERSION = 1;
    private String doc;
    private byte[] md5;
    private java.util.Map messages;
    private String name;
    private String namespace;
    com.flurry.org.apache.avro.Schema$Props props;
    private com.flurry.org.apache.avro.Schema$Names types;

    static Protocol()
    {
        com.flurry.org.apache.avro.Protocol.MESSAGE_RESERVED = new java.util.HashSet();
        String[] v2_0 = new String[5];
        v2_0[0] = "doc";
        v2_0[1] = "response";
        v2_0[2] = "request";
        v2_0[3] = "errors";
        v2_0[4] = "one-way";
        java.util.Collections.addAll(com.flurry.org.apache.avro.Protocol.MESSAGE_RESERVED, v2_0);
        com.flurry.org.apache.avro.Protocol.SYSTEM_ERROR = com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.STRING);
        java.util.ArrayList v0_1 = new java.util.ArrayList();
        v0_1.add(com.flurry.org.apache.avro.Protocol.SYSTEM_ERROR);
        com.flurry.org.apache.avro.Protocol.SYSTEM_ERRORS = com.flurry.org.apache.avro.Schema.createUnion(v0_1);
        com.flurry.org.apache.avro.Protocol.PROTOCOL_RESERVED = new java.util.HashSet();
        String[] v2_2 = new String[6];
        v2_2[0] = "namespace";
        v2_2[1] = "protocol";
        v2_2[2] = "doc";
        v2_2[3] = "messages";
        v2_2[4] = "types";
        v2_2[5] = "errors";
        java.util.Collections.addAll(com.flurry.org.apache.avro.Protocol.PROTOCOL_RESERVED, v2_2);
        return;
    }

    private Protocol()
    {
        this.types = new com.flurry.org.apache.avro.Schema$Names();
        this.messages = new java.util.LinkedHashMap();
        this.props = new com.flurry.org.apache.avro.Schema$Props(com.flurry.org.apache.avro.Protocol.PROTOCOL_RESERVED);
        return;
    }

    public Protocol(String p2, String p3)
    {
        this(p2, 0, p3);
        return;
    }

    public Protocol(String p3, String p4, String p5)
    {
        this.types = new com.flurry.org.apache.avro.Schema$Names();
        this.messages = new java.util.LinkedHashMap();
        this.props = new com.flurry.org.apache.avro.Schema$Props(com.flurry.org.apache.avro.Protocol.PROTOCOL_RESERVED);
        this.name = p3;
        this.doc = p4;
        this.namespace = p5;
        return;
    }

    static synthetic java.util.Set access$000()
    {
        return com.flurry.org.apache.avro.Protocol.MESSAGE_RESERVED;
    }

    static synthetic com.flurry.org.apache.avro.Schema$Names access$100(com.flurry.org.apache.avro.Protocol p1)
    {
        return p1.types;
    }

    public static void main(String[] p3)
    {
        System.out.println(com.flurry.org.apache.avro.Protocol.parse(new java.io.File(p3[0])));
        return;
    }

    private static com.flurry.org.apache.avro.Protocol parse(com.flurry.org.codehaus.jackson.JsonParser p3)
    {
        try {
            return new com.flurry.org.apache.avro.Protocol().parse(com.flurry.org.apache.avro.Schema.MAPPER.readTree(p3));
        } catch (java.io.IOException v0) {
            throw new com.flurry.org.apache.avro.SchemaParseException(v0);
        }
    }

    public static com.flurry.org.apache.avro.Protocol parse(java.io.File p1)
    {
        return com.flurry.org.apache.avro.Protocol.parse(com.flurry.org.apache.avro.Schema.FACTORY.createJsonParser(p1));
    }

    public static com.flurry.org.apache.avro.Protocol parse(java.io.InputStream p1)
    {
        return com.flurry.org.apache.avro.Protocol.parse(com.flurry.org.apache.avro.Schema.FACTORY.createJsonParser(p1));
    }

    public static com.flurry.org.apache.avro.Protocol parse(String p4)
    {
        try {
            return com.flurry.org.apache.avro.Protocol.parse(com.flurry.org.apache.avro.Schema.FACTORY.createJsonParser(new java.io.ByteArrayInputStream(p4.getBytes("UTF-8"))));
        } catch (java.io.IOException v0) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v0);
        }
    }

    private void parse(com.flurry.org.codehaus.jackson.JsonNode p1)
    {
        this.parseNamespace(p1);
        this.parseName(p1);
        this.parseTypes(p1);
        this.parseMessages(p1);
        this.parseDoc(p1);
        this.parseProps(p1);
        return;
    }

    private void parseDoc(com.flurry.org.codehaus.jackson.JsonNode p2)
    {
        this.doc = this.parseDocNode(p2);
        return;
    }

    private String parseDocNode(com.flurry.org.codehaus.jackson.JsonNode p3)
    {
        String v1_1;
        com.flurry.org.codehaus.jackson.JsonNode v0 = p3.get("doc");
        if (v0 != null) {
            v1_1 = v0.getTextValue();
        } else {
            v1_1 = 0;
        }
        return v1_1;
    }

    private com.flurry.org.apache.avro.Protocol$Message parseMessage(String p29, com.flurry.org.codehaus.jackson.JsonNode p30)
    {
        String v5 = this.parseDocNode(p30);
        java.util.LinkedHashMap v6_1 = new java.util.LinkedHashMap();
        java.util.Iterator v18 = p30.getFieldNames();
        while (v18.hasNext()) {
            String v23_1 = ((String) v18.next());
            if (!com.flurry.org.apache.avro.Protocol.MESSAGE_RESERVED.contains(v23_1)) {
                com.flurry.org.codehaus.jackson.JsonNode v24 = p30.get(v23_1);
                if ((v24.isValueNode()) && (v24.isTextual())) {
                    v6_1.put(v23_1, v24.getTextValue());
                }
            }
        }
        com.flurry.org.codehaus.jackson.JsonNode v25 = p30.get("request");
        if ((v25 != null) && (v25.isArray())) {
            java.util.ArrayList v17_1 = new java.util.ArrayList();
            java.util.Iterator v19_0 = v25.iterator();
            while (v19_0.hasNext()) {
                com.flurry.org.codehaus.jackson.JsonNode v14_1 = ((com.flurry.org.codehaus.jackson.JsonNode) v19_0.next());
                com.flurry.org.codehaus.jackson.JsonNode v15 = v14_1.get("name");
                if (v15 != null) {
                    com.flurry.org.codehaus.jackson.JsonNode v16 = v14_1.get("type");
                    if (v16 != null) {
                        v17_1.add(new com.flurry.org.apache.avro.Schema$Field(v15.getTextValue(), com.flurry.org.apache.avro.Schema.parse(v16, this.types), 0, v14_1.get("default")));
                    } else {
                        throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("No param type: ").append(v14_1).toString());
                    }
                } else {
                    throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("No param name: ").append(v14_1).toString());
                }
            }
            com.flurry.org.apache.avro.Schema v7 = com.flurry.org.apache.avro.Schema.createRecord(v17_1);
            boolean v21 = 0;
            com.flurry.org.codehaus.jackson.JsonNode v22 = p30.get("one-way");
            if (v22 != null) {
                if (v22.isBoolean()) {
                    v21 = v22.getBooleanValue();
                } else {
                    throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("one-way must be boolean: ").append(p30).toString());
                }
            }
            com.flurry.org.codehaus.jackson.JsonNode v26 = p30.get("response");
            if ((v21) || (v26 != null)) {
                com.flurry.org.apache.avro.SchemaParseException v2_10;
                com.flurry.org.codehaus.jackson.JsonNode v12 = p30.get("errors");
                if (!v21) {
                    int v8_1 = com.flurry.org.apache.avro.Schema.parse(v26, this.types);
                    java.util.ArrayList v13_1 = new java.util.ArrayList();
                    v13_1.add(com.flurry.org.apache.avro.Protocol.SYSTEM_ERROR);
                    if (v12 != null) {
                        if (v12.isArray()) {
                            java.util.Iterator v19_1 = v12.iterator();
                            while (v19_1.hasNext()) {
                                String v20_1 = ((com.flurry.org.codehaus.jackson.JsonNode) v19_1.next()).getTextValue();
                                com.flurry.org.apache.avro.Schema v27 = this.types.get(v20_1);
                                if (v27 != null) {
                                    if (v27.isError()) {
                                        v13_1.add(v27);
                                    } else {
                                        throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("Not an error: ").append(v20_1).toString());
                                    }
                                } else {
                                    throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("Undefined error: ").append(v20_1).toString());
                                }
                            }
                        } else {
                            throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("Errors not an array: ").append(p30).toString());
                        }
                    }
                    v2_10 = new com.flurry.org.apache.avro.Protocol$TwoWayMessage(this, p29, v5, v6_1, v7, v8_1, com.flurry.org.apache.avro.Schema.createUnion(v13_1), 0);
                } else {
                    if (v12 == null) {
                        if ((v26 == null) || (com.flurry.org.apache.avro.Schema.parse(v26, this.types).getType() == com.flurry.org.apache.avro.Schema$Type.NULL)) {
                            v2_10 = new com.flurry.org.apache.avro.Protocol$Message(this, p29, v5, v6_1, v7, 0);
                        } else {
                            throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("One way response must be null: ").append(p30).toString());
                        }
                    } else {
                        throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("one-way can\'t have errors: ").append(p30).toString());
                    }
                }
                return v2_10;
            } else {
                throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("No response specified: ").append(p30).toString());
            }
        } else {
            throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("No request specified: ").append(p30).toString());
        }
    }

    private void parseMessages(com.flurry.org.codehaus.jackson.JsonNode p6)
    {
        com.flurry.org.codehaus.jackson.JsonNode v0 = p6.get("messages");
        if (v0 != null) {
            java.util.Iterator v1 = v0.getFieldNames();
            while (v1.hasNext()) {
                String v2_1 = ((String) v1.next());
                this.messages.put(v2_1, this.parseMessage(v2_1, v0.get(v2_1)));
            }
        }
        return;
    }

    private void parseName(com.flurry.org.codehaus.jackson.JsonNode p5)
    {
        com.flurry.org.codehaus.jackson.JsonNode v0 = p5.get("protocol");
        if (v0 != null) {
            this.name = v0.getTextValue();
            return;
        } else {
            throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("No protocol name specified: ").append(p5).toString());
        }
    }

    private void parseNamespace(com.flurry.org.codehaus.jackson.JsonNode p4)
    {
        com.flurry.org.codehaus.jackson.JsonNode v0 = p4.get("namespace");
        if (v0 != null) {
            this.namespace = v0.getTextValue();
            this.types.space(this.namespace);
        }
        return;
    }

    private void parseProps(com.flurry.org.codehaus.jackson.JsonNode p5)
    {
        java.util.Iterator v0 = p5.getFieldNames();
        while (v0.hasNext()) {
            String v1_1 = ((String) v0.next());
            if (!com.flurry.org.apache.avro.Protocol.PROTOCOL_RESERVED.contains(v1_1)) {
                com.flurry.org.codehaus.jackson.JsonNode v2 = p5.get(v1_1);
                if ((v2.isValueNode()) && (v2.isTextual())) {
                    this.addProp(v1_1, v2.getTextValue());
                }
            }
        }
        return;
    }

    private void parseTypes(com.flurry.org.codehaus.jackson.JsonNode p7)
    {
        com.flurry.org.codehaus.jackson.JsonNode v0 = p7.get("types");
        if (v0 != null) {
            if (v0.isArray()) {
                java.util.Iterator v1 = v0.iterator();
                while (v1.hasNext()) {
                    com.flurry.org.codehaus.jackson.JsonNode v2_1 = ((com.flurry.org.codehaus.jackson.JsonNode) v1.next());
                    if (v2_1.isObject()) {
                        com.flurry.org.apache.avro.Schema.parse(v2_1, this.types);
                    } else {
                        throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("Type not an object: ").append(v2_1).toString());
                    }
                }
            } else {
                throw new com.flurry.org.apache.avro.SchemaParseException(new StringBuilder().append("Types not an array: ").append(v0).toString());
            }
        }
        return;
    }

    public declared_synchronized void addProp(String p2, String p3)
    {
        try {
            this.props.add(p2, p3);
            return;
        } catch (Throwable v0_1) {
            throw v0_1;
        }
    }

    public com.flurry.org.apache.avro.Protocol$Message createMessage(String p2, String p3, com.flurry.org.apache.avro.Schema p4)
    {
        return this.createMessage(p2, p3, new java.util.LinkedHashMap(), p4);
    }

    public com.flurry.org.apache.avro.Protocol$Message createMessage(String p8, String p9, com.flurry.org.apache.avro.Schema p10, com.flurry.org.apache.avro.Schema p11, com.flurry.org.apache.avro.Schema p12)
    {
        return this.createMessage(p8, p9, new java.util.LinkedHashMap(), p10, p11, p12);
    }

    public com.flurry.org.apache.avro.Protocol$Message createMessage(String p8, String p9, java.util.Map p10, com.flurry.org.apache.avro.Schema p11)
    {
        return new com.flurry.org.apache.avro.Protocol$Message(this, p8, p9, p10, p11, 0);
    }

    public com.flurry.org.apache.avro.Protocol$Message createMessage(String p10, String p11, java.util.Map p12, com.flurry.org.apache.avro.Schema p13, com.flurry.org.apache.avro.Schema p14, com.flurry.org.apache.avro.Schema p15)
    {
        return new com.flurry.org.apache.avro.Protocol$TwoWayMessage(this, p10, p11, p12, p13, p14, p15, 0);
    }

    public boolean equals(Object p6)
    {
        int v1 = 1;
        if (p6 != this) {
            if ((p6 instanceof com.flurry.org.apache.avro.Protocol)) {
                if ((!this.name.equals(((com.flurry.org.apache.avro.Protocol) p6).name)) || ((!this.namespace.equals(((com.flurry.org.apache.avro.Protocol) p6).namespace)) || ((!this.types.equals(((com.flurry.org.apache.avro.Protocol) p6).types)) || ((!this.messages.equals(((com.flurry.org.apache.avro.Protocol) p6).messages)) || (!this.props.equals(this.props)))))) {
                    v1 = 0;
                }
            } else {
                v1 = 0;
            }
        }
        return v1;
    }

    public String getDoc()
    {
        return this.doc;
    }

    public byte[] getMD5()
    {
        if (this.md5 == null) {
            try {
                this.md5 = java.security.MessageDigest.getInstance("MD5").digest(this.toString().getBytes("UTF-8"));
            } catch (Exception v0) {
                throw new com.flurry.org.apache.avro.AvroRuntimeException(v0);
            }
        }
        return this.md5;
    }

    public java.util.Map getMessages()
    {
        return this.messages;
    }

    public String getName()
    {
        return this.name;
    }

    public String getNamespace()
    {
        return this.namespace;
    }

    public declared_synchronized String getProp(String p2)
    {
        try {
            return ((String) this.props.get(p2));
        } catch (Throwable v0_3) {
            throw v0_3;
        }
    }

    public java.util.Map getProps()
    {
        return java.util.Collections.unmodifiableMap(this.props);
    }

    public com.flurry.org.apache.avro.Schema getType(String p2)
    {
        return this.types.get(p2);
    }

    public java.util.Collection getTypes()
    {
        return this.types.values();
    }

    public int hashCode()
    {
        return ((((this.name.hashCode() + this.namespace.hashCode()) + this.types.hashCode()) + this.messages.hashCode()) + this.props.hashCode());
    }

    public void setTypes(java.util.Collection p4)
    {
        this.types = new com.flurry.org.apache.avro.Schema$Names();
        java.util.Iterator v0 = p4.iterator();
        while (v0.hasNext()) {
            this.types.add(((com.flurry.org.apache.avro.Schema) v0.next()));
        }
        return;
    }

    void toJson(com.flurry.org.codehaus.jackson.JsonGenerator p7)
    {
        this.types.space(this.namespace);
        p7.writeStartObject();
        p7.writeStringField("protocol", this.name);
        p7.writeStringField("namespace", this.namespace);
        if (this.doc != null) {
            p7.writeStringField("doc", this.doc);
        }
        this.props.write(p7);
        p7.writeArrayFieldStart("types");
        com.flurry.org.apache.avro.Schema$Names v2_1 = new com.flurry.org.apache.avro.Schema$Names(this.namespace);
        java.util.Iterator v1_0 = this.types.values().iterator();
        while (v1_0.hasNext()) {
            com.flurry.org.apache.avro.Schema v3_1 = ((com.flurry.org.apache.avro.Schema) v1_0.next());
            if (!v2_1.contains(v3_1)) {
                v3_1.toJson(v2_1, p7);
            }
        }
        p7.writeEndArray();
        p7.writeObjectFieldStart("messages");
        java.util.Iterator v1_1 = this.messages.entrySet().iterator();
        while (v1_1.hasNext()) {
            java.util.Map$Entry v0_1 = ((java.util.Map$Entry) v1_1.next());
            p7.writeFieldName(((String) v0_1.getKey()));
            ((com.flurry.org.apache.avro.Protocol$Message) v0_1.getValue()).toJson(p7);
        }
        p7.writeEndObject();
        p7.writeEndObject();
        return;
    }

    public String toString()
    {
        return this.toString(0);
    }

    public String toString(boolean p5)
    {
        try {
            java.io.StringWriter v2_1 = new java.io.StringWriter();
            com.flurry.org.codehaus.jackson.JsonGenerator v1 = com.flurry.org.apache.avro.Schema.FACTORY.createJsonGenerator(v2_1);
        } catch (java.io.IOException v0) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v0);
        }
        if (p5) {
            v1.useDefaultPrettyPrinter();
        }
        this.toJson(v1);
        v1.flush();
        return v2_1.toString();
    }
}
