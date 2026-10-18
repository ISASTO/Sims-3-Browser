package com.ideaworks3d.marmalade;
 class LoaderLocation$LocationUpdateHandler implements android.location.GpsStatus$Listener, android.location.LocationListener {
    final synthetic com.ideaworks3d.marmalade.LoaderLocation this$0;

    LoaderLocation$LocationUpdateHandler(com.ideaworks3d.marmalade.LoaderLocation p1)
    {
        this.this$0 = p1;
        return;
    }

    public void onGpsStatusChanged(int p4)
    {
        if (com.ideaworks3d.marmalade.LoaderLocation.access$000(this.this$0) != null) {
            if (com.ideaworks3d.marmalade.LoaderLocation.access$100(this.this$0) != null) {
                com.ideaworks3d.marmalade.LoaderLocation.access$000(this.this$0).getGpsStatus(com.ideaworks3d.marmalade.LoaderLocation.access$100(this.this$0));
            } else {
                com.ideaworks3d.marmalade.LoaderLocation.access$102(this.this$0, com.ideaworks3d.marmalade.LoaderLocation.access$000(this.this$0).getGpsStatus(0));
            }
        }
        return;
    }

    public void onLocationChanged(android.location.Location p14)
    {
        if (p14 != null) {
            int v1_0;
            if (!p14.getProvider().equals("gps")) {
                v1_0 = 3;
            } else {
                v1_0 = 1;
            }
            int v11_1;
            com.ideaworks3d.marmalade.LoaderLocation v0_0 = this.this$0;
            long v2 = p14.getTime();
            double v4 = p14.getLatitude();
            double v6 = p14.getLongitude();
            double v8 = p14.getAltitude();
            float v10 = p14.getAccuracy();
            if (!p14.hasBearing()) {
                v11_1 = -1082130432;
            } else {
                v11_1 = p14.getBearing();
            }
            com.ideaworks3d.marmalade.LoaderLocation.access$200(v0_0, v1_0, v2, v4, v6, v8, v10, v11_1, p14.getSpeed());
        }
        return;
    }

    public void onProviderDisabled(String p1)
    {
        return;
    }

    public void onProviderEnabled(String p1)
    {
        return;
    }

    public void onStatusChanged(String p1, int p2, android.os.Bundle p3)
    {
        return;
    }
}
