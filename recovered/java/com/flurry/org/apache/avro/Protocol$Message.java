package com.flurry.org.apache.avro;
public class Protocol$Message {
    private String doc;
    private String name;
    private final com.flurry.org.apache.avro.Schema$Props props;
    private com.flurry.org.apache.avro.Schema request;
    final synthetic com.flurry.org.apache.avro.Protocol this$0;

    private Protocol$Message(com.flurry.org.apache.avro.Protocol p5, String p6, String p7, java.util.Map p8, com.flurry.org.apache.avro.Schema p9)
    {
        this.this$0 = p5;
        this.props = new com.flurry.org.apache.avro.Schema$Props(com.flurry.org.apache.avro.Protocol.access$000());
        this.name = p6;
        this.doc = p7;
        this.request = p9;
        if (p8 != null) {
            java.util.Iterator v0 = p8.entrySet().iterator();
            while (v0.hasNext()) {
                java.util.Map$Entry v1_1 = ((java.util.Map$Entry) v0.next());
                this.addProp(((String) v1_1.getKey()), ((String) v1_1.getValue()));
            }
        }
        return;
    }

    synthetic Protocol$Message(com.flurry.org.apache.avro.Protocol p1, String p2, String p3, java.util.Map p4, com.flurry.org.apache.avro.Schema p5, com.flurry.org.apache.avro.Protocol$1 p6)
    {
        this(p1, p2, p3, p4, p5);
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

    public boolean equals(Object p6)
    {
        int v1 = 1;
        if (p6 != this) {
            if ((p6 instanceof com.flurry.org.apache.avro.Protocol$Message)) {
                if ((!this.name.equals(((com.flurry.org.apache.avro.Protocol$Message) p6).name)) || ((!this.request.equals(((com.flurry.org.apache.avro.Protocol$Message) p6).request)) || (!this.props.equals(((com.flurry.org.apache.avro.Protocol$Message) p6).props)))) {
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

    public com.flurry.org.apache.avro.Schema getErrors()
    {
        return com.flurry.org.apache.avro.Schema.createUnion(new java.util.ArrayList());
    }

    public String getName()
    {
        return this.name;
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

    public com.flurry.org.apache.avro.Schema getRequest()
    {
        return this.request;
    }

    public com.flurry.org.apache.avro.Schema getResponse()
    {
        return com.flurry.org.apache.avro.Schema.create(com.flurry.org.apache.avro.Schema$Type.NULL);
    }

    public int hashCode()
    {
        return ((this.name.hashCode() + this.request.hashCode()) + this.props.hashCode());
    }

    public boolean isOneWay()
    {
        return 1;
    }

    void toJson(com.flurry.org.codehaus.jackson.JsonGenerator p3)
    {
        p3.writeStartObject();
        if (this.doc != null) {
            p3.writeStringField("doc", this.doc);
        }
        this.props.write(p3);
        p3.writeFieldName("request");
        this.request.fieldsToJson(com.flurry.org.apache.avro.Protocol.access$100(this.this$0), p3);
        this.toJson1(p3);
        p3.writeEndObject();
        return;
    }

    void toJson1(com.flurry.org.codehaus.jackson.JsonGenerator p3)
    {
        p3.writeStringField("response", "null");
        p3.writeBooleanField("one-way", 1);
        return;
    }

    public String toString()
    {
        try {
            java.io.StringWriter v2_1 = new java.io.StringWriter();
            com.flurry.org.codehaus.jackson.JsonGenerator v1 = com.flurry.org.apache.avro.Schema.FACTORY.createJsonGenerator(v2_1);
            this.toJson(v1);
            v1.flush();
            return v2_1.toString();
        } catch (java.io.IOException v0) {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(v0);
        }
    }
}
