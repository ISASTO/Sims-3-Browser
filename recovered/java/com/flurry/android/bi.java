package com.flurry.android;
final class bi extends org.apache.http.conn.ssl.SSLSocketFactory {
    private javax.net.ssl.SSLContext a;

    public bi(com.flurry.android.be p6, java.security.KeyStore p7)
    {
        super(p7);
        super.a = javax.net.ssl.SSLContext.getInstance("TLS");
        javax.net.ssl.SSLContext v1 = super.a;
        javax.net.ssl.TrustManager[] v2_0 = new javax.net.ssl.TrustManager[1];
        v2_0[0] = new com.flurry.android.o();
        v1.init(0, v2_0, 0);
        return;
    }

    public final java.net.Socket createSocket()
    {
        return this.a.getSocketFactory().createSocket();
    }

    public final java.net.Socket createSocket(java.net.Socket p2, String p3, int p4, boolean p5)
    {
        return this.a.getSocketFactory().createSocket(p2, p3, p4, p5);
    }
}
