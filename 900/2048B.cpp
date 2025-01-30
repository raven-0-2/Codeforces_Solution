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
        ll x,k,i,j=1;
        cin>>x>>k;

        ll ar[x] ={0};

        for(i=k-1;i<x;i+=k)
        {
            ar[i] =j;
            j++;
        }
        for(i=0;i<x;i++)
        {
            if(!ar[i])
            {
                ar[i]=j;
                j++;
            }
        }

        for(i=0;i<x;i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<nl;
    }
    
}
