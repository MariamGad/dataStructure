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
void insertionSort(int n)
{
    for (int out = 1; out < n; ++out)
    {
        int tmp = a[out],inner=out;
        while (inner > 0 && a[inner-1]>tmp)
        {
            a[inner] = a[inner - 1], --inner;
        }
        a[inner] = tmp;
    }
}
int main()
{
    input; 
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    insertionSort(n);
    for (int i = 0; i < n; ++i)cout << a[i]<<" ";
}
