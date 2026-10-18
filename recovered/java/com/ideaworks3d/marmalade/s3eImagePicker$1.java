package com.ideaworks3d.marmalade;
 class s3eImagePicker$1 implements com.ideaworks3d.marmalade.LoaderActivity$CursorCompleteListener {
    final synthetic com.ideaworks3d.marmalade.s3eImagePicker this$0;
    final synthetic java.io.File[] val$file;
    final synthetic android.net.Uri val$uri;

    s3eImagePicker$1(com.ideaworks3d.marmalade.s3eImagePicker p1, java.io.File[] p2, android.net.Uri p3)
    {
        this.this$0 = p1;
        this.val$file = p2;
        this.val$uri = p3;
        return;
    }

    public void cursorLoadComplete(android.database.Cursor p5)
    {
        try {
            com.ideaworks3d.marmalade.s3eImagePicker v0_3 = p5.getColumnIndexOrThrow("_data");
        } catch (com.ideaworks3d.marmalade.s3eImagePicker v0) {
            try {
                v0_3 = p5.getColumnIndexOrThrow("_data");
            } catch (com.ideaworks3d.marmalade.s3eImagePicker v0) {
                try {
                    this.val$file[0] = new java.io.File(this.val$uri.getPath());
                    com.ideaworks3d.marmalade.s3eImagePicker.access$002(this.this$0, 0);
                } catch (com.ideaworks3d.marmalade.s3eImagePicker v0) {
                    com.ideaworks3d.marmalade.s3eImagePicker.access$002(this.this$0, 0);
                }
                return;
            }
        } catch (com.ideaworks3d.marmalade.s3eImagePicker v0) {
            return;
        }
        if (!p5.moveToFirst()) {
            return;
        } else {
            this.val$file[0] = new java.io.File(p5.getString(v0_3));
            com.ideaworks3d.marmalade.s3eImagePicker.access$002(this.this$0, 0);
            return;
        }
    }
}
