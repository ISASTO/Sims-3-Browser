package com.flurry.org.apache.avro.io;
 class JsonDecoder$1 extends com.flurry.org.codehaus.jackson.JsonParser {
    int pos;
    final synthetic com.flurry.org.apache.avro.io.JsonDecoder this$0;
    final synthetic java.util.List val$elements;

    JsonDecoder$1(com.flurry.org.apache.avro.io.JsonDecoder p2, java.util.List p3)
    {
        this.this$0 = p2;
        this.val$elements = p3;
        this.pos = 0;
        return;
    }

    public void close()
    {
        throw new UnsupportedOperationException();
    }

    public java.math.BigInteger getBigIntegerValue()
    {
        throw new UnsupportedOperationException();
    }

    public byte[] getBinaryValue(com.flurry.org.codehaus.jackson.Base64Variant p2)
    {
        throw new UnsupportedOperationException();
    }

    public com.flurry.org.codehaus.jackson.ObjectCodec getCodec()
    {
        throw new UnsupportedOperationException();
    }

    public com.flurry.org.codehaus.jackson.JsonLocation getCurrentLocation()
    {
        throw new UnsupportedOperationException();
    }

    public String getCurrentName()
    {
        throw new UnsupportedOperationException();
    }

    public com.flurry.org.codehaus.jackson.JsonToken getCurrentToken()
    {
        return ((com.flurry.org.apache.avro.io.JsonDecoder$JsonElement) this.val$elements.get(this.pos)).token;
    }

    public java.math.BigDecimal getDecimalValue()
    {
        throw new UnsupportedOperationException();
    }

    public double getDoubleValue()
    {
        return Double.parseDouble(this.getText());
    }

    public float getFloatValue()
    {
        return Float.parseFloat(this.getText());
    }

    public int getIntValue()
    {
        return Integer.parseInt(this.getText());
    }

    public long getLongValue()
    {
        return Long.parseLong(this.getText());
    }

    public com.flurry.org.codehaus.jackson.JsonParser$NumberType getNumberType()
    {
        throw new UnsupportedOperationException();
    }

    public Number getNumberValue()
    {
        throw new UnsupportedOperationException();
    }

    public com.flurry.org.codehaus.jackson.JsonStreamContext getParsingContext()
    {
        throw new UnsupportedOperationException();
    }

    public String getText()
    {
        return ((com.flurry.org.apache.avro.io.JsonDecoder$JsonElement) this.val$elements.get(this.pos)).value;
    }

    public char[] getTextCharacters()
    {
        throw new UnsupportedOperationException();
    }

    public int getTextLength()
    {
        throw new UnsupportedOperationException();
    }

    public int getTextOffset()
    {
        throw new UnsupportedOperationException();
    }

    public com.flurry.org.codehaus.jackson.JsonLocation getTokenLocation()
    {
        throw new UnsupportedOperationException();
    }

    public boolean isClosed()
    {
        throw new UnsupportedOperationException();
    }

    public com.flurry.org.codehaus.jackson.JsonToken nextToken()
    {
        this.pos = (this.pos + 1);
        return ((com.flurry.org.apache.avro.io.JsonDecoder$JsonElement) this.val$elements.get(this.pos)).token;
    }

    public void setCodec(com.flurry.org.codehaus.jackson.ObjectCodec p2)
    {
        throw new UnsupportedOperationException();
    }

    public com.flurry.org.codehaus.jackson.JsonParser skipChildren()
    {
        int v0 = 0;
        do {
            int v1_2 = this.val$elements;
            int v3 = this.pos;
            this.pos = (v3 + 1);
            switch (com.flurry.org.apache.avro.io.JsonDecoder$2.$SwitchMap$org$codehaus$jackson$JsonToken[((com.flurry.org.apache.avro.io.JsonDecoder$JsonElement) v1_2.get(v3)).token.ordinal()]) {
                case 1:
                case 2:
                    v0++;
                    break;
                case 3:
                case 4:
                    v0--;
                    break;
            }
        } while(v0 > 0);
        return this;
    }
}
