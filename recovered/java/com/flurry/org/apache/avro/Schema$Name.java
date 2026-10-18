package com.flurry.org.apache.avro;
 class Schema$Name {
    private final String full;
    private final String name;
    private final String space;

    public Schema$Name(String p4, String p5)
    {
        if (p4 != null) {
            int v0 = p4.lastIndexOf(46);
            if (v0 >= 0) {
                this.space = p4.substring(0, v0);
                this.name = com.flurry.org.apache.avro.Schema.access$200(p4.substring((v0 + 1), p4.length()));
            } else {
                this.space = p5;
                this.name = com.flurry.org.apache.avro.Schema.access$200(p4);
            }
            String v1_11;
            if (this.space != null) {
                v1_11 = new StringBuilder().append(this.space).append(".").append(this.name).toString();
            } else {
                v1_11 = this.name;
            }
            this.full = v1_11;
        } else {
            this.full = 0;
            this.space = 0;
            this.name = 0;
        }
        return;
    }

    static synthetic String access$400(com.flurry.org.apache.avro.Schema$Name p1)
    {
        return p1.full;
    }

    static synthetic String access$500(com.flurry.org.apache.avro.Schema$Name p1)
    {
        return p1.name;
    }

    static synthetic String access$600(com.flurry.org.apache.avro.Schema$Name p1)
    {
        return p1.space;
    }

    public boolean equals(Object p5)
    {
        String v1_0 = 1;
        if (p5 != this) {
            if ((p5 instanceof com.flurry.org.apache.avro.Schema$Name)) {
                if (this.full != null) {
                    v1_0 = this.full.equals(((com.flurry.org.apache.avro.Schema$Name) p5).full);
                } else {
                    if (((com.flurry.org.apache.avro.Schema$Name) p5).full != null) {
                        v1_0 = 0;
                    }
                }
            } else {
                v1_0 = 0;
            }
        }
        return v1_0;
    }

    public String getQualified(String p2)
    {
        if ((this.space != null) && (!this.space.equals(p2))) {
            String v0_3 = this.full;
        } else {
            v0_3 = this.name;
        }
        return v0_3;
    }

    public int hashCode()
    {
        int v0_2;
        if (this.full != null) {
            v0_2 = this.full.hashCode();
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    public String toString()
    {
        return this.full;
    }

    public void writeName(com.flurry.org.apache.avro.Schema$Names p3, com.flurry.org.codehaus.jackson.JsonGenerator p4)
    {
        if (this.name != null) {
            p4.writeStringField("name", this.name);
        }
        if (this.space != null) {
            if (!this.space.equals(p3.space())) {
                p4.writeStringField("namespace", this.space);
            }
            if (p3.space() == null) {
                p3.space(this.space);
            }
        }
        return;
    }
}
