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

int myBinary(vector<ll> &v,int tar)
{
    int t = tar,l=v.size(),f=0,m=0;

    while(f+1 < l)
    {
        m = (l+f)/2;
        cout<<m<<" ";
        if(v[m]<=t)
        {
            f=m;
        }
        else if(v[m]>t)
        {
            l=m;
        }
    }
    ck
    return f+1;
    
    

}

int main()
{

    raven();

    ll x,y,i,j,temp;
    cin>>x;
    vector<ll> v;
    for(i=0;i<x;i++)
    {
        cin>>y;
        v.push_back(y);
    }
    // sort(v.begin(),v.end());
    // vector<ll>s;
    // cin>>y;
    // for(i=0;i<y;i++)
    // {
    //     cin>>temp;
        
    //     if(temp<v[0])
    //     {
    //         cout<<0<<nl;
    //     }
    //     else if(temp>=v[x-1])
    //     {
    //         cout<<x<<nl;
    //     }
    //     else
    //     {
    //         cout<<myBinary(v,temp)<<nl;
    //     }
    //     // else
    //     // {
    //     //     int x =myBinary(v,temp);
    //     //     cout<<x<<nl;
    //     //     // if(v[x]<temp)
    //     //     // {
    //     //     //     cout<<x+1<<nl;
    //     //     // }
    //     //     // else
    //     //     // {
    //     //     //     cout<<x<<nl;
    //     //     // }
            
            
    //     // }
    //}

    cin>> temp;
    cout<<myBinary(v,temp);
   
    
}
