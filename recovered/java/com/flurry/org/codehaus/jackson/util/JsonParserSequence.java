package com.flurry.org.codehaus.jackson.util;
public class JsonParserSequence extends com.flurry.org.codehaus.jackson.util.JsonParserDelegate {
    protected int _nextParser;
    protected final com.flurry.org.codehaus.jackson.JsonParser[] _parsers;

    protected JsonParserSequence(com.flurry.org.codehaus.jackson.JsonParser[] p2)
    {
        super(p2[0]);
        super._parsers = p2;
        super._nextParser = 1;
        return;
    }

    public static com.flurry.org.codehaus.jackson.util.JsonParserSequence createFlattened(com.flurry.org.codehaus.jackson.JsonParser p4, com.flurry.org.codehaus.jackson.JsonParser p5)
    {
        if (((p4 instanceof com.flurry.org.codehaus.jackson.util.JsonParserSequence)) || ((p5 instanceof com.flurry.org.codehaus.jackson.util.JsonParserSequence))) {
            java.util.ArrayList v0_1 = new java.util.ArrayList();
            if (!(p4 instanceof com.flurry.org.codehaus.jackson.util.JsonParserSequence)) {
                v0_1.add(p4);
            } else {
                ((com.flurry.org.codehaus.jackson.util.JsonParserSequence) p4).addFlattenedActiveParsers(v0_1);
            }
            if (!(p5 instanceof com.flurry.org.codehaus.jackson.util.JsonParserSequence)) {
                v0_1.add(p5);
            } else {
                ((com.flurry.org.codehaus.jackson.util.JsonParserSequence) p5).addFlattenedActiveParsers(v0_1);
            }
            com.flurry.org.codehaus.jackson.util.JsonParserSequence v1_3 = new com.flurry.org.codehaus.jackson.JsonParser[v0_1.size()];
            com.flurry.org.codehaus.jackson.util.JsonParserSequence v1_7 = new com.flurry.org.codehaus.jackson.util.JsonParserSequence(((com.flurry.org.codehaus.jackson.JsonParser[]) v0_1.toArray(v1_3)));
        } else {
            com.flurry.org.codehaus.jackson.util.JsonParserSequence v2_3 = new com.flurry.org.codehaus.jackson.JsonParser[2];
            v2_3[0] = p4;
            v2_3[1] = p5;
            v1_7 = new com.flurry.org.codehaus.jackson.util.JsonParserSequence(v2_3);
        }
        return v1_7;
    }

    protected void addFlattenedActiveParsers(java.util.List p5)
    {
        int v0 = (this._nextParser - 1);
        int v1 = this._parsers.length;
        while (v0 < v1) {
            com.flurry.org.codehaus.jackson.util.JsonParserSequence v2_1 = this._parsers[v0];
            if (!(v2_1 instanceof com.flurry.org.codehaus.jackson.util.JsonParserSequence)) {
                p5.add(v2_1);
            } else {
                ((com.flurry.org.codehaus.jackson.util.JsonParserSequence) v2_1).addFlattenedActiveParsers(p5);
            }
            v0++;
        }
        return;
    }

    public void close()
    {
        do {
            this.delegate.close();
        } while(this.switchToNext());
        return;
    }

    public int containedParsersCount()
    {
        return this._parsers.length;
    }

    public com.flurry.org.codehaus.jackson.JsonToken nextToken()
    {
        com.flurry.org.codehaus.jackson.JsonToken v1_1;
        com.flurry.org.codehaus.jackson.JsonToken v0_1 = this.delegate.nextToken();
        if (v0_1 == null) {
            while (this.switchToNext()) {
                com.flurry.org.codehaus.jackson.JsonToken v0_0 = this.delegate.nextToken();
                if (v0_0 != null) {
                    v1_1 = v0_0;
                }
            }
            v1_1 = 0;
        } else {
            v1_1 = v0_1;
        }
        return v1_1;
    }

    protected boolean switchToNext()
    {
        int v0_1;
        if (this._nextParser < this._parsers.length) {
            int v0_2 = this._parsers;
            int v1_2 = this._nextParser;
            this._nextParser = (v1_2 + 1);
            this.delegate = v0_2[v1_2];
            v0_1 = 1;
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }
}
