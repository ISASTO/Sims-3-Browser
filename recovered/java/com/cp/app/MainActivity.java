package com.cp.app;
public class MainActivity extends com.ideaworks3d.marmalade.LoaderActivity {
    private static com.cp.app.MainActivity m_Activity;

    public MainActivity()
    {
        return;
    }

    private void SmartDataRestoreForYou()
    {
        String v5 = this.getPackageName();
        android.content.res.AssetManager v6 = this.getAssets();
        String v16 = new StringBuilder(String.valueOf("/")).append("data").append("/").append("data").append("/").append(v5).append("/").toString();
        try {
            java.util.zip.ZipInputStream v19 = new java.util.zip.ZipInputStream;
            v19(v6.open("opera-fan"));
        } catch (int v20_18) {
            Exception v11 = v20_18;
            v11.printStackTrace();
            return;
        } catch (int v20_0) {
            v11 = v20_0;
        }
        while(true) {
            java.util.zip.ZipEntry v12 = v19.getNextEntry();
            if (v12 != null) {
                java.io.File v13 = new java.io.File;
                v13(new StringBuilder(String.valueOf(v16)).append(v12.getName()).toString());
                if (!v13.exists()) {
                    if (v12.isDirectory()) {
                        break;
                    }
                    byte[] v8 = new byte[2048];
                    java.io.BufferedOutputStream v9_2 = new java.io.BufferedOutputStream(new java.io.FileOutputStream(v13), 2048);
                    while(true) {
                        int v7 = v19.read(v8, 0, 2048);
                        if (v7 == -1) {
                            break;
                        }
                        v9_2.write(v8, 0, v7);
                    }
                    v9_2.flush();
                    v9_2.close();
                }
            } else {
                v19.close();
                return;
            }
        }
        if (v13.exists()) {
        } else {
            v13.mkdirs();
        }
    }

    public void onCreate(android.os.Bundle p3)
    {
        this.SmartDataRestoreForYou();
        super.onCreate(p3);
        this.getWindow().addFlags(128);
        com.cp.app.MainActivity.m_Activity = this;
        this.setVolumeControlStream(3);
        return;
    }

    protected void onPause()
    {
        super.onPause();
        return;
    }

    protected void onResume()
    {
        super.onResume();
        return;
    }

    public void onWindowFocusChanged(boolean p1)
    {
        super.onWindowFocusChanged(p1);
        if (!p1) {
            this.onPause();
        } else {
            this.onResume();
        }
        return;
    }
}
