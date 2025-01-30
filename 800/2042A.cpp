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
        ll x, k, i, j, sum = 0;
        cin >> x >> k;
        vector<ll> v;
        for (i = 0; i < x; i++)
        {
            cin >> j;
            v.push_back(j);
        }
        sort(v.begin(), v.end(), greater<ll>());

        for (i = 0; i < x - 1; i++)
        {
            v[i + 1] = v[i] + v[i + 1];
        }
        for (i = 0; i < x - 1; i++)
        {
            if (v[i] <= k && v[i + 1] > k)
            {
                cout << k - v[i];
            }
            
        }
        if(k>=v[x-1])
        {
            cout<<k-v[x-1];
        }

        // for(auto a:v)
        // {
        //     cout<<a;
        // }
        // for (i = 0; i < x; i++)
        // {

        //     if (sum + v[i + 1] >= k && i+1 != x)
        //     {
        //         cout << k - sum;
        //         break;
        //     }
        //     if (sum < k)
        //     {

        //         sum += v[i];
        //     }
        // }

        cout << nl;
    }
}
