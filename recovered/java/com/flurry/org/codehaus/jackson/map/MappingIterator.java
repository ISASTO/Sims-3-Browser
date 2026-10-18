package com.flurry.org.codehaus.jackson.map;
public class MappingIterator implements java.util.Iterator {
    protected static final com.flurry.org.codehaus.jackson.map.MappingIterator EMPTY_ITERATOR;
    protected final boolean _closeParser;
    protected final com.flurry.org.codehaus.jackson.map.DeserializationContext _context;
    protected final com.flurry.org.codehaus.jackson.map.JsonDeserializer _deserializer;
    protected boolean _hasNextChecked;
    protected com.flurry.org.codehaus.jackson.JsonParser _parser;
    protected final com.flurry.org.codehaus.jackson.type.JavaType _type;
    protected final Object _updatedValue;

    static MappingIterator()
    {
        com.flurry.org.codehaus.jackson.map.MappingIterator.EMPTY_ITERATOR = new com.flurry.org.codehaus.jackson.map.MappingIterator(0, 0, 0, 0, 0, 0);
        return;
    }

    protected MappingIterator(com.flurry.org.codehaus.jackson.type.JavaType p8, com.flurry.org.codehaus.jackson.JsonParser p9, com.flurry.org.codehaus.jackson.map.DeserializationContext p10, com.flurry.org.codehaus.jackson.map.JsonDeserializer p11)
    {
        this(p8, p9, p10, p11, 1, 0);
        return;
    }

    protected MappingIterator(com.flurry.org.codehaus.jackson.type.JavaType p4, com.flurry.org.codehaus.jackson.JsonParser p5, com.flurry.org.codehaus.jackson.map.DeserializationContext p6, com.flurry.org.codehaus.jackson.map.JsonDeserializer p7, boolean p8, Object p9)
    {
        this._type = p4;
        this._parser = p5;
        this._context = p6;
        this._deserializer = p7;
        if ((p5 != null) && ((p5.getCurrentToken() == com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY) && (!p5.getParsingContext().inRoot()))) {
            p5.clearCurrentToken();
        }
        this._closeParser = p8;
        if (p9 != null) {
            this._updatedValue = p9;
        } else {
            this._updatedValue = 0;
        }
        return;
    }

    protected static com.flurry.org.codehaus.jackson.map.MappingIterator emptyIterator()
    {
        return com.flurry.org.codehaus.jackson.map.MappingIterator.EMPTY_ITERATOR;
    }

    public boolean hasNext()
    {
        try {
            return this.hasNextValue();
        } catch (java.io.IOException v0_1) {
            throw new com.flurry.org.codehaus.jackson.map.RuntimeJsonMappingException(v0_1.getMessage(), v0_1);
        } catch (java.io.IOException v0_0) {
            throw new RuntimeException(v0_0.getMessage(), v0_0);
        }
    }

    public boolean hasNextValue()
    {
        int v2 = 0;
        if (this._parser != null) {
            if (!this._hasNextChecked) {
                com.flurry.org.codehaus.jackson.JsonToken v1_1 = this._parser.getCurrentToken();
                this._hasNextChecked = 1;
                if (v1_1 == null) {
                    com.flurry.org.codehaus.jackson.JsonToken v1_0 = this._parser.nextToken();
                    if (v1_0 != null) {
                        if (v1_0 == com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY) {
                            return v2;
                        }
                    } else {
                        com.flurry.org.codehaus.jackson.JsonParser v0 = this._parser;
                        this._parser = 0;
                        if (!this._closeParser) {
                            return v2;
                        } else {
                            v0.close();
                            return v2;
                        }
                    }
                }
            }
            v2 = 1;
        }
        return v2;
    }

    public Object next()
    {
        try {
            return this.nextValue();
        } catch (java.io.IOException v0_1) {
            throw new com.flurry.org.codehaus.jackson.map.RuntimeJsonMappingException(v0_1.getMessage(), v0_1);
        } catch (java.io.IOException v0_0) {
            throw new RuntimeException(v0_0.getMessage(), v0_0);
        }
    }

    public Object nextValue()
    {
        if ((this._hasNextChecked) || (this.hasNextValue())) {
            if (this._parser != null) {
                Object v0;
                this._hasNextChecked = 0;
                if (this._updatedValue != null) {
                    this._deserializer.deserialize(this._parser, this._context, this._updatedValue);
                    v0 = this._updatedValue;
                } else {
                    v0 = this._deserializer.deserialize(this._parser, this._context);
                }
                this._parser.clearCurrentToken();
                return v0;
            } else {
                throw new java.util.NoSuchElementException();
            }
        } else {
            throw new java.util.NoSuchElementException();
        }
    }

    public void remove()
    {
        throw new UnsupportedOperationException();
    }
}
