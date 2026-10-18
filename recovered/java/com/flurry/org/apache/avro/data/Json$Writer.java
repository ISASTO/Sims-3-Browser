package com.flurry.org.apache.avro.data;
public class Json$Writer implements com.flurry.org.apache.avro.io.DatumWriter {

    public Json$Writer()
    {
        return;
    }

    public void setSchema(com.flurry.org.apache.avro.Schema p4)
    {
        if (com.flurry.org.apache.avro.data.Json.SCHEMA.equals(p4)) {
            return;
        } else {
            throw new RuntimeException(new StringBuilder().append("Not the Json schema: ").append(p4).toString());
        }
    }

    public void write(com.flurry.org.codehaus.jackson.JsonNode p1, com.flurry.org.apache.avro.io.Encoder p2)
    {
        com.flurry.org.apache.avro.data.Json.write(p1, p2);
        return;
    }

    public bridge synthetic void write(Object p1, com.flurry.org.apache.avro.io.Encoder p2)
    {
        this.write(((com.flurry.org.codehaus.jackson.JsonNode) p1), p2);
        return;
    }
}
