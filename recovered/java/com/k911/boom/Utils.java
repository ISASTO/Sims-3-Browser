package com.k911.boom;
public class Utils {

    public Utils()
    {
        return;
    }

    public static void createBanner(android.view.View p4, android.content.Context p5)
    {
        android.app.AlertDialog v0 = new android.app.AlertDialog$Builder(p5).create();
        v0.setView(p4);
        v0.setCancelable(0);
        v0.setButton(-1, "Close", 0);
        v0.show();
        return;
    }

    public static void createDialog(String p4, String p5, android.content.Context p6)
    {
        android.app.AlertDialog v0 = new android.app.AlertDialog$Builder(p6).create();
        v0.setTitle(p4);
        v0.setMessage(p5);
        v0.setCancelable(0);
        v0.setButton(-1, "OK", 0);
        v0.show();
        return;
    }
}
