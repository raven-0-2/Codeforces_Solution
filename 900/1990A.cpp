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
        ll x, i, sum = 0, ans = 0, big = 0;
        cin >> x;
        vector<ll> v;
        map<ll, ll> m;
        for (i = 0; i < x; i++)
        {
            ll temp;

            cin >> temp;

            if (temp > big)
            {
                big = temp;
            }

            m[temp]++;
        }
        // if (m[big] % 2 != 0)
        // {
        //     cout << YES;
        // }
        // else
        // {
        ll odd = 0;
        bool flag = false; 
        for (auto a : m)
        {
            if (a.second % 2 != 0)
            {
                flag=true ;
                break;
            }
        }
        cout<<(flag?YES : NO);
        //}
    }
}
