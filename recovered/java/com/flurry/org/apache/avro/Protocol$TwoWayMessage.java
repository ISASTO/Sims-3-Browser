package com.flurry.org.apache.avro;
 class Protocol$TwoWayMessage extends com.flurry.org.apache.avro.Protocol$Message {
    private com.flurry.org.apache.avro.Schema errors;
    private com.flurry.org.apache.avro.Schema response;
    final synthetic com.flurry.org.apache.avro.Protocol this$0;

    private Protocol$TwoWayMessage(com.flurry.org.apache.avro.Protocol p8, String p9, String p10, java.util.Map p11, com.flurry.org.apache.avro.Schema p12, com.flurry.org.apache.avro.Schema p13, com.flurry.org.apache.avro.Schema p14)
    {
        this.this$0 = p8;
        super(p8, p9, p10, p11, p12, 0);
        super.response = p13;
        super.errors = p14;
        return;
    }

    synthetic Protocol$TwoWayMessage(com.flurry.org.apache.avro.Protocol p1, String p2, String p3, java.util.Map p4, com.flurry.org.apache.avro.Schema p5, com.flurry.org.apache.avro.Schema p6, com.flurry.org.apache.avro.Schema p7, com.flurry.org.apache.avro.Protocol$1 p8)
    {
        this(p1, p2, p3, p4, p5, p6, p7);
        return;
    }

    public boolean equals(Object p5)
    {
        int v1 = 0;
        if ((super.equals(p5)) && (((p5 instanceof com.flurry.org.apache.avro.Protocol$TwoWayMessage)) && ((this.response.equals(((com.flurry.org.apache.avro.Protocol$TwoWayMessage) p5).response)) && (this.errors.equals(((com.flurry.org.apache.avro.Protocol$TwoWayMessage) p5).errors))))) {
            v1 = 1;
        }
        return v1;
    }

    public com.flurry.org.apache.avro.Schema getErrors()
    {
        return this.errors;
    }

    public com.flurry.org.apache.avro.Schema getResponse()
    {
        return this.response;
    }

    public int hashCode()
    {
        return ((super.hashCode() + this.response.hashCode()) + this.errors.hashCode());
    }

    public boolean isOneWay()
    {
        return 0;
    }

    void toJson1(com.flurry.org.codehaus.jackson.JsonGenerator p6)
    {
        p6.writeFieldName("response");
        this.response.toJson(com.flurry.org.apache.avro.Protocol.access$100(this.this$0), p6);
        java.util.List v0 = this.errors.getTypes();
        if (v0.size() > 1) {
            com.flurry.org.apache.avro.Schema v1 = com.flurry.org.apache.avro.Schema.createUnion(v0.subList(1, v0.size()));
            p6.writeFieldName("errors");
            v1.toJson(com.flurry.org.apache.avro.Protocol.access$100(this.this$0), p6);
        }
        return;
    }
}
