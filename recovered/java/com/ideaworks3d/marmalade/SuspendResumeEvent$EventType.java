package com.ideaworks3d.marmalade;
public final enum class SuspendResumeEvent$EventType extends java.lang.Enum {
    private static final synthetic com.ideaworks3d.marmalade.SuspendResumeEvent$EventType[] $VALUES;
    public static final enum com.ideaworks3d.marmalade.SuspendResumeEvent$EventType RESUME;
    public static final enum com.ideaworks3d.marmalade.SuspendResumeEvent$EventType SHUTDOWN;
    public static final enum com.ideaworks3d.marmalade.SuspendResumeEvent$EventType SUSPEND;

    static SuspendResumeEvent$EventType()
    {
        com.ideaworks3d.marmalade.SuspendResumeEvent$EventType.SUSPEND = new com.ideaworks3d.marmalade.SuspendResumeEvent$EventType("SUSPEND", 0);
        com.ideaworks3d.marmalade.SuspendResumeEvent$EventType.RESUME = new com.ideaworks3d.marmalade.SuspendResumeEvent$EventType("RESUME", 1);
        com.ideaworks3d.marmalade.SuspendResumeEvent$EventType.SHUTDOWN = new com.ideaworks3d.marmalade.SuspendResumeEvent$EventType("SHUTDOWN", 2);
        com.ideaworks3d.marmalade.SuspendResumeEvent$EventType[] v0_3 = new com.ideaworks3d.marmalade.SuspendResumeEvent$EventType[3];
        v0_3[0] = com.ideaworks3d.marmalade.SuspendResumeEvent$EventType.SUSPEND;
        v0_3[1] = com.ideaworks3d.marmalade.SuspendResumeEvent$EventType.RESUME;
        v0_3[2] = com.ideaworks3d.marmalade.SuspendResumeEvent$EventType.SHUTDOWN;
        com.ideaworks3d.marmalade.SuspendResumeEvent$EventType.$VALUES = v0_3;
        return;
    }

    private SuspendResumeEvent$EventType(String p1, int p2)
    {
        super(p1, p2);
        return;
    }

    public static com.ideaworks3d.marmalade.SuspendResumeEvent$EventType valueOf(String p1)
    {
        return ((com.ideaworks3d.marmalade.SuspendResumeEvent$EventType) Enum.valueOf(com.ideaworks3d.marmalade.SuspendResumeEvent$EventType, p1));
    }

    public static com.ideaworks3d.marmalade.SuspendResumeEvent$EventType[] values()
    {
        return ((com.ideaworks3d.marmalade.SuspendResumeEvent$EventType[]) com.ideaworks3d.marmalade.SuspendResumeEvent$EventType.$VALUES.clone());
    }
}
