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
    string st;
    ll x,i,j;
    cin>>x>>st;
    char a='a',b='b',c='c',d='d',e='e';
    for(i=0;i<x;)
    { 
        if(i+3 == x)
        {
            cout<<st[i]<<st[i+1]<<st[i+2];
            break;
        }
        else if(i+2 == x)
        {
            cout<<st[i]<<st[i+1];
            break;
        }
        if((st[i] == b || st[i] == c || st[i] == d) && (st[i+1] == a || st[i+1] == e) && (st[i+2] == b || st[i+2] == c || st[i+2] == d) && (st[i+4] == a || st[i+4] == e))
        {
            cout<<st[i]<<st[i+1]<<st[i+2]<<'.';
            i+=3;
        }
        else if((st[i] ==  b || st[i] == c || st[i] == d) && (st[i+1] == a || st[i+1] == e))
        {
            cout<<st[i]<<st[i+1]<<'.';
            i+=2;
        }
    }
    cout<<nl;
   }
    
}
