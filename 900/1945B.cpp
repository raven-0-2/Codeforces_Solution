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
        ll a,b,x,ans1=0,ans2=0;
        cin>>a>>b>>x;
         ans1 = x/a +1;
        ans2 = x/b +1;
        
        
        
        cout<<ans1+ans2<<nl;
    }
}
