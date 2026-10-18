package com.ideaworks3d.marmalade;
 class LoaderActivity$2 implements java.lang.Runnable {
    final synthetic com.ideaworks3d.marmalade.LoaderActivity this$0;
    final synthetic com.ideaworks3d.marmalade.LoaderActivity$CursorCompleteListener val$completeCallback;
    final synthetic String[] val$proj;
    final synthetic android.net.Uri val$uri;

    LoaderActivity$2(com.ideaworks3d.marmalade.LoaderActivity p1, android.net.Uri p2, String[] p3, com.ideaworks3d.marmalade.LoaderActivity$CursorCompleteListener p4)
    {
        this.this$0 = p1;
        this.val$uri = p2;
        this.val$proj = p3;
        this.val$completeCallback = p4;
        return;
    }

    public void run()
    {
        if (Integer.parseInt(android.os.Build$VERSION.SDK) < 11) {
            this.val$completeCallback.cursorLoadComplete(this.this$0.managedQuery(this.val$uri, this.val$proj, 0, 0, 0));
        } else {
            com.ideaworks3d.marmalade.CursorLoaderHelper.getCursor(this.val$uri, this.val$proj, this.val$completeCallback);
        }
        return;
    }
}
