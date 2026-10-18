package com.ideaworks3d.marmalade;
final class CursorLoaderHelper$1 implements android.content.Loader$OnLoadCompleteListener {
    final synthetic com.ideaworks3d.marmalade.LoaderActivity$CursorCompleteListener val$completeCallback;

    CursorLoaderHelper$1(com.ideaworks3d.marmalade.LoaderActivity$CursorCompleteListener p1)
    {
        this.val$completeCallback = p1;
        return;
    }

    public void onLoadComplete(android.content.Loader p2, android.database.Cursor p3)
    {
        com.ideaworks3d.marmalade.LoaderAPI.trace("CursorLoader onLoadComplete");
        this.val$completeCallback.cursorLoadComplete(p3);
        return;
    }

    public bridge synthetic void onLoadComplete(android.content.Loader p1, Object p2)
    {
        this.onLoadComplete(p1, ((android.database.Cursor) p2));
        return;
    }
}
