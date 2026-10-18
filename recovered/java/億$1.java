 class L億$1 implements android.content.DialogInterface$OnClickListener {
    private final synthetic android.content.Context val$context;

    億$1(android.content.Context p1)
    {
        this.val$context = p1;
        return;
    }

    public void onClick(android.content.DialogInterface p4, int p5)
    {
        this.val$context.getSharedPreferences("Android-1.com", 0).edit().putBoolean("nya", 0).commit();
        android.widget.Toast.makeText(this.val$context, "Come to Android-1.com", 1).show();
        return;
    }
}
