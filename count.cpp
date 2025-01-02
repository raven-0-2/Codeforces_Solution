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
void tc()
{
    ll x ,sum=0,temp;
    while(1)
    {
        cin>>x;
        if(x==0)
        {
            cout<<sum;
            break;
        }
        sum++;
        for(int i=0;i<x;i++)
        {
            cin>>temp;
        }
    }
}

void a()
{
    ll x ,sum=0,temp;
    string st;
    while(1)
    {
        cin>>st;
        if(st == "*")
        {
            cout<<sum;
            break;
        }
        sum++;
    }
}

int main()
{

    raven();
    
    a();
    //tc();
}
