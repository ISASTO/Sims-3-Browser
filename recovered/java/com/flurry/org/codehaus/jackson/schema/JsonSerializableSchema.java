package com.flurry.org.codehaus.jackson.schema;
public interface annotation JsonSerializableSchema implements java.lang.annotation.Annotation {

    public abstract String schemaItemDefinition();

    public abstract String schemaObjectPropertiesDefinition();

    public abstract String schemaType();
}
