package com.flurry.org.codehaus.jackson.map;
public class PropertyNamingStrategy$LowerCaseWithUnderscoresStrategy extends com.flurry.org.codehaus.jackson.map.PropertyNamingStrategy$PropertyNamingStrategyBase {

    public PropertyNamingStrategy$LowerCaseWithUnderscoresStrategy()
    {
        return;
    }

    public String translate(String p9)
    {
        if (p9 != null) {
            int v2 = p9.length();
            StringBuilder v3_1 = new StringBuilder((v2 * 2));
            int v4 = 0;
            int v5 = 0;
            int v1 = 0;
            while (v1 < v2) {
                char v0 = p9.charAt(v1);
                if ((v1 > 0) || (v0 != 95)) {
                    if (!Character.isUpperCase(v0)) {
                        v5 = 0;
                    } else {
                        if ((v5 == 0) && ((v4 > 0) && (v3_1.charAt((v4 - 1)) != 95))) {
                            v3_1.append(95);
                            v4++;
                        }
                        v0 = Character.toLowerCase(v0);
                        v5 = 1;
                    }
                    v3_1.append(v0);
                    v4++;
                }
                v1++;
            }
            if (v4 > 0) {
                p9 = v3_1.toString();
            }
        }
        return p9;
    }
}
