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
    ll x,i,sum=0,ans=0;
    cin>>x;
    vector <ll> v;
    for(i=0;i<x;i++)
    {
        ll temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),greater<ll>());
    bool flag;
    for(i=0;i<x;i++)
    {
        if(v[i] == v[i+1] && i !=x-1)
        {
            sum++;
        } 
        else if(v[i] != v[i+1] || i == x)
        {
            sum++;
            if(sum%2 !=0)
            {
                flag = true;
            }
            else
            {
                flag = false;
            }
            
        }
    }
    cout<<(flag ? YES:NO);
   }
    
}
