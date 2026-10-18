package com.ideaworks3d.marmalade;
 class MultiTouch {
    private static final int POINTER_DOWN = 1;
    private static final int POINTER_MOVE = 3;
    private static final int POINTER_UP = 2;
    private static final int TOUCH_DOWN = 4;
    private static final int TOUCH_MOVE = 6;
    private static final int TOUCH_UP = 5;

    MultiTouch()
    {
        return;
    }

    public static boolean onTouchEvent(com.ideaworks3d.marmalade.LoaderThread p7, android.view.MotionEvent p8)
    {
        int v0_3 = (p8.getAction() & 255);
        if (v0_3 != 2) {
            if ((v0_3 != 0) && (v0_3 != 5)) {
                if ((v0_3 != 1) && ((v0_3 != 3) && (v0_3 != 6))) {
                    int v0_0 = 0;
                } else {
                    v0_0 = 5;
                }
            } else {
                v0_0 = 4;
            }
            if (v0_0 != 0) {
                int v1_3 = ((p8.getAction() & 65280) >> 8);
                p7.onMotionEvent(p8.getPointerId(v1_3), v0_0, ((int) p8.getX(v1_3)), ((int) p8.getY(v1_3)));
            }
        } else {
            int v0_1 = p8.getPointerCount();
            int v1_6 = 0;
            while (v1_6 < v0_1) {
                p7.onMotionEvent(p8.getPointerId(v1_6), 6, ((int) p8.getX(v1_6)), ((int) p8.getY(v1_6)));
                v1_6++;
            }
        }
        return 1;
    }
}
