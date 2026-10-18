package com.ideaworks3d.marmalade;
public class LoaderAPI {
    public static final int S3E_RESULT_ERROR = 1;
    public static final int S3E_RESULT_SUCCESS;
    private static java.util.Stack m_KeyListeners;
    private static java.util.List m_Listeners;

    static LoaderAPI()
    {
        com.ideaworks3d.marmalade.LoaderAPI.m_Listeners = new java.util.ArrayList();
        com.ideaworks3d.marmalade.LoaderAPI.m_KeyListeners = new java.util.Stack();
        return;
    }

    public LoaderAPI()
    {
        return;
    }

    public static void addSuspendResumeListener(com.ideaworks3d.marmalade.SuspendResumeListener p1)
    {
        if (!com.ideaworks3d.marmalade.LoaderAPI.m_Listeners.contains(p1)) {
            com.ideaworks3d.marmalade.LoaderAPI.m_Listeners.add(p1);
        }
        return;
    }

    public static com.ideaworks3d.marmalade.LoaderActivity getActivity()
    {
        return com.ideaworks3d.marmalade.LoaderActivity.m_Activity;
    }

    public static android.widget.FrameLayout getFrameLayout()
    {
        return com.ideaworks3d.marmalade.LoaderActivity.m_Activity.m_FrameLayout;
    }

    public static android.view.View getMainView()
    {
        return com.ideaworks3d.marmalade.LoaderActivity.m_Activity.m_View;
    }

    public static String getStackTrace()
    {
        try {
            throw new Exception("Tracer");
        } catch (String v0_3) {
            java.io.StringWriter v1_2 = new java.io.StringWriter();
            v0_3.printStackTrace(new java.io.PrintWriter(v1_2));
            return v1_2.toString();
        }
    }

    public static String getStackTrace(Throwable p2)
    {
        String v0_1 = new java.io.StringWriter();
        p2.printStackTrace(new java.io.PrintWriter(v0_1));
        return v0_1.toString();
    }

    public static void notifySuspendResumeListeners(com.ideaworks3d.marmalade.SuspendResumeEvent p2)
    {
        java.util.Iterator v1 = com.ideaworks3d.marmalade.LoaderAPI.m_Listeners.iterator();
        while (v1.hasNext()) {
            ((com.ideaworks3d.marmalade.SuspendResumeListener) v1.next()).onSuspendResumeEvent(p2);
        }
        return;
    }

    public static android.view.View$OnKeyListener popKeyListener()
    {
        android.view.View$OnKeyListener v0_2 = ((android.view.View$OnKeyListener) com.ideaworks3d.marmalade.LoaderAPI.m_KeyListeners.pop());
        com.ideaworks3d.marmalade.LoaderAPI.getMainView().setOnKeyListener(v0_2);
        return v0_2;
    }

    public static void pushKeyListener(android.view.View$OnKeyListener p1)
    {
        com.ideaworks3d.marmalade.LoaderAPI.m_KeyListeners.push(p1);
        com.ideaworks3d.marmalade.LoaderAPI.getMainView().setOnKeyListener(p1);
        return;
    }

    public static boolean removeSuspendResumeListener(com.ideaworks3d.marmalade.SuspendResumeListener p1)
    {
        return com.ideaworks3d.marmalade.LoaderAPI.m_Listeners.remove(p1);
    }

    public static native int s3eConfigGet(String p0, int p1);

    public static native int s3eConfigGetInt(String p0, String p1, int[] p2);

    public static native int s3eConfigGetString(String p0, String p1, String[] p2);

    public static native void s3eDebugTraceLine(String p0);

    public static native void s3eDeviceYield(int p0);

    public static void trace(String p1)
    {
        if (com.ideaworks3d.marmalade.LoaderActivity.m_Activity == null) {
            android.util.Log.i("MARMALADE", p1);
        } else {
            com.ideaworks3d.marmalade.LoaderAPI.s3eDebugTraceLine(p1);
        }
        return;
    }

    public static void traceChan(String p2, String p3)
    {
        com.ideaworks3d.marmalade.LoaderAPI.trace(new StringBuilder().append(p2).append(": ").append(p3).toString());
        return;
    }
}
