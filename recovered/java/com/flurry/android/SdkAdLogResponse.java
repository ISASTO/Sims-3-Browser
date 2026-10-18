package com.flurry.android;
public interface SdkAdLogResponse {
    public static final com.flurry.org.apache.avro.Protocol PROTOCOL;

    static SdkAdLogResponse()
    {
        com.flurry.android.SdkAdLogResponse.PROTOCOL = com.flurry.org.apache.avro.Protocol.parse("{\"protocol\":\"SdkAdLogResponse\",\"namespace\":\"com.flurry.android\",\"types\":[{\"type\":\"record\",\"name\":\"SdkLogResponse\",\"fields\":[{\"name\":\"result\",\"type\":\"string\"},{\"name\":\"errors\",\"type\":{\"type\":\"array\",\"items\":\"string\"}}]}],\"messages\":{}}");
        return;
    }
}
