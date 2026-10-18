package com.flurry.org.apache.avro;
public class Schema$Field {
    private java.util.Set aliases;
    private final com.flurry.org.codehaus.jackson.JsonNode defaultValue;
    private final String doc;
    private final String name;
    private final com.flurry.org.apache.avro.Schema$Field$Order order;
    private transient int position;
    private final com.flurry.org.apache.avro.Schema$Props props;
    private final com.flurry.org.apache.avro.Schema schema;

    public Schema$Field(String p7, com.flurry.org.apache.avro.Schema p8, String p9, com.flurry.org.codehaus.jackson.JsonNode p10)
    {
        this(p7, p8, p9, p10, com.flurry.org.apache.avro.Schema$Field$Order.ASCENDING);
        return;
    }

    public Schema$Field(String p3, com.flurry.org.apache.avro.Schema p4, String p5, com.flurry.org.codehaus.jackson.JsonNode p6, com.flurry.org.apache.avro.Schema$Field$Order p7)
    {
        this.position = -1;
        this.props = new com.flurry.org.apache.avro.Schema$Props(com.flurry.org.apache.avro.Schema.access$100());
        this.name = com.flurry.org.apache.avro.Schema.access$200(p3);
        this.schema = p4;
        this.doc = p5;
        this.defaultValue = p6;
        this.order = p7;
        return;
    }

    static synthetic java.util.Set access$1300(com.flurry.org.apache.avro.Schema$Field p1)
    {
        return p1.aliases;
    }

    static synthetic java.util.Set access$1302(com.flurry.org.apache.avro.Schema$Field p0, java.util.Set p1)
    {
        p0.aliases = p1;
        return p1;
    }

    static synthetic com.flurry.org.apache.avro.Schema$Props access$1400(com.flurry.org.apache.avro.Schema$Field p1)
    {
        return p1.props;
    }

    static synthetic com.flurry.org.apache.avro.Schema access$1600(com.flurry.org.apache.avro.Schema$Field p1)
    {
        return p1.schema;
    }

    static synthetic String access$1700(com.flurry.org.apache.avro.Schema$Field p1)
    {
        return p1.name;
    }

    static synthetic String access$1800(com.flurry.org.apache.avro.Schema$Field p1)
    {
        return p1.doc;
    }

    static synthetic com.flurry.org.codehaus.jackson.JsonNode access$1900(com.flurry.org.apache.avro.Schema$Field p1)
    {
        return p1.defaultValue;
    }

    static synthetic com.flurry.org.apache.avro.Schema$Field$Order access$2000(com.flurry.org.apache.avro.Schema$Field p1)
    {
        return p1.order;
    }

    static synthetic int access$700(com.flurry.org.apache.avro.Schema$Field p1)
    {
        return p1.position;
    }

    static synthetic int access$702(com.flurry.org.apache.avro.Schema$Field p0, int p1)
    {
        p0.position = p1;
        return p1;
    }

    private boolean defaultValueEquals(com.flurry.org.codehaus.jackson.JsonNode p3)
    {
        boolean v0_1;
        if (this.defaultValue != null) {
            if (!Double.isNaN(this.defaultValue.getValueAsDouble())) {
                v0_1 = this.defaultValue.equals(p3);
            } else {
                v0_1 = Double.isNaN(p3.getValueAsDouble());
            }
        } else {
            if (p3 != null) {
                v0_1 = 0;
            } else {
                v0_1 = 1;
            }
        }
        return v0_1;
    }

    public void addAlias(String p2)
    {
        if (this.aliases == null) {
            this.aliases = new java.util.LinkedHashSet();
        }
        this.aliases.add(p2);
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

    public java.util.Set aliases()
    {
        java.util.Set v0_2;
        if (this.aliases != null) {
            v0_2 = java.util.Collections.unmodifiableSet(this.aliases);
        } else {
            v0_2 = java.util.Collections.emptySet();
        }
        return v0_2;
    }

    public com.flurry.org.codehaus.jackson.JsonNode defaultValue()
    {
        return this.defaultValue;
    }

    public String doc()
    {
        return this.doc;
    }

    public boolean equals(Object p6)
    {
        int v1 = 1;
        if (p6 != this) {
            if ((p6 instanceof com.flurry.org.apache.avro.Schema$Field)) {
                if ((!this.name.equals(((com.flurry.org.apache.avro.Schema$Field) p6).name)) || ((!this.schema.equals(((com.flurry.org.apache.avro.Schema$Field) p6).schema)) || ((!this.defaultValueEquals(((com.flurry.org.apache.avro.Schema$Field) p6).defaultValue)) || (!this.props.equals(((com.flurry.org.apache.avro.Schema$Field) p6).props))))) {
                    v1 = 0;
                }
            } else {
                v1 = 0;
            }
        }
        return v1;
    }

    public declared_synchronized String getProp(String p2)
    {
        try {
            return ((String) this.props.get(p2));
        } catch (Throwable v0_3) {
            throw v0_3;
        }
    }

    public int hashCode()
    {
        return (this.name.hashCode() + this.schema.computeHash());
    }

    public String name()
    {
        return this.name;
    }

    public com.flurry.org.apache.avro.Schema$Field$Order order()
    {
        return this.order;
    }

    public int pos()
    {
        return this.position;
    }

    public java.util.Map props()
    {
        return java.util.Collections.unmodifiableMap(this.props);
    }

    public com.flurry.org.apache.avro.Schema schema()
    {
        return this.schema;
    }

    public String toString()
    {
        return new StringBuilder().append(this.name).append(" type:").append(com.flurry.org.apache.avro.Schema.access$300(this.schema)).append(" pos:").append(this.position).toString();
    }
}
