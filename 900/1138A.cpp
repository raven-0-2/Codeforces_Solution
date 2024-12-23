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
    ll x,i,temp,s1=0,s2=0,j;
    vector <ll> v,v1,v2,m;
    cin>>x;

    for(i=0;i<x;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    for(i=0;i<x;i++)
    {
        if(v[i] == 1)
        {
            if(s2)
            {
                v2.push_back(s2);
                s2=0;
            }
            s1++;
        }
        if(v[i] == 2)
        {
            if(s1)
            {
                v1.push_back(s1);
                s1=0;
            }
            s2++;
        }
       // ck
    }
    if(v[x-1] ==1)
    {
        v1.push_back(s1);
    }
    else if(v[x-1] == 2)
    {
        v2.push_back(s2);
    }

    if(v[0] == 2)
    {
        bool flag = true;
        for(i=0,j=0; j<v2.size() && i<v1.size(); )
        {
            //cout<<1<<" "<<v1[i]<<" " <<v2[j]<<nl;
            s1 = min(v1[i],v2[j])*2;
            m.push_back(s1);
            
            if(flag)
            {
                j++;
                flag = false;
            }
            else
            {
                i++;
                flag = true;
            }
        }
    }
    else if(v[0] == 1)
    {
        bool flag = true;
        for(i=0,j=0; i<v1.size() && j<v2.size() ; )
        {
            //cout<<v2.size()<<nl;
            s1 = min(v1[i],v2[j])*2;
            m.push_back(s1);
            
            if(flag)
            {
                i++;
                flag = false;
            }
            else
            {
                j++;
                flag = true;
            }
        }
    }
   

    sort(m.begin(),m.end());
    cout<<m[m.size()-1];

//for(auto a : m)cout<<a<<" ";
    
}
