package com.flurry.android;
public final class VersionUtil {
    public static final int SDK_INT;

    static VersionUtil()
    {
        com.flurry.android.VersionUtil.SDK_INT = Integer.parseInt(android.os.Build$VERSION.SDK);
        return;
    }

    public VersionUtil()
    {
        return;
    }
}
