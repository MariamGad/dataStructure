//hi brother   to brother hi

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
string s;
string reversed(string s)
{
    stack<string>st;
    string x,ans;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] != ' ') x += s[i];
        else st.push(x),x="";
    }
    st.push(x);
    while (!st.empty()) ans+= st.top(), st.pop(),ans+=' ';
    return ans;
}
int main()
{
    input;
    getline(cin, s);
    cout << reversed(s);
}
