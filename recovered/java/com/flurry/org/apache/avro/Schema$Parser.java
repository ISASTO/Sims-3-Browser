package com.flurry.org.apache.avro;
public class Schema$Parser {
    private com.flurry.org.apache.avro.Schema$Names names;
    private boolean validate;

    public Schema$Parser()
    {
        this.names = new com.flurry.org.apache.avro.Schema$Names();
        this.validate = 1;
        return;
    }

    private com.flurry.org.apache.avro.Schema parse(com.flurry.org.codehaus.jackson.JsonParser p6)
    {
        boolean v1 = ((Boolean) com.flurry.org.apache.avro.Schema.access$1500().get()).booleanValue();
        try {
            com.flurry.org.apache.avro.Schema.access$1500().set(Boolean.valueOf(this.validate));
            com.flurry.org.apache.avro.SchemaParseException v2_3 = com.flurry.org.apache.avro.Schema.parse(com.flurry.org.apache.avro.Schema.MAPPER.readTree(p6), this.names);
            com.flurry.org.apache.avro.Schema.access$1500().set(Boolean.valueOf(v1));
            return v2_3;
        } catch (com.flurry.org.codehaus.jackson.JsonParseException v0) {
            throw new com.flurry.org.apache.avro.SchemaParseException(v0);
        } catch (com.flurry.org.apache.avro.SchemaParseException v2_6) {
            com.flurry.org.apache.avro.Schema.access$1500().set(Boolean.valueOf(v1));
            throw v2_6;
        }
    }

    public com.flurry.org.apache.avro.Schema$Parser addTypes(java.util.Map p4)
    {
        java.util.Iterator v0 = p4.values().iterator();
        while (v0.hasNext()) {
            this.names.add(((com.flurry.org.apache.avro.Schema) v0.next()));
        }
        return this;
    }

    public java.util.Map getTypes()
    {
        java.util.LinkedHashMap v1_1 = new java.util.LinkedHashMap();
        java.util.Iterator v0 = this.names.values().iterator();
        while (v0.hasNext()) {
            com.flurry.org.apache.avro.Schema v2_1 = ((com.flurry.org.apache.avro.Schema) v0.next());
            v1_1.put(v2_1.getFullName(), v2_1);
        }
        return v1_1;
    }

    public boolean getValidate()
    {
        return this.validate;
    }

    public com.flurry.org.apache.avro.Schema parse(java.io.File p2)
    {
        return this.parse(com.flurry.org.apache.avro.Schema.FACTORY.createJsonParser(p2));
    }

    public com.flurry.org.apache.avro.Schema parse(java.io.InputStream p2)
    {
        return this.parse(com.flurry.org.apache.avro.Schema.FACTORY.createJsonParser(p2));
    }

    public com.flurry.org.apache.avro.Schema parse(String p4)
    {
        try {
            return this.parse(com.flurry.org.apache.avro.Schema.FACTORY.createJsonParser(new java.io.StringReader(p4)));
        } catch (java.io.IOException v0) {
            throw new com.flurry.org.apache.avro.SchemaParseException(v0);
        }
    }

    public com.flurry.org.apache.avro.Schema$Parser setValidate(boolean p1)
    {
        this.validate = p1;
        return this;
    }
}
