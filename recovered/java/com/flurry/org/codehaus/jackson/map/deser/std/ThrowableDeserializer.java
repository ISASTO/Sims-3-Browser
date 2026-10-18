package com.flurry.org.codehaus.jackson.map.deser.std;
public class ThrowableDeserializer extends com.flurry.org.codehaus.jackson.map.deser.BeanDeserializer {
    protected static final String PROP_NAME_MESSAGE = "message";

    public ThrowableDeserializer(com.flurry.org.codehaus.jackson.map.deser.BeanDeserializer p1)
    {
        super(p1);
        return;
    }

    protected ThrowableDeserializer(com.flurry.org.codehaus.jackson.map.deser.BeanDeserializer p1, boolean p2)
    {
        super(p1, p2);
        return;
    }

    public Object deserializeFromObject(com.flurry.org.codehaus.jackson.JsonParser p14, com.flurry.org.codehaus.jackson.map.DeserializationContext p15)
    {
        Object v9;
        if (this._propertyBasedCreator == null) {
            if (this._delegateDeserializer == null) {
                if (!this._beanType.isAbstract()) {
                    boolean v1 = this._valueInstantiator.canCreateFromString();
                    boolean vtmp11 = this._valueInstantiator.canCreateUsingDefault();
                    if ((v1) || (vtmp11)) {
                        v9 = 0;
                        int v4 = 0;
                        int v5 = 0;
                        while (p14.getCurrentToken() != com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT) {
                            String v8 = p14.getCurrentName();
                            com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty v7_2 = this._beanProperties.find(v8);
                            p14.nextToken();
                            if (v7_2 == null) {
                                if ((!"message".equals(v8)) || (!v1)) {
                                    if ((this._ignorableProps == null) || (!this._ignorableProps.contains(v8))) {
                                        if (this._anySetter == null) {
                                            this.handleUnknownProperty(p14, p15, v9, v8);
                                        } else {
                                            this._anySetter.deserializeAndSet(p14, p15, v9, v8);
                                        }
                                    } else {
                                        p14.skipChildren();
                                    }
                                } else {
                                    v9 = this._valueInstantiator.createFromString(p14.getText());
                                    if (v4 != 0) {
                                        int v2_1 = 0;
                                        int v3_1 = v5;
                                        while (v2_1 < v3_1) {
                                            ((com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty) v4[v2_1]).set(v9, v4[(v2_1 + 1)]);
                                            v2_1 += 2;
                                        }
                                        v4 = 0;
                                    }
                                }
                            } else {
                                if (v9 == null) {
                                    if (v4 == 0) {
                                        v4 = new Object[(this._beanProperties.size() + this._beanProperties.size())];
                                    }
                                    int v6 = (v5 + 1);
                                    v4[v5] = v7_2;
                                    v5 = (v6 + 1);
                                    v4[v6] = v7_2.deserialize(p14, p15);
                                } else {
                                    v7_2.deserializeAndSet(p14, p15, v9);
                                }
                            }
                            p14.nextToken();
                        }
                        if (v9 == null) {
                            if (!v1) {
                                v9 = this._valueInstantiator.createUsingDefault();
                            } else {
                                v9 = this._valueInstantiator.createFromString(0);
                            }
                            if (v4 != 0) {
                                int v2_0 = 0;
                                int v3_0 = v5;
                                while (v2_0 < v3_0) {
                                    ((com.flurry.org.codehaus.jackson.map.deser.SettableBeanProperty) v4[v2_0]).set(v9, v4[(v2_0 + 1)]);
                                    v2_0 += 2;
                                }
                            }
                        }
                    } else {
                        throw new com.flurry.org.codehaus.jackson.map.JsonMappingException(new StringBuilder().append("Can not deserialize Throwable of type ").append(this._beanType).append(" without having a default contructor, a single-String-arg constructor; or explicit @JsonCreator").toString());
                    }
                } else {
                    throw com.flurry.org.codehaus.jackson.map.JsonMappingException.from(p14, new StringBuilder().append("Can not instantiate abstract type ").append(this._beanType).append(" (need to add/enable type information?)").toString());
                }
            } else {
                v9 = this._valueInstantiator.createUsingDelegate(this._delegateDeserializer.deserialize(p14, p15));
            }
        } else {
            v9 = this._deserializeUsingPropertyBased(p14, p15);
        }
        return v9;
    }

    public com.flurry.org.codehaus.jackson.map.JsonDeserializer unwrappingDeserializer()
    {
        if (this.getClass() == com.flurry.org.codehaus.jackson.map.deser.std.ThrowableDeserializer) {
            this = new com.flurry.org.codehaus.jackson.map.deser.std.ThrowableDeserializer(this, 1);
        }
        return this;
    }
}
