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

const ll N = 10e6;
ll p[N];
void Tp()
{
    for(ll i=1;i<N;i++)
    {
        p[i] = i*i;
    }
}

int main()
{

    raven();
    Tp();

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
        if(binarySearch(p ,0,N-1,ans) >0)
        {
            cout<<YES;
        }
        else
        {
            cout<<NO;
        }

    }
    
}
