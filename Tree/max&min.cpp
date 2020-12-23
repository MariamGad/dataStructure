int minValue()
{
    Node* current = root;
    Node* parent=new Node();
    while (current != NULL)
    {
        parent = current;
        current = current->leftChild;
    }
    return parent->data;
}
int MaxValue()
{
    Node* current = root;
    Node* parent = new Node;
    while (current!=NULL)
    {
        parent = current;
        current = current->rightChild;
    }
    return parent->data;
}
