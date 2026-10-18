package com.flurry.org.apache.avro.io.parsing;
public class Symbol$EnumLabelsAction extends com.flurry.org.apache.avro.io.parsing.Symbol$IntCheckAction {
    public final java.util.List symbols;

    public Symbol$EnumLabelsAction(java.util.List p2)
    {
        super(p2.size());
        super.symbols = p2;
        return;
    }

    public int findLabel(String p3)
    {
        int v0;
        if (p3 == null) {
            v0 = -1;
        } else {
            v0 = 0;
            while (v0 < this.symbols.size()) {
                if (!p3.equals(this.symbols.get(v0))) {
                    v0++;
                }
            }
        }
        return v0;
    }

    public String getLabel(int p2)
    {
        return ((String) this.symbols.get(p2));
    }
}
