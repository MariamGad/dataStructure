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
    Node* next;
};
struct Node* first=NULL;
struct Node* last=NULL;
void insertFirst(int d)
{
    Node* newNode = new Node;
    newNode->data = d;
    if (last == NULL) last = newNode;
    newNode->next = first;
    first = newNode;
}
void insertLast(int d)
{
    Node* newNode = new Node;
    newNode->data = d;
    if (first == NULL) first = newNode;
    last->next = newNode;
    last = newNode;
}

// assume not empty list
int deleteFirst()  
{
    Node* tmp = new Node;
    tmp = first;
    if (first->next == NULL) last = NULL;
    first = first->next;
    return tmp->data;
}
int deleteLast()
{
    Node* tmp = new Node;
    Node* ptr = new Node;
    
    tmp = last;
    if (first->next == NULL) last = NULL, first = first->next;
    else
    {
        ptr = first;
        while (ptr->next->next != NULL) ptr = ptr->next;
    }
    last = ptr->next = NULL;
    return tmp->data;
}
bool find(int key)
{
    Node* curr = new Node;
    curr = first;
    while (curr != NULL)
    {
        if (curr->data == key) return 1;
        curr = curr->next;
    }
    return 0;
}
void display()
{
    Node* ptr = new Node;
    ptr = first;
    while (ptr != NULL)
    {
        cout << ptr->data;
        ptr = ptr->next;
    }
}

int main()
{
    input; 
    insertFirst(3);
    insertFirst(4);
    insertFirst(4);
    cout << deleteLast()<<dl;
    cout << deleteFirst()<<dl;
    display();
}
