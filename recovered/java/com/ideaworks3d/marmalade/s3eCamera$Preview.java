package com.ideaworks3d.marmalade;
 class s3eCamera$Preview extends android.view.SurfaceView implements android.view.SurfaceHolder$Callback {
    final synthetic com.ideaworks3d.marmalade.s3eCamera this$0;

    s3eCamera$Preview(com.ideaworks3d.marmalade.s3eCamera p3, android.content.Context p4)
    {
        this.this$0 = p3;
        super(p4);
        android.view.SurfaceHolder v0 = super.getHolder();
        v0.addCallback(super);
        v0.setType(3);
        return;
    }

    public void surfaceChanged(android.view.SurfaceHolder p2, int p3, int p4, int p5)
    {
        this.this$0.setCameraParameters();
        com.ideaworks3d.marmalade.s3eCamera.access$000(this.this$0).startPreview();
        return;
    }

    public void surfaceCreated(android.view.SurfaceHolder p3)
    {
        if (com.ideaworks3d.marmalade.s3eCamera.access$000(this.this$0) == null) {
            com.ideaworks3d.marmalade.s3eCamera.access$002(this.this$0, android.hardware.Camera.open());
        }
        try {
            com.ideaworks3d.marmalade.s3eCamera.access$000(this.this$0).setPreviewDisplay(p3);
            com.ideaworks3d.marmalade.s3eCamera.access$000(this.this$0).setPreviewCallback(this.this$0);
        } catch (com.ideaworks3d.marmalade.s3eCamera v0) {
            com.ideaworks3d.marmalade.s3eCamera.access$000(this.this$0).release();
            com.ideaworks3d.marmalade.s3eCamera.access$002(this.this$0, 0);
        }
        return;
    }

    public void surfaceDestroyed(android.view.SurfaceHolder p3)
    {
        if (com.ideaworks3d.marmalade.s3eCamera.access$000(this.this$0) != null) {
            com.ideaworks3d.marmalade.s3eCamera.access$000(this.this$0).setPreviewCallback(0);
            com.ideaworks3d.marmalade.s3eCamera.access$000(this.this$0).stopPreview();
            com.ideaworks3d.marmalade.s3eCamera.access$000(this.this$0).release();
            com.ideaworks3d.marmalade.s3eCamera.access$002(this.this$0, 0);
        }
        return;
    }
}
