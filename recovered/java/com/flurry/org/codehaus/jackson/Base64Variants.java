package com.flurry.org.codehaus.jackson;
public final class Base64Variants {
    public static final com.flurry.org.codehaus.jackson.Base64Variant MIME = None;
    public static final com.flurry.org.codehaus.jackson.Base64Variant MIME_NO_LINEFEEDS = None;
    public static final com.flurry.org.codehaus.jackson.Base64Variant MODIFIED_FOR_URL = None;
    public static final com.flurry.org.codehaus.jackson.Base64Variant PEM = None;
    static final String STD_BASE64_ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

    static Base64Variants()
    {
        com.flurry.org.codehaus.jackson.Base64Variants.MIME = new com.flurry.org.codehaus.jackson.Base64Variant("MIME", "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/", 1, 61, 76);
        com.flurry.org.codehaus.jackson.Base64Variants.MIME_NO_LINEFEEDS = new com.flurry.org.codehaus.jackson.Base64Variant(com.flurry.org.codehaus.jackson.Base64Variants.MIME, "MIME-NO-LINEFEEDS", 2147483647);
        com.flurry.org.codehaus.jackson.Base64Variants.PEM = new com.flurry.org.codehaus.jackson.Base64Variant(com.flurry.org.codehaus.jackson.Base64Variants.MIME, "PEM", 1, 61, 64);
        StringBuffer v6_1 = new StringBuffer("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
        v6_1.setCharAt(v6_1.indexOf("+"), 45);
        v6_1.setCharAt(v6_1.indexOf("/"), 95);
        com.flurry.org.codehaus.jackson.Base64Variants.MODIFIED_FOR_URL = new com.flurry.org.codehaus.jackson.Base64Variant("MODIFIED-FOR-URL", v6_1.toString(), 0, 0, 2147483647);
        return;
    }

    public Base64Variants()
    {
        return;
    }

    public static com.flurry.org.codehaus.jackson.Base64Variant getDefaultVariant()
    {
        return com.flurry.org.codehaus.jackson.Base64Variants.MIME_NO_LINEFEEDS;
    }
}
