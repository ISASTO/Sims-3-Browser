package com.flurry.org.codehaus.jackson.map;
public class JsonMappingException extends com.flurry.org.codehaus.jackson.JsonProcessingException {
    static final int MAX_REFS_TO_LIST = 1000;
    private static final long serialVersionUID = 1;
    protected java.util.LinkedList _path;

    public JsonMappingException(String p1)
    {
        super(p1);
        return;
    }

    public JsonMappingException(String p1, com.flurry.org.codehaus.jackson.JsonLocation p2)
    {
        super(p1, p2);
        return;
    }

    public JsonMappingException(String p1, com.flurry.org.codehaus.jackson.JsonLocation p2, Throwable p3)
    {
        super(p1, p2, p3);
        return;
    }

    public JsonMappingException(String p1, Throwable p2)
    {
        super(p1, p2);
        return;
    }

    public static com.flurry.org.codehaus.jackson.map.JsonMappingException from(com.flurry.org.codehaus.jackson.JsonParser p2, String p3)
    {
        return new com.flurry.org.codehaus.jackson.map.JsonMappingException(p3, p2.getTokenLocation());
    }

    public static com.flurry.org.codehaus.jackson.map.JsonMappingException from(com.flurry.org.codehaus.jackson.JsonParser p2, String p3, Throwable p4)
    {
        return new com.flurry.org.codehaus.jackson.map.JsonMappingException(p3, p2.getTokenLocation(), p4);
    }

    public static com.flurry.org.codehaus.jackson.map.JsonMappingException wrapWithPath(Throwable p4, com.flurry.org.codehaus.jackson.map.JsonMappingException$Reference p5)
    {
        com.flurry.org.codehaus.jackson.map.JsonMappingException v0_1;
        if (!(p4 instanceof com.flurry.org.codehaus.jackson.map.JsonMappingException)) {
            String v1 = p4.getMessage();
            if ((v1 == null) || (v1.length() == 0)) {
                v1 = new StringBuilder().append("(was ").append(p4.getClass().getName()).append(")").toString();
            }
            v0_1 = new com.flurry.org.codehaus.jackson.map.JsonMappingException(v1, 0, p4);
        } else {
            v0_1 = ((com.flurry.org.codehaus.jackson.map.JsonMappingException) p4);
        }
        v0_1.prependPath(p5);
        return v0_1;
    }

    public static com.flurry.org.codehaus.jackson.map.JsonMappingException wrapWithPath(Throwable p1, Object p2, int p3)
    {
        return com.flurry.org.codehaus.jackson.map.JsonMappingException.wrapWithPath(p1, new com.flurry.org.codehaus.jackson.map.JsonMappingException$Reference(p2, p3));
    }

    public static com.flurry.org.codehaus.jackson.map.JsonMappingException wrapWithPath(Throwable p1, Object p2, String p3)
    {
        return com.flurry.org.codehaus.jackson.map.JsonMappingException.wrapWithPath(p1, new com.flurry.org.codehaus.jackson.map.JsonMappingException$Reference(p2, p3));
    }

    protected void _appendPathDesc(StringBuilder p3)
    {
        java.util.Iterator v0 = this._path.iterator();
        while (v0.hasNext()) {
            p3.append(((com.flurry.org.codehaus.jackson.map.JsonMappingException$Reference) v0.next()).toString());
            if (v0.hasNext()) {
                p3.append("->");
            }
        }
        return;
    }

    public String getMessage()
    {
        String v0 = super.getMessage();
        if (this._path != null) {
            StringBuilder v1_1;
            if (v0 != null) {
                v1_1 = new StringBuilder(v0);
            } else {
                v1_1 = new StringBuilder();
            }
            v1_1.append(" (through reference chain: ");
            this._appendPathDesc(v1_1);
            v1_1.append(41);
            v0 = v1_1.toString();
        }
        return v0;
    }

    public java.util.List getPath()
    {
        java.util.List v0_2;
        if (this._path != null) {
            v0_2 = java.util.Collections.unmodifiableList(this._path);
        } else {
            v0_2 = java.util.Collections.emptyList();
        }
        return v0_2;
    }

    public void prependPath(com.flurry.org.codehaus.jackson.map.JsonMappingException$Reference p3)
    {
        if (this._path == null) {
            this._path = new java.util.LinkedList();
        }
        if (this._path.size() < 1000) {
            this._path.addFirst(p3);
        }
        return;
    }

    public void prependPath(Object p2, int p3)
    {
        this.prependPath(new com.flurry.org.codehaus.jackson.map.JsonMappingException$Reference(p2, p3));
        return;
    }

    public void prependPath(Object p2, String p3)
    {
        this.prependPath(new com.flurry.org.codehaus.jackson.map.JsonMappingException$Reference(p2, p3));
        return;
    }

    public String toString()
    {
        return new StringBuilder().append(this.getClass().getName()).append(": ").append(this.getMessage()).toString();
    }
}
