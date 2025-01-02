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
        string s1,s2;
        ll i,j;

        cin>>s1>>s2;

        for(i=0,j=0;i<s1.size();i++)
        {
            if(s1[i] == '?' && j<s2.size())
            {
                s1[i] = s2[j];
                j++;
            }
            else if(s1[i] == s2[j])
            {
                j++;
            }
        }
        for(i=0;i<s1.size();i++)
        {
            if(s1[i] == '?')
            {
                s1[i] = 'a';
            }
            
        }
        if(j == s2.size() )
        {
            cout<<YES<<s1<<nl;
        }
        else
        {
            cout<<NO;
        }

    }
    
}
