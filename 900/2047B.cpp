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
        ll x,ar[26]={0},i,big=0,small= LLONG_MAX;
        char f,l='*';
        cin>>x;
        string st;
        cin>>st;
        map <char , ll> mp;
        for(i=0;i<st.size();i++)
        {
            mp[st[i]]++;
        }

        for(auto q : mp)
        {
            if(big<=q.second)
            {
                f=q.first;
                big = q.second;
                //cout<<q.second;
            }
        }
        for(auto q : mp)
        {
            if(small >= q.second && f !=q.first)
            {
                l=q.first;
                small = q.second;
            }
        }
        //cout<<f<<l<<nl;
        for(auto a:mp)
        {
            //cout<<a.second<<nl;
        }
        
        
        if(l == '*')
        {
            cout<<st;
        }
        else
        {
           for(i=0;i<st.size();i++)
        {
           if(st[i] == l)
           {
            st[i] =f;
            break;
           }
        } 
        cout<<st;
        }
        
       cout<<nl;
    }
}
