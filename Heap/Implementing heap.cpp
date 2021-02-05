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
// Implementing MAX_HEAP using **vector**
class Heap
{
    private:
        vector<int>heap;
        int parent(int child);
        int left(int parent);
        int right(int parent);
        int Size();
        void trickelUp(int indx);
        void trickelDown(int indx);

    public:
        Heap(){}
        void insert(int key);
        int remove();
        void Display();
};

int Heap::Size()
{
    return heap.size();
}

int Heap::parent(int child)
{
    if (child == 0) return -1;
    return (child - 1) / 2;
}

int Heap::left(int parent)
{
    if (parent * 2 + 1 >= heap.size()) return -1;
    return parent * 2 + 1;
}

int Heap::right(int parent)
{
    if (parent * 2 + 2 >= heap.size()) return -1;
    return parent * 2 + 2;
}

void Heap::insert(int key) 
{
    heap.push_back(key);
    trickelUp(heap.size() - 1);
}

int Heap::remove()    // remove max value in heap
{
    if (heap.size() == 0) return cout << "Empty heap",-1;
    heap[0] = heap.at(heap.size() - 1);
    heap.pop_back();
    trickelDown(0);
    return heap[0];
}

void Heap::trickelUp(int indx)
{
    int bottom = heap[indx];
    while (indx > 0 && bottom > heap[parent(indx)])
    {
        heap[indx] = heap[parent(indx)];
        indx = parent(indx);
    }
    heap[indx] = bottom;
}

void Heap::trickelDown(int indx)
{
    int larger, L = left(indx), R = right(indx);
    if (L >= 0 && R >= 0 && heap[L] > heap[R]) larger = L;
    else larger = R;
    if (larger > 0)
    {
        int temp = heap[indx];
        heap[indx] = heap[larger];
        heap[larger] = temp;
        trickelDown(larger);
    }
}

void Heap::Display()
{
    for (auto i : heap) cout << i<<" ";
}

int main()
{
    input;
    Heap h;
    h.insert(3);
    h.insert(9);
    h.insert(7);
    h.insert(8);
    h.insert(4);
    h.Display(); cout << dl;
    h.remove();
    h.Display();
}
