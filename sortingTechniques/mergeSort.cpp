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
const int N = 1e3;
int a[N], workspace[N], n;

void merge(int lowPtr,int highPtr,int upperBound)
{
    // lowPtr start of ft array ,, highPtr-1  end of it 
    // highPtr start of sec array ,, upperBound end of it 
    
    int lowerBound = lowPtr, mid = highPtr - 1,j = 0;
    int n = upperBound - lowerBound + 1;

    while (lowPtr <= mid && highPtr <= upperBound)
        a[lowPtr] < a[highPtr] ? workspace[j++] = a[lowPtr++] : workspace[j++] = a[highPtr++];

    while(lowPtr<=mid) // sec array is empty
        workspace[j++] = a[lowPtr++];

    while (highPtr <= upperBound)  // ft array is empty
        workspace[j++] = a[highPtr++];

    for (int i = 0; i < n; ++i)   
        a[lowerBound + i] = workspace[i];
}

void recMergeSort(int lowerBound,int upperBound)
{
    if (lowerBound == upperBound) return; // each array has one element 
    int mid = (lowerBound + upperBound) / 2;

    recMergeSort(lowerBound, mid);
    recMergeSort(mid + 1, upperBound);

    merge(lowerBound, mid + 1,upperBound);
}
int main()
{

    input;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    recMergeSort(0, n-1);
    for (int i = 0; i < n; ++i)  cout << a[i]<<" ";
   
}
