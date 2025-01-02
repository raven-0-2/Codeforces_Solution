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

ll binarySearch(ll ar[], ll s, ll e, ll target)
{
    ll m = (s + e) / 2,t = target;
    if (s <= e)
    {
        if (ar[m] == t)
        {
            return m;
        }
        else if (ar[m] > t)
        {
            return binarySearch(ar, s, m - 1, t);
        }
        else if (ar[m] < t)
        {
            return binarySearch(ar, m + 1, e, t);
        }
    }
    else
    {
        return -1;
    }
}

bool mb(ll t)
{
    ll L = 10e9 ,i,j,tar=t,f=0,m;
    while(L>=f)
    {
         m=(L+f)/2;
         if(m*m == tar)return 1;
         else if(tar>m*m)
         {
            f = m+1;
         }
         else
         {
            L = m-1;
         }

    }
    return 0;
}


int main()
{

    raven();
    

    While
    {
        ll x,i,temp,ans=0;
        vector <ll> v;
        cin>>x;
        
        for(i=0;i<x;i++)
        {
            cin>>temp;

            ans+=temp;
        }
        //cout<<;
        if(mb(ans))
        {
            cout<<YES;
        }
        else
        {
            cout<<NO;
        }

    }
    
}
