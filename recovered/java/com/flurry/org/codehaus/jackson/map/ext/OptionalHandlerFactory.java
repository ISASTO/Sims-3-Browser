package com.flurry.org.codehaus.jackson.map.ext;
public class OptionalHandlerFactory {
    private static final String CLASS_NAME_DOM_DOCUMENT = "org.w3c.dom.Node";
    private static final String CLASS_NAME_DOM_NODE = "org.w3c.dom.Node";
    private static final String DESERIALIZERS_FOR_JAVAX_XML = "com.flurry.org.codehaus.jackson.map.ext.CoreXMLDeserializers";
    private static final String DESERIALIZERS_FOR_JODA_DATETIME = "com.flurry.org.codehaus.jackson.map.ext.JodaDeserializers";
    private static final String DESERIALIZER_FOR_DOM_DOCUMENT = "com.flurry.org.codehaus.jackson.map.ext.DOMDeserializer$DocumentDeserializer";
    private static final String DESERIALIZER_FOR_DOM_NODE = "com.flurry.org.codehaus.jackson.map.ext.DOMDeserializer$NodeDeserializer";
    private static final String PACKAGE_PREFIX_JAVAX_XML = "javax.xml.";
    private static final String PACKAGE_PREFIX_JODA_DATETIME = "org.joda.time.";
    private static final String SERIALIZERS_FOR_JAVAX_XML = "com.flurry.org.codehaus.jackson.map.ext.CoreXMLSerializers";
    private static final String SERIALIZERS_FOR_JODA_DATETIME = "com.flurry.org.codehaus.jackson.map.ext.JodaSerializers";
    private static final String SERIALIZER_FOR_DOM_NODE = "com.flurry.org.codehaus.jackson.map.ext.DOMSerializer";
    public static final com.flurry.org.codehaus.jackson.map.ext.OptionalHandlerFactory instance;

    static OptionalHandlerFactory()
    {
        com.flurry.org.codehaus.jackson.map.ext.OptionalHandlerFactory.instance = new com.flurry.org.codehaus.jackson.map.ext.OptionalHandlerFactory();
        return;
    }

    protected OptionalHandlerFactory()
    {
        return;
    }

    private boolean doesImplement(Class p4, String p5)
    {
        int v1 = 1;
        Class v0 = p4;
        while (v0 != null) {
            if ((!v0.getName().equals(p5)) && (!this.hasInterface(v0, p5))) {
                v0 = v0.getSuperclass();
            }
            return v1;
        }
        v1 = 0;
        return v1;
    }

    private boolean hasInterface(Class p8, String p9)
    {
        int v5 = 1;
        Class[] v3 = p8.getInterfaces();
        Class[] v0_0 = v3;
        int v1_1 = 0;
        while (v1_1 < v0_0.length) {
            if (!v0_0[v1_1].getName().equals(p9)) {
                v1_1++;
            }
            return v5;
        }
        Class[] v0_1 = v3;
        int v1_0 = 0;
        while (v1_0 < v0_1.length) {
            if (!this.hasInterface(v0_1[v1_0], p9)) {
                v1_0++;
            }
            return v5;
        }
        v5 = 0;
        return v5;
    }

    private boolean hasInterfaceStartingWith(Class p8, String p9)
    {
        int v5 = 1;
        Class[] v3 = p8.getInterfaces();
        Class[] v0_0 = v3;
        int v1_1 = 0;
        while (v1_1 < v0_0.length) {
            if (!v0_0[v1_1].getName().startsWith(p9)) {
                v1_1++;
            }
            return v5;
        }
        Class[] v0_1 = v3;
        int v1_0 = 0;
        while (v1_0 < v0_1.length) {
            if (!this.hasInterfaceStartingWith(v0_1[v1_0], p9)) {
                v1_0++;
            }
            return v5;
        }
        v5 = 0;
        return v5;
    }

    private boolean hasSupertypeStartingWith(Class p5, String p6)
    {
        int v2 = 1;
        Class v1 = p5.getSuperclass();
        while (v1 != null) {
            if (!v1.getName().startsWith(p6)) {
                v1 = v1.getSuperclass();
            }
            return v2;
        }
        Class v0 = p5;
        while (v0 != null) {
            if (!this.hasInterfaceStartingWith(v0, p6)) {
                v0 = v0.getSuperclass();
            }
            return v2;
        }
        v2 = 0;
        return v2;
    }

    private Object instantiate(String p2)
    {
        try {
            int v0_1 = Class.forName(p2).newInstance();
        } catch (int v0) {
            v0_1 = 0;
        } catch (int v0) {
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer findDeserializer(com.flurry.org.codehaus.jackson.type.JavaType p11, com.flurry.org.codehaus.jackson.map.DeserializationConfig p12, com.flurry.org.codehaus.jackson.map.DeserializerProvider p13)
    {
        String v3;
        com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer v8_0 = 0;
        Class v7 = p11.getRawClass();
        String v0 = v7.getName();
        if (!v0.startsWith("org.joda.time.")) {
            if ((!v0.startsWith("javax.xml.")) && (!this.hasSupertypeStartingWith(v7, "javax.xml."))) {
                if (!this.doesImplement(v7, "org.w3c.dom.Node")) {
                    if (this.doesImplement(v7, "org.w3c.dom.Node")) {
                        v8_0 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) this.instantiate("com.flurry.org.codehaus.jackson.map.ext.DOMDeserializer$NodeDeserializer"));
                    }
                } else {
                    v8_0 = ((com.flurry.org.codehaus.jackson.map.JsonDeserializer) this.instantiate("com.flurry.org.codehaus.jackson.map.ext.DOMDeserializer$DocumentDeserializer"));
                }
            } else {
                v3 = "com.flurry.org.codehaus.jackson.map.ext.CoreXMLDeserializers";
                Object v5 = this.instantiate(v3);
                if (v5 != null) {
                    java.util.Collection v2 = ((com.flurry.org.codehaus.jackson.map.util.Provider) v5).provide();
                    java.util.Iterator v4_0 = v2.iterator();
                    while (v4_0.hasNext()) {
                        com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer v1_3 = ((com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer) v4_0.next());
                        if (v7 == v1_3.getValueClass()) {
                            v8_0 = v1_3;
                        }
                    }
                    java.util.Iterator v4_1 = v2.iterator();
                    while (v4_1.hasNext()) {
                        com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer v1_1 = ((com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer) v4_1.next());
                        if (v1_1.getValueClass().isAssignableFrom(v7)) {
                            v8_0 = v1_1;
                            break;
                        }
                    }
                }
            }
        } else {
            v3 = "com.flurry.org.codehaus.jackson.map.ext.JodaDeserializers";
        }
        return v8_0;
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer findSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p11, com.flurry.org.codehaus.jackson.type.JavaType p12)
    {
        String v3;
        com.flurry.org.codehaus.jackson.map.JsonSerializer v8_5;
        Class v7 = p12.getRawClass();
        String v0 = v7.getName();
        if (!v0.startsWith("org.joda.time.")) {
            if ((!v0.startsWith("javax.xml.")) && (!this.hasSupertypeStartingWith(v7, "javax.xml."))) {
                if (!this.doesImplement(v7, "org.w3c.dom.Node")) {
                    v8_5 = 0;
                } else {
                    v8_5 = ((com.flurry.org.codehaus.jackson.map.JsonSerializer) this.instantiate("com.flurry.org.codehaus.jackson.map.ext.DOMSerializer"));
                }
            } else {
                v3 = "com.flurry.org.codehaus.jackson.map.ext.CoreXMLSerializers";
                Object v5 = this.instantiate(v3);
                if (v5 != null) {
                    java.util.Collection v1 = ((com.flurry.org.codehaus.jackson.map.util.Provider) v5).provide();
                    java.util.Iterator v4_0 = v1.iterator();
                    while (v4_0.hasNext()) {
                        java.util.Map$Entry v2_3 = ((java.util.Map$Entry) v4_0.next());
                        if (v7 == v2_3.getKey()) {
                            v8_5 = ((com.flurry.org.codehaus.jackson.map.JsonSerializer) v2_3.getValue());
                        }
                    }
                    java.util.Iterator v4_1 = v1.iterator();
                    while (v4_1.hasNext()) {
                        java.util.Map$Entry v2_1 = ((java.util.Map$Entry) v4_1.next());
                        if (((Class) v2_1.getKey()).isAssignableFrom(v7)) {
                            v8_5 = ((com.flurry.org.codehaus.jackson.map.JsonSerializer) v2_1.getValue());
                        }
                    }
                    v8_5 = 0;
                } else {
                    v8_5 = 0;
                }
            }
        } else {
            v3 = "com.flurry.org.codehaus.jackson.map.ext.JodaSerializers";
        }
        return v8_5;
    }
}
