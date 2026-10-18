package com.ideaworks3d.marmalade;
public class s3eTest {
    private android.os.Handler m_Handler;
    Thread thread;

    public s3eTest()
    {
        com.ideaworks3d.marmalade.LoaderActivity.m_Activity.LoaderThread().runOnOSThread(new com.ideaworks3d.marmalade.s3eTest$1(this));
        return;
    }

    static synthetic android.os.Handler access$002(com.ideaworks3d.marmalade.s3eTest p0, android.os.Handler p1)
    {
        p0.m_Handler = p1;
        return p1;
    }

    public void PostResume()
    {
        com.ideaworks3d.marmalade.LoaderAPI.trace("PostResume");
        this.m_Handler.post(new com.ideaworks3d.marmalade.s3eTest$3(this));
        return;
    }

    public void PostRotate(int p3, int p4)
    {
        com.ideaworks3d.marmalade.LoaderAPI.trace("PostRotate");
        this.m_Handler.post(new com.ideaworks3d.marmalade.s3eTest$6(this, p3, p4));
        return;
    }

    public void PostSetFocus(boolean p3)
    {
        com.ideaworks3d.marmalade.LoaderAPI.trace("PostSetFocus");
        this.m_Handler.post(new com.ideaworks3d.marmalade.s3eTest$4(this, p3));
        return;
    }

    public void PostSuspend()
    {
        com.ideaworks3d.marmalade.LoaderAPI.trace("PostSuspend");
        this.m_Handler.post(new com.ideaworks3d.marmalade.s3eTest$2(this));
        return;
    }

    public void PostSuspendResume(int p3, int p4)
    {
        this.thread = new Thread(new com.ideaworks3d.marmalade.s3eTest$5(this, p4, p3));
        this.thread.start();
        return;
    }

    public boolean QueryThreadFinished()
    {
        int v0_1;
        if (this.thread != null) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public int[] TakeScreenShot(int[] p11)
    {
        com.ideaworks3d.marmalade.LoaderAPI.trace("TakeScreenShot");
        android.view.View v8 = com.ideaworks3d.marmalade.LoaderAPI.getActivity().getWindow().getDecorView().findViewById(16908290);
        v8.setDrawingCacheEnabled(1);
        android.graphics.Bitmap v0_1 = android.graphics.Bitmap.createBitmap(v8.getDrawingCache());
        int v3 = v0_1.getWidth();
        int v7 = v0_1.getHeight();
        int[] v1_2 = new int[(v3 * v7)];
        v0_1.getPixels(v1_2, 0, v3, 0, 0, v3, v7);
        p11[0] = v3;
        p11[1] = v7;
        v8.setDrawingCacheEnabled(0);
        return v1_2;
    }
}
