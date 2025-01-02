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
        ll x, i, tm, sum = 0, j = 0;
        string st;
        cin >> x;
        vector<ll> v;
        for (i = 0; i < x; i++)
        {
            cin >> tm;
            v.push_back(tm);
            sum++;
        }
        sort(v.begin(), v.end());
        // for(i=0;i<x;i++)
        // {
        //     if(v[v.size()-1] == 0)
        //     {
        //         v.pop_back();
        //     }
        //     else
        //     {
        //         break;
        //     }
        // }
        // for(auto a: v)
        // {
        //     cout<<a<<" ";
        // }ck
        for (i = 0; i < v.size() - 1; i++)
        {
            if (v[i] != v[i + 1])
            {
                cout << char(j + 97);
                j = 0;
            }
            else
            {
                cout << char(j + 97);
                j++;
            }
        }
        i--;
        if (v[i] != v[i + 1])
        {
            j = 0;
            cout << char(j + 97);
        }
        else
        {
            cout << char(j + 97);
        }

        cout << nl;
    }
}
