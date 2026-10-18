package com.ideaworks3d.marmalade;
public class VFSProvider extends android.content.ContentProvider {
    public static final android.net.Uri ASSET_URI = None;
    private static final String AUTHORITY = "zzzz70ff35b2d6db27eba2d4091a18824984.VFSProvider";
    private static final String CONTENT_PREFIX = "content://";
    private static final String EXP_PATH = "/Android/obb/";

    static VFSProvider()
    {
        com.ideaworks3d.marmalade.VFSProvider.ASSET_URI = android.net.Uri.parse("content://zzzz70ff35b2d6db27eba2d4091a18824984.VFSProvider");
        return;
    }

    public VFSProvider()
    {
        return;
    }

    public int delete(android.net.Uri p2, String p3, String[] p4)
    {
        return 0;
    }

    public android.content.res.AssetFileDescriptor getAssetFileDescriptor(String p12)
    {
        android.content.res.AssetFileDescriptor v0_3;
        android.content.res.AssetFileDescriptor v0_5 = p12.split("/");
        if (v0_5.length >= 3) {
            try {
                long v2_0 = Long.parseLong(v0_5[(v0_5.length - 2)]);
                long v4 = Long.parseLong(v0_5[(v0_5.length - 1)]);
                String v6_1 = v0_5[0];
                android.os.ParcelFileDescriptor v1_8 = 1;
            } catch (android.content.res.AssetFileDescriptor v0) {
                v0_3 = 0;
            } catch (android.content.res.AssetFileDescriptor v0_4) {
                v0_4.printStackTrace();
            }
            while (v1_8 < (v0_5.length - 2)) {
                v6_1 = new StringBuilder().append(v6_1).append("/").append(v0_5[v1_8]).toString();
                v1_8++;
            }
            v0_3 = new android.content.res.AssetFileDescriptor(android.os.ParcelFileDescriptor.open(new java.io.File(v6_1), 268435456), v2_0, v4);
        } else {
            v0_3 = 0;
        }
        return v0_3;
    }

    public String getType(android.net.Uri p2)
    {
        return "vnd.android.cursor.item/asset";
    }

    public android.net.Uri insert(android.net.Uri p2, android.content.ContentValues p3)
    {
        return 0;
    }

    public boolean onCreate()
    {
        return 1;
    }

    public android.content.res.AssetFileDescriptor openAssetFile(android.net.Uri p3, String p4)
    {
        android.content.res.AssetFileDescriptor v0_0 = p3.getEncodedPath();
        if (v0_0.startsWith("/")) {
            v0_0 = v0_0.substring(1);
        }
        return this.getAssetFileDescriptor(v0_0);
    }

    public android.os.ParcelFileDescriptor openFile(android.net.Uri p2, String p3)
    {
        int v0_1;
        int v0_0 = this.openAssetFile(p2, p3);
        if (v0_0 == 0) {
            v0_1 = 0;
        } else {
            v0_1 = v0_0.getParcelFileDescriptor();
        }
        return v0_1;
    }

    public android.database.Cursor query(android.net.Uri p2, String[] p3, String p4, String[] p5, String p6)
    {
        return 0;
    }

    public int update(android.net.Uri p2, android.content.ContentValues p3, String p4, String[] p5)
    {
        return 0;
    }
}
