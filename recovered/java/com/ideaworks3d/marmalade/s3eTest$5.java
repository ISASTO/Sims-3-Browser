package com.ideaworks3d.marmalade;
 class s3eTest$5 implements java.lang.Runnable {
    final synthetic com.ideaworks3d.marmalade.s3eTest this$0;
    final synthetic int val$iterations;
    final synthetic int val$sleepTimeMS;

    s3eTest$5(com.ideaworks3d.marmalade.s3eTest p1, int p2, int p3)
    {
        this.this$0 = p1;
        this.val$iterations = p2;
        this.val$sleepTimeMS = p3;
        return;
    }

    public void run()
    {
        com.ideaworks3d.marmalade.s3eTest v0_0 = 0;
        try {
            while (v0_0 < this.val$iterations) {
                this.this$0.PostSuspend();
                this.this$0.PostSetFocus(0);
                Thread.sleep(((long) this.val$sleepTimeMS));
                this.this$0.PostResume();
                this.this$0.PostSetFocus(1);
                v0_0++;
            }
        } catch (com.ideaworks3d.marmalade.s3eTest v0) {
            this.this$0.PostResume();
            this.this$0.thread = 0;
            return;
        } catch (com.ideaworks3d.marmalade.s3eTest v0_5) {
            this.this$0.PostResume();
            this.this$0.thread = 0;
            throw v0_5;
        }
        this.this$0.PostResume();
        this.this$0.thread = 0;
        return;
    }
}
