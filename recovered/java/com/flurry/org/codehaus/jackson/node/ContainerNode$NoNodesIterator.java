package com.flurry.org.codehaus.jackson.node;
public class ContainerNode$NoNodesIterator implements java.util.Iterator {
    static final com.flurry.org.codehaus.jackson.node.ContainerNode$NoNodesIterator instance;

    static ContainerNode$NoNodesIterator()
    {
        com.flurry.org.codehaus.jackson.node.ContainerNode$NoNodesIterator.instance = new com.flurry.org.codehaus.jackson.node.ContainerNode$NoNodesIterator();
        return;
    }

    private ContainerNode$NoNodesIterator()
    {
        return;
    }

    public static com.flurry.org.codehaus.jackson.node.ContainerNode$NoNodesIterator instance()
    {
        return com.flurry.org.codehaus.jackson.node.ContainerNode$NoNodesIterator.instance;
    }

    public boolean hasNext()
    {
        return 0;
    }

    public com.flurry.org.codehaus.jackson.JsonNode next()
    {
        throw new java.util.NoSuchElementException();
    }

    public bridge synthetic Object next()
    {
        return this.next();
    }

    public void remove()
    {
        throw new IllegalStateException();
    }
}
