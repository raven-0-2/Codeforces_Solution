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
    ll x,i,ans=0;
    string s;
    cin>>x>>s;
    for(i=0;i<x-2;i++)
    {
        if((s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e') || (s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p'))
        {
            ans++;
            i+=2;
        }  
    }
    cout<<ans<<nl;
   }
    
}
