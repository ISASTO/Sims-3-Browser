package com.flurry.android;
public interface AdUnityResponse {
    public static final com.flurry.org.apache.avro.Protocol PROTOCOL;

    static AdUnityResponse()
    {
        com.flurry.android.AdUnityResponse.PROTOCOL = com.flurry.org.apache.avro.Protocol.parse("{\"protocol\":\"AdUnityResponse\",\"namespace\":\"com.flurry.android\",\"types\":[{\"type\":\"record\",\"name\":\"Callback\",\"fields\":[{\"name\":\"event\",\"type\":\"string\"},{\"name\":\"actions\",\"type\":{\"type\":\"array\",\"items\":\"string\"}}]},{\"type\":\"record\",\"name\":\"AdSpaceLayout\",\"fields\":[{\"name\":\"adWidth\",\"type\":\"int\"},{\"name\":\"adHeight\",\"type\":\"int\"},{\"name\":\"fix\",\"type\":\"string\"},{\"name\":\"format\",\"type\":\"string\"},{\"name\":\"alignment\",\"type\":\"string\"}]},{\"type\":\"record\",\"name\":\"AdFrame\",\"fields\":[{\"name\":\"binding\",\"type\":\"int\"},{\"name\":\"display\",\"type\":\"string\"},{\"name\":\"content\",\"type\":\"string\"},{\"name\":\"adSpaceLayout\",\"type\":\"AdSpaceLayout\"},{\"name\":\"callbacks\",\"type\":{\"type\":\"array\",\"items\":\"Callback\"}},{\"name\":\"adGuid\",\"type\":\"string\"}]},{\"type\":\"record\",\"name\":\"AdUnit\",\"fields\":[{\"name\":\"adSpace\",\"type\":\"string\"},{\"name\":\"expiration\",\"type\":\"long\"},{\"name\":\"adFrames\",\"type\":{\"type\":\"array\",\"items\":\"AdFrame\"}},{\"name\":\"combinable\",\"type\":\"int\",\"default\":0}]},{\"type\":\"record\",\"name\":\"AdResponse\",\"fields\":[{\"name\":\"adUnits\",\"type\":{\"type\":\"array\",\"items\":\"AdUnit\"}},{\"name\":\"errors\",\"type\":{\"type\":\"array\",\"items\":\"string\"},\"default\":[]}]}],\"messages\":{}}");
        return;
    }
}
