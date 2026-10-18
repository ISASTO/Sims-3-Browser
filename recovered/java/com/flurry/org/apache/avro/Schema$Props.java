package com.flurry.org.apache.avro;
final class Schema$Props extends java.util.LinkedHashMap {
    private java.util.Set reserved;

    public Schema$Props(java.util.Set p2)
    {
        super(1);
        super.reserved = p2;
        return;
    }

    public void add(String p5, String p6)
    {
        if (!this.reserved.contains(p5)) {
            if (p6 != null) {
                String v0_1 = ((String) this.get(p5));
                if (v0_1 != null) {
                    if (!v0_1.equals(p6)) {
                        throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Can\'t overwrite property: ").append(p5).toString());
                    }
                } else {
                    this.put(p5, p6);
                }
                return;
            } else {
                throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Can\'t set a property to null: ").append(p5).toString());
            }
        } else {
            throw new com.flurry.org.apache.avro.AvroRuntimeException(new StringBuilder().append("Can\'t set reserved property: ").append(p5).toString());
        }
    }

    public void write(com.flurry.org.codehaus.jackson.JsonGenerator p5)
    {
        java.util.Iterator v1 = this.entrySet().iterator();
        while (v1.hasNext()) {
            java.util.Map$Entry v0_0 = ((java.util.Map$Entry) v1.next());
            p5.writeStringField(((String) v0_0.getKey()), ((String) v0_0.getValue()));
        }
        return;
    }
}
