#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long
#define YES "YES\n"
#define NO "NO\n"
#define Yes "Yes\n"
#define No "No\n"
#define ck cout << '*' << nl;
#define While \
    ll t;     \
    cin >> t; \
    while (t--)

void raven()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main()
{

    raven();

   While
   {
    ll x,sum=0,i,to;
    vector <string> st;
    string s;
    cin>>x>>to;

    for(i=0;i<x;i++)
    {
        cin>>s;
        st.push_back(s);
       
    }
     for(i=0;i<x;i++)
    {
        if(st[i].size() <= to)
        {
            //cout<<to;
            sum++;
            to-=st[i].size();
        }
        else break;
    }
    
    cout<<sum<<nl;
   }
    
}
