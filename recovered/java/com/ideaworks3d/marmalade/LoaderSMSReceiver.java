package com.ideaworks3d.marmalade;
public class LoaderSMSReceiver extends android.content.BroadcastReceiver {
    static final String ACTION = "android.provider.Telephony.SMS_RECEIVED";

    public LoaderSMSReceiver()
    {
        return;
    }

    public static native void onReceiveCallback(String p0, String p1, long p2);

    public void onReceive(android.content.Context p8, android.content.Intent p9)
    {
        if (p9.getAction().equals("android.provider.Telephony.SMS_RECEIVED")) {
            new StringBuilder();
            int v0_0 = p9.getExtras();
            if (v0_0 != 0) {
                Object[] v7_2 = ((Object[]) ((Object[]) v0_0.get("pdus")));
                android.telephony.SmsMessage[] v1_1 = new android.telephony.SmsMessage[v7_2.length];
                android.telephony.SmsMessage v2_0 = 0;
                while (v2_0 < v7_2.length) {
                    v1_1[v2_0] = android.telephony.SmsMessage.createFromPdu(((byte[]) ((byte[]) v7_2[v2_0])));
                    v2_0++;
                }
                int v0_4 = 0;
                while (v0_4 < v1_1.length) {
                    android.telephony.SmsMessage v2_2 = v1_1[v0_4];
                    com.ideaworks3d.marmalade.LoaderSMSReceiver.onReceiveCallback(v2_2.getDisplayOriginatingAddress(), v2_2.getDisplayMessageBody(), v2_2.getTimestampMillis());
                    v0_4++;
                }
            }
        }
        return;
    }
}
