package com.flurry.org.codehaus.jackson.map.deser.std;
final class StdKeyDeserializer$CalendarKD extends com.flurry.org.codehaus.jackson.map.deser.std.StdKeyDeserializer {

    protected StdKeyDeserializer$CalendarKD()
    {
        super(java.util.Calendar);
        return;
    }

    public bridge synthetic Object _parse(String p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this._parse(p2, p3);
    }

    public java.util.Calendar _parse(String p3, com.flurry.org.codehaus.jackson.map.DeserializationContext p4)
    {
        java.util.Calendar v1;
        java.util.Date v0 = p4.parseDate(p3);
        if (v0 != null) {
            v1 = p4.constructCalendar(v0);
        } else {
            v1 = 0;
        }
        return v1;
    }
}
