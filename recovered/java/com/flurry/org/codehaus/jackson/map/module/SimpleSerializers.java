package com.flurry.org.codehaus.jackson.map.module;
public class SimpleSerializers extends com.flurry.org.codehaus.jackson.map.Serializers$Base {
    protected java.util.HashMap _classMappings;
    protected java.util.HashMap _interfaceMappings;

    public SimpleSerializers()
    {
        this._classMappings = 0;
        this._interfaceMappings = 0;
        return;
    }

    private void _addSerializer(Class p3, com.flurry.org.codehaus.jackson.map.JsonSerializer p4)
    {
        com.flurry.org.codehaus.jackson.map.type.ClassKey v0_1 = new com.flurry.org.codehaus.jackson.map.type.ClassKey(p3);
        if (!p3.isInterface()) {
            if (this._classMappings == null) {
                this._classMappings = new java.util.HashMap();
            }
            this._classMappings.put(v0_1, p4);
        } else {
            if (this._interfaceMappings == null) {
                this._interfaceMappings = new java.util.HashMap();
            }
            this._interfaceMappings.put(v0_1, p4);
        }
        return;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonSerializer _findInterfaceMapping(Class p7, com.flurry.org.codehaus.jackson.map.type.ClassKey p8)
    {
        Class[] v0 = p7.getInterfaces();
        int v3 = v0.length;
        int v1 = 0;
        while (v1 < v3) {
            Class v2 = v0[v1];
            p8.reset(v2);
            com.flurry.org.codehaus.jackson.map.JsonSerializer v4_1 = ((com.flurry.org.codehaus.jackson.map.JsonSerializer) this._interfaceMappings.get(p8));
            if (v4_1 == null) {
                v4_1 = this._findInterfaceMapping(v2, p8);
                if (v4_1 == null) {
                    v1++;
                }
            }
            return v4_1;
        }
        v4_1 = 0;
        return v4_1;
    }

    public void addSerializer(com.flurry.org.codehaus.jackson.map.JsonSerializer p5)
    {
        Class v0 = p5.handledType();
        if ((v0 != null) && (v0 != Object)) {
            this._addSerializer(v0, p5);
            return;
        } else {
            throw new IllegalArgumentException(new StringBuilder().append("JsonSerializer of type ").append(p5.getClass().getName()).append(" does not define valid handledType() -- must either register with method that takes type argument ").append(" or make serializer extend \'org.codehaus.jackson.map.ser.std.SerializerBase\'").toString());
        }
    }

    public void addSerializer(Class p1, com.flurry.org.codehaus.jackson.map.JsonSerializer p2)
    {
        this._addSerializer(p1, p2);
        return;
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer findArraySerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p2, com.flurry.org.codehaus.jackson.map.type.ArrayType p3, com.flurry.org.codehaus.jackson.map.BeanDescription p4, com.flurry.org.codehaus.jackson.map.BeanProperty p5, com.flurry.org.codehaus.jackson.map.TypeSerializer p6, com.flurry.org.codehaus.jackson.map.JsonSerializer p7)
    {
        return this.findSerializer(p2, p3, p4, p5);
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer findCollectionLikeSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p2, com.flurry.org.codehaus.jackson.map.type.CollectionLikeType p3, com.flurry.org.codehaus.jackson.map.BeanDescription p4, com.flurry.org.codehaus.jackson.map.BeanProperty p5, com.flurry.org.codehaus.jackson.map.TypeSerializer p6, com.flurry.org.codehaus.jackson.map.JsonSerializer p7)
    {
        return this.findSerializer(p2, p3, p4, p5);
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer findCollectionSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p2, com.flurry.org.codehaus.jackson.map.type.CollectionType p3, com.flurry.org.codehaus.jackson.map.BeanDescription p4, com.flurry.org.codehaus.jackson.map.BeanProperty p5, com.flurry.org.codehaus.jackson.map.TypeSerializer p6, com.flurry.org.codehaus.jackson.map.JsonSerializer p7)
    {
        return this.findSerializer(p2, p3, p4, p5);
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer findMapLikeSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p2, com.flurry.org.codehaus.jackson.map.type.MapLikeType p3, com.flurry.org.codehaus.jackson.map.BeanDescription p4, com.flurry.org.codehaus.jackson.map.BeanProperty p5, com.flurry.org.codehaus.jackson.map.JsonSerializer p6, com.flurry.org.codehaus.jackson.map.TypeSerializer p7, com.flurry.org.codehaus.jackson.map.JsonSerializer p8)
    {
        return this.findSerializer(p2, p3, p4, p5);
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer findMapSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p2, com.flurry.org.codehaus.jackson.map.type.MapType p3, com.flurry.org.codehaus.jackson.map.BeanDescription p4, com.flurry.org.codehaus.jackson.map.BeanProperty p5, com.flurry.org.codehaus.jackson.map.JsonSerializer p6, com.flurry.org.codehaus.jackson.map.TypeSerializer p7, com.flurry.org.codehaus.jackson.map.JsonSerializer p8)
    {
        return this.findSerializer(p2, p3, p4, p5);
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer findSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p6, com.flurry.org.codehaus.jackson.type.JavaType p7, com.flurry.org.codehaus.jackson.map.BeanDescription p8, com.flurry.org.codehaus.jackson.map.BeanProperty p9)
    {
        com.flurry.org.codehaus.jackson.map.JsonSerializer v4_2;
        Class v0 = p7.getRawClass();
        com.flurry.org.codehaus.jackson.map.type.ClassKey v2_1 = new com.flurry.org.codehaus.jackson.map.type.ClassKey(v0);
        if (!v0.isInterface()) {
            if (this._classMappings == null) {
                if (this._interfaceMappings != null) {
                    com.flurry.org.codehaus.jackson.map.JsonSerializer v3_6 = this._findInterfaceMapping(v0, v2_1);
                    if (v3_6 == null) {
                        if (v0.isInterface()) {
                            v4_2 = 0;
                            return v4_2;
                        }
                        do {
                            v0 = v0.getSuperclass();
                            if (v0 != null) {
                                com.flurry.org.codehaus.jackson.map.JsonSerializer v3_7 = this._findInterfaceMapping(v0, v2_1);
                            }
                        } while(v3_7 == null);
                        v4_2 = v3_7;
                        return v4_2;
                    } else {
                        v4_2 = v3_6;
                        return v4_2;
                    }
                }
            } else {
                com.flurry.org.codehaus.jackson.map.JsonSerializer v3_1 = ((com.flurry.org.codehaus.jackson.map.JsonSerializer) this._classMappings.get(v2_1));
                if (v3_1 == null) {
                    Class v1 = v0;
                    while (v1 != null) {
                        v2_1.reset(v1);
                        com.flurry.org.codehaus.jackson.map.JsonSerializer v3_3 = ((com.flurry.org.codehaus.jackson.map.JsonSerializer) this._classMappings.get(v2_1));
                        if (v3_3 == null) {
                            v1 = v1.getSuperclass();
                        } else {
                            v4_2 = v3_3;
                        }
                    }
                } else {
                    v4_2 = v3_1;
                }
            }
        } else {
            if (this._interfaceMappings == null) {
            } else {
                com.flurry.org.codehaus.jackson.map.JsonSerializer v3_5 = ((com.flurry.org.codehaus.jackson.map.JsonSerializer) this._interfaceMappings.get(v2_1));
                if (v3_5 == null) {
                } else {
                    v4_2 = v3_5;
                }
            }
        }
        return v4_2;
    }
}
