package com.ideaworks3d.marmalade;
synthetic class LoaderThread$5 {
    static final synthetic int[] $SwitchMap$com$ideaworks3d$marmalade$LoaderThread$AudioState;

    static LoaderThread$5()
    {
        NoSuchFieldError v0_4 = new int[com.ideaworks3d.marmalade.LoaderThread$AudioState.values().length];
        com.ideaworks3d.marmalade.LoaderThread$5.$SwitchMap$com$ideaworks3d$marmalade$LoaderThread$AudioState = v0_4;
        try {
            com.ideaworks3d.marmalade.LoaderThread$AudioState.Started.ordinal()[int v1_5] = 1;
            try {
                com.ideaworks3d.marmalade.LoaderThread$AudioState.Paused.ordinal()[int v1_1] = 2;
                try {
                    com.ideaworks3d.marmalade.LoaderThread$AudioState.Error.ordinal()[int v1_3] = 3;
                } catch (NoSuchFieldError v0) {
                }
                return;
            } catch (NoSuchFieldError v0) {
            }
        } catch (NoSuchFieldError v0) {
        }
    }
}
