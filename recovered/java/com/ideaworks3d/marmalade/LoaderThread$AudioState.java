package com.ideaworks3d.marmalade;
final enum class LoaderThread$AudioState extends java.lang.Enum {
    private static final synthetic com.ideaworks3d.marmalade.LoaderThread$AudioState[] $VALUES;
    public static final enum com.ideaworks3d.marmalade.LoaderThread$AudioState Error;
    public static final enum com.ideaworks3d.marmalade.LoaderThread$AudioState Idle;
    public static final enum com.ideaworks3d.marmalade.LoaderThread$AudioState Initialized;
    public static final enum com.ideaworks3d.marmalade.LoaderThread$AudioState None;
    public static final enum com.ideaworks3d.marmalade.LoaderThread$AudioState Paused;
    public static final enum com.ideaworks3d.marmalade.LoaderThread$AudioState PlaybackCompleted;
    public static final enum com.ideaworks3d.marmalade.LoaderThread$AudioState Prepared;
    public static final enum com.ideaworks3d.marmalade.LoaderThread$AudioState Started;
    public static final enum com.ideaworks3d.marmalade.LoaderThread$AudioState Stopped;

    static LoaderThread$AudioState()
    {
        com.ideaworks3d.marmalade.LoaderThread$AudioState.None = new com.ideaworks3d.marmalade.LoaderThread$AudioState("None", 0);
        com.ideaworks3d.marmalade.LoaderThread$AudioState.Idle = new com.ideaworks3d.marmalade.LoaderThread$AudioState("Idle", 1);
        com.ideaworks3d.marmalade.LoaderThread$AudioState.Initialized = new com.ideaworks3d.marmalade.LoaderThread$AudioState("Initialized", 2);
        com.ideaworks3d.marmalade.LoaderThread$AudioState.Stopped = new com.ideaworks3d.marmalade.LoaderThread$AudioState("Stopped", 3);
        com.ideaworks3d.marmalade.LoaderThread$AudioState.Prepared = new com.ideaworks3d.marmalade.LoaderThread$AudioState("Prepared", 4);
        com.ideaworks3d.marmalade.LoaderThread$AudioState.Started = new com.ideaworks3d.marmalade.LoaderThread$AudioState("Started", 5);
        com.ideaworks3d.marmalade.LoaderThread$AudioState.Paused = new com.ideaworks3d.marmalade.LoaderThread$AudioState("Paused", 6);
        com.ideaworks3d.marmalade.LoaderThread$AudioState.PlaybackCompleted = new com.ideaworks3d.marmalade.LoaderThread$AudioState("PlaybackCompleted", 7);
        com.ideaworks3d.marmalade.LoaderThread$AudioState.Error = new com.ideaworks3d.marmalade.LoaderThread$AudioState("Error", 8);
        com.ideaworks3d.marmalade.LoaderThread$AudioState[] v0_16 = new com.ideaworks3d.marmalade.LoaderThread$AudioState[9];
        v0_16[0] = com.ideaworks3d.marmalade.LoaderThread$AudioState.None;
        v0_16[1] = com.ideaworks3d.marmalade.LoaderThread$AudioState.Idle;
        v0_16[2] = com.ideaworks3d.marmalade.LoaderThread$AudioState.Initialized;
        v0_16[3] = com.ideaworks3d.marmalade.LoaderThread$AudioState.Stopped;
        v0_16[4] = com.ideaworks3d.marmalade.LoaderThread$AudioState.Prepared;
        v0_16[5] = com.ideaworks3d.marmalade.LoaderThread$AudioState.Started;
        v0_16[6] = com.ideaworks3d.marmalade.LoaderThread$AudioState.Paused;
        v0_16[7] = com.ideaworks3d.marmalade.LoaderThread$AudioState.PlaybackCompleted;
        v0_16[8] = com.ideaworks3d.marmalade.LoaderThread$AudioState.Error;
        com.ideaworks3d.marmalade.LoaderThread$AudioState.$VALUES = v0_16;
        return;
    }

    private LoaderThread$AudioState(String p1, int p2)
    {
        super(p1, p2);
        return;
    }

    public static com.ideaworks3d.marmalade.LoaderThread$AudioState valueOf(String p1)
    {
        return ((com.ideaworks3d.marmalade.LoaderThread$AudioState) Enum.valueOf(com.ideaworks3d.marmalade.LoaderThread$AudioState, p1));
    }

    public static com.ideaworks3d.marmalade.LoaderThread$AudioState[] values()
    {
        return ((com.ideaworks3d.marmalade.LoaderThread$AudioState[]) com.ideaworks3d.marmalade.LoaderThread$AudioState.$VALUES.clone());
    }
}
