package com.ideaworks3d.marmalade;
 class LoaderThread$MulticastLockFacade {
    private Object m_multiCastLockReal;
    final synthetic com.ideaworks3d.marmalade.LoaderThread this$0;

    public LoaderThread$MulticastLockFacade(com.ideaworks3d.marmalade.LoaderThread p6, android.net.wifi.WifiManager p7)
    {
        this.this$0 = p6;
        this.m_multiCastLockReal = 0;
        try {
            Exception v0_4 = p7.getClass();
            int v2_2 = new Class[1];
            v2_2[0] = String;
            Exception v0_0 = v0_4.getMethod("createMulticastLock", v2_2);
            Object[] v1_1 = new Object[1];
            v1_1[0] = "Marmalade";
            this.m_multiCastLockReal = 億.invokeHook(v0_0, p7, v1_1);
            return;
        } catch (Exception v0_3) {
            throw v0_3;
        }
    }

    public void acquire()
    {
        if (this.m_multiCastLockReal != null) {
            try {
                億.invokeHook(this.m_multiCastLockReal.getClass().getMethod("acquire", ((Class[]) 0)), this.m_multiCastLockReal, ((Object[]) 0));
            } catch (Exception v0) {
            }
        }
        return;
    }

    public boolean isHeld()
    {
        int v0_2;
        if (this.m_multiCastLockReal == null) {
            v0_2 = 0;
        } else {
            try {
                v0_2 = ((Boolean) 億.invokeHook(this.m_multiCastLockReal.getClass().getMethod("isHeld", ((Class[]) 0)), this.m_multiCastLockReal, ((Object[]) 0))).booleanValue();
            } catch (int v0) {
                v0_2 = 0;
            }
        }
        return v0_2;
    }

    public void release()
    {
        if (this.m_multiCastLockReal != null) {
            try {
                億.invokeHook(this.m_multiCastLockReal.getClass().getMethod("release", ((Class[]) 0)), this.m_multiCastLockReal, ((Object[]) 0));
            } catch (Exception v0) {
            }
        }
        return;
    }
}
