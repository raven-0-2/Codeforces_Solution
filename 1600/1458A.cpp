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

ll gcd(ll a,ll b)
{
    if(b==0) return a;
    return gcd(b , a%b);
}

int main()
{

    raven();

   ll x,y,i,j,temp,t2=0;
   cin>>x>>y;
   ll ar1[x],ar2[y],ans[y];
   for(i=0;i<x;i++)
   {
    cin>>ar1[i];
   }
   for(i=0;i<y;i++)
   {
    cin>>ar2[i];
   }
   sort(ar1,ar1+x);
   if(x>1)
   {
    t2=ar1[1]-ar1[0];
   for(i=2;i<x;i++)
   {
    t2 = gcd(t2,ar1[i]-ar1[0]);
   }
   }
    
   //cout<<t2;

   for(i=0;i<y;i++)
   {
    ans[i] = gcd(t2,ar2[i]+ar1[0]);
   }

   for(i=0;i<y;i++)
   {
    cout<<ans[i]<<" ";
   }
    
}
