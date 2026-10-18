package com.flurry.org.codehaus.jackson.util;
public class VersionUtil {
    public static final String VERSION_FILE = "VERSION.txt";
    private static final java.util.regex.Pattern VERSION_SEPARATOR;

    static VersionUtil()
    {
        com.flurry.org.codehaus.jackson.util.VersionUtil.VERSION_SEPARATOR = java.util.regex.Pattern.compile("[-_./;:]");
        return;
    }

    public VersionUtil()
    {
        return;
    }

    public static com.flurry.org.codehaus.jackson.Version parseVersion(String p8)
    {
        int v3 = 0;
        com.flurry.org.codehaus.jackson.Version v4 = 0;
        if (p8 != null) {
            String v8_1 = p8.trim();
            if (v8_1.length() != 0) {
                String[] v2 = com.flurry.org.codehaus.jackson.util.VersionUtil.VERSION_SEPARATOR.split(v8_1);
                if (v2.length >= 2) {
                    int v0 = com.flurry.org.codehaus.jackson.util.VersionUtil.parseVersionPart(v2[0]);
                    int v1 = com.flurry.org.codehaus.jackson.util.VersionUtil.parseVersionPart(v2[1]);
                    if (v2.length > 2) {
                        v3 = com.flurry.org.codehaus.jackson.util.VersionUtil.parseVersionPart(v2[2]);
                    }
                    if (v2.length > 3) {
                        v4 = v2[3];
                    }
                    v4 = new com.flurry.org.codehaus.jackson.Version(v0, v1, v3, v4);
                }
            }
        }
        return v4;
    }

    protected static int parseVersionPart(String p6)
    {
        String v6_1 = p6.toString();
        int v2 = v6_1.length();
        int v3 = 0;
        int v1 = 0;
        while (v1 < v2) {
            char v0 = v6_1.charAt(v1);
            if ((v0 > 57) || (v0 < 48)) {
                break;
            }
            v3 = ((v3 * 10) + (v0 - 48));
            v1++;
        }
        return v3;
    }

    public static com.flurry.org.codehaus.jackson.Version versionFor(Class p6)
    {
        com.flurry.org.codehaus.jackson.Version v3 = 0;
        try {
            java.io.InputStream v2 = p6.getResourceAsStream("VERSION.txt");
        } catch (RuntimeException v4) {
            if (v3 == null) {
                v3 = com.flurry.org.codehaus.jackson.Version.unknownVersion();
            }
            return v3;
        }
        if (v2 == null) {
        } else {
            try {
                v3 = com.flurry.org.codehaus.jackson.util.VersionUtil.parseVersion(new java.io.BufferedReader(new java.io.InputStreamReader(v2, "UTF-8")).readLine());
                try {
                    v2.close();
                } catch (java.io.IOException v1_1) {
                    throw new RuntimeException(v1_1);
                }
            } catch (RuntimeException v4_2) {
                v2.close();
                throw v4_2;
            }
        }
    }
}
