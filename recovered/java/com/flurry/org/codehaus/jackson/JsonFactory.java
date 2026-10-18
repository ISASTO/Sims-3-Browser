package com.flurry.org.codehaus.jackson;
public class JsonFactory implements com.flurry.org.codehaus.jackson.Versioned {
    static final int DEFAULT_GENERATOR_FEATURE_FLAGS = 0;
    static final int DEFAULT_PARSER_FEATURE_FLAGS = 0;
    public static final String FORMAT_NAME_JSON = "JSON";
    protected static final ThreadLocal _recyclerRef;
    protected com.flurry.org.codehaus.jackson.io.CharacterEscapes _characterEscapes;
    protected int _generatorFeatures;
    protected com.flurry.org.codehaus.jackson.io.InputDecorator _inputDecorator;
    protected com.flurry.org.codehaus.jackson.ObjectCodec _objectCodec;
    protected com.flurry.org.codehaus.jackson.io.OutputDecorator _outputDecorator;
    protected int _parserFeatures;
    protected com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer _rootByteSymbols;
    protected com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer _rootCharSymbols;

    static JsonFactory()
    {
        com.flurry.org.codehaus.jackson.JsonFactory.DEFAULT_PARSER_FEATURE_FLAGS = com.flurry.org.codehaus.jackson.JsonParser$Feature.collectDefaults();
        com.flurry.org.codehaus.jackson.JsonFactory.DEFAULT_GENERATOR_FEATURE_FLAGS = com.flurry.org.codehaus.jackson.JsonGenerator$Feature.collectDefaults();
        com.flurry.org.codehaus.jackson.JsonFactory._recyclerRef = new ThreadLocal();
        return;
    }

    public JsonFactory()
    {
        this(0);
        return;
    }

    public JsonFactory(com.flurry.org.codehaus.jackson.ObjectCodec p2)
    {
        this._rootCharSymbols = com.flurry.org.codehaus.jackson.sym.CharsToNameCanonicalizer.createRoot();
        this._rootByteSymbols = com.flurry.org.codehaus.jackson.sym.BytesToNameCanonicalizer.createRoot();
        this._parserFeatures = com.flurry.org.codehaus.jackson.JsonFactory.DEFAULT_PARSER_FEATURE_FLAGS;
        this._generatorFeatures = com.flurry.org.codehaus.jackson.JsonFactory.DEFAULT_GENERATOR_FEATURE_FLAGS;
        this._objectCodec = p2;
        return;
    }

    protected com.flurry.org.codehaus.jackson.io.IOContext _createContext(Object p3, boolean p4)
    {
        return new com.flurry.org.codehaus.jackson.io.IOContext(this._getBufferRecycler(), p3, p4);
    }

    protected com.flurry.org.codehaus.jackson.JsonGenerator _createJsonGenerator(java.io.Writer p4, com.flurry.org.codehaus.jackson.io.IOContext p5)
    {
        com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator v0_1 = new com.flurry.org.codehaus.jackson.impl.WriterBasedGenerator(p5, this._generatorFeatures, this._objectCodec, p4);
        if (this._characterEscapes != null) {
            v0_1.setCharacterEscapes(this._characterEscapes);
        }
        return v0_1;
    }

    protected com.flurry.org.codehaus.jackson.JsonParser _createJsonParser(java.io.InputStream p6, com.flurry.org.codehaus.jackson.io.IOContext p7)
    {
        return new com.flurry.org.codehaus.jackson.impl.ByteSourceBootstrapper(p7, p6).constructParser(this._parserFeatures, this._objectCodec, this._rootByteSymbols, this._rootCharSymbols);
    }

    protected com.flurry.org.codehaus.jackson.JsonParser _createJsonParser(java.io.Reader p7, com.flurry.org.codehaus.jackson.io.IOContext p8)
    {
        return new com.flurry.org.codehaus.jackson.impl.ReaderBasedParser(p8, this._parserFeatures, p7, this._objectCodec, this._rootCharSymbols.makeChild(this.isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature.CANONICALIZE_FIELD_NAMES), this.isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature.INTERN_FIELD_NAMES)));
    }

    protected com.flurry.org.codehaus.jackson.JsonParser _createJsonParser(byte[] p6, int p7, int p8, com.flurry.org.codehaus.jackson.io.IOContext p9)
    {
        return new com.flurry.org.codehaus.jackson.impl.ByteSourceBootstrapper(p9, p6, p7, p8).constructParser(this._parserFeatures, this._objectCodec, this._rootByteSymbols, this._rootCharSymbols);
    }

    protected com.flurry.org.codehaus.jackson.JsonGenerator _createUTF8JsonGenerator(java.io.OutputStream p4, com.flurry.org.codehaus.jackson.io.IOContext p5)
    {
        com.flurry.org.codehaus.jackson.impl.Utf8Generator v0_1 = new com.flurry.org.codehaus.jackson.impl.Utf8Generator(p5, this._generatorFeatures, this._objectCodec, p4);
        if (this._characterEscapes != null) {
            v0_1.setCharacterEscapes(this._characterEscapes);
        }
        return v0_1;
    }

    protected java.io.Writer _createWriter(java.io.OutputStream p3, com.flurry.org.codehaus.jackson.JsonEncoding p4, com.flurry.org.codehaus.jackson.io.IOContext p5)
    {
        java.io.OutputStreamWriter v0_2;
        if (p4 != com.flurry.org.codehaus.jackson.JsonEncoding.UTF8) {
            v0_2 = new java.io.OutputStreamWriter(p3, p4.getJavaName());
        } else {
            v0_2 = new com.flurry.org.codehaus.jackson.io.UTF8Writer(p5, p3);
        }
        return v0_2;
    }

    public com.flurry.org.codehaus.jackson.util.BufferRecycler _getBufferRecycler()
    {
        com.flurry.org.codehaus.jackson.util.BufferRecycler v0_1;
        ref.SoftReference v1_1 = ((ref.SoftReference) com.flurry.org.codehaus.jackson.JsonFactory._recyclerRef.get());
        if (v1_1 != null) {
            v0_1 = ((com.flurry.org.codehaus.jackson.util.BufferRecycler) v1_1.get());
        } else {
            v0_1 = 0;
        }
        if (v0_1 == null) {
            v0_1 = new com.flurry.org.codehaus.jackson.util.BufferRecycler();
            com.flurry.org.codehaus.jackson.JsonFactory._recyclerRef.set(new ref.SoftReference(v0_1));
        }
        return v0_1;
    }

    protected java.io.InputStream _optimizedStreamFromURL(java.net.URL p4)
    {
        java.io.FileInputStream v1_2;
        if (!"file".equals(p4.getProtocol())) {
            v1_2 = p4.openStream();
        } else {
            String v0 = p4.getHost();
            if ((v0 != null) && (v0.length() != 0)) {
            } else {
                v1_2 = new java.io.FileInputStream(p4.getPath());
            }
        }
        return v1_2;
    }

    public final com.flurry.org.codehaus.jackson.JsonFactory configure(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p1, boolean p2)
    {
        if (!p2) {
            this.disable(p1);
        } else {
            this.enable(p1);
        }
        return this;
    }

    public final com.flurry.org.codehaus.jackson.JsonFactory configure(com.flurry.org.codehaus.jackson.JsonParser$Feature p1, boolean p2)
    {
        if (!p2) {
            this.disable(p1);
        } else {
            this.enable(p1);
        }
        return this;
    }

    public com.flurry.org.codehaus.jackson.JsonGenerator createJsonGenerator(java.io.File p5, com.flurry.org.codehaus.jackson.JsonEncoding p6)
    {
        com.flurry.org.codehaus.jackson.JsonGenerator v3_2;
        java.io.OutputStream v1_1 = new java.io.FileOutputStream(p5);
        com.flurry.org.codehaus.jackson.io.IOContext v0 = this._createContext(v1_1, 1);
        v0.setEncoding(p6);
        if (p6 != com.flurry.org.codehaus.jackson.JsonEncoding.UTF8) {
            java.io.Writer v2 = this._createWriter(v1_1, p6, v0);
            if (this._outputDecorator != null) {
                v2 = this._outputDecorator.decorate(v0, v2);
            }
            v3_2 = this._createJsonGenerator(v2, v0);
        } else {
            if (this._outputDecorator != null) {
                v1_1 = this._outputDecorator.decorate(v0, v1_1);
            }
            v3_2 = this._createUTF8JsonGenerator(v1_1, v0);
        }
        return v3_2;
    }

    public com.flurry.org.codehaus.jackson.JsonGenerator createJsonGenerator(java.io.OutputStream p2)
    {
        return this.createJsonGenerator(p2, com.flurry.org.codehaus.jackson.JsonEncoding.UTF8);
    }

    public com.flurry.org.codehaus.jackson.JsonGenerator createJsonGenerator(java.io.OutputStream p4, com.flurry.org.codehaus.jackson.JsonEncoding p5)
    {
        com.flurry.org.codehaus.jackson.JsonGenerator v2_2;
        com.flurry.org.codehaus.jackson.io.IOContext v0 = this._createContext(p4, 0);
        v0.setEncoding(p5);
        if (p5 != com.flurry.org.codehaus.jackson.JsonEncoding.UTF8) {
            java.io.Writer v1 = this._createWriter(p4, p5, v0);
            if (this._outputDecorator != null) {
                v1 = this._outputDecorator.decorate(v0, v1);
            }
            v2_2 = this._createJsonGenerator(v1, v0);
        } else {
            if (this._outputDecorator != null) {
                p4 = this._outputDecorator.decorate(v0, p4);
            }
            v2_2 = this._createUTF8JsonGenerator(p4, v0);
        }
        return v2_2;
    }

    public com.flurry.org.codehaus.jackson.JsonGenerator createJsonGenerator(java.io.Writer p3)
    {
        com.flurry.org.codehaus.jackson.io.IOContext v0 = this._createContext(p3, 0);
        if (this._outputDecorator != null) {
            p3 = this._outputDecorator.decorate(v0, p3);
        }
        return this._createJsonGenerator(p3, v0);
    }

    public com.flurry.org.codehaus.jackson.JsonParser createJsonParser(java.io.File p4)
    {
        com.flurry.org.codehaus.jackson.io.IOContext v0 = this._createContext(p4, 1);
        java.io.InputStream v1_1 = new java.io.FileInputStream(p4);
        if (this._inputDecorator != null) {
            v1_1 = this._inputDecorator.decorate(v0, v1_1);
        }
        return this._createJsonParser(v1_1, v0);
    }

    public com.flurry.org.codehaus.jackson.JsonParser createJsonParser(java.io.InputStream p3)
    {
        com.flurry.org.codehaus.jackson.io.IOContext v0 = this._createContext(p3, 0);
        if (this._inputDecorator != null) {
            p3 = this._inputDecorator.decorate(v0, p3);
        }
        return this._createJsonParser(p3, v0);
    }

    public com.flurry.org.codehaus.jackson.JsonParser createJsonParser(java.io.Reader p3)
    {
        com.flurry.org.codehaus.jackson.io.IOContext v0 = this._createContext(p3, 0);
        if (this._inputDecorator != null) {
            p3 = this._inputDecorator.decorate(v0, p3);
        }
        return this._createJsonParser(p3, v0);
    }

    public com.flurry.org.codehaus.jackson.JsonParser createJsonParser(String p4)
    {
        java.io.Reader v1_1 = new java.io.StringReader(p4);
        com.flurry.org.codehaus.jackson.io.IOContext v0 = this._createContext(v1_1, 1);
        if (this._inputDecorator != null) {
            v1_1 = this._inputDecorator.decorate(v0, v1_1);
        }
        return this._createJsonParser(v1_1, v0);
    }

    public com.flurry.org.codehaus.jackson.JsonParser createJsonParser(java.net.URL p4)
    {
        com.flurry.org.codehaus.jackson.io.IOContext v0 = this._createContext(p4, 1);
        java.io.InputStream v1 = this._optimizedStreamFromURL(p4);
        if (this._inputDecorator != null) {
            v1 = this._inputDecorator.decorate(v0, v1);
        }
        return this._createJsonParser(v1, v0);
    }

    public com.flurry.org.codehaus.jackson.JsonParser createJsonParser(byte[] p6)
    {
        com.flurry.org.codehaus.jackson.JsonParser v2_2;
        com.flurry.org.codehaus.jackson.io.IOContext v0 = this._createContext(p6, 1);
        if (this._inputDecorator == null) {
            v2_2 = this._createJsonParser(p6, 0, p6.length, v0);
        } else {
            java.io.InputStream v1 = this._inputDecorator.decorate(v0, p6, 0, p6.length);
            if (v1 == null) {
            } else {
                v2_2 = this._createJsonParser(v1, v0);
            }
        }
        return v2_2;
    }

    public com.flurry.org.codehaus.jackson.JsonParser createJsonParser(byte[] p4, int p5, int p6)
    {
        com.flurry.org.codehaus.jackson.JsonParser v2_1;
        com.flurry.org.codehaus.jackson.io.IOContext v0 = this._createContext(p4, 1);
        if (this._inputDecorator == null) {
            v2_1 = this._createJsonParser(p4, p5, p6, v0);
        } else {
            java.io.InputStream v1 = this._inputDecorator.decorate(v0, p4, p5, p6);
            if (v1 == null) {
            } else {
                v2_1 = this._createJsonParser(v1, v0);
            }
        }
        return v2_1;
    }

    public com.flurry.org.codehaus.jackson.JsonFactory disable(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p3)
    {
        this._generatorFeatures = (this._generatorFeatures & (p3.getMask() ^ -1));
        return this;
    }

    public com.flurry.org.codehaus.jackson.JsonFactory disable(com.flurry.org.codehaus.jackson.JsonParser$Feature p3)
    {
        this._parserFeatures = (this._parserFeatures & (p3.getMask() ^ -1));
        return this;
    }

    public final void disableGeneratorFeature(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p1)
    {
        this.disable(p1);
        return;
    }

    public final void disableParserFeature(com.flurry.org.codehaus.jackson.JsonParser$Feature p1)
    {
        this.disable(p1);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonFactory enable(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p3)
    {
        this._generatorFeatures = (this._generatorFeatures | p3.getMask());
        return this;
    }

    public com.flurry.org.codehaus.jackson.JsonFactory enable(com.flurry.org.codehaus.jackson.JsonParser$Feature p3)
    {
        this._parserFeatures = (this._parserFeatures | p3.getMask());
        return this;
    }

    public final void enableGeneratorFeature(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p1)
    {
        this.enable(p1);
        return;
    }

    public final void enableParserFeature(com.flurry.org.codehaus.jackson.JsonParser$Feature p1)
    {
        this.enable(p1);
        return;
    }

    public com.flurry.org.codehaus.jackson.io.CharacterEscapes getCharacterEscapes()
    {
        return this._characterEscapes;
    }

    public com.flurry.org.codehaus.jackson.ObjectCodec getCodec()
    {
        return this._objectCodec;
    }

    public String getFormatName()
    {
        int v0_1;
        if (this.getClass() != com.flurry.org.codehaus.jackson.JsonFactory) {
            v0_1 = 0;
        } else {
            v0_1 = "JSON";
        }
        return v0_1;
    }

    public com.flurry.org.codehaus.jackson.io.InputDecorator getInputDecorator()
    {
        return this._inputDecorator;
    }

    public com.flurry.org.codehaus.jackson.io.OutputDecorator getOutputDecorator()
    {
        return this._outputDecorator;
    }

    public com.flurry.org.codehaus.jackson.format.MatchStrength hasFormat(com.flurry.org.codehaus.jackson.format.InputAccessor p3)
    {
        int v0_1;
        if (this.getClass() != com.flurry.org.codehaus.jackson.JsonFactory) {
            v0_1 = 0;
        } else {
            v0_1 = this.hasJSONFormat(p3);
        }
        return v0_1;
    }

    protected com.flurry.org.codehaus.jackson.format.MatchStrength hasJSONFormat(com.flurry.org.codehaus.jackson.format.InputAccessor p2)
    {
        return com.flurry.org.codehaus.jackson.impl.ByteSourceBootstrapper.hasJSONFormat(p2);
    }

    public final boolean isEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p3)
    {
        int v0_2;
        if ((this._generatorFeatures & p3.getMask()) == 0) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public final boolean isEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature p3)
    {
        int v0_2;
        if ((this._parserFeatures & p3.getMask()) == 0) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public final boolean isGeneratorFeatureEnabled(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p2)
    {
        return this.isEnabled(p2);
    }

    public final boolean isParserFeatureEnabled(com.flurry.org.codehaus.jackson.JsonParser$Feature p3)
    {
        int v0_2;
        if ((this._parserFeatures & p3.getMask()) == 0) {
            v0_2 = 0;
        } else {
            v0_2 = 1;
        }
        return v0_2;
    }

    public com.flurry.org.codehaus.jackson.JsonFactory setCharacterEscapes(com.flurry.org.codehaus.jackson.io.CharacterEscapes p1)
    {
        this._characterEscapes = p1;
        return this;
    }

    public com.flurry.org.codehaus.jackson.JsonFactory setCodec(com.flurry.org.codehaus.jackson.ObjectCodec p1)
    {
        this._objectCodec = p1;
        return this;
    }

    public final void setGeneratorFeature(com.flurry.org.codehaus.jackson.JsonGenerator$Feature p1, boolean p2)
    {
        this.configure(p1, p2);
        return;
    }

    public com.flurry.org.codehaus.jackson.JsonFactory setInputDecorator(com.flurry.org.codehaus.jackson.io.InputDecorator p1)
    {
        this._inputDecorator = p1;
        return this;
    }

    public com.flurry.org.codehaus.jackson.JsonFactory setOutputDecorator(com.flurry.org.codehaus.jackson.io.OutputDecorator p1)
    {
        this._outputDecorator = p1;
        return this;
    }

    public final void setParserFeature(com.flurry.org.codehaus.jackson.JsonParser$Feature p1, boolean p2)
    {
        this.configure(p1, p2);
        return;
    }

    public com.flurry.org.codehaus.jackson.Version version()
    {
        return com.flurry.org.codehaus.jackson.util.VersionUtil.versionFor(com.flurry.org.codehaus.jackson.impl.Utf8Generator);
    }
}
