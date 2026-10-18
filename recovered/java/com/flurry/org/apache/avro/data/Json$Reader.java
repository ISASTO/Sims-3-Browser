package com.flurry.org.apache.avro.data;
public class Json$Reader implements com.flurry.org.apache.avro.io.DatumReader {
    private com.flurry.org.apache.avro.io.ResolvingDecoder resolver;
    private com.flurry.org.apache.avro.Schema written;

    public Json$Reader()
    {
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode read(com.flurry.org.codehaus.jackson.JsonNode p6, com.flurry.org.apache.avro.io.Decoder p7)
    {
        com.flurry.org.codehaus.jackson.JsonNode v0;
        if (this.written != null) {
            if (this.resolver == null) {
                this.resolver = com.flurry.org.apache.avro.io.DecoderFactory.get().resolvingDecoder(this.written, com.flurry.org.apache.avro.data.Json.SCHEMA, 0);
            }
            this.resolver.configure(p7);
            v0 = com.flurry.org.apache.avro.data.Json.read(this.resolver);
            this.resolver.drain();
        } else {
            v0 = com.flurry.org.apache.avro.data.Json.read(p7);
        }
        return v0;
    }

    public bridge synthetic Object read(Object p2, com.flurry.org.apache.avro.io.Decoder p3)
    {
        return this.read(((com.flurry.org.codehaus.jackson.JsonNode) p2), p3);
    }

    public void setSchema(com.flurry.org.apache.avro.Schema p3)
    {
        if (com.flurry.org.apache.avro.data.Json.SCHEMA.equals(this.written)) {
            p3 = 0;
        }
        this.written = p3;
        return;
    }
}
