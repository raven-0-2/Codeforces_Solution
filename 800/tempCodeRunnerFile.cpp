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
        for (i = 0; i < x; i++)
        {
            if (sum < k)
            {

                sum += v[i];
            }

            if (sum + v[i + 1] >= k && i < x)
            {
                cout << k - sum;
                break;
            }
        }
        if (i == x)
        {
            cout << k - sum;
        }
        cout << nl;
    }
}
