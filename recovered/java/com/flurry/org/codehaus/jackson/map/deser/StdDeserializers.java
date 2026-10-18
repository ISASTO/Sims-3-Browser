package com.flurry.org.codehaus.jackson.map.deser;
 class StdDeserializers {
    final java.util.HashMap _deserializers;

    private StdDeserializers()
    {
        this._deserializers = new java.util.HashMap();
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.UntypedObjectDeserializer());
        com.flurry.org.codehaus.jackson.map.deser.std.StringDeserializer v2_0 = new com.flurry.org.codehaus.jackson.map.deser.std.StringDeserializer();
        this.add(v2_0, String);
        this.add(v2_0, CharSequence);
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.ClassDeserializer());
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$BooleanDeserializer(Boolean, 0));
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$ByteDeserializer(Byte, 0));
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$ShortDeserializer(Short, 0));
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$CharacterDeserializer(Character, 0));
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$IntegerDeserializer(Integer, 0));
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$LongDeserializer(Long, 0));
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$FloatDeserializer(Float, 0));
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$DoubleDeserializer(Double, 0));
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$BooleanDeserializer(Boolean.TYPE, Boolean.FALSE));
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$ByteDeserializer(Byte.TYPE, Byte.valueOf(0)));
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$ShortDeserializer(Short.TYPE, Short.valueOf(0)));
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$CharacterDeserializer(Character.TYPE, Character.valueOf(0)));
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$IntegerDeserializer(Integer.TYPE, Integer.valueOf(0)));
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$LongDeserializer(Long.TYPE, Long.valueOf(0)));
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$FloatDeserializer(Float.TYPE, Float.valueOf(0)));
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$DoubleDeserializer(Double.TYPE, Double.valueOf(0)));
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$NumberDeserializer());
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$BigDecimalDeserializer());
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$BigIntegerDeserializer());
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.CalendarDeserializer());
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.DateDeserializer());
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.CalendarDeserializer(java.util.GregorianCalendar), java.util.GregorianCalendar);
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$SqlDateDeserializer());
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.TimestampDeserializer());
        java.util.Iterator v1 = com.flurry.org.codehaus.jackson.map.deser.std.FromStringDeserializer.all().iterator();
        while (v1.hasNext()) {
            this.add(((com.flurry.org.codehaus.jackson.map.deser.std.FromStringDeserializer) v1.next()));
        }
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer$StackTraceElementDeserializer());
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.AtomicBooleanDeserializer());
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.TokenBufferDeserializer());
        this.add(new com.flurry.org.codehaus.jackson.map.deser.std.JavaTypeDeserializer());
        return;
    }

    private void add(com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer p2)
    {
        this.add(p2, p2.getValueClass());
        return;
    }

    private void add(com.flurry.org.codehaus.jackson.map.deser.std.StdDeserializer p4, Class p5)
    {
        this._deserializers.put(new com.flurry.org.codehaus.jackson.map.type.ClassKey(p5), p4);
        return;
    }

    public static java.util.HashMap constructAll()
    {
        return new com.flurry.org.codehaus.jackson.map.deser.StdDeserializers()._deserializers;
    }
}
