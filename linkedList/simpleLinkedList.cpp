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
int n, x, k;
struct Node {
    int data;
    Node* next;
};
struct Node* head=NULL;
void insertFirst(int d)
{
    Node* newNode = new Node;
    newNode->data = d;
    newNode->next = head;
    head = newNode;
}
int deleteFirst()
{
    Node* tmp = new Node;
    tmp = head;
    head = head->next;
    return tmp->data;
}
bool find(int key)
{
    Node* curr = new Node;
    curr = head;
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
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data;
        ptr = ptr->next;
    }
}
int main()
{
    input; 
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) cin >> x, insertFirst(x);
    display();
    cout << find(k);
}
