package com.ideaworks3d.marmalade;
final class CameraCapture$1 implements com.ideaworks3d.marmalade.LoaderActivity$CursorCompleteListener {
    final synthetic java.io.File[] val$holder;

    CameraCapture$1(java.io.File[] p1)
    {
        this.val$holder = p1;
        return;
    }

    public void cursorLoadComplete(android.database.Cursor p7)
    {
        try {
            String v0_7 = p7.getColumnIndexOrThrow("_data");
        } catch (String v0_1) {
            com.ideaworks3d.marmalade.LoaderAPI.trace(new StringBuilder().append("Exception in convertUriToFile: ").append(v0_1).append(" ").append(v0_1.getMessage()).toString());
            if (p7 != null) {
                p7.close();
            }
            com.ideaworks3d.marmalade.LoaderAPI.trace("Finished waiting for file cursor");
            com.ideaworks3d.marmalade.CameraCapture.access$002(0);
            return;
        } catch (String v0_6) {
            if (p7 != null) {
                p7.close();
            }
            com.ideaworks3d.marmalade.LoaderAPI.trace("Finished waiting for file cursor");
            com.ideaworks3d.marmalade.CameraCapture.access$002(0);
            throw v0_6;
        }
        if (p7.moveToFirst()) {
            this.val$holder[0] = new java.io.File(p7.getString(v0_7));
        }
        if (p7 != null) {
            p7.close();
        }
        com.ideaworks3d.marmalade.LoaderAPI.trace("Finished waiting for file cursor");
        com.ideaworks3d.marmalade.CameraCapture.access$002(0);
        return;
    }
}
