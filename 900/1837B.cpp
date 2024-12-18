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
    ll x,i,sum=0;
    cin>>x;
    map <ll , bool> mp;
    string st;
    cin>>st;

    for(i=0;i<st.size();i++)
    {
        if(st[i] == '>')
        {
            
            mp[x]=true;
            x--;

        }
        else
        {
           
            mp[x] =true;
            x++;

        }
    }
    if(st[st.size()-1] == '>')
        {
           
            mp[x]=true; 
            x--;

        }
        else
        {
            
            mp[x] =true;
            x++;

        }

    for(auto k : mp)
    {
       cout<<k.first<<nl;
        if(k.second)
        {
            sum++;
        }
    }
    cout<<sum<<nl;

   }
    
}
