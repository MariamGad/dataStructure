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
int n,a[100],cnt=0;
map<int, int>mp;
int* noDouplicate(int size)
{
    int* arr = new int[size];
    for (int i = 0; i < size; ++i)
    {
        ++mp[a[i]];
        if (mp[a[i]] == 1) arr[cnt] = a[i],++cnt;
    }
    return arr;
}
int main()
{
    input;
    int* ptr;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    ptr = noDouplicate(n);
    for (int i = 0; i < cnt; ++i) cout << ptr[i]<<" ";
}
