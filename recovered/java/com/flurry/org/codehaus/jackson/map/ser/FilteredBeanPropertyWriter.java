package com.flurry.org.codehaus.jackson.map.ser;
public abstract class FilteredBeanPropertyWriter {

    public FilteredBeanPropertyWriter()
    {
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter constructViewBased(com.flurry.org.codehaus.jackson.map.ser.BeanPropertyWriter p2, Class[] p3)
    {
        com.flurry.org.codehaus.jackson.map.ser.FilteredBeanPropertyWriter$MultiView v0_2;
        if (p3.length != 1) {
            v0_2 = new com.flurry.org.codehaus.jackson.map.ser.FilteredBeanPropertyWriter$MultiView(p2, p3);
        } else {
            v0_2 = new com.flurry.org.codehaus.jackson.map.ser.FilteredBeanPropertyWriter$SingleView(p2, p3[0]);
        }
        return v0_2;
    }
}
