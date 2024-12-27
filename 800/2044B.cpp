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
        cin>>st;
        for(int i =st.size()-1;i>=0;i--)
        {
            if(st[i] == 'q')
            {
                cout<<'p';
            }
            else if(st[i] == 'p')
            {
                cout<<'q';
            }
            else if(st[i] == 'w')
            {
                cout<<'w';
            }
            
        }cout<<nl;
    }
    
}