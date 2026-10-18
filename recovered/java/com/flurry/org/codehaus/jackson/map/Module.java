package com.flurry.org.codehaus.jackson.map;
public abstract class Module implements com.flurry.org.codehaus.jackson.Versioned {

    public Module()
    {
        return;
    }

    public abstract String getModuleName();

    public abstract void setupModule(com.flurry.org.codehaus.jackson.map.Module$SetupContext p0);

    public abstract com.flurry.org.codehaus.jackson.Version version();
}
