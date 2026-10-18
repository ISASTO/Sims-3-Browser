package com.flurry.org.codehaus.jackson.map.type;
public class TypeParser {
    final com.flurry.org.codehaus.jackson.map.type.TypeFactory _factory;

    public TypeParser(com.flurry.org.codehaus.jackson.map.type.TypeFactory p1)
    {
        this._factory = p1;
        return;
    }

    protected IllegalArgumentException _problem(com.flurry.org.codehaus.jackson.map.type.TypeParser$MyTokenizer p4, String p5)
    {
        return new IllegalArgumentException(new StringBuilder().append("Failed to parse type \'").append(p4.getAllInput()).append("\' (remaining: \'").append(p4.getRemainingInput()).append("\'): ").append(p5).toString());
    }

    protected Class findClass(String p5, com.flurry.org.codehaus.jackson.map.type.TypeParser$MyTokenizer p6)
    {
        try {
            return Class.forName(p5, 1, Thread.currentThread().getContextClassLoader());
        } catch (RuntimeException v0_1) {
            if (!(v0_1 instanceof RuntimeException)) {
                throw this._problem(p6, new StringBuilder().append("Can not locate class \'").append(p5).append("\', problem: ").append(v0_1.getMessage()).toString());
            } else {
                throw ((RuntimeException) v0_1);
            }
        }
    }

    public com.flurry.org.codehaus.jackson.type.JavaType parse(String p4)
    {
        com.flurry.org.codehaus.jackson.map.type.TypeParser$MyTokenizer v0_1 = new com.flurry.org.codehaus.jackson.map.type.TypeParser$MyTokenizer(p4.trim());
        com.flurry.org.codehaus.jackson.type.JavaType v1 = this.parseType(v0_1);
        if (!v0_1.hasMoreTokens()) {
            return v1;
        } else {
            throw this._problem(v0_1, "Unexpected tokens after complete type");
        }
    }

    protected com.flurry.org.codehaus.jackson.type.JavaType parseType(com.flurry.org.codehaus.jackson.map.type.TypeParser$MyTokenizer p5)
    {
        if (p5.hasMoreTokens()) {
            com.flurry.org.codehaus.jackson.type.JavaType v2_4;
            Class v0 = this.findClass(p5.nextToken(), p5);
            if (!p5.hasMoreTokens()) {
                v2_4 = this._factory._fromClass(v0, 0);
            } else {
                String v1 = p5.nextToken();
                if (!"<".equals(v1)) {
                    p5.pushBack(v1);
                } else {
                    v2_4 = this._factory._fromParameterizedClass(v0, this.parseTypes(p5));
                }
            }
            return v2_4;
        } else {
            throw this._problem(p5, "Unexpected end-of-string");
        }
    }

    protected java.util.List parseTypes(com.flurry.org.codehaus.jackson.map.type.TypeParser$MyTokenizer p5)
    {
        java.util.ArrayList v1_1 = new java.util.ArrayList();
        while (p5.hasMoreTokens()) {
            v1_1.add(this.parseType(p5));
            if (!p5.hasMoreTokens()) {
                break;
            }
            String v0 = p5.nextToken();
            if (!">".equals(v0)) {
                if (!",".equals(v0)) {
                    throw this._problem(p5, new StringBuilder().append("Unexpected token \'").append(v0).append("\', expected \',\' or \'>\')").toString());
                }
            } else {
                return v1_1;
            }
        }
        throw this._problem(p5, "Unexpected end-of-string");
    }
}
