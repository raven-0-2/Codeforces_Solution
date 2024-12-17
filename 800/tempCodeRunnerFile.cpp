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
        ll n,k,b,c,i,tm1,tm2 ,ans =0;
        cin>>n>>k;
        map <ll,ll> mp,temp;
        for(i=0;i<k;i++)
        {
            cin>>tm1>>tm2;
            
            mp[tm1] += tm2; 
        }
        //sort(mp.begin() , mp.end());
        vector<ll> v;
        for(auto o :mp)
        {
            //cout<<o.first <<" "<<o.second<<nl;
            v.push_back(o.second);
        }
        sort(v.begin() ,v.end() ,greater<ll>() );

        
        for(auto o : v)
        {
            n--;
            ans+= o;
            if(n==0)break;
        }
        cout<<ans<<nl;
        
    }
   
}
