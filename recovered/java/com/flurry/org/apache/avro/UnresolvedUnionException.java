package com.flurry.org.apache.avro;
public class UnresolvedUnionException extends com.flurry.org.apache.avro.AvroRuntimeException {
    private com.flurry.org.apache.avro.Schema unionSchema;
    private Object unresolvedDatum;

    public UnresolvedUnionException(com.flurry.org.apache.avro.Schema p3, Object p4)
    {
        super(new StringBuilder().append("Not in union ").append(p3).append(": ").append(p4).toString());
        super.unionSchema = p3;
        super.unresolvedDatum = p4;
        return;
    }

    public com.flurry.org.apache.avro.Schema getUnionSchema()
    {
        return this.unionSchema;
    }

    public Object getUnresolvedDatum()
    {
        return this.unresolvedDatum;
    }
}
