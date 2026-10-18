public class L億 {
    private static boolean DEBUG;
    private static boolean DUMP_STACK;
    private static String LOG_TAG;
    private static String PrefsFile;
    private static boolean SPOOF_SIGNATURE;
    private static android.content.Context myAppContext;
    private static int myIDSpoofType;
    private static String mySpoofID;

    static 億()
    {
        億.PrefsFile = "jffabtz";
        億.myAppContext = 0;
        億.myIDSpoofType = Integer.parseInt("0");
        億.mySpoofID = "";
        億.LOG_TAG = "";
        億.DEBUG = 1;
        億.DUMP_STACK = 0;
        億.SPOOF_SIGNATURE = 0;
        return;
    }

    public 億()
    {
        return;
    }

    public static void DumpStack()
    {
        if (!億.SPOOF_SIGNATURE) {
            android.widget.Toast.makeText(億.myAppContext, new String(android.util.Base64.decode("0KHQutCw0YfQsNC90L4g0YEgd3d3LmFuZHJvZWVkLnJ1Lg==", 0)), 0).show();
        }
        StackTraceElement[] v1_0 = Thread.currentThread().getStackTrace();
        String v2_1 = "Stack trace:\n";
        int v0_1 = 4;
        while (v0_1 < v1_0.length) {
            v2_1 = new StringBuilder(String.valueOf(v2_1)).append("  ").append(v1_0[v0_1].toString()).append("\n").toString();
            v0_1++;
        }
        android.util.Log.d(億.LOG_TAG, v2_1);
        return;
    }

    public static void DumpStackIfWeShould()
    {
        if (!億.SPOOF_SIGNATURE) {
            android.widget.Toast.makeText(億.myAppContext, new String(android.util.Base64.decode("0KHQutCw0YfQsNC90L4g0YEgd3d3LmFuZHJvZWVkLnJ1Lg==", 0)), 0).show();
        }
        if (億.DUMP_STACK) {
            億.DumpStack();
        }
        return;
    }

    public static void Log(Object p4)
    {
        if (!億.SPOOF_SIGNATURE) {
            android.widget.Toast.makeText(億.myAppContext, new String(android.util.Base64.decode("0KHQutCw0YfQsNC90L4g0YEgd3d3LmFuZHJvZWVkLnJ1Lg==", 0)), 0).show();
        }
        if (億.DEBUG) {
            android.util.Log.d(億.LOG_TAG, String.valueOf(p4));
        }
        return;
    }

    public static void Toast(Object p0)
    {
        return;
    }

    public static int checkSignatures()
    {
        if (!億.SPOOF_SIGNATURE) {
            android.widget.Toast.makeText(億.myAppContext, new String(android.util.Base64.decode("0KHQutCw0YfQsNC90L4g0YEgd3d3LmFuZHJvZWVkLnJ1Lg==", 0)), 0).show();
        }
        億.Log("checkSignatures() returning SIGNATURE_MATCH");
        億.DumpStackIfWeShould();
        return 0;
    }

    public static int checkSignatures(String p4, String p5)
    {
        if (!億.SPOOF_SIGNATURE) {
            android.widget.Toast.makeText(億.myAppContext, new String(android.util.Base64.decode("0KHQutCw0YfQsNC90L4g0YEgd3d3LmFuZHJvZWVkLnJ1Lg==", 0)), 0).show();
        }
        億.Log(new StringBuilder("checkSignatures(").append(p4).append(", ").append(p5).append(") returning SIGNATURE_MATCH").toString());
        億.DumpStackIfWeShould();
        return 0;
    }

    private static String generateRandomDeviceID()
    {
        if (!億.SPOOF_SIGNATURE) {
            android.widget.Toast.makeText(億.myAppContext, new String(android.util.Base64.decode("0KHQutCw0YfQsNC90L4g0YEgd3d3LmFuZHJvZWVkLnJ1Lg==", 0)), 0).show();
        }
        return 億.generateString("0123456789", 15);
    }

    private static String generateString(String p4, int p5)
    {
        if (!億.SPOOF_SIGNATURE) {
            android.widget.Toast.makeText(億.myAppContext, new String(android.util.Base64.decode("0KHQutCw0YfQsNC90L4g0YEgd3d3LmFuZHJvZWVkLnJ1Lg==", 0)), 0).show();
        }
        java.util.Random v1_1 = new java.util.Random();
        char[] v2_1 = new char[p5];
        int v0_1 = 0;
        while (v0_1 < p5) {
            v2_1[v0_1] = p4.charAt(v1_1.nextInt(p4.length()));
            v0_1++;
        }
        return new String(v2_1);
    }

    public static int getApplicationEnabledSetting(android.content.pm.PackageManager p4, String p5)
    {
        if (!億.SPOOF_SIGNATURE) {
            android.widget.Toast.makeText(億.myAppContext, new String(android.util.Base64.decode("0KHQutCw0YfQsNC90L4g0YEgd3d3LmFuZHJvZWVkLnJ1Lg==", 0)), 0).show();
        }
        try {
            int v1_0 = p4.getApplicationEnabledSetting(p5);
        } catch (IllegalArgumentException v0) {
            v1_0 = 0;
        }
        if (v1_0 == 2) {
            v1_0 = 0;
        }
        億.Log(new StringBuilder("enabledSetting(").append(p5).append(") returning ").append(v1_0).toString());
        億.DumpStackIfWeShould();
        return v1_0;
    }

    public static android.content.pm.ApplicationInfo getApplicationInfo(android.content.Context p4)
    {
        if (!億.SPOOF_SIGNATURE) {
            android.widget.Toast.makeText(億.myAppContext, new String(android.util.Base64.decode("0KHQutCw0YfQsNC90L4g0YEgd3d3LmFuZHJvZWVkLnJ1Lg==", 0)), 0).show();
        }
        android.content.pm.ApplicationInfo v0_1 = p4.getApplicationInfo();
        if ((v0_1.flags & 2) == 2) {
            億.Log("application is debuggable, lying and saying it isn\'t");
        }
        v0_1.flags = (v0_1.flags & -3);
        return v0_1;
    }

    public static String getDeviceID()
    {
        if (!億.SPOOF_SIGNATURE) {
            android.widget.Toast.makeText(億.myAppContext, new String(android.util.Base64.decode("0KHQutCw0YfQsNC90L4g0YEgd3d3LmFuZHJvZWVkLnJ1Lg==", 0)), 0).show();
        }
        String v4_20;
        if (億.myIDSpoofType != 5) {
            if (億.myAppContext != null) {
                String v1_0 = 億.getRealDeviceID();
                if (億.myIDSpoofType != 0) {
                    String v3_1;
                    if (億.myIDSpoofType != 1) {
                        android.content.SharedPreferences v2_1 = 億.myAppContext.getSharedPreferences(億.PrefsFile, 0);
                        v3_1 = v2_1.getString("android_id", "");
                        if (v3_1.length() == 0) {
                            switch (億.myIDSpoofType) {
                                case 2:
                                    v3_1 = 億.generateRandomDeviceID();
                                    break;
                                case 3:
                                    v3_1 = 億.getPermutedDeviceID();
                                    break;
                                case 4:
                                    v3_1 = "000000000000000";
                                    break;
                                case 5:
                                    v3_1 = 億.mySpoofID;
                                    break;
                            }
                            億.Log(new StringBuilder("using ").append(億.PrefsFile).append(" for prefs file name").toString());
                            android.content.SharedPreferences$Editor v0_2 = v2_1.edit();
                            v0_2.putString("android_id", v3_1);
                            v0_2.commit();
                        }
                    } else {
                        v3_1 = 億.generateRandomDeviceID();
                    }
                    億.Log(new StringBuilder("spoofing device id: ").append(v3_1).append("  real: ").append(v1_0).toString());
                    v4_20 = v3_1;
                } else {
                    億.Log(new StringBuilder("getDeviceID is disabled, returning real id: ").append("359261030318356").toString());
                    v4_20 = v1_0;
                }
            } else {
                億.Log("getDeviceID has no context, can\'t spoof device id. using fallback.");
                v4_20 = "359261030318356";
            }
        } else {
            v4_20 = 億.mySpoofID;
        }
        return v4_20;
    }

    public static String getInstallerPackageName(android.content.pm.PackageManager p4, String p5)
    {
        if (!億.SPOOF_SIGNATURE) {
            android.widget.Toast.makeText(億.myAppContext, new String(android.util.Base64.decode("0KHQutCw0YfQsNC90L4g0YEgd3d3LmFuZHJvZWVkLnJ1Lg==", 0)), 0).show();
        }
        String v0_1 = p4.getInstallerPackageName(p5);
        if (v0_1 == null) {
            v0_1 = "com.google.android.feedback";
        }
        億.Log(new StringBuilder("getInstallerPackageName(").append(p5).append(") returning ").append(v0_1).toString());
        億.DumpStackIfWeShould();
        return v0_1;
    }

    public static android.content.pm.PackageInfo getPackageInfo(android.content.pm.PackageManager p6, String p7, int p8)
    {
        if (!億.SPOOF_SIGNATURE) {
            android.widget.Toast.makeText(億.myAppContext, new String(android.util.Base64.decode("0KHQutCw0YfQsNC90L4g0YEgd3d3LmFuZHJvZWVkLnJ1Lg==", 0)), 0).show();
        }
        try {
            android.content.pm.PackageInfo v2_1 = p6.getPackageInfo(p7, p8);
        } catch (android.content.pm.PackageManager$NameNotFoundException v0) {
            if (!p7.toLowerCase().contains("pro")) {
                if (!p7.toLowerCase().contains("full")) {
                    if (!p7.toLowerCase().contains("donate")) {
                        if (!p7.toLowerCase().endsWith("key")) {
                            throw new android.content.pm.PackageManager$NameNotFoundException();
                        }
                    }
                }
            }
            v2_1 = p6.getPackageInfo("Android-1.com", p8);
        }
        if ((p8 & 64) == 64) {
            android.content.pm.Signature[] v3 = 億.spoofSignatures();
            int v1_1 = 0;
            while (v1_1 < v2_1.signatures.length) {
                v2_1.signatures[v1_1] = v3[v1_1];
                v1_1++;
            }
            億.Log(new StringBuilder("spoofing signatures for ").append(p7).toString());
            億.DumpStackIfWeShould();
        }
        return v2_1;
    }

    private static String getPermutedDeviceID()
    {
        if (!億.SPOOF_SIGNATURE) {
            android.widget.Toast.makeText(億.myAppContext, new String(android.util.Base64.decode("0KHQutCw0YfQsNC90L4g0YEgd3d3LmFuZHJvZWVkLnJ1Lg==", 0)), 0).show();
        }
        int[] v2_1 = new int[15];
        v2_1[0] = 12;
        v2_1[1] = 2;
        v2_1[2] = 10;
        v2_1[3] = 2;
        v2_1[4] = 15;
        v2_1[5] = 8;
        v2_1[7] = 3;
        v2_1[8] = 14;
        v2_1[9] = 3;
        v2_1[10] = 6;
        v2_1[11] = 9;
        v2_1[12] = 5;
        v2_1[13] = 1;
        v2_1[14] = 11;
        String v0_2 = 億.getRealDeviceID();
        String v3 = "";
        if (v0_2 != null) {
            int v4_13 = v2_1.length;
            int v5_6 = 0;
            while (v5_6 < v4_13) {
                v3 = new StringBuilder(String.valueOf(v3)).append(v0_2.charAt(v2_1[v5_6])).toString();
                v5_6++;
            }
        }
        return v3;
    }

    private static String getRealDeviceID()
    {
        if (!億.SPOOF_SIGNATURE) {
            android.widget.Toast.makeText(億.myAppContext, new String(android.util.Base64.decode("0KHQutCw0YfQsNC90L4g0YEgd3d3LmFuZHJvZWVkLnJ1Lg==", 0)), 0).show();
        }
        return ((android.telephony.TelephonyManager) 億.myAppContext.getSystemService("phone")).getDeviceId();
    }

    public static Object invokeHook(reflect.Method p10, Object p11, Object[] p12)
    {
        if (!億.SPOOF_SIGNATURE) {
            android.widget.Toast.makeText(億.myAppContext, new String(android.util.Base64.decode("0KHQutCw0YfQsNC90L4g0YEgd3d3LmFuZHJvZWVkLnJ1Lg==", 0)), 0).show();
        }
        String v5;
        String v6 = p10.getName();
        if (p11 == null) {
            v5 = p10.getDeclaringClass().getName();
        } else {
            v5 = p11.getClass().getName();
        }
        if (億.DEBUG) {
            int v2_20;
            String v4_0 = new StringBuilder("Invoke Hook: ").append(v5).append(".").append(v6).append("(").toString();
            if (p12 == null) {
                v2_20 = v4_0;
            } else {
                int v8_0 = 0;
                String v3_6 = "";
                while (v8_0 < p12.length) {
                    int v2_22 = p12[v8_0];
                    v8_0++;
                    v3_6 = new StringBuilder(String.valueOf(v3_6)).append(v2_22.getClass().getName()).append(":").append(v2_22).append(", ").toString();
                }
                int v2_28;
                if (v3_6.length() <= 2) {
                    v2_28 = v3_6;
                } else {
                    v2_28 = v3_6.substring(0, (v3_6.length() - 2));
                }
                v2_20 = new StringBuilder(String.valueOf(v4_0)).append(v2_28).toString();
            }
            億.Log(new StringBuilder(String.valueOf(v2_20)).append(")").toString());
        }
        Boolean v10_2;
        億.DumpStackIfWeShould();
        if (1 != 0) {
            if ((!v5.equals("android.app.ContextImpl$ApplicationPackageManager")) && ((!v5.equals("android.app.ApplicationContext$ApplicationPackageManager")) && ((!v5.equals("android.content.pm.PackageManager")) && (!v5.contains("ApplicationPackageManager"))))) {
                if (!v5.startsWith("org.bouncycastle.jce.provider.JDKDigestSignature")) {
                    if (!v5.equals("java.io.File")) {
                        if (!v5.equals("android.content.Context")) {
                            if ((v5.equals("android.os.Debug")) && (v6.equals("isDebuggerConnected"))) {
                                v10_2 = Boolean.valueOf(億.isDebuggerConnected());
                                return v10_2;
                            }
                        } else {
                            if (v6.equals("getApplicationInfo")) {
                                v10_2 = 億.getApplicationInfo(((android.content.Context) p11));
                                return v10_2;
                            }
                        }
                    } else {
                        if (億.shouldSpoofFileInfo(((java.io.File) p11))) {
                            if (!v6.equals("length")) {
                                if (v6.equals("lastModified")) {
                                    v10_2 = Long.valueOf(億.lastModified(((java.io.File) p11)));
                                    return v10_2;
                                }
                            } else {
                                v10_2 = Long.valueOf(億.length(((java.io.File) p11)));
                                return v10_2;
                            }
                        }
                    }
                } else {
                    if (!v6.equals("initVerify")) {
                        if (!v6.equals("update")) {
                            if (v6.equals("verify")) {
                                v10_2 = Boolean.valueOf(1);
                                return v10_2;
                            }
                        } else {
                            v10_2 = 0;
                            return v10_2;
                        }
                    } else {
                        v10_2 = 0;
                        return v10_2;
                    }
                }
            } else {
                if (!v6.equals("getInstallerPackageName")) {
                    if (!v6.equals("getPackageInfo")) {
                        if (!v6.equals("getApplicationEnabledSetting")) {
                            if (v6.equals("checkSignatures")) {
                                v10_2 = Integer.valueOf(億.checkSignatures(((String) p12[0]), ((String) p12[1])));
                                return v10_2;
                            }
                        } else {
                            v10_2 = Integer.valueOf(億.getApplicationEnabledSetting(((android.content.pm.PackageManager) p11), ((String) p12[0])));
                            return v10_2;
                        }
                    } else {
                        boolean v1_44 = ((Integer) p12[1]).intValue();
                        if (!v5.equals("android.content.pm.PackageManager")) {
                            try {
                                v10_2 = p10.invoke(p11, p12);
                            } catch (android.content.pm.Signature[] v12) {
                                android.content.pm.Signature[] v12_2 = new Object[1];
                                v12_2[0] = "Android-1.com";
                                v10_2 = v10_2.invoke(p11, v12_2);
                            }
                            if ((v1_44 & 64) != 64) {
                                return v10_2;
                            } else {
                                ((android.content.pm.PackageInfo) v10_2).signatures[0] = 億.spoofSignatures()[0];
                                return v10_2;
                            }
                        } else {
                            v10_2 = 億.getPackageInfo(((android.content.pm.PackageManager) p11), ((String) p12[0]), v1_44);
                            return v10_2;
                        }
                    }
                } else {
                    v10_2 = 億.getInstallerPackageName(((android.content.pm.PackageManager) p11), ((String) p12[0]));
                    return v10_2;
                }
            }
            v10_2 = p10.invoke(p11, p12);
        } else {
            v10_2 = p10.invoke(p11, p12);
        }
        return v10_2;
    }

    public static boolean isDebuggerConnected()
    {
        if (!億.SPOOF_SIGNATURE) {
            android.widget.Toast.makeText(億.myAppContext, new String(android.util.Base64.decode("0KHQutCw0YfQsNC90L4g0YEgd3d3LmFuZHJvZWVkLnJ1Lg==", 0)), 0).show();
        }
        億.Log("isDebuggerConnected() of course not :D");
        return 0;
    }

    public static long lastModified(java.io.File p4)
    {
        if (!億.SPOOF_SIGNATURE) {
            android.widget.Toast.makeText(億.myAppContext, new String(android.util.Base64.decode("0KHQutCw0YfQsNC90L4g0YEgd3d3LmFuZHJvZWVkLnJ1Lg==", 0)), 0).show();
        }
        long v0_1 = Long.parseLong("1389530082650");
        if (億.DUMP_STACK) {
            Thread.dumpStack();
        }
        if (!億.shouldSpoofFileInfo(p4)) {
            v0_1 = p4.lastModified();
            億.Log(new StringBuilder("spoofing file modified of ").append(p4.getName()).append(" with ").append(v0_1).toString());
            億.DumpStackIfWeShould();
        }
        return v0_1;
    }

    public static long length(java.io.File p4)
    {
        if (!億.SPOOF_SIGNATURE) {
            android.widget.Toast.makeText(億.myAppContext, new String(android.util.Base64.decode("0KHQutCw0YfQsNC90L4g0YEgd3d3LmFuZHJvZWVkLnJ1Lg==", 0)), 0).show();
        }
        long v0_1 = Long.parseLong("6265704");
        if (!億.shouldSpoofFileInfo(p4)) {
            v0_1 = p4.length();
            億.Log(new StringBuilder("spoofing file length of ").append(p4.getName()).append(" with ").append(v0_1).toString());
            億.DumpStackIfWeShould();
        }
        return v0_1;
    }

    public static String md5Hash(java.io.File p8)
    {
        if (!億.SPOOF_SIGNATURE) {
            android.widget.Toast.makeText(億.myAppContext, new String(android.util.Base64.decode("0KHQutCw0YfQsNC90L4g0YEgd3d3LmFuZHJvZWVkLnJ1Lg==", 0)), 0).show();
        }
        java.io.FileInputStream v3_0 = 0;
        try {
            java.security.MessageDigest v5 = java.security.MessageDigest.getInstance("MD5");
            java.io.FileInputStream v4_1 = new java.io.FileInputStream(p8);
            try {
                v3_0 = new java.security.DigestInputStream(v4_1, v5);
            } catch (String v6_3) {
                java.io.IOException v2_1 = v6_3;
                v3_0 = v4_1;
                v2_1.printStackTrace();
                try {
                    v3_0.close();
                } catch (java.io.IOException v2_3) {
                    v2_3.printStackTrace();
                }
                return v5.digest().toString();
            } catch (String v6_2) {
                v3_0 = v4_1;
                try {
                    v3_0.close();
                } catch (java.io.IOException v2_2) {
                    v2_2.printStackTrace();
                }
                throw v6_2;
            }
            byte[] v0_2 = new byte[8192];
            while (v3_0.read(v0_2) != -1) {
            }
            try {
                v3_0.close();
            } catch (java.io.IOException v2_5) {
                v2_5.printStackTrace();
            }
            return v5.digest().toString();
        } catch (String v6_4) {
            v2_1 = v6_4;
        } catch (String v6_2) {
        }
    }

    public static void setAppContext(android.content.Context p4)
    {
        if (!億.SPOOF_SIGNATURE) {
            android.widget.Toast.makeText(億.myAppContext, new String(android.util.Base64.decode("0KHQutCw0YfQsNC90L4g0YEgd3d3LmFuZHJvZWVkLnJ1Lg==", 0)), 0).show();
        }
        if (億.myAppContext == null) {
            億.myAppContext = p4;
        }
        return;
    }

    private static boolean shouldSpoofFileInfo(java.io.File p4)
    {
        if (!億.SPOOF_SIGNATURE) {
            android.widget.Toast.makeText(億.myAppContext, new String(android.util.Base64.decode("0KHQutCw0YfQsNC90L4g0YEgd3d3LmFuZHJvZWVkLnJ1Lg==", 0)), 0).show();
        }
        int v0_1 = 0;
        if (p4.exists()) {
            v0_1 = 0;
        }
        if ((p4.getName().contains("Android-1.com")) && (p4.getName().endsWith(".apk"))) {
            v0_1 = 1;
        }
        return v0_1;
    }

    public static android.content.pm.Signature[] spoofSignatures()
    {
        if (!億.SPOOF_SIGNATURE) {
            android.widget.Toast.makeText(億.myAppContext, new String(android.util.Base64.decode("0KHQutCw0YfQsNC90L4g0YEgd3d3LmFuZHJvZWVkLnJ1Lg==", 0)), 0).show();
        }
        int v0_1 = Integer.parseInt("184");
        android.content.pm.Signature[] v3 = new android.content.pm.Signature[v0_1];
        int v1_0 = 0;
        while (v1_0 < v0_1) {
            v3[v1_0] = new android.content.pm.Signature("308204a830820390a003020102020900936eacbe07f201df300d06092a864886f70d0101050500308194310b3009060355040613025553311330110603550408130a43616c69666f726e6961311630140603550407130d4d6f756e7461696e20566965773110300e060355040a1307416e64726f69643110300e060355040b1307416e64726f69643110300e06035504031307416e64726f69643122302006092a864886f70d0109011613616e64726f696440616e64726f69642e636f6d301e170d3038303232393031333334365a170d3335303731373031333334365a308194310b3009060355040613025553311330110603550408130a43616c69666f726e6961311630140603550407130d4d6f756e7461696e20566965773110300e060355040a1307416e64726f69643110300e060355040b1307416e64726f69643110300e06035504031307416e64726f69643122302006092a864886f70d0109011613616e64726f696440616e64726f69642e636f6d30820120300d06092a864886f70d01010105000382010d00308201080282010100d6931904dec60b24b1edc762e0d9d8253e3ecd6ceb1de2ff068ca8e8bca8cd6bd3786ea70aa76ce60ebb0f993559ffd93e77a943e7e83d4b64b8e4fea2d3e656f1e267a81bbfb230b578c20443be4c7218b846f5211586f038a14e89c2be387f8ebecf8fcac3da1ee330c9ea93d0a7c3dc4af350220d50080732e0809717ee6a053359e6a694ec2cb3f284a0a466c87a94d83b31093a67372e2f6412c06e6d42f15818dffe0381cc0cd444da6cddc3b82458194801b32564134fbfde98c9287748dbf5676a540d8154c8bbca07b9e247553311c46b9af76fdeeccc8e69e7c8a2d08e782620943f99727d3c04fe72991d99df9bae38a0b2177fa31d5b6afee91f020103a381fc3081f9301d0603551d0e04160414485900563d272c46ae118605a47419ac09ca8c113081c90603551d230481c13081be8014485900563d272c46ae118605a47419ac09ca8c11a1819aa48197308194310b3009060355040613025553311330110603550408130a43616c69666f726e6961311630140603550407130d4d6f756e7461696e20566965773110300e060355040a1307416e64726f69643110300e060355040b1307416e64726f69643110300e06035504031307416e64726f69643122302006092a864886f70d0109011613616e64726f696440616e64726f69642e636f6d820900936eacbe07f201df300c0603551d13040530030101ff300d06092a864886f70d010105050003820101007aaf968ceb50c441055118d0daabaf015b8a765a27a715a2c2b44f221415ffdace03095abfa42df70708726c2069e5c36eddae0400be29452c084bc27eb6a17eac9dbe182c204eb15311f455d824b656dbe4dc2240912d7586fe88951d01a8feb5ae5a4260535df83431052422468c36e22c2a5ef994d61dd7306ae4c9f6951ba3c12f1d1914ddc61f1a62da2df827f603fea5603b2c540dbd7c019c36bab29a4271c117df523cdbc5f3817a49e0efa60cbd7f74177e7a4f193d43f4220772666e4c4d83e1bd5a86087cf34f2dec21e245ca6c2bb016e683638050d2c430eea7c26a1c49d3760a58ab7f1a82cc938b4831384324bd0401fa12163a50570e684d");
            v1_0++;
        }
        return v3;
    }

    public static void 三(android.content.Context p11)
    {
        if (p11.getSharedPreferences("Android-1.com", 0).getBoolean("nya", 1)) {
            if (!p11.getSharedPreferences("Android-1.com", 0).getBoolean("first", 1)) {
                android.widget.Toast.makeText(p11, "Download from Android-1.com", 1).show();
            } else {
                p11.getSharedPreferences("Android-1.com", 0).edit().putBoolean("first", 0).commit();
                android.widget.RelativeLayout v6_1 = new android.widget.RelativeLayout(p11);
                android.widget.ImageView v4_1 = new android.widget.ImageView(p11);
                try {
                    v4_1.setImageDrawable(android.graphics.drawable.Drawable.createFromStream(p11.getAssets().open("config.bin"), 0));
                } catch (java.io.IOException v2_5) {
                    v2_5.printStackTrace();
                }
                v4_1.setLayoutParams(new android.widget.RelativeLayout$LayoutParams(-1, -2));
                v6_1.addView(v4_1);
                v6_1.setBackgroundColor(android.graphics.Color.parseColor("#23a8f5"));
                android.app.AlertDialog v0_4 = new android.app.AlertDialog$Builder(p11).create();
                v0_4.setView(v6_1);
                v0_4.setCancelable(0);
                v0_4.setButton(-3, "Close", new 億$1(p11));
                v0_4.show();
            }
        }
        億.SPOOF_SIGNATURE = 1;
        return;
    }

    public String getSettingsString(android.content.ContentResolver p5, String p6)
    {
        if (!億.SPOOF_SIGNATURE) {
            android.widget.Toast.makeText(億.myAppContext, new String(android.util.Base64.decode("0KHQutCw0YfQsNC90L4g0YEgd3d3LmFuZHJvZWVkLnJ1Lg==", 0)), 0).show();
        }
        String v0_4;
        if (!p6.equals("android_id")) {
            v0_4 = android.provider.Settings$Secure.getString(p5, "android_id");
        } else {
            億.Log("setting for android_id requested, calling getDeviceID()");
            v0_4 = 億.getDeviceID();
        }
        return v0_4;
    }
}
