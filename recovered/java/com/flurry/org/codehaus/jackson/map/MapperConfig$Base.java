package com.flurry.org.codehaus.jackson.map;
public class MapperConfig$Base {
    protected final com.flurry.org.codehaus.jackson.map.AnnotationIntrospector _annotationIntrospector;
    protected final com.flurry.org.codehaus.jackson.map.ClassIntrospector _classIntrospector;
    protected final java.text.DateFormat _dateFormat;
    protected final com.flurry.org.codehaus.jackson.map.HandlerInstantiator _handlerInstantiator;
    protected final com.flurry.org.codehaus.jackson.map.PropertyNamingStrategy _propertyNamingStrategy;
    protected final com.flurry.org.codehaus.jackson.map.type.TypeFactory _typeFactory;
    protected final com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder _typeResolverBuilder;
    protected final com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker _visibilityChecker;

    public MapperConfig$Base(com.flurry.org.codehaus.jackson.map.ClassIntrospector p1, com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p2, com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p3, com.flurry.org.codehaus.jackson.map.PropertyNamingStrategy p4, com.flurry.org.codehaus.jackson.map.type.TypeFactory p5, com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder p6, java.text.DateFormat p7, com.flurry.org.codehaus.jackson.map.HandlerInstantiator p8)
    {
        this._classIntrospector = p1;
        this._annotationIntrospector = p2;
        this._visibilityChecker = p3;
        this._propertyNamingStrategy = p4;
        this._typeFactory = p5;
        this._typeResolverBuilder = p6;
        this._dateFormat = p7;
        this._handlerInstantiator = p8;
        return;
    }

    public com.flurry.org.codehaus.jackson.map.AnnotationIntrospector getAnnotationIntrospector()
    {
        return this._annotationIntrospector;
    }

    public com.flurry.org.codehaus.jackson.map.ClassIntrospector getClassIntrospector()
    {
        return this._classIntrospector;
    }

    public java.text.DateFormat getDateFormat()
    {
        return this._dateFormat;
    }

    public com.flurry.org.codehaus.jackson.map.HandlerInstantiator getHandlerInstantiator()
    {
        return this._handlerInstantiator;
    }

    public com.flurry.org.codehaus.jackson.map.PropertyNamingStrategy getPropertyNamingStrategy()
    {
        return this._propertyNamingStrategy;
    }

    public com.flurry.org.codehaus.jackson.map.type.TypeFactory getTypeFactory()
    {
        return this._typeFactory;
    }

    public com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder getTypeResolverBuilder()
    {
        return this._typeResolverBuilder;
    }

    public com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker getVisibilityChecker()
    {
        return this._visibilityChecker;
    }

    public com.flurry.org.codehaus.jackson.map.MapperConfig$Base withAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p10)
    {
        return new com.flurry.org.codehaus.jackson.map.MapperConfig$Base(this._classIntrospector, p10, this._visibilityChecker, this._propertyNamingStrategy, this._typeFactory, this._typeResolverBuilder, this._dateFormat, this._handlerInstantiator);
    }

    public com.flurry.org.codehaus.jackson.map.MapperConfig$Base withAppendedAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p2)
    {
        return this.withAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$Pair.create(this._annotationIntrospector, p2));
    }

    public com.flurry.org.codehaus.jackson.map.MapperConfig$Base withClassIntrospector(com.flurry.org.codehaus.jackson.map.ClassIntrospector p10)
    {
        return new com.flurry.org.codehaus.jackson.map.MapperConfig$Base(p10, this._annotationIntrospector, this._visibilityChecker, this._propertyNamingStrategy, this._typeFactory, this._typeResolverBuilder, this._dateFormat, this._handlerInstantiator);
    }

    public com.flurry.org.codehaus.jackson.map.MapperConfig$Base withDateFormat(java.text.DateFormat p10)
    {
        return new com.flurry.org.codehaus.jackson.map.MapperConfig$Base(this._classIntrospector, this._annotationIntrospector, this._visibilityChecker, this._propertyNamingStrategy, this._typeFactory, this._typeResolverBuilder, p10, this._handlerInstantiator);
    }

    public com.flurry.org.codehaus.jackson.map.MapperConfig$Base withHandlerInstantiator(com.flurry.org.codehaus.jackson.map.HandlerInstantiator p10)
    {
        return new com.flurry.org.codehaus.jackson.map.MapperConfig$Base(this._classIntrospector, this._annotationIntrospector, this._visibilityChecker, this._propertyNamingStrategy, this._typeFactory, this._typeResolverBuilder, this._dateFormat, p10);
    }

    public com.flurry.org.codehaus.jackson.map.MapperConfig$Base withInsertedAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector p2)
    {
        return this.withAnnotationIntrospector(com.flurry.org.codehaus.jackson.map.AnnotationIntrospector$Pair.create(p2, this._annotationIntrospector));
    }

    public com.flurry.org.codehaus.jackson.map.MapperConfig$Base withPropertyNamingStrategy(com.flurry.org.codehaus.jackson.map.PropertyNamingStrategy p10)
    {
        return new com.flurry.org.codehaus.jackson.map.MapperConfig$Base(this._classIntrospector, this._annotationIntrospector, this._visibilityChecker, p10, this._typeFactory, this._typeResolverBuilder, this._dateFormat, this._handlerInstantiator);
    }

    public com.flurry.org.codehaus.jackson.map.MapperConfig$Base withTypeFactory(com.flurry.org.codehaus.jackson.map.type.TypeFactory p10)
    {
        return new com.flurry.org.codehaus.jackson.map.MapperConfig$Base(this._classIntrospector, this._annotationIntrospector, this._visibilityChecker, this._propertyNamingStrategy, p10, this._typeResolverBuilder, this._dateFormat, this._handlerInstantiator);
    }

    public com.flurry.org.codehaus.jackson.map.MapperConfig$Base withTypeResolverBuilder(com.flurry.org.codehaus.jackson.map.jsontype.TypeResolverBuilder p10)
    {
        return new com.flurry.org.codehaus.jackson.map.MapperConfig$Base(this._classIntrospector, this._annotationIntrospector, this._visibilityChecker, this._propertyNamingStrategy, this._typeFactory, p10, this._dateFormat, this._handlerInstantiator);
    }

    public com.flurry.org.codehaus.jackson.map.MapperConfig$Base withVisibility(com.flurry.org.codehaus.jackson.annotate.JsonMethod p10, com.flurry.org.codehaus.jackson.annotate.JsonAutoDetect$Visibility p11)
    {
        return new com.flurry.org.codehaus.jackson.map.MapperConfig$Base(this._classIntrospector, this._annotationIntrospector, this._visibilityChecker.withVisibility(p10, p11), this._propertyNamingStrategy, this._typeFactory, this._typeResolverBuilder, this._dateFormat, this._handlerInstantiator);
    }

    public com.flurry.org.codehaus.jackson.map.MapperConfig$Base withVisibilityChecker(com.flurry.org.codehaus.jackson.map.introspect.VisibilityChecker p10)
    {
        return new com.flurry.org.codehaus.jackson.map.MapperConfig$Base(this._classIntrospector, this._annotationIntrospector, p10, this._propertyNamingStrategy, this._typeFactory, this._typeResolverBuilder, this._dateFormat, this._handlerInstantiator);
    }
}
