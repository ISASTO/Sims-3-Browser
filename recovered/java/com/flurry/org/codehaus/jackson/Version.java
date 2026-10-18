package com.flurry.org.codehaus.jackson;
public class Version implements java.lang.Comparable {
    private static final com.flurry.org.codehaus.jackson.Version UNKNOWN_VERSION;
    protected final int _majorVersion;
    protected final int _minorVersion;
    protected final int _patchLevel;
    protected final String _snapshotInfo;

    static Version()
    {
        com.flurry.org.codehaus.jackson.Version.UNKNOWN_VERSION = new com.flurry.org.codehaus.jackson.Version(0, 0, 0, 0);
        return;
    }

    public Version(int p1, int p2, int p3, String p4)
    {
        this._majorVersion = p1;
        this._minorVersion = p2;
        this._patchLevel = p3;
        this._snapshotInfo = p4;
        return;
    }

    public static com.flurry.org.codehaus.jackson.Version unknownVersion()
    {
        return com.flurry.org.codehaus.jackson.Version.UNKNOWN_VERSION;
    }

    public int compareTo(com.flurry.org.codehaus.jackson.Version p4)
    {
        int v0 = (this._majorVersion - p4._majorVersion);
        if (v0 == 0) {
            v0 = (this._minorVersion - p4._minorVersion);
            if (v0 == 0) {
                v0 = (this._patchLevel - p4._patchLevel);
            }
        }
        return v0;
    }

    public bridge synthetic int compareTo(Object p2)
    {
        return this.compareTo(((com.flurry.org.codehaus.jackson.Version) p2));
    }

    public boolean equals(Object p6)
    {
        int v1 = 1;
        if (p6 != this) {
            if (p6 != null) {
                if (p6.getClass() == this.getClass()) {
                    if ((((com.flurry.org.codehaus.jackson.Version) p6)._majorVersion != this._majorVersion) || ((((com.flurry.org.codehaus.jackson.Version) p6)._minorVersion != this._minorVersion) || (((com.flurry.org.codehaus.jackson.Version) p6)._patchLevel != this._patchLevel))) {
                        v1 = 0;
                    }
                } else {
                    v1 = 0;
                }
            } else {
                v1 = 0;
            }
        }
        return v1;
    }

    public int getMajorVersion()
    {
        return this._majorVersion;
    }

    public int getMinorVersion()
    {
        return this._minorVersion;
    }

    public int getPatchLevel()
    {
        return this._patchLevel;
    }

    public int hashCode()
    {
        return ((this._majorVersion + this._minorVersion) + this._patchLevel);
    }

    public boolean isSnapshot()
    {
        if ((this._snapshotInfo == null) || (this._snapshotInfo.length() <= 0)) {
            int v0_3 = 0;
        } else {
            v0_3 = 1;
        }
        return v0_3;
    }

    public boolean isUknownVersion()
    {
        int v0_1;
        if (this != com.flurry.org.codehaus.jackson.Version.UNKNOWN_VERSION) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public String toString()
    {
        StringBuilder v0_1 = new StringBuilder();
        v0_1.append(this._majorVersion).append(46);
        v0_1.append(this._minorVersion).append(46);
        v0_1.append(this._patchLevel);
        if (this.isSnapshot()) {
            v0_1.append(45).append(this._snapshotInfo);
        }
        return v0_1.toString();
    }
}
