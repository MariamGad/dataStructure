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
stack<char>st;
string s;
string decimalToBase(int num, int base)
{
    int rem;
    while (num > 0)
    {
        rem = num % base;
        if (rem >= 10) st.push('A' + (rem - 10));
        else st.push(rem + '0');
        num /= base;
    }
    while (!st.empty())
    {
        char x = st.top(); st.pop();
        s += x;
    }
    return s;
}
int main()
{
    input;
    int n, base;
    cin >> n >> base;
    cout << decimalToBase(n, base);
}
