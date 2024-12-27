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
    ll x,i,temp,mid;;
    cin>>x;
    vector <ll> v;
    for(i=0;i<x;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end()-1);
   // mid = (x/2)+(x%2)-1;

    cout<<v[v.size()-1]+v[v.size()-2]<<nl;
   }
    
}
