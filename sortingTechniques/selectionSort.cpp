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
int n, a[100];
// 5 4 3 1 2 , 1 4 3 5 2 , 1 2 3 5 4 
// swaping ith element with the smallest one of the remaining array
void selectionSort(int n)
{
    for (int out = 0; out < n; ++out)
    {
        int mn=out;
        for (int inner = out + 1; inner < n; ++inner)
            if (a[inner] < a[mn]) mn = inner;
        swap(a[mn], a[out]);
    }
}
int main()
{
    input; 
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    selectionSort(n);
    for (int i = 0; i < n; ++i)cout << a[i]<<" ";
}
