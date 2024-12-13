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

   ll n,x,i;
   cin>>x;
   ll ar[x];
   for(i=0;i<x;i++)
   {
    cin>>ar[i];
   }
   for(i=0;i<x;i++)
   {
    if(i == 0)
    {
        cout<<ar[1]-ar[0]<<" ";
    }
    else if(i == x-1)
    {
        cout<<ar[x-1]-ar[x-2]<<" ";
    }
    else if(ar[i]-ar[i-1] <ar[i+1]-ar[i] )
    {
        cout<<ar[i]-ar[i-1]<<" ";
    }
    else if(ar[i]-ar[i-1] >= ar[i+1]-ar[i])
    {
        cout<<ar[i+1]-ar[i]<<" ";
    }

    if(i == 0)
    {
        cout<<ar[x-1]-ar[0];
    }
    else if(i == x-1)
    {
        cout<<ar[x-1]-ar[0];
    }
    else if(ar[i]-ar[0] >ar[x-1]-ar[i] )
    {
        cout<<ar[i]-ar[0];
    }
    else if(ar[i]-ar[0] <= ar[x-1]-ar[i])
    {
        cout<<ar[x-1]-ar[i];
    }

    cout<<nl;
   }
    
}
