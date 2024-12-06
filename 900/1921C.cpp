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
        ll n,f,a,b,i;
        
        cin>>n>>f>>a>>b;
        ll ar[n];
        for(i=0;i<n;i++)
        {

            cin>>ar[i];
            if(i==0)
            {
               
                if(ar[i]*a <=b)
                {
                    f -= ar[i]*a;
                }
                else
                {
                    f-=b;
                }
            }
            else
            {
                 if((ar[i]-ar[i-1] )* a <=b)
                 {
                     f -= (ar[i]-ar[i-1]) *a;
                 }
                 else
                 {
                    f-=b;
                 }

                
            }
            //cout<<f<<nl;
        }
        cout<<(f>0 ? YES:NO );   
    }
}
