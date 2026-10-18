package com.ideaworks3d.marmalade;
public class LoaderLocation {
    private android.location.GpsStatus m_GpsStatus;
    private com.ideaworks3d.marmalade.LoaderLocation$LocationUpdateHandler m_LocationListener;
    private android.location.LocationManager m_LocationManager;
    private int m_LocationUpdateDistance;
    private int m_LocationUpdateInterval;

    public LoaderLocation()
    {
        this.m_LocationUpdateInterval = 5000;
        this.m_LocationUpdateDistance = 2;
        return;
    }

    static synthetic android.location.LocationManager access$000(com.ideaworks3d.marmalade.LoaderLocation p1)
    {
        return p1.m_LocationManager;
    }

    static synthetic android.location.GpsStatus access$100(com.ideaworks3d.marmalade.LoaderLocation p1)
    {
        return p1.m_GpsStatus;
    }

    static synthetic android.location.GpsStatus access$102(com.ideaworks3d.marmalade.LoaderLocation p0, android.location.GpsStatus p1)
    {
        p0.m_GpsStatus = p1;
        return p1;
    }

    static synthetic void access$200(com.ideaworks3d.marmalade.LoaderLocation p0, int p1, long p2, double p4, double p6, double p8, float p10, float p11, float p12)
    {
        p0.locationUpdate(p1, p2, p4, p6, p8, p10, p11, p12);
        return;
    }

    static synthetic com.ideaworks3d.marmalade.LoaderLocation$LocationUpdateHandler access$300(com.ideaworks3d.marmalade.LoaderLocation p1)
    {
        return p1.m_LocationListener;
    }

    static synthetic com.ideaworks3d.marmalade.LoaderLocation$LocationUpdateHandler access$302(com.ideaworks3d.marmalade.LoaderLocation p0, com.ideaworks3d.marmalade.LoaderLocation$LocationUpdateHandler p1)
    {
        p0.m_LocationListener = p1;
        return p1;
    }

    static synthetic int access$400(com.ideaworks3d.marmalade.LoaderLocation p1)
    {
        return p1.m_LocationUpdateInterval;
    }

    static synthetic int access$500(com.ideaworks3d.marmalade.LoaderLocation p1)
    {
        return p1.m_LocationUpdateDistance;
    }

    private native void locationSatellite(int p0, float p1, float p2, int p3, float p4, boolean p5);

    private native void locationUpdate(int p0, long p1, double p2, double p3, double p4, float p5, float p6, float p7);

    public boolean locationGpsData()
    {
        int v0_2;
        int v1 = 0;
        if (this.m_GpsStatus == null) {
            v0_2 = 0;
        } else {
            java.util.Iterator v7 = this.m_GpsStatus.getSatellites().iterator();
            while (v7.hasNext()) {
                int v0_4 = ((android.location.GpsSatellite) v7.next());
                this.locationSatellite(v1, v0_4.getAzimuth(), v0_4.getElevation(), v0_4.getPrn(), v0_4.getSnr(), v0_4.usedInFix());
                v1++;
            }
            v0_2 = 1;
        }
        return v0_2;
    }

    public boolean locationStart(com.ideaworks3d.marmalade.LoaderActivity p15)
    {
        void v0_15;
        if (this.m_LocationManager == null) {
            this.m_LocationManager = ((android.location.LocationManager) p15.getSystemService("location"));
            void v0_16 = new int[1];
            v0_16[0] = 5000;
            android.location.Location v1_1 = new int[1];
            v1_1[0] = 2;
            if (com.ideaworks3d.marmalade.LoaderAPI.s3eConfigGetInt("s3e", "LocUpdateInterval", v0_16) == 0) {
                this.m_LocationUpdateInterval = v0_16[0];
            }
            if (com.ideaworks3d.marmalade.LoaderAPI.s3eConfigGetInt("s3e", "AndroidLocUpdateDistance", v1_1) == 0) {
                this.m_LocationUpdateDistance = v1_1[0];
            }
            android.location.Location v1_6;
            void v0_10;
            p15.LoaderThread().runOnOSThread(new com.ideaworks3d.marmalade.LoaderLocation$1(this));
            android.location.Location v1_5 = this.m_LocationManager.getLastKnownLocation("gps");
            if (v1_5 != null) {
                v1_6 = 1;
                v0_10 = v1_5;
            } else {
                v1_6 = 3;
                v0_10 = this.m_LocationManager.getLastKnownLocation("network");
            }
            if (v0_10 != 0) {
                int v11_1;
                long v2_8 = v0_10.getTime();
                double v4 = v0_10.getLatitude();
                double v6 = v0_10.getLongitude();
                double v8 = v0_10.getAltitude();
                float v10 = v0_10.getAccuracy();
                if (!v0_10.hasBearing()) {
                    v11_1 = -1082130432;
                } else {
                    v11_1 = v0_10.getBearing();
                }
                this.locationUpdate(v1_6, v2_8, v4, v6, v8, v10, v11_1, v0_10.getSpeed());
            }
            v0_15 = 1;
        } else {
            v0_15 = 0;
        }
        return v0_15;
    }

    public boolean locationStop()
    {
        int v0_1;
        if (this.m_LocationManager != null) {
            this.m_LocationManager.removeGpsStatusListener(this.m_LocationListener);
            this.m_LocationManager.removeUpdates(this.m_LocationListener);
            this.m_LocationListener = 0;
            this.m_LocationManager = 0;
            v0_1 = 1;
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }
}
