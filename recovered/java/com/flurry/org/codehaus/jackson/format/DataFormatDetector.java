package com.flurry.org.codehaus.jackson.format;
public class DataFormatDetector {
    public static final int DEFAULT_MAX_INPUT_LOOKAHEAD = 64;
    protected final com.flurry.org.codehaus.jackson.JsonFactory[] _detectors;
    protected final int _maxInputLookahead;
    protected final com.flurry.org.codehaus.jackson.format.MatchStrength _minimalMatch;
    protected final com.flurry.org.codehaus.jackson.format.MatchStrength _optimalMatch;

    public DataFormatDetector(java.util.Collection p2)
    {
        com.flurry.org.codehaus.jackson.JsonFactory[] v0_1 = new com.flurry.org.codehaus.jackson.JsonFactory[p2.size()];
        this(((com.flurry.org.codehaus.jackson.JsonFactory[]) p2.toArray(v0_1)));
        return;
    }

    public varargs DataFormatDetector(com.flurry.org.codehaus.jackson.JsonFactory[] p4)
    {
        this(p4, com.flurry.org.codehaus.jackson.format.MatchStrength.SOLID_MATCH, com.flurry.org.codehaus.jackson.format.MatchStrength.WEAK_MATCH, 64);
        return;
    }

    private DataFormatDetector(com.flurry.org.codehaus.jackson.JsonFactory[] p1, com.flurry.org.codehaus.jackson.format.MatchStrength p2, com.flurry.org.codehaus.jackson.format.MatchStrength p3, int p4)
    {
        this._detectors = p1;
        this._optimalMatch = p2;
        this._minimalMatch = p3;
        this._maxInputLookahead = p4;
        return;
    }

    private com.flurry.org.codehaus.jackson.format.DataFormatMatcher _findFormat(com.flurry.org.codehaus.jackson.format.InputAccessor$Std p10)
    {
        com.flurry.org.codehaus.jackson.JsonFactory v1 = 0;
        com.flurry.org.codehaus.jackson.format.MatchStrength v2 = 0;
        com.flurry.org.codehaus.jackson.JsonFactory[] v0 = this._detectors;
        int v5 = v0.length;
        int v4 = 0;
        while (v4 < v5) {
            com.flurry.org.codehaus.jackson.JsonFactory v3 = v0[v4];
            p10.reset();
            com.flurry.org.codehaus.jackson.format.MatchStrength v6 = v3.hasFormat(p10);
            if ((v6 != null) && ((v6.ordinal() >= this._minimalMatch.ordinal()) && ((v1 == null) || (v2.ordinal() < v6.ordinal())))) {
                v1 = v3;
                v2 = v6;
                if (v6.ordinal() >= this._optimalMatch.ordinal()) {
                    break;
                }
            }
            v4++;
        }
        return p10.createMatcher(v1, v2);
    }

    public com.flurry.org.codehaus.jackson.format.DataFormatMatcher findFormat(java.io.InputStream p3)
    {
        byte[] v1_1 = new byte[this._maxInputLookahead];
        return this._findFormat(new com.flurry.org.codehaus.jackson.format.InputAccessor$Std(p3, v1_1));
    }

    public com.flurry.org.codehaus.jackson.format.DataFormatMatcher findFormat(byte[] p2)
    {
        return this._findFormat(new com.flurry.org.codehaus.jackson.format.InputAccessor$Std(p2));
    }

    public com.flurry.org.codehaus.jackson.format.DataFormatDetector withMaxInputLookahead(int p5)
    {
        if (p5 != this._maxInputLookahead) {
            this = new com.flurry.org.codehaus.jackson.format.DataFormatDetector(this._detectors, this._optimalMatch, this._minimalMatch, p5);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.format.DataFormatDetector withMinimalMatch(com.flurry.org.codehaus.jackson.format.MatchStrength p5)
    {
        if (p5 != this._minimalMatch) {
            this = new com.flurry.org.codehaus.jackson.format.DataFormatDetector(this._detectors, this._optimalMatch, p5, this._maxInputLookahead);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.format.DataFormatDetector withOptimalMatch(com.flurry.org.codehaus.jackson.format.MatchStrength p5)
    {
        if (p5 != this._optimalMatch) {
            this = new com.flurry.org.codehaus.jackson.format.DataFormatDetector(this._detectors, p5, this._minimalMatch, this._maxInputLookahead);
        }
        return this;
    }
}
