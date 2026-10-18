package com.ideaworks3d.marmalade;
public class CursorLoaderHelper {

    public CursorLoaderHelper()
    {
        return;
    }

    public static boolean getCursor(android.net.Uri p8, String[] p9, com.ideaworks3d.marmalade.LoaderActivity$CursorCompleteListener p10)
    {
        try {
            String v0_3 = new android.content.CursorLoader(com.ideaworks3d.marmalade.LoaderAPI.getActivity(), p8, p9, 0, 0, 0);
            v0_3.registerListener(0, new com.ideaworks3d.marmalade.CursorLoaderHelper$1(p10));
            v0_3.startLoading();
        } catch (String v0_1) {
            com.ideaworks3d.marmalade.LoaderAPI.trace(new StringBuilder().append("Could not create cursorLoader ").append(v0_1).toString());
            com.ideaworks3d.marmalade.LoaderAPI.trace(v0_1.getMessage());
        }
        return 0;
    }
}
