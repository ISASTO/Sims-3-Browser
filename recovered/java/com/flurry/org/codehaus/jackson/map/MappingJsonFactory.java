package com.flurry.org.codehaus.jackson.map;
public class MappingJsonFactory extends com.flurry.org.codehaus.jackson.JsonFactory {

    public MappingJsonFactory()
    {
        this(0);
        return;
    }

    public MappingJsonFactory(com.flurry.org.codehaus.jackson.map.ObjectMapper p2)
    {
        super(p2);
        if (p2 == null) {
            super.setCodec(new com.flurry.org.codehaus.jackson.map.ObjectMapper(super));
        }
        return;
    }

    public bridge synthetic com.flurry.org.codehaus.jackson.ObjectCodec getCodec()
    {
        return this.getCodec();
    }

    public final com.flurry.org.codehaus.jackson.map.ObjectMapper getCodec()
    {
        return ((com.flurry.org.codehaus.jackson.map.ObjectMapper) this._objectCodec);
    }

    public String getFormatName()
    {
        return "JSON";
    }

    public com.flurry.org.codehaus.jackson.format.MatchStrength hasFormat(com.flurry.org.codehaus.jackson.format.InputAccessor p2)
    {
        return this.hasJSONFormat(p2);
    }
}
