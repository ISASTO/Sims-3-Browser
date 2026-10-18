package com.flurry.org.codehaus.jackson.node;
public class TreeTraversingParser extends com.flurry.org.codehaus.jackson.impl.JsonParserMinimalBase {
    protected boolean _closed;
    protected com.flurry.org.codehaus.jackson.JsonToken _nextToken;
    protected com.flurry.org.codehaus.jackson.node.NodeCursor _nodeCursor;
    protected com.flurry.org.codehaus.jackson.ObjectCodec _objectCodec;
    protected boolean _startContainer;

    public TreeTraversingParser(com.flurry.org.codehaus.jackson.JsonNode p2)
    {
        this(p2, 0);
        return;
    }

    public TreeTraversingParser(com.flurry.org.codehaus.jackson.JsonNode p3, com.flurry.org.codehaus.jackson.ObjectCodec p4)
    {
        super(0);
        super._objectCodec = p4;
        if (!p3.isArray()) {
            if (!p3.isObject()) {
                super._nodeCursor = new com.flurry.org.codehaus.jackson.node.NodeCursor$RootValue(p3, 0);
            } else {
                super._nextToken = com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT;
                super._nodeCursor = new com.flurry.org.codehaus.jackson.node.NodeCursor$Object(p3, 0);
            }
        } else {
            super._nextToken = com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY;
            super._nodeCursor = new com.flurry.org.codehaus.jackson.node.NodeCursor$Array(p3, 0);
        }
        return;
    }

    protected void _handleEOF()
    {
        this._throwInternal();
        return;
    }

    public void close()
    {
        if (!this._closed) {
            this._closed = 1;
            this._nodeCursor = 0;
            this._currToken = 0;
        }
        return;
    }

    protected com.flurry.org.codehaus.jackson.JsonNode currentNode()
    {
        if ((!this._closed) && (this._nodeCursor != null)) {
            com.flurry.org.codehaus.jackson.JsonNode v0_3 = this._nodeCursor.currentNode();
        } else {
            v0_3 = 0;
        }
        return v0_3;
    }

    protected com.flurry.org.codehaus.jackson.JsonNode currentNumericNode()
    {
        com.flurry.org.codehaus.jackson.JsonNode v0 = this.currentNode();
        if ((v0 != null) && (v0.isNumber())) {
            return v0;
        } else {
            com.flurry.org.codehaus.jackson.JsonToken v1;
            if (v0 != null) {
                v1 = v0.asToken();
            } else {
                v1 = 0;
            }
            throw this._constructError(new StringBuilder().append("Current token (").append(v1).append(") not numeric, can not use numeric value accessors").toString());
        }
    }

    public java.math.BigInteger getBigIntegerValue()
    {
        return this.currentNumericNode().getBigIntegerValue();
    }

    public byte[] getBinaryValue(com.flurry.org.codehaus.jackson.Base64Variant p5)
    {
        byte[] v0;
        com.flurry.org.codehaus.jackson.node.POJONode v1_0 = this.currentNode();
        if (v1_0 == null) {
            v0 = 0;
        } else {
            v0 = v1_0.getBinaryValue();
            if (v0 == null) {
                if (!v1_0.isPojo()) {
                } else {
                    byte[] v2_0 = ((com.flurry.org.codehaus.jackson.node.POJONode) v1_0).getPojo();
                    if (!(v2_0 instanceof byte[])) {
                    } else {
                        v0 = ((byte[]) ((byte[]) v2_0));
                    }
                }
            }
        }
        return v0;
    }

    public com.flurry.org.codehaus.jackson.ObjectCodec getCodec()
    {
        return this._objectCodec;
    }

    public com.flurry.org.codehaus.jackson.JsonLocation getCurrentLocation()
    {
        return com.flurry.org.codehaus.jackson.JsonLocation.NA;
    }

    public String getCurrentName()
    {
        String v0_2;
        if (this._nodeCursor != null) {
            v0_2 = this._nodeCursor.getCurrentName();
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    public java.math.BigDecimal getDecimalValue()
    {
        return this.currentNumericNode().getDecimalValue();
    }

    public double getDoubleValue()
    {
        return this.currentNumericNode().getDoubleValue();
    }

    public Object getEmbeddedObject()
    {
        byte[] v1_1;
        if (this._closed) {
            v1_1 = 0;
        } else {
            com.flurry.org.codehaus.jackson.node.BinaryNode v0_2 = this.currentNode();
            if (v0_2 == null) {
            } else {
                if (!v0_2.isPojo()) {
                    if (!v0_2.isBinary()) {
                    } else {
                        v1_1 = ((com.flurry.org.codehaus.jackson.node.BinaryNode) v0_2).getBinaryValue();
                    }
                } else {
                    v1_1 = ((com.flurry.org.codehaus.jackson.node.POJONode) v0_2).getPojo();
                }
            }
        }
        return v1_1;
    }

    public float getFloatValue()
    {
        return ((float) this.currentNumericNode().getDoubleValue());
    }

    public int getIntValue()
    {
        return this.currentNumericNode().getIntValue();
    }

    public long getLongValue()
    {
        return this.currentNumericNode().getLongValue();
    }

    public com.flurry.org.codehaus.jackson.JsonParser$NumberType getNumberType()
    {
        com.flurry.org.codehaus.jackson.JsonParser$NumberType v1;
        com.flurry.org.codehaus.jackson.JsonNode v0 = this.currentNumericNode();
        if (v0 != null) {
            v1 = v0.getNumberType();
        } else {
            v1 = 0;
        }
        return v1;
    }

    public Number getNumberValue()
    {
        return this.currentNumericNode().getNumberValue();
    }

    public com.flurry.org.codehaus.jackson.JsonStreamContext getParsingContext()
    {
        return this._nodeCursor;
    }

    public String getText()
    {
        String v1_0 = 0;
        if (!this._closed) {
            switch (com.flurry.org.codehaus.jackson.node.TreeTraversingParser$1.$SwitchMap$org$codehaus$jackson$JsonToken[this._currToken.ordinal()]) {
                case 1:
                    v1_0 = this._nodeCursor.getCurrentName();
                    break;
                case 2:
                    v1_0 = this.currentNode().getTextValue();
                    break;
                case 3:
                case 4:
                    v1_0 = String.valueOf(this.currentNode().getNumberValue());
                    break;
                case 5:
                    com.flurry.org.codehaus.jackson.JsonNode v0 = this.currentNode();
                    if ((v0 == null) || (!v0.isBinary())) {
                    } else {
                        v1_0 = v0.asText();
                    }
                    break;
            }
            if (this._currToken != null) {
                v1_0 = this._currToken.asString();
            }
        }
        return v1_0;
    }

    public char[] getTextCharacters()
    {
        return this.getText().toCharArray();
    }

    public int getTextLength()
    {
        return this.getText().length();
    }

    public int getTextOffset()
    {
        return 0;
    }

    public com.flurry.org.codehaus.jackson.JsonLocation getTokenLocation()
    {
        return com.flurry.org.codehaus.jackson.JsonLocation.NA;
    }

    public boolean hasTextCharacters()
    {
        return 0;
    }

    public boolean isClosed()
    {
        return this._closed;
    }

    public com.flurry.org.codehaus.jackson.JsonToken nextToken()
    {
        com.flurry.org.codehaus.jackson.JsonToken v0_0 = 0;
        if (this._nextToken == null) {
            if (!this._startContainer) {
                if (this._nodeCursor != null) {
                    this._currToken = this._nodeCursor.nextToken();
                    if (this._currToken == null) {
                        this._currToken = this._nodeCursor.endToken();
                        this._nodeCursor = this._nodeCursor.getParent();
                        v0_0 = this._currToken;
                    } else {
                        if ((this._currToken == com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) || (this._currToken == com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY)) {
                            this._startContainer = 1;
                        }
                        v0_0 = this._currToken;
                    }
                } else {
                    this._closed = 1;
                }
            } else {
                this._startContainer = 0;
                if (this._nodeCursor.currentHasChildren()) {
                    this._nodeCursor = this._nodeCursor.iterateChildren();
                    this._currToken = this._nodeCursor.nextToken();
                    if ((this._currToken == com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) || (this._currToken == com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY)) {
                        this._startContainer = 1;
                    }
                    v0_0 = this._currToken;
                } else {
                    com.flurry.org.codehaus.jackson.JsonToken v0_19;
                    if (this._currToken != com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
                        v0_19 = com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY;
                    } else {
                        v0_19 = com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT;
                    }
                    this._currToken = v0_19;
                    v0_0 = this._currToken;
                }
            }
        } else {
            this._currToken = this._nextToken;
            this._nextToken = 0;
            v0_0 = this._currToken;
        }
        return v0_0;
    }

    public void setCodec(com.flurry.org.codehaus.jackson.ObjectCodec p1)
    {
        this._objectCodec = p1;
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonParser skipChildren()
    {
        if (this._currToken != com.flurry.org.codehaus.jackson.JsonToken.START_OBJECT) {
            if (this._currToken == com.flurry.org.codehaus.jackson.JsonToken.START_ARRAY) {
                this._startContainer = 0;
                this._currToken = com.flurry.org.codehaus.jackson.JsonToken.END_ARRAY;
            }
        } else {
            this._startContainer = 0;
            this._currToken = com.flurry.org.codehaus.jackson.JsonToken.END_OBJECT;
        }
        return this;
    }
}
