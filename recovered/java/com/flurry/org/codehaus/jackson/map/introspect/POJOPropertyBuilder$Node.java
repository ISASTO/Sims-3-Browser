package com.flurry.org.codehaus.jackson.map.introspect;
final class POJOPropertyBuilder$Node {
    public final String explicitName;
    public final boolean isMarkedIgnored;
    public final boolean isVisible;
    public final com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node next;
    public final Object value;

    public POJOPropertyBuilder$Node(Object p3, com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node p4, String p5, boolean p6, boolean p7)
    {
        this.value = p3;
        this.next = p4;
        if (p5 != 0) {
            if (p5.length() == 0) {
                p5 = 0;
            }
            this.explicitName = p5;
        } else {
            this.explicitName = 0;
        }
        this.isVisible = p6;
        this.isMarkedIgnored = p7;
        return;
    }

    static synthetic com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node access$000(com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node p1, com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node p2)
    {
        return p1.append(p2);
    }

    private com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node append(com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node p2)
    {
        com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node v0_3;
        if (this.next != null) {
            v0_3 = this.withNext(this.next.append(p2));
        } else {
            v0_3 = this.withNext(p2);
        }
        return v0_3;
    }

    public String toString()
    {
        String v0 = new StringBuilder().append(this.value.toString()).append("[visible=").append(this.isVisible).append("]").toString();
        if (this.next != null) {
            v0 = new StringBuilder().append(v0).append(", ").append(this.next.toString()).toString();
        }
        return v0;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node trimByVisibility()
    {
        com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node v0;
        if (this.next != null) {
            v0 = this.next.trimByVisibility();
            if (this.explicitName == null) {
                if (v0.explicitName == null) {
                    if (this.isVisible != v0.isVisible) {
                        if (this.isVisible) {
                            v0 = this.withNext(0);
                        }
                    } else {
                        v0 = this.withNext(v0);
                    }
                }
            } else {
                if (v0.explicitName != null) {
                    v0 = this.withNext(v0);
                } else {
                    v0 = this.withNext(0);
                }
            }
        } else {
            v0 = this;
        }
        return v0;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node withNext(com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node p7)
    {
        if (p7 != this.next) {
            this = new com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node(this.value, p7, this.explicitName, this.isVisible, this.isMarkedIgnored);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node withValue(Object p7)
    {
        if (p7 != this.value) {
            this = new com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node(p7, this.next, this.explicitName, this.isVisible, this.isMarkedIgnored);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node withoutIgnored()
    {
        com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node v1_1;
        if (!this.isMarkedIgnored) {
            if (this.next != null) {
                com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node v0 = this.next.withoutIgnored();
                if (v0 != this.next) {
                    v1_1 = this.withNext(v0);
                    return v1_1;
                }
            }
            v1_1 = this;
        } else {
            if (this.next != null) {
                v1_1 = this.next.withoutIgnored();
            } else {
                v1_1 = 0;
            }
        }
        return v1_1;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node withoutNonVisible()
    {
        com.flurry.org.codehaus.jackson.map.introspect.POJOPropertyBuilder$Node v0;
        if (this.next != null) {
            v0 = this.next.withoutNonVisible();
        } else {
            v0 = 0;
        }
        if (this.isVisible) {
            v0 = this.withNext(v0);
        }
        return v0;
    }
}
