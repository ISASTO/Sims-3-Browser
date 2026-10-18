package com.flurry.android;
final class be {

    be()
    {
        return;
    }

    final declared_synchronized org.apache.http.client.HttpClient a(org.apache.http.params.HttpParams p7)
    {
        try {
            org.apache.http.impl.client.DefaultHttpClient v0_5 = java.security.KeyStore.getInstance(java.security.KeyStore.getDefaultType());
            v0_5.load(0, 0);
            org.apache.http.impl.conn.tsccm.ThreadSafeClientConnManager v1_4 = new com.flurry.android.bi(this, v0_5);
            org.apache.http.impl.client.DefaultHttpClient v0_1 = new org.apache.http.conn.scheme.SchemeRegistry();
            v0_1.register(new org.apache.http.conn.scheme.Scheme("http", org.apache.http.conn.scheme.PlainSocketFactory.getSocketFactory(), 80));
            v0_1.register(new org.apache.http.conn.scheme.Scheme("https", v1_4, 443));
            org.apache.http.impl.client.DefaultHttpClient v0_3 = new org.apache.http.impl.client.DefaultHttpClient(new org.apache.http.impl.conn.tsccm.ThreadSafeClientConnManager(p7, v0_1), p7);
        } catch (org.apache.http.impl.client.DefaultHttpClient v0) {
            v0_3 = new org.apache.http.impl.client.DefaultHttpClient(p7);
        } catch (org.apache.http.impl.client.DefaultHttpClient v0_6) {
            throw v0_6;
        }
        return v0_3;
    }
}
