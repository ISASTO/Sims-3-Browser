package com.flurry.org.codehaus.jackson.map.util;
public class Comparators {

    public Comparators()
    {
        return;
    }

    public static Object getArrayComparator(Object p2)
    {
        return new com.flurry.org.codehaus.jackson.map.util.Comparators$1(p2, reflect.Array.getLength(p2));
    }
}
