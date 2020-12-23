#include<bits/stdc++.h>
#define input ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define ii pair<int,int>
#define pll pair<ll,ll>
#define dl endl
#define ft first
#define sc second
using namespace std;
struct Node {
    int data;
    Node* leftChild;
    Node* rightChild;
}; struct Node* root=NULL;

// find a node with given key
bool find(int key)
{
    Node* current = root;
    
    while (current->data != key)
    {
        if (key < current->data) current = current->leftChild;
        else current = current->rightChild;
        if (current == NULL) return false;
    }
    return true;
}
void insert(int key)
{
    Node* newNode = new Node();
    newNode->data = key;
    if (root == NULL) root = newNode;
    else
    {
        Node* current = root;
        Node* parent;
        while (true)
        {
            parent = current;
            if (key < current->data)
            {
                current = current->leftChild;
                if (current == NULL) { parent->leftChild = newNode; return; }
            }
            else
            {
                current = current->rightChild;
                if (current == NULL) { parent->rightChild = newNode; return; }
            }
        }
    }
}
void preOrder(Node* r)
{
    if (r != NULL)
    {
        cout << r->data << " ";
        preOrder(r->leftChild);
        preOrder(r->rightChild);
    }
}
void inOrder(Node* r)
{
    if (r != NULL)
    {
        inOrder(r->leftChild);
        cout << r->data << " ";
        inOrder(r->rightChild);
    }
}
void postOrder(Node* r)
{
    if (r != NULL)
    {
        postOrder(r->leftChild);
        postOrder(r->rightChild);
        cout << r->data << " ";
    }
}
int main()
{
    input;
    insert(5);
    insert(8);
    insert(4);
    preOrder(root); cout << dl;
    inOrder(root); cout << dl;
    postOrder(root); cout << dl;
}
