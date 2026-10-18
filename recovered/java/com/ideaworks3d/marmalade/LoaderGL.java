package com.ideaworks3d.marmalade;
 class LoaderGL {
    private static final int EGL_CONTEXT_CLIENT_VERSION = 12440;
    private static final int EGL_DEPTH_ENCODING_NV = 12514;
    private boolean m_DoneInit;
    javax.microedition.khronos.egl.EGL10 m_Egl;
    javax.microedition.khronos.egl.EGLConfig[] m_EglConfigs;
    javax.microedition.khronos.egl.EGLContext m_EglContext;
    javax.microedition.khronos.egl.EGLDisplay m_EglDisplay;
    javax.microedition.khronos.egl.EGLSurface m_EglSurface;
    private int m_GLVersion;
    private boolean m_Started;

    LoaderGL()
    {
        return;
    }

    private static int CopySettingsWithValues(com.ideaworks3d.marmalade.LoaderGL$ConfigSetting[] p6, int[] p7)
    {
        int v1 = 0;
        int v0 = p6.length;
        int v2 = 0;
        while (v1 < v0) {
            int v3_1 = p6[v1];
            if (v3_1.HasValue()) {
                p7[(v2 * 2)] = v3_1.GetSetting();
                p7[((v2 * 2) + 1)] = v3_1.GetValue();
                v2++;
            }
            v1++;
        }
        return v2;
    }

    private static int CountSettingsWithValue(com.ideaworks3d.marmalade.LoaderGL$ConfigSetting[] p4)
    {
        int v1 = 0;
        int v2 = 0;
        while (v1 < p4.length) {
            if (p4[v1].HasValue()) {
                v2++;
            }
            v1++;
        }
        return v2;
    }

    private int[] CreateSpecFromSettings(com.ideaworks3d.marmalade.LoaderGL$ConfigSetting[] p5)
    {
        int[] v0_0 = com.ideaworks3d.marmalade.LoaderGL.CountSettingsWithValue(p5);
        if (this.m_GLVersion == 2) {
            v0_0++;
        }
        int[] v0_3 = new int[((v0_0 * 2) + 1)];
        int v1_0 = com.ideaworks3d.marmalade.LoaderGL.CopySettingsWithValues(p5, v0_3);
        if (this.m_GLVersion == 2) {
            v0_3[(v1_0 * 2)] = 12352;
            v0_3[((v1_0 * 2) + 1)] = 4;
            v1_0++;
        }
        v0_3[(v1_0 * 2)] = 12344;
        return v0_3;
    }

    private void chooseConfigs()
    {
        javax.microedition.khronos.egl.EGL10 v6_6 = new com.ideaworks3d.marmalade.LoaderGL$ConfigSetting[11];
        v6_6[0] = new com.ideaworks3d.marmalade.LoaderGL$ConfigSetting(this, "EGL_BUFFER_SIZE", 12320);
        v6_6[1] = new com.ideaworks3d.marmalade.LoaderGL$ConfigSetting(this, "EGL_DEPTH_ENCODING_NV", 12514);
        v6_6[2] = new com.ideaworks3d.marmalade.LoaderGL$ConfigSetting(this, "EGL_DEPTH_SIZE", 12325);
        v6_6[3] = new com.ideaworks3d.marmalade.LoaderGL$ConfigSetting(this, "EGL_SURFACE_TYPE", 12339);
        v6_6[4] = new com.ideaworks3d.marmalade.LoaderGL$ConfigSetting(this, "EGL_RED_SIZE", 12324);
        v6_6[5] = new com.ideaworks3d.marmalade.LoaderGL$ConfigSetting(this, "EGL_GREEN_SIZE", 12323);
        v6_6[6] = new com.ideaworks3d.marmalade.LoaderGL$ConfigSetting(this, "EGL_BLUE_SIZE", 12322);
        v6_6[7] = new com.ideaworks3d.marmalade.LoaderGL$ConfigSetting(this, "EGL_ALPHA_SIZE", 12321);
        v6_6[8] = new com.ideaworks3d.marmalade.LoaderGL$ConfigSetting(this, "EGL_STENCIL_SIZE", 12326);
        v6_6[9] = new com.ideaworks3d.marmalade.LoaderGL$ConfigSetting(this, "EGL_SAMPLE_BUFFERS", 12338);
        v6_6[10] = new com.ideaworks3d.marmalade.LoaderGL$ConfigSetting(this, "EGL_SAMPLES", 12337);
        com.ideaworks3d.marmalade.LoaderGL v5_8 = new int[1];
        int v7_7 = 0;
        while(true) {
            int[] v2_10 = this.CreateSpecFromSettings(v6_6);
            this.m_Egl.eglChooseConfig(this.m_EglDisplay, v2_10, 0, 0, v5_8);
            if (v5_8[0] == null) {
                if (v7_7 >= v6_6.length) {
                    break;
                }
                v6_6[v7_7].SetValueToDefault();
                v7_7++;
            } else {
                int v10_7 = v5_8[0];
                RuntimeException v0_21 = new javax.microedition.khronos.egl.EGLConfig[v10_7];
                this.m_EglConfigs = v0_21;
                this.m_Egl.eglChooseConfig(this.m_EglDisplay, v2_10, this.m_EglConfigs, v10_7, v5_8);
                javax.microedition.khronos.egl.EGLConfig v8_1 = this.m_EglConfigs[0];
                this.findConfigAttrib(this.m_Egl, this.m_EglDisplay, v8_1, 12324, 0);
                this.findConfigAttrib(this.m_Egl, this.m_EglDisplay, v8_1, 12323, 0);
                this.findConfigAttrib(this.m_Egl, this.m_EglDisplay, v8_1, 12322, 0);
                this.findConfigAttrib(this.m_Egl, this.m_EglDisplay, v8_1, 12321, 0);
                this.findConfigAttrib(this.m_Egl, this.m_EglDisplay, v8_1, 12325, 0);
                this.findConfigAttrib(this.m_Egl, this.m_EglDisplay, v8_1, 12352, 0);
                this.findConfigAttrib(this.m_Egl, this.m_EglDisplay, v8_1, 12327, 12344);
                return;
            }
        }
        throw new RuntimeException("Failed to choose an EGL config");
    }

    private int findConfigAttrib(javax.microedition.khronos.egl.EGL10 p3, javax.microedition.khronos.egl.EGLDisplay p4, javax.microedition.khronos.egl.EGLConfig p5, int p6, int p7)
    {
        int v0_2;
        int v0_1 = new int[1];
        if (!p3.eglGetConfigAttrib(p4, p5, p6, v0_1)) {
            v0_2 = p7;
        } else {
            v0_2 = v0_1[0];
        }
        return v0_2;
    }

    private void stop()
    {
        this.m_Started = 0;
        if (this.m_EglSurface != null) {
            this.m_Egl.eglMakeCurrent(this.m_EglDisplay, javax.microedition.khronos.egl.EGL10.EGL_NO_SURFACE, javax.microedition.khronos.egl.EGL10.EGL_NO_SURFACE, javax.microedition.khronos.egl.EGL10.EGL_NO_CONTEXT);
            this.m_Egl.eglDestroySurface(this.m_EglDisplay, this.m_EglSurface);
            this.m_EglSurface = 0;
        }
        return;
    }

    public void init()
    {
        this.m_Egl = ((javax.microedition.khronos.egl.EGL10) javax.microedition.khronos.egl.EGLContext.getEGL());
        this.m_EglDisplay = this.m_Egl.eglGetDisplay(javax.microedition.khronos.egl.EGL10.EGL_DEFAULT_DISPLAY);
        javax.microedition.khronos.egl.EGLContext v0_1 = new int[2];
        this.m_Egl.eglInitialize(this.m_EglDisplay, v0_1);
        this.chooseConfigs();
        javax.microedition.khronos.egl.EGLContext v0_2 = 0;
        if (this.m_GLVersion == 2) {
            v0_2 = new int[3];
            v0_2[0] = 12440;
            v0_2[1] = this.m_GLVersion;
            v0_2[2] = 12344;
        }
        this.m_EglContext = this.m_Egl.eglCreateContext(this.m_EglDisplay, this.m_EglConfigs[0], javax.microedition.khronos.egl.EGL10.EGL_NO_CONTEXT, v0_2);
        this.m_DoneInit = 1;
        return;
    }

    public javax.microedition.khronos.opengles.GL restartGL(android.view.SurfaceHolder p2)
    {
        this.stop();
        return this.startGL(p2, this.m_GLVersion);
    }

    public javax.microedition.khronos.opengles.GL startGL(android.view.SurfaceHolder p6, int p7)
    {
        if (p7 != 0) {
            this.m_GLVersion = p7;
        }
        if (!this.m_DoneInit) {
            this.init();
        }
        this.m_EglSurface = this.m_Egl.eglCreateWindowSurface(this.m_EglDisplay, this.m_EglConfigs[0], p6, 0);
        this.m_Egl.eglMakeCurrent(this.m_EglDisplay, this.m_EglSurface, this.m_EglSurface, this.m_EglContext);
        this.m_Started = 1;
        return this.m_EglContext.getGL();
    }

    public boolean started()
    {
        return this.m_Started;
    }

    public void stopGL()
    {
        this.stop();
        this.term();
        return;
    }

    public void swap()
    {
        this.m_Egl.eglSwapBuffers(this.m_EglDisplay, this.m_EglSurface);
        return;
    }

    public void term()
    {
        if (this.m_EglContext != null) {
            this.m_Egl.eglDestroyContext(this.m_EglDisplay, this.m_EglContext);
            this.m_EglContext = 0;
        }
        if (this.m_EglDisplay != null) {
            this.m_Egl.eglTerminate(this.m_EglDisplay);
            this.m_EglDisplay = 0;
        }
        this.m_DoneInit = 0;
        return;
    }
}
