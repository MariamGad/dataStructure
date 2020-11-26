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
void bubbleSort(int n)
{
    for (int out = n - 1; out >= 1; --out)
        for (int inner = 0; inner < out; ++inner)
            if (a[inner + 1] < a[inner]) swap(a[inner + 1], a[inner]);
}
int main()
{
    input; 
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    bubbleSort(n);
    for (int i = 0; i < n; ++i)cout << a[i]<<" ";
}
