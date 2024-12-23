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

    ll x,temp,i,o=0,e=0,a1,a2;
    
    cin>>x;

    for(i=0;i<x;i++)
    {
        cin>>temp;
        if(temp%2 ==0)
        {
            e++;
            a1=i+1;
        }
        else
        {
            o++;
            a2=i+1;
        }
    }
    if(e==1)
    {
        cout<<a1;
    }
    else
    {
        cout<<a2;
    }
    
}
