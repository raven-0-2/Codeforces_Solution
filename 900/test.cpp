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
        ll m,a,b,c,i,s,ans=0;
        cin>>m>>a>>b>>c;
        s = m*2;
        m =m;
        m =m;
        if(m>=a)
        {
            ans=ans+a;
            if(m-a>=c)
            {
                ans+=c;
                c=0;
            }
            else
            {
                ans+=(m-a);
                c-=(m-a);
            }
        }
        else 
        {
            ans+=m;
        }

        if(m>=b)
        {
            ans=ans+b;
             if(m-b>=c)
            {
                ans+=c;
            }
            else
            {
                ans+=(m-b);
            }
        }
        else 
        {
            ans+=m;
        }
        
        cout<<ans<<nl;
    }
    
}
