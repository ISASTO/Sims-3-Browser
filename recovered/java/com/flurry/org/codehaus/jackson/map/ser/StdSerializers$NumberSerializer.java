package com.flurry.org.codehaus.jackson.map.ser;
public final class StdSerializers$NumberSerializer extends com.flurry.org.codehaus.jackson.map.ser.std.ScalarSerializerBase {
    public static final com.flurry.org.codehaus.jackson.map.ser.StdSerializers$NumberSerializer instance;

    static StdSerializers$NumberSerializer()
    {
        com.flurry.org.codehaus.jackson.map.ser.StdSerializers$NumberSerializer.instance = new com.flurry.org.codehaus.jackson.map.ser.StdSerializers$NumberSerializer();
        return;
    }

    public StdSerializers$NumberSerializer()
    {
        super(Number);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonNode getSchema(com.flurry.org.codehaus.jackson.map.SerializerProvider p3, reflect.Type p4)
    {
        return this.createSchemaNode("number", 1);
    }

    public void serialize(Number p3, com.flurry.org.codehaus.jackson.JsonGenerator p4, com.flurry.org.codehaus.jackson.map.SerializerProvider p5)
    {
        if (!(p3 instanceof java.math.BigDecimal)) {
            if (!(p3 instanceof java.math.BigInteger)) {
                if (!(p3 instanceof Integer)) {
                    if (!(p3 instanceof Long)) {
                        if (!(p3 instanceof Double)) {
                            if (!(p3 instanceof Float)) {
                                if ((!(p3 instanceof Byte)) && (!(p3 instanceof Short))) {
                                    p4.writeNumber(p3.toString());
                                } else {
                                    p4.writeNumber(p3.intValue());
                                }
                            } else {
                                p4.writeNumber(p3.floatValue());
                            }
                        } else {
                            p4.writeNumber(p3.doubleValue());
                        }
                    } else {
                        p4.writeNumber(p3.longValue());
                    }
                } else {
                    p4.writeNumber(p3.intValue());
                }
            } else {
                p4.writeNumber(((java.math.BigInteger) p3));
            }
        } else {
            p4.writeNumber(((java.math.BigDecimal) p3));
        }
        return;
    }

    public bridge synthetic void serialize(Object p1, com.flurry.org.codehaus.jackson.JsonGenerator p2, com.flurry.org.codehaus.jackson.map.SerializerProvider p3)
    {
        this.serialize(((Number) p1), p2, p3);
        return;
    }
}
