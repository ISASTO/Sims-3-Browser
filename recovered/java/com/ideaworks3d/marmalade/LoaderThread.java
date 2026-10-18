package com.ideaworks3d.marmalade;
public class LoaderThread extends java.lang.Thread implements android.hardware.SensorEventListener {
    static com.ideaworks3d.marmalade.LoaderThread g_Singleton;
    public final int S3E_CONTACTS_FIELD_ADDRESS;
    public final int S3E_CONTACTS_FIELD_DISPLAY_NAME;
    public final int S3E_CONTACTS_FIELD_EMAIL_ADDR;
    public final int S3E_CONTACTS_FIELD_HOME_PHONE;
    public final int S3E_CONTACTS_FIELD_MOBILE_PHONE;
    public final int S3E_CONTACTS_FIELD_WORK_PHONE;
    private int[] contactsMap;
    private android.hardware.Sensor m_Accelerometer;
    private android.content.res.AssetManager m_Assets;
    private int m_BatteryLevel;
    private android.content.BroadcastReceiver m_BatteryLevelReceiver;
    private boolean m_ChargerConnected;
    private android.hardware.Sensor m_Compass;
    private final Runnable m_CreateView;
    private java.io.File m_FileRoot;
    private int m_FixScreenOrientation;
    private android.os.Handler m_Handler;
    private boolean m_HasFocus;
    private boolean m_IgnoreResizeWhilePaused;
    private com.ideaworks3d.marmalade.LoaderActivity m_Loader;
    private com.ideaworks3d.marmalade.LoaderSMSReceiver m_LoaderSMSReceiver;
    private com.ideaworks3d.marmalade.LoaderLocation m_Location;
    private com.ideaworks3d.marmalade.LoaderThread$MediaPlayerManager m_MediaPlayerManager;
    private com.ideaworks3d.marmalade.LoaderThread$MulticastLockFacade m_MulticastLock;
    private boolean m_NetworkCheckEnabled;
    private android.content.BroadcastReceiver m_NetworkCheckReceiver;
    private Integer m_OnTouchWait;
    private android.hardware.Sensor m_Orientation;
    private int m_OrigScreenOrientation;
    private Boolean m_PauseRequested;
    private Object m_PauseRequestedXX;
    private Boolean m_Paused;
    Object m_ResizeDone;
    private Object m_ResumeRequestedXX;
    private final Runnable m_RunOnOSThread;
    private android.hardware.SensorManager m_SensorManager;
    private boolean m_SkipNextChange;
    private com.ideaworks3d.marmalade.SoundPlayer m_SoundPlayer;
    private com.ideaworks3d.marmalade.SoundRecord m_SoundRecord;
    private Boolean m_Started;
    private Object m_StartedXX;
    private Boolean m_Terminating;
    private reflect.Method m_TouchEvent;
    private boolean m_TouchMulti;
    private boolean m_UseGL;
    private Boolean m_VideoIsPaused;
    private com.ideaworks3d.marmalade.LoaderView m_View;
    boolean m_WaitForResizeOnResume;
    private Object m_YieldXX;
    private reflect.Method m_getRotation;

    private LoaderThread(com.ideaworks3d.marmalade.LoaderActivity p7, android.content.res.AssetManager p8, java.io.File p9)
    {
        this.m_ResizeDone = new Object();
        this.m_BatteryLevelReceiver = new com.ideaworks3d.marmalade.LoaderThread$1(this);
        this.m_NetworkCheckReceiver = new com.ideaworks3d.marmalade.LoaderThread$2(this);
        this.m_NetworkCheckEnabled = 0;
        this.m_Handler = new android.os.Handler();
        this.m_HasFocus = 0;
        this.m_UseGL = 0;
        this.m_PauseRequested = Boolean.valueOf(0);
        this.m_Paused = Boolean.valueOf(0);
        this.m_PauseRequestedXX = new Object();
        this.m_ResumeRequestedXX = new Object();
        this.m_YieldXX = new Object();
        this.m_Started = Boolean.valueOf(0);
        this.m_Terminating = Boolean.valueOf(0);
        this.m_StartedXX = new Object();
        this.m_TouchEvent = 0;
        this.m_OnTouchWait = new Integer(0);
        this.m_TouchMulti = 0;
        this.m_MulticastLock = 0;
        this.m_RunOnOSThread = new com.ideaworks3d.marmalade.LoaderThread$3(this);
        this.m_CreateView = new com.ideaworks3d.marmalade.LoaderThread$4(this);
        this.contactsMap = 0;
        this.S3E_CONTACTS_FIELD_DISPLAY_NAME = 0;
        this.S3E_CONTACTS_FIELD_HOME_PHONE = 5;
        this.S3E_CONTACTS_FIELD_MOBILE_PHONE = 6;
        this.S3E_CONTACTS_FIELD_WORK_PHONE = 7;
        this.S3E_CONTACTS_FIELD_EMAIL_ADDR = 8;
        this.S3E_CONTACTS_FIELD_ADDRESS = 10;
        this.m_Assets = p8;
        this.m_Loader = p7;
        this.m_OrigScreenOrientation = p7.getRequestedOrientation();
        this.m_FixScreenOrientation = this.m_OrigScreenOrientation;
        this.m_FileRoot = p9;
        this.m_SoundPlayer = new com.ideaworks3d.marmalade.SoundPlayer();
        this.m_MediaPlayerManager = new com.ideaworks3d.marmalade.LoaderThread$MediaPlayerManager(this);
        this.m_Loader.registerReceiver(this.m_BatteryLevelReceiver, new android.content.IntentFilter("android.intent.action.BATTERY_CHANGED"));
        this.m_SensorManager = ((android.hardware.SensorManager) this.m_Loader.getSystemService("sensor"));
        try {
            Exception v0_46 = new java.io.File(this.m_FileRoot, "makeramdirectory.txt");
        } catch (Exception v0) {
            if (Integer.parseInt(android.os.Build$VERSION.SDK) >= 5) {
                try {
                    Exception v0_4 = Class.forName("com.ideaworks3d.marmalade.MultiTouch");
                    Class[] v2_1 = new Class[2];
                    v2_1[0] = com.ideaworks3d.marmalade.LoaderThread;
                    v2_1[1] = android.view.MotionEvent;
                    this.m_TouchEvent = v0_4.getMethod("onTouchEvent", v2_1);
                } catch (Exception v0) {
                    this.m_TouchEvent = 0;
                }
            }
            this.initNative();
            return;
        }
        // Both branches of the condition point to the same code.
        // if (!v0_46.mkdirs()) {
            v0_46.delete();
        // }
    }

    static synthetic void access$1000(com.ideaworks3d.marmalade.LoaderThread p0)
    {
        p0.runOnOSTickNative();
        return;
    }

    static synthetic boolean access$1100(com.ideaworks3d.marmalade.LoaderThread p1)
    {
        return p1.m_UseGL;
    }

    static synthetic com.ideaworks3d.marmalade.LoaderActivity access$1200(com.ideaworks3d.marmalade.LoaderThread p1)
    {
        return p1.m_Loader;
    }

    static synthetic Runnable access$1300(com.ideaworks3d.marmalade.LoaderThread p1)
    {
        return p1.m_CreateView;
    }

    static synthetic void access$400(com.ideaworks3d.marmalade.LoaderThread p0, int p1)
    {
        p0.audioStoppedNotify(p1);
        return;
    }

    static synthetic android.content.res.AssetManager access$500(com.ideaworks3d.marmalade.LoaderThread p1)
    {
        return p1.m_Assets;
    }

    static synthetic int access$602(com.ideaworks3d.marmalade.LoaderThread p0, int p1)
    {
        p0.m_BatteryLevel = p1;
        return p1;
    }

    static synthetic boolean access$700(com.ideaworks3d.marmalade.LoaderThread p1)
    {
        return p1.m_ChargerConnected;
    }

    static synthetic boolean access$702(com.ideaworks3d.marmalade.LoaderThread p0, boolean p1)
    {
        p0.m_ChargerConnected = p1;
        return p1;
    }

    static synthetic void access$800(com.ideaworks3d.marmalade.LoaderThread p0, boolean p1)
    {
        p0.chargerStateChanged(p1);
        return;
    }

    static synthetic void access$900(com.ideaworks3d.marmalade.LoaderThread p0, boolean p1)
    {
        p0.networkCheckChanged(p1);
        return;
    }

    private native void audioStoppedNotify(int p0);

    private native void chargerStateChanged(boolean p0);

    private void deviceUnYield()
    {
        try {
            this.m_YieldXX.notify();
            return;
        } catch (Throwable v1_1) {
            throw v1_1;
        }
    }

    private void doFixOrientation()
    {
        if (android.os.Build$VERSION.SDK_INT >= 9) {
            if (this.m_FixScreenOrientation != 1) {
                if (this.m_FixScreenOrientation != 2) {
                    if (this.m_FixScreenOrientation != 3) {
                        if (this.m_FixScreenOrientation != 4) {
                            this.m_Loader.setRequestedOrientation(this.m_OrigScreenOrientation);
                        } else {
                            this.m_Loader.setRequestedOrientation(0);
                        }
                    } else {
                        this.m_Loader.setRequestedOrientation(1);
                    }
                } else {
                    this.m_Loader.setRequestedOrientation(6);
                }
            } else {
                this.m_Loader.setRequestedOrientation(7);
            }
        } else {
            if (this.m_FixScreenOrientation != 3) {
                if (this.m_FixScreenOrientation != 4) {
                } else {
                    this.m_Loader.setRequestedOrientation(0);
                }
            } else {
                this.m_Loader.setRequestedOrientation(1);
            }
        }
        return;
    }

    private void fixOrientation(int p3)
    {
        this.m_FixScreenOrientation = p3;
        if (com.ideaworks3d.marmalade.LoaderAPI.s3eConfigGet("AndroidIgnoreResizeWhilePaused", 0) != 0) {
            this.m_IgnoreResizeWhilePaused = 1;
        }
        this.doFixOrientation();
        return;
    }

    private String getCardRoot()
    {
        String v0_1;
        if (android.os.Environment.getExternalStorageState().equals("mounted")) {
            v0_1 = android.os.Environment.getExternalStorageDirectory().getAbsolutePath();
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }

    public static com.ideaworks3d.marmalade.LoaderThread getInstance(com.ideaworks3d.marmalade.LoaderActivity p2, android.content.res.AssetManager p3, java.io.File p4, com.ideaworks3d.marmalade.LoaderView p5)
    {
        if (com.ideaworks3d.marmalade.LoaderThread.g_Singleton != null) {
            try {
                com.ideaworks3d.marmalade.LoaderThread.g_Singleton.m_Loader = p2;
                com.ideaworks3d.marmalade.LoaderThread.g_Singleton.setView(p5);
            } catch (Throwable v1_2) {
                throw v1_2;
            }
        } else {
            com.ideaworks3d.marmalade.LoaderThread.g_Singleton = new com.ideaworks3d.marmalade.LoaderThread(p2, p3, p4);
            com.ideaworks3d.marmalade.LoaderThread.g_Singleton.setView(p5);
            com.ideaworks3d.marmalade.LoaderThread.g_Singleton.start();
        }
        return com.ideaworks3d.marmalade.LoaderThread.g_Singleton;
    }

    private void glInit(int p4)
    {
        if (!this.m_UseGL) {
            this.m_UseGL = 1;
            if ((!this.m_Paused.booleanValue()) && (!this.m_Terminating.booleanValue())) {
                this.m_Handler.post(this.m_CreateView);
                try {
                    this.m_CreateView.wait();
                } catch (InterruptedException v1) {
                }
                this.waitForView();
            }
            this.m_View.glInit(p4);
        }
        return;
    }

    private void glReInit()
    {
        if (this.m_UseGL) {
            this.m_View.glReInit();
        }
        return;
    }

    private void glTerm()
    {
        if (this.m_UseGL) {
            this.m_View.glTerm();
            this.m_UseGL = 0;
            if ((!this.m_Paused.booleanValue()) && (!this.m_Terminating.booleanValue())) {
                this.m_Handler.post(this.m_CreateView);
                try {
                    this.m_CreateView.wait();
                } catch (InterruptedException v1) {
                }
            }
            if (!this.m_Paused.booleanValue()) {
                this.waitForView();
            }
        }
        return;
    }

    private native void initNative();

    private native void networkCheckChanged(boolean p0);

    private native void onAccelNative(float p0, float p1, float p2);

    private native void onCompassNative(int p0, float p1, float p2, float p3);

    private native void onPauseNative();

    private native void runNative(String p0, String p1);

    private native void runOnOSThreadNative(Runnable p0);

    private native void runOnOSTickNative();

    private native void setResumed();

    private native void setSuspended();

    private native void setViewNative(com.ideaworks3d.marmalade.LoaderView p0);

    private native void shutdownNative();

    private void shuttingDown(boolean p3)
    {
        if (!this.m_Terminating.booleanValue()) {
            this.m_Started = Boolean.valueOf(0);
            this.m_Terminating = Boolean.valueOf(1);
            this.m_PauseRequested = Boolean.valueOf(0);
            com.ideaworks3d.marmalade.LoaderThread.g_Singleton = 0;
            if (p3) {
                this.shutdownNative();
            }
            this.smsStop();
            this.accelStop();
            com.ideaworks3d.marmalade.LoaderAPI.notifySuspendResumeListeners(new com.ideaworks3d.marmalade.SuspendResumeEvent(com.ideaworks3d.marmalade.SuspendResumeEvent$EventType.SHUTDOWN));
            if (!this.m_Loader.isFinishing()) {
                this.m_Loader.unregisterReceiver(this.m_BatteryLevelReceiver);
                this.networkCheckStop();
                this.m_Loader.finish();
            }
        } else {
        }
        return;
    }

    private native void signalResume();

    private native void signalSuspend();

    private void touchSetWait(int p2)
    {
        this.m_OnTouchWait = new Integer(p2);
        return;
    }

    private void waitForView()
    {
        try {
            while ((!this.m_Terminating.booleanValue()) && (!this.m_View.waitForSurface())) {
            }
        } catch (com.ideaworks3d.marmalade.LoaderView v1_1) {
            throw v1_1;
        }
        this.setViewNative(this.m_View);
        return;
    }

    public void accelStart()
    {
        if (this.m_Accelerometer == null) {
            this.m_Accelerometer = this.m_SensorManager.getDefaultSensor(1);
            this.m_SensorManager.registerListener(this, this.m_Accelerometer, 1);
        }
        return;
    }

    public void accelStop()
    {
        if (this.m_Accelerometer != null) {
            this.m_SensorManager.unregisterListener(this, this.m_Accelerometer);
            this.m_Accelerometer = 0;
        }
        return;
    }

    public boolean acquireMulticastLock()
    {
        int v0_3;
        if (Integer.parseInt(android.os.Build$VERSION.SDK) > 3) {
            if (this.m_MulticastLock == null) {
                try {
                    this.m_MulticastLock = new com.ideaworks3d.marmalade.LoaderThread$MulticastLockFacade(this, ((android.net.wifi.WifiManager) this.m_Loader.getSystemService("wifi")));
                } catch (int v0) {
                    v0_3 = 0;
                    return v0_3;
                }
            }
            if (this.m_MulticastLock == null) {
                v0_3 = 0;
            } else {
                this.m_MulticastLock.acquire();
                v0_3 = this.m_MulticastLock.isHeld();
            }
        } else {
            v0_3 = 0;
        }
        return v0_3;
    }

    public void audioStopAll()
    {
        this.m_MediaPlayerManager.audioStopAll();
        return;
    }

    public boolean chargerIsConnected()
    {
        return this.m_ChargerConnected;
    }

    public String clipboardGet()
    {
        int v0_2;
        android.text.ClipboardManager v2_2 = ((android.text.ClipboardManager) this.m_Loader.getSystemService("clipboard"));
        if (!v2_2.hasText()) {
            v0_2 = 0;
        } else {
            v0_2 = v2_2.getText().toString();
        }
        return v0_2;
    }

    public void clipboardSet(String p3)
    {
        ((android.text.ClipboardManager) this.m_Loader.getSystemService("clipboard")).setText(p3);
        return;
    }

    public void compassStart()
    {
        if (this.m_Compass == null) {
            this.m_Compass = this.m_SensorManager.getDefaultSensor(2);
            this.m_Orientation = this.m_SensorManager.getDefaultSensor(3);
            this.m_SensorManager.registerListener(this, this.m_Orientation, 1);
            this.m_SensorManager.registerListener(this, this.m_Compass, 1);
        }
        return;
    }

    public void compassStop()
    {
        if (this.m_Compass != null) {
            this.m_SensorManager.unregisterListener(this, this.m_Compass);
            this.m_SensorManager.unregisterListener(this, this.m_Orientation);
            this.m_Compass = 0;
        }
        return;
    }

    public int contactsCreate()
    {
        try {
            int v0_2 = Integer.parseInt(this.m_Loader.getContentResolver().insert(android.provider.Contacts$People.CONTENT_URI, new android.content.ContentValues()).getLastPathSegment());
        } catch (int v0) {
            v0_2 = -1;
        }
        return v0_2;
    }

    public boolean contactsDelete(int p6)
    {
        try {
            int v0_2;
            if (this.m_Loader.getContentResolver().delete(android.content.ContentUris.withAppendedId(android.provider.Contacts$People.CONTENT_URI, ((long) p6)), 0, 0) == 0) {
                v0_2 = 0;
            } else {
                v0_2 = 1;
            }
        } catch (int v0) {
            v0_2 = 0;
        }
        return v0_2;
    }

    public android.database.Cursor contactsGetData(int p10, int p11)
    {
        int v0_0;
        int v4 = 0;
        if (p11 != 8) {
            if (p11 != 10) {
                if ((p11 < 5) || (p11 > 7)) {
                    if (p11 != 0) {
                        v0_0 = 0;
                    } else {
                        android.net.Uri v1_0 = this.m_Loader;
                        String[] v2_1 = android.content.ContentUris.withAppendedId(android.provider.Contacts$People.CONTENT_URI, ((long) p10));
                        int v3_3 = new String[1];
                        v3_3[0] = "name";
                        v0_0 = v1_0.managedQuery(v2_1, v3_3, 0, 0, 0);
                    }
                } else {
                    int v3_4;
                    if (p11 != 6) {
                        if (p11 != 5) {
                            v3_4 = 3;
                        } else {
                            v3_4 = 1;
                        }
                    } else {
                        v3_4 = 2;
                    }
                    int v0_7 = this.m_Loader;
                    String[] v2_2 = new String[1];
                    v2_2[0] = "number";
                    v0_0 = v0_7.managedQuery(android.provider.Contacts$Phones.CONTENT_URI, v2_2, new StringBuilder().append("person = ").append(p10).append(" AND ").append("type").append(" = ").append(v3_4).toString(), v4, v4);
                }
            } else {
                int v0_9 = this.m_Loader;
                String[] v2_3 = new String[1];
                v2_3[0] = "data";
                v0_0 = v0_9.managedQuery(android.provider.Contacts$ContactMethods.CONTENT_URI, v2_3, new StringBuilder().append("person = ").append(p10).append(" AND ").append("kind").append(" = ").append(2).toString(), 0, 0);
            }
        } else {
            int v0_12 = this.m_Loader;
            String[] v2_4 = new String[1];
            v2_4[0] = "data";
            v0_0 = v0_12.managedQuery(android.provider.Contacts$ContactMethods.CONTENT_EMAIL_URI, v2_4, new StringBuilder().append("person = ").append(p10).toString(), 0, 0);
        }
        return v0_0;
    }

    public String contactsGetField(int p5, int p6, int p7)
    {
        try {
            int v0_2;
            int v0_1 = this.contactsGetData(p5, p6);
        } catch (int v0) {
            v0_1 = 0;
            if (v0_1 == 0) {
                v0_2 = 0;
                return v0_2;
            } else {
                v0_1.close();
                v0_2 = 0;
                return v0_2;
            }
            if (v0_1 == 0) {
                v0_2 = int v1_2;
                return v0_2;
            } else {
                v0_1.close();
                v0_2 = v1_2;
                return v0_2;
            }
        } catch (int v0_0) {
            int v1_1 = 0;
            if (v1_1 != 0) {
                v1_1.close();
            }
            throw v0_0;
        }
        if (v0_1 != 0) {
            try {
                if (!v0_1.moveToPosition(p7)) {
                    v1_2 = 0;
                } else {
                    v1_2 = v0_1.getString(0);
                }
            } catch (int v1) {
            } catch (int v1_0) {
                v1_1 = v0_1;
                v0_0 = v1_0;
            }
        } else {
            if (v0_1 != 0) {
                v0_1.close();
            }
            v0_2 = 0;
            return v0_2;
        }
    }

    public int contactsGetNumEntries(int p6, int p7)
    {
        try {
            int v0_2;
            int v0_1 = this.contactsGetData(p6, p7);
        } catch (int v1) {
            int v1_0 = 0;
            if (v0_1 == 0) {
                v0_2 = v1_0;
                return v0_2;
            } else {
                v0_1.close();
                v0_2 = v1_0;
                return v0_2;
            }
        } catch (int v1_3) {
            int v1_2 = v0_1;
            int v0_0 = v1_3;
            if (v1_2 != 0) {
                v1_2.close();
            }
            throw v0_0;
        }
        if (v0_1 != 0) {
            try {
                v1_0 = v0_1.getCount();
                try {
                    if ((p7 != 0) || ((v1_0 != 1) || ((!v0_1.moveToPosition(0)) || (v0_1.getString(0) != null)))) {
                        if (v0_1 == 0) {
                        } else {
                            v0_1.close();
                            v0_2 = v1_0;
                            return v0_2;
                        }
                    } else {
                        if (v0_1 != 0) {
                            v0_1.close();
                        }
                        v0_2 = 0;
                        return v0_2;
                    }
                } catch (String v2) {
                }
            } catch (int v1_1) {
                v1_2 = v0_1;
                v0_0 = v1_1;
            }
        } else {
            if (v0_1 != 0) {
                v0_1.close();
            }
            v0_2 = 0;
            return v0_2;
        }
    }

    public int contactsGetNumRecords()
    {
        int v0_1;
        if (this.contactsMap == null) {
            v0_1 = -1;
        } else {
            v0_1 = this.contactsMap.length;
        }
        return v0_1;
    }

    public int contactsGetUID(int p10)
    {
        if ((this.contactsMap != null) && ((p10 >= 0) && (p10 < this.contactsMap.length))) {
            if (this.contactsMap[p10] == -1) {
                try {
                    int v0_3 = this.m_Loader.getContentResolver().query(android.provider.Contacts$People.CONTENT_URI, 0, 0, 0, 0);
                    try {
                        int v1_2;
                        if (!v0_3.moveToPosition(p10)) {
                            v1_2 = -1;
                        } else {
                            v1_2 = v0_3.getInt(v0_3.getColumnIndex("_id"));
                            try {
                                this.contactsMap[p10] = v1_2;
                            } catch (Exception v2) {
                                if (v0_3 == 0) {
                                    int v0_5 = v1_2;
                                    return v0_5;
                                } else {
                                    v0_3.close();
                                    v0_5 = v1_2;
                                    return v0_5;
                                }
                            }
                        }
                    } catch (int v1) {
                        v1_2 = -1;
                    } catch (int v1_6) {
                        int v1_1 = v0_3;
                        int v0_4 = v1_6;
                        if (v1_1 != 0) {
                            v1_1.close();
                        }
                        throw v0_4;
                    }
                    if (v0_3 == 0) {
                    } else {
                        v0_3.close();
                        v0_5 = v1_2;
                    }
                } catch (int v0) {
                    v0_3 = 0;
                    v1_2 = -1;
                } catch (int v0_4) {
                    v1_1 = 0;
                }
            } else {
                v0_5 = this.contactsMap[p10];
            }
        } else {
            v0_5 = -1;
        }
        return v0_5;
    }

    public boolean contactsSetField(String p15, int p16, int p17, int p18)
    {
        try {
            int v3_6;
            android.database.Cursor v2_0;
            android.content.ContentValues v10_1 = new android.content.ContentValues();
            android.content.ContentResolver v11 = this.m_Loader.getContentResolver();
            v2_0 = android.content.ContentUris.withAppendedId(android.provider.Contacts$People.CONTENT_URI, ((long) p16));
            try {
                if (p17 != 8) {
                    if (p17 != 10) {
                        if ((p17 < 5) || (p17 > 7)) {
                            if (p17 != 0) {
                                v2_0 = 0;
                                v3_6 = 0;
                            } else {
                                v10_1.put("name", p15);
                                v11.update(v2_0, v10_1, 0, 0);
                                v3_6 = 1;
                                v2_0 = 0;
                            }
                        } else {
                            int v5_16;
                            if (p17 != 6) {
                                if (p17 != 5) {
                                    v5_16 = 3;
                                } else {
                                    v5_16 = 1;
                                }
                            } else {
                                v5_16 = 2;
                            }
                            android.net.Uri v12_2 = android.net.Uri.withAppendedPath(v2_0, "phones");
                            v10_1.put("person", Integer.valueOf(p16));
                            v10_1.put("isprimary", Integer.valueOf(1));
                            v10_1.put("type", Integer.valueOf(v5_16));
                            v10_1.put("number", p15);
                            android.database.Cursor v2_21 = this.m_Loader;
                            int v4_9 = new String[1];
                            v4_9[0] = "_id";
                            v2_0 = v2_21.managedQuery(android.provider.Contacts$Phones.CONTENT_URI, v4_9, new StringBuilder().append("person = ").append(p16).append(" AND ").append("type").append(" = ").append(v5_16).toString(), 0, 0);
                            if ((v2_0 != null) && (p18 != v2_0.getCount())) {
                                if (!v2_0.moveToPosition(p18)) {
                                    v3_6 = 0;
                                } else {
                                    v11.update(android.net.Uri.withAppendedPath(v12_2, v2_0.getString(0)), v10_1, 0, 0);
                                    v3_6 = 1;
                                }
                            } else {
                                v11.insert(v12_2, v10_1);
                                v3_6 = 1;
                            }
                        }
                    } else {
                        android.net.Uri v12_0 = android.net.Uri.withAppendedPath(v2_0, "contact_methods");
                        v10_1.put("person", Integer.valueOf(p16));
                        v10_1.put("isprimary", Integer.valueOf(1));
                        v10_1.put("kind", Integer.valueOf(2));
                        v10_1.put("data", p15);
                        android.database.Cursor v2_5 = this.m_Loader;
                        int v4_2 = new String[1];
                        v4_2[0] = "_id";
                        v2_0 = v2_5.managedQuery(android.provider.Contacts$ContactMethods.CONTENT_URI, v4_2, new StringBuilder().append("person = ").append(p16).toString(), 0, 0);
                        if ((v2_0 != null) && (p18 != v2_0.getCount())) {
                            if (!v2_0.moveToPosition(p18)) {
                            } else {
                                v11.update(android.net.Uri.withAppendedPath(v12_0, v2_0.getString(0)), v10_1, 0, 0);
                                v3_6 = 1;
                            }
                        } else {
                            v11.insert(v12_0, v10_1);
                            v3_6 = 1;
                        }
                    }
                } else {
                    android.net.Uri v12_1 = android.net.Uri.withAppendedPath(v2_0, "contact_methods");
                    v10_1.put("person", Integer.valueOf(p16));
                    v10_1.put("isprimary", Integer.valueOf(1));
                    v10_1.put("kind", Integer.valueOf(1));
                    v10_1.put("type", Integer.valueOf(1));
                    v10_1.put("data", p15);
                    android.database.Cursor v2_12 = this.m_Loader;
                    int v4_5 = new String[1];
                    v4_5[0] = "_id";
                    v2_0 = v2_12.managedQuery(android.provider.Contacts$ContactMethods.CONTENT_URI, v4_5, new StringBuilder().append("person = ").append(p16).toString(), 0, 0);
                    if ((v2_0 != null) && (p18 != v2_0.getCount())) {
                        if (!v2_0.moveToPosition(p18)) {
                        } else {
                            v11.update(android.net.Uri.withAppendedPath(v12_1, v2_0.getString(0)), v10_1, 0, 0);
                            v3_6 = 1;
                        }
                    } else {
                        v11.insert(v12_1, v10_1);
                        v3_6 = 1;
                    }
                }
            } catch (int v3) {
                if (v2_0 == null) {
                    android.database.Cursor v2_13 = 0;
                    return v2_13;
                } else {
                    v2_0.close();
                    v2_13 = 0;
                    return v2_13;
                }
            } catch (int v3_35) {
                int v3_16 = v2_0;
                android.database.Cursor v2_6 = v3_35;
                if (v3_16 != 0) {
                    v3_16.close();
                }
                throw v2_6;
            }
            if (v2_0 == null) {
                v2_13 = v3_6;
                return v2_13;
            } else {
                v2_0.close();
                v2_13 = v3_6;
                return v2_13;
            }
        } catch (android.database.Cursor v2) {
            v2_0 = 0;
        } catch (android.database.Cursor v2_6) {
            v3_16 = 0;
        }
    }

    public boolean contactsUpdate()
    {
        try {
            int v0_3;
            int v0_0 = this.m_Loader.getContentResolver().query(android.provider.Contacts$People.CONTENT_URI, 0, 0, 0, 0);
        } catch (int v0) {
            v0_0 = 0;
            if (v0_0 != 0) {
                v0_0.close();
            }
            v0_3 = 0;
            return v0_3;
        } catch (int v0_1) {
            int v1_0 = 0;
            if (v1_0 != 0) {
                v1_0.close();
            }
            throw v0_1;
        }
        if (v0_0 != 0) {
            try {
                int v1_2 = new int[v0_0.getCount()];
                this.contactsMap = v1_2;
                int v1_3 = 0;
            } catch (int v1) {
            } catch (int v1_5) {
                v1_0 = v0_0;
                v0_1 = v1_5;
            }
            while (v1_3 < this.contactsMap.length) {
                this.contactsMap[v1_3] = -1;
                v1_3++;
            }
            v0_0.close();
            if (v0_0 != 0) {
                v0_0.close();
            }
            v0_3 = 1;
            return v0_3;
        } else {
            if (v0_0 != 0) {
                v0_0.close();
            }
            v0_3 = 0;
            return v0_3;
        }
    }

    public void doPause()
    {
        com.ideaworks3d.marmalade.LoaderView v0_1;
        com.ideaworks3d.marmalade.LoaderAPI.notifySuspendResumeListeners(new com.ideaworks3d.marmalade.SuspendResumeEvent(com.ideaworks3d.marmalade.SuspendResumeEvent$EventType.SUSPEND));
        this.m_MediaPlayerManager.doPause();
        if (this.m_View.videoGetStatus() != 2) {
            v0_1 = 0;
        } else {
            v0_1 = 1;
        }
        this.m_VideoIsPaused = Boolean.valueOf(v0_1);
        if (!this.m_VideoIsPaused.booleanValue()) {
            this.m_View.videoPause();
        }
        this.m_SoundPlayer.pause();
        if (this.m_SoundRecord != null) {
            this.m_SoundRecord.stop();
        }
        this.m_Loader.unregisterReceiver(this.m_BatteryLevelReceiver);
        if (this.m_NetworkCheckEnabled) {
            this.m_Loader.unregisterReceiver(this.m_NetworkCheckReceiver);
        }
        if (this.m_Location != null) {
            this.m_Location.locationStop();
        }
        if (this.m_Accelerometer != null) {
            this.m_SensorManager.unregisterListener(this, this.m_Accelerometer);
        }
        if (this.m_Compass != null) {
            this.m_SensorManager.unregisterListener(this, this.m_Compass);
            this.m_SensorManager.unregisterListener(this, this.m_Orientation);
        }
        this.m_View.glTerm();
        return;
    }

    public void doResume()
    {
        this.setSuspended();
        this.waitForView();
        this.setResumed();
        this.m_UseGL = this.m_View.glInit(0);
        if (this.m_Accelerometer != null) {
            this.m_SensorManager.registerListener(this, this.m_Accelerometer, 1);
        }
        if (this.m_Compass != null) {
            this.m_SensorManager.registerListener(this, this.m_Orientation, 1);
            this.m_SensorManager.registerListener(this, this.m_Compass, 1);
        }
        if (this.m_Location != null) {
            this.m_Location.locationStart(this.m_Loader);
        }
        this.m_Loader.registerReceiver(this.m_BatteryLevelReceiver, new android.content.IntentFilter("android.intent.action.BATTERY_CHANGED"));
        if (this.m_NetworkCheckEnabled) {
            this.m_Loader.registerReceiver(this.m_NetworkCheckReceiver, new android.content.IntentFilter("android.net.conn.CONNECTIVITY_CHANGE"));
        }
        this.m_SoundPlayer.resume();
        this.m_MediaPlayerManager.doResume();
        if (!this.m_VideoIsPaused.booleanValue()) {
            this.m_View.videoResume();
        }
        if (this.m_SoundRecord != null) {
            this.m_SoundRecord.start(-1);
        }
        this.m_Paused = Boolean.valueOf(0);
        com.ideaworks3d.marmalade.LoaderAPI.notifySuspendResumeListeners(new com.ideaworks3d.marmalade.SuspendResumeEvent(com.ideaworks3d.marmalade.SuspendResumeEvent$EventType.RESUME));
        this.onDoneResume();
        return;
    }

    public int getBatteryLevel()
    {
        return this.m_BatteryLevel;
    }

    public String getDeviceIMSI()
    {
        return ((android.telephony.TelephonyManager) this.m_Loader.getSystemService("phone")).getSubscriberId();
    }

    public String getDeviceId()
    {
        String v0_3 = ((android.telephony.TelephonyManager) this.m_Loader.getSystemService("phone")).getDeviceId();
        if ((v0_3 == null) || (v0_3 == "")) {
            v0_3 = android.provider.Settings$Secure.getString(this.m_Loader.getContentResolver(), "android_id");
            if ((v0_3 == null) || (v0_3 == "9774d56d682e549c")) {
                if (Integer.parseInt(android.os.Build$VERSION.SDK) >= 9) {
                    try {
                        String v3_2 = ((String) android.os.Build.getField("SERIAL").get(0));
                    } catch (String v0) {
                    }
                    if (v3_2 != null) {
                        v0_3 = v3_2;
                        return v0_3;
                    }
                }
                v0_3 = 0;
            }
        }
        return v0_3;
    }

    public String getDeviceModel()
    {
        return android.os.Build.MODEL;
    }

    public String getDeviceNumber()
    {
        return ((android.telephony.TelephonyManager) this.m_Loader.getSystemService("phone")).getLine1Number();
    }

    public int getNetworkSubType()
    {
        int v0_1;
        int v0_2 = ((android.net.ConnectivityManager) this.m_Loader.getSystemService("connectivity")).getActiveNetworkInfo();
        if ((v0_2 == 0) || (!v0_2.isConnected())) {
            v0_1 = -1;
        } else {
            v0_1 = v0_2.getSubtype();
        }
        return v0_1;
    }

    public int getNetworkType()
    {
        int v0_1;
        int v0_2 = ((android.net.ConnectivityManager) this.m_Loader.getSystemService("connectivity")).getActiveNetworkInfo();
        if ((v0_2 == 0) || (!v0_2.isConnected())) {
            v0_1 = -1;
        } else {
            v0_1 = v0_2.getType();
        }
        return v0_1;
    }

    public int getOrientation()
    {
        int v0_4 = ((android.view.WindowManager) this.m_Loader.getSystemService("window")).getDefaultDisplay();
        if (this.m_getRotation == null) {
            NoSuchMethodException v1_0 = v0_4.getClass();
            try {
                Class[] v3_1 = new Class[0];
                this.m_getRotation = v1_0.getMethod("getRotation", v3_1);
            } catch (String v2) {
                try {
                    Class[] v3_3 = new Class[0];
                    this.m_getRotation = v1_0.getMethod("getOrientation", v3_3);
                } catch (NoSuchMethodException v1) {
                }
            }
        }
        try {
            String v2_4 = new Object[0];
            int v0_1 = ((Integer) 億.invokeHook(this.m_getRotation, v0_4, v2_4)).intValue();
        } catch (int v0) {
            v0_1 = 0;
        }
        return v0_1;
    }

    public boolean getSilentMode()
    {
        int v0_1;
        if (((android.media.AudioManager) this.m_Loader.getSystemService("audio")).getRingerMode() != 2) {
            v0_1 = 1;
        } else {
            v0_1 = 0;
        }
        return v0_1;
    }

    public boolean getStarted()
    {
        return this.m_Started.booleanValue();
    }

    public boolean hasMultitouch()
    {
        int v0_2 = this.m_Loader.getPackageManager();
        try {
            int v3_2 = new Class[1];
            v3_2[0] = String;
            reflect.Method v1_0 = android.content.pm.PackageManager.getMethod("hasSystemFeature", v3_2);
            Object[] v2_1 = new Object[1];
            v2_1[0] = "android.hardware.touchscreen.multitouch";
            int v0_1 = ((Boolean) 億.invokeHook(v1_0, v0_2, v2_1)).booleanValue();
        } catch (int v0) {
            v0_1 = 0;
        }
        return v0_1;
    }

    public boolean launchBrowser(String p3)
    {
        try {
            int v0_0 = android.net.Uri.parse(p3);
            android.content.Intent v1_1 = new android.content.Intent();
            v1_1.setData(v0_0);
        } catch (int v0) {
            int v0_1 = 0;
            return v0_1;
        }
        if (!p3.startsWith("vfstore")) {
            v1_1.setAction("android.intent.action.VIEW");
        }
        v1_1.addFlags(337641472);
        this.m_Loader.startActivity(v1_1);
        v0_1 = 1;
        return v0_1;
    }

    public boolean locationGpsData()
    {
        int v0_1;
        if (this.m_Location == null) {
            v0_1 = 0;
        } else {
            v0_1 = this.m_Location.locationGpsData();
        }
        return v0_1;
    }

    public boolean locationStart()
    {
        boolean v0_4;
        if (this.m_Location == null) {
            this.m_Location = new com.ideaworks3d.marmalade.LoaderLocation();
            v0_4 = this.m_Location.locationStart(this.m_Loader);
        } else {
            v0_4 = 0;
        }
        return v0_4;
    }

    public boolean locationStop()
    {
        boolean v0_2;
        if (this.m_Location != null) {
            v0_2 = this.m_Location.locationStop();
            this.m_Location = 0;
        } else {
            v0_2 = 0;
        }
        return v0_2;
    }

    public boolean networkCheckStart()
    {
        int v0_1;
        if (!this.m_NetworkCheckEnabled) {
            this.m_NetworkCheckEnabled = 1;
            this.m_Loader.registerReceiver(this.m_NetworkCheckReceiver, new android.content.IntentFilter("android.net.conn.CONNECTIVITY_CHANGE"));
            v0_1 = 1;
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }

    public boolean networkCheckStop()
    {
        int v0_3;
        if (this.m_NetworkCheckEnabled) {
            this.m_NetworkCheckEnabled = 0;
            this.m_Loader.unregisterReceiver(this.m_NetworkCheckReceiver);
            v0_3 = 1;
        } else {
            v0_3 = 1;
        }
        return v0_3;
    }

    public void onAccuracyChanged(android.hardware.Sensor p1, int p2)
    {
        return;
    }

    public void onDestroy()
    {
        this.shuttingDown(1);
        this.interrupt();
        try {
            this.join();
        } catch (InterruptedException v0) {
        }
        return;
    }

    public void onDoneResume()
    {
        return;
    }

    public void onFocusChanged(boolean p2)
    {
        this.m_HasFocus = p2;
        if (((p2) || (!this.m_Loader.m_IgnoreFocusLoss)) && ((!this.m_View.m_InputTextRunning) && ((!this.m_View.m_ErrorRunning) && ((!p2) || (!this.m_Loader.m_ActivityPaused))))) {
            if (!p2) {
                this.onPause();
            } else {
                this.onResume();
            }
        }
        return;
    }

    public native void onMotionEvent(int p0, int p1, int p2, int p3);

    public void onPause()
    {
        if (!this.m_Terminating.booleanValue()) {
            if (this.m_Started.booleanValue()) {
                try {
                    if ((!this.m_Paused.booleanValue()) && (!this.m_PauseRequested.booleanValue())) {
                        this.m_PauseRequested = Boolean.valueOf(1);
                        this.m_PauseRequested = Boolean.valueOf(1);
                        this.m_Paused = Boolean.valueOf(1);
                        this.signalSuspend();
                    } else {
                    }
                } catch (Object v1_7) {
                    throw v1_7;
                }
            } else {
                this.m_PauseRequested = Boolean.valueOf(1);
            }
        }
        return;
    }

    public void onResume()
    {
        this.m_PauseRequested = Boolean.valueOf(0);
        if (this.m_HasFocus) {
            this.m_Paused.booleanValue();
            this.signalResume();
        }
        return;
    }

    public void onSensorChanged(android.hardware.SensorEvent p7)
    {
        float v0_7 = p7.sensor.getType();
        if (v0_7 != 1) {
            if (v0_7 != 2) {
                if (v0_7 == 3) {
                    this.onCompassNative(1, p7.values[0], p7.values[1], p7.values[2]);
                }
            } else {
                this.onCompassNative(0, p7.values[0], p7.values[1], p7.values[2]);
            }
        } else {
            this.onAccelNative(p7.values[0], p7.values[1], p7.values[2]);
        }
        return;
    }

    public boolean onTouchEvent(android.view.MotionEvent p7)
    {
        if (this.m_TouchEvent == null) {
            long v2_1;
            switch (p7.getAction()) {
                case 0:
                    v2_1 = 1;
                    break;
                case 1:
                    v2_1 = 2;
                    break;
                case 2:
                    v2_1 = 3;
                    break;
                default:
                    v2_1 = 0;
            }
            this.onMotionEvent(0, (v2_1 + 3), ((int) p7.getX()), ((int) p7.getY()));
        } else {
            try {
                Integer v0_0 = this.m_TouchEvent;
                long v2_4 = new Object[2];
                v2_4[0] = this;
                v2_4[1] = p7;
                億.invokeHook(v0_0, 0, v2_4);
            } catch (Integer v0) {
            }
        }
        if (this.m_OnTouchWait.intValue() > 0) {
            try {
                this.m_OnTouchWait.wait(((long) this.m_OnTouchWait.intValue()));
            } catch (Throwable v1) {
            }
        }
        return 1;
    }

    public int recordStart(int p2)
    {
        int v0_1;
        if (this.m_SoundRecord != null) {
            v0_1 = 0;
        } else {
            this.m_SoundRecord = new com.ideaworks3d.marmalade.SoundRecord();
            v0_1 = this.m_SoundRecord.start(p2);
        }
        return v0_1;
    }

    public int recordStop()
    {
        int v0_0 = 1;
        if (this.m_SoundRecord != null) {
            v0_0 = this.m_SoundRecord.stop();
            this.m_SoundRecord = 0;
        }
        return v0_0;
    }

    public boolean releaseMulticastLock()
    {
        int v0_1;
        if (this.m_MulticastLock == null) {
            v0_1 = 0;
        } else {
            this.m_MulticastLock.release();
            this.m_MulticastLock = 0;
            v0_1 = 1;
        }
        return v0_1;
    }

    native void resumeAppThreads();

    public void run()
    {
        this.waitForView();
        this.m_Started = Boolean.valueOf(1);
        this.runNative(this.m_FileRoot.getAbsolutePath(), this.m_Loader.getPackageResourcePath());
        this.shuttingDown(0);
        return;
    }

    public void runOnOSSignal()
    {
        this.m_Handler.post(this.m_RunOnOSThread);
        return;
    }

    public void runOnOSThread(Runnable p1)
    {
        this.runOnOSThreadNative(p1);
        return;
    }

    public void runRunnable(Runnable p1)
    {
        p1.run();
        return;
    }

    public boolean sendEmail(String p4, String p5, String p6)
    {
        try {
            int v0_6 = p4.split(",\\s*");
            android.content.Intent v1_1 = new android.content.Intent();
            v1_1.setAction("android.intent.action.SEND");
            v1_1.setType("plain/text");
            v1_1.putExtra("android.intent.extra.EMAIL", v0_6);
            v1_1.putExtra("android.intent.extra.SUBJECT", p5);
            v1_1.putExtra("android.intent.extra.TEXT", p6);
            v1_1.addFlags(337641472);
            this.m_Loader.startActivity(v1_1);
            int v0_5 = 1;
        } catch (int v0) {
            v0_5 = 0;
        }
        return v0_5;
    }

    public void setView(com.ideaworks3d.marmalade.LoaderView p3)
    {
        if (this.m_View != null) {
            if (this.m_View != null) {
                this.m_View.notify();
            }
        }
        this.m_View = p3;
        this.doFixOrientation();
        this.setViewNative(this.m_View);
        return;
    }

    public boolean skipSurfaceChange()
    {
        int v0_3;
        if (!this.m_IgnoreResizeWhilePaused) {
            v0_3 = 0;
        } else {
            if ((!this.m_Paused.booleanValue()) || (this.m_FixScreenOrientation == 0)) {
                if ((this.m_Paused.booleanValue()) || (!this.m_SkipNextChange)) {
                } else {
                    this.m_SkipNextChange = 0;
                    v0_3 = 1;
                }
            } else {
                this.m_SkipNextChange = 1;
                v0_3 = 1;
            }
        }
        return v0_3;
    }

    public boolean smsStart()
    {
        if ((this.m_LoaderSMSReceiver != null) || (Integer.parseInt(android.os.Build$VERSION.SDK) <= 3)) {
            int v0_2 = 0;
        } else {
            this.m_LoaderSMSReceiver = new com.ideaworks3d.marmalade.LoaderSMSReceiver();
            this.m_Loader.registerReceiver(this.m_LoaderSMSReceiver, new android.content.IntentFilter("android.provider.Telephony.SMS_RECEIVED"));
            v0_2 = 1;
        }
        return v0_2;
    }

    public void smsStop()
    {
        if (this.m_LoaderSMSReceiver != null) {
            this.m_Loader.unregisterReceiver(this.m_LoaderSMSReceiver);
            this.m_LoaderSMSReceiver = 0;
        }
        return;
    }

    public int soundInit(boolean p2, int p3)
    {
        return this.m_SoundPlayer.init(p2, p3);
    }

    public void soundSetVolume(int p2)
    {
        this.m_SoundPlayer.setVolume(p2);
        return;
    }

    public void soundStart()
    {
        this.m_SoundPlayer.start();
        return;
    }

    public void soundStop()
    {
        this.m_SoundPlayer.stop();
        return;
    }

    native void suspendAppThreads();

    public boolean waitForStartup()
    {
        int v0_1;
        if (!this.m_Started.booleanValue()) {
            if (!this.m_Terminating.booleanValue()) {
                try {
                    if (!this.m_Started.booleanValue()) {
                        try {
                            this.m_StartedXX.wait();
                        } catch (InterruptedException v1) {
                        }
                    }
                } catch (InterruptedException v1_3) {
                    throw v1_3;
                }
                v0_1 = 1;
            } else {
                v0_1 = 0;
            }
        } else {
            v0_1 = 1;
        }
        return v0_1;
    }
}
