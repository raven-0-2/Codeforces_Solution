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

   ll x,y,sum,i,j;
   map <string , ll> mp;
   string st;
   vector <ll> v;

   cin>>x;
   for(i=0;i<x;i++)
   {
    cin>>y>>st;
    sort(st.begin(),st.end());
    if(mp[st] == 0)
    {
        mp[st] =100000;
    }
    if(mp[st]>y)
    {
        mp[st] =y;
    }
   }

    if(mp["A"] && mp["B"] &&  mp["C"])
    {
        v.push_back(mp["A"] + mp["B"] +  mp["C"]);
    }
    if(mp["A"] && mp["BC"])
    {
        v.push_back(mp["A"] + mp["BC"]);
    }
    if(mp["B"] && mp["AC"])
    {
        v.push_back(mp["B"] + mp["AC"]);
    }
    if(mp["C"] && mp["AB"])
    {
        v.push_back(mp["C"] + mp["AB"]);
    }
    if(mp["ABC"])
    {
        v.push_back(mp["ABC"]);
    }
    if(mp["AB"] && mp["BC"])
    {
        v.push_back(mp["AB"] + mp["BC"]);
    }
    if(mp["AB"] && mp["AC"])
    {
        v.push_back(mp["AB"] + mp["AC"]);
    }
    if(mp["AC"] && mp["BC"])
    {
        v.push_back(mp["AC"] + mp["BC"]);
    }

    if(v.size())
    {
       sort(v.begin(),v.end());
    cout<<v[0]; 
    }
    else
    {
        cout<<-1;
    }
    
//    for(auto a : v)
//    {
//     cout<<a<<nl;
//    }
//    for(auto a : mp)
//    {
//     cout<<a.first<<" "<<a.second<<nl;
//    }
    
}
