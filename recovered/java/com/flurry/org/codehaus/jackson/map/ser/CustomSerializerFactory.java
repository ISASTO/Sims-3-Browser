package com.flurry.org.codehaus.jackson.map.ser;
public class CustomSerializerFactory extends com.flurry.org.codehaus.jackson.map.ser.BeanSerializerFactory {
    protected java.util.HashMap _directClassMappings;
    protected com.flurry.org.codehaus.jackson.map.JsonSerializer _enumSerializerOverride;
    protected java.util.HashMap _interfaceMappings;
    protected java.util.HashMap _transitiveClassMappings;

    public CustomSerializerFactory()
    {
        this(0);
        return;
    }

    public CustomSerializerFactory(com.flurry.org.codehaus.jackson.map.SerializerFactory$Config p2)
    {
        super(p2);
        super._directClassMappings = 0;
        super._transitiveClassMappings = 0;
        super._interfaceMappings = 0;
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

    public void addGenericMapping(Class p3, com.flurry.org.codehaus.jackson.map.JsonSerializer p4)
    {
        com.flurry.org.codehaus.jackson.map.type.ClassKey v0_1 = new com.flurry.org.codehaus.jackson.map.type.ClassKey(p3);
        if (!p3.isInterface()) {
            if (this._transitiveClassMappings == null) {
                this._transitiveClassMappings = new java.util.HashMap();
            }
            this._transitiveClassMappings.put(v0_1, p4);
        } else {
            if (this._interfaceMappings == null) {
                this._interfaceMappings = new java.util.HashMap();
            }
            this._interfaceMappings.put(v0_1, p4);
        }
        return;
    }

    public void addSpecificMapping(Class p5, com.flurry.org.codehaus.jackson.map.JsonSerializer p6)
    {
        com.flurry.org.codehaus.jackson.map.type.ClassKey v0_1 = new com.flurry.org.codehaus.jackson.map.type.ClassKey(p5);
        if (!p5.isInterface()) {
            if (!reflect.Modifier.isAbstract(p5.getModifiers())) {
                if (this._directClassMappings == null) {
                    this._directClassMappings = new java.util.HashMap();
                }
                this._directClassMappings.put(v0_1, p6);
                return;
            } else {
                throw new IllegalArgumentException(new StringBuilder().append("Can not add specific mapping for an abstract class (").append(p5.getName()).append(")").toString());
            }
        } else {
            throw new IllegalArgumentException(new StringBuilder().append("Can not add specific mapping for an interface (").append(p5.getName()).append(")").toString());
        }
    }

    public com.flurry.org.codehaus.jackson.map.JsonSerializer createSerializer(com.flurry.org.codehaus.jackson.map.SerializationConfig p3, com.flurry.org.codehaus.jackson.type.JavaType p4, com.flurry.org.codehaus.jackson.map.BeanProperty p5)
    {
        com.flurry.org.codehaus.jackson.map.JsonSerializer v0 = this.findCustomSerializer(p4.getRawClass(), p3);
        if (v0 == null) {
            v0 = super.createSerializer(p3, p4, p5);
        }
        return v0;
    }

    protected com.flurry.org.codehaus.jackson.map.JsonSerializer findCustomSerializer(Class p5, com.flurry.org.codehaus.jackson.map.SerializationConfig p6)
    {
        com.flurry.org.codehaus.jackson.map.JsonSerializer v3_5;
        com.flurry.org.codehaus.jackson.map.type.ClassKey v1_1 = new com.flurry.org.codehaus.jackson.map.type.ClassKey(p5);
        if (this._directClassMappings == null) {
            if ((!p5.isEnum()) || (this._enumSerializerOverride == null)) {
                if (this._transitiveClassMappings != null) {
                    Class v0_0 = p5;
                    while (v0_0 != null) {
                        v1_1.reset(v0_0);
                        com.flurry.org.codehaus.jackson.map.JsonSerializer v2_4 = ((com.flurry.org.codehaus.jackson.map.JsonSerializer) this._transitiveClassMappings.get(v1_1));
                        if (v2_4 == null) {
                            v0_0 = v0_0.getSuperclass();
                        } else {
                            v3_5 = v2_4;
                            return v3_5;
                        }
                    }
                }
                if (this._interfaceMappings != null) {
                    v1_1.reset(p5);
                    com.flurry.org.codehaus.jackson.map.JsonSerializer v2_1 = ((com.flurry.org.codehaus.jackson.map.JsonSerializer) this._interfaceMappings.get(v1_1));
                    if (v2_1 == null) {
                        Class v0_1 = p5;
                        while (v0_1 != null) {
                            com.flurry.org.codehaus.jackson.map.JsonSerializer v2_2 = this._findInterfaceMapping(v0_1, v1_1);
                            if (v2_2 == null) {
                                v0_1 = v0_1.getSuperclass();
                            } else {
                                v3_5 = v2_2;
                                return v3_5;
                            }
                        }
                    } else {
                        v3_5 = v2_1;
                        return v3_5;
                    }
                }
                v3_5 = 0;
            } else {
                v3_5 = this._enumSerializerOverride;
            }
        } else {
            com.flurry.org.codehaus.jackson.map.JsonSerializer v2_6 = ((com.flurry.org.codehaus.jackson.map.JsonSerializer) this._directClassMappings.get(v1_1));
            if (v2_6 == null) {
            } else {
                v3_5 = v2_6;
            }
        }
        return v3_5;
    }

    public void setEnumSerializer(com.flurry.org.codehaus.jackson.map.JsonSerializer p1)
    {
        this._enumSerializerOverride = p1;
        return;
    }

    public com.flurry.org.codehaus.jackson.map.SerializerFactory withConfig(com.flurry.org.codehaus.jackson.map.SerializerFactory$Config p4)
    {
        if (this.getClass() == com.flurry.org.codehaus.jackson.map.ser.CustomSerializerFactory) {
            return new com.flurry.org.codehaus.jackson.map.ser.CustomSerializerFactory(p4);
        } else {
            throw new IllegalStateException(new StringBuilder().append("Subtype of CustomSerializerFactory (").append(this.getClass().getName()).append(") has not properly overridden method \'withAdditionalSerializers\': can not instantiate subtype with ").append("additional serializer definitions").toString());
        }
    }
}
