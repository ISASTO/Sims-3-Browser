package com.flurry.org.codehaus.jackson.map.deser.std;
public class CalendarDeserializer extends com.flurry.org.codehaus.jackson.map.deser.std.StdScalarDeserializer {
    protected final Class _calendarClass;

    public CalendarDeserializer()
    {
        this(0);
        return;
    }

    public CalendarDeserializer(Class p2)
    {
        super(java.util.Calendar);
        super._calendarClass = p2;
        return;
    }

    public bridge synthetic Object deserialize(com.flurry.org.codehaus.jackson.JsonParser p2, com.flurry.org.codehaus.jackson.map.DeserializationContext p3)
    {
        return this.deserialize(p2, p3);
    }

    public java.util.Calendar deserialize(com.flurry.org.codehaus.jackson.JsonParser p6, com.flurry.org.codehaus.jackson.map.DeserializationContext p7)
    {
        java.util.Calendar v0_0;
        java.util.Date v1 = this._parseDate(p6, p7);
        if (v1 != null) {
            if (this._calendarClass != null) {
                try {
                    v0_0 = ((java.util.Calendar) this._calendarClass.newInstance());
                    v0_0.setTimeInMillis(v1.getTime());
                } catch (Exception v2) {
                    throw p7.instantiationException(this._calendarClass, v2);
                }
            } else {
                v0_0 = p7.constructCalendar(v1);
            }
        } else {
            v0_0 = 0;
        }
        return v0_0;
    }
}
