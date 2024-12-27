#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long
#define YES "YES\n"
#define NO "NO\n"
#define Yes "Yes\n"
#define No "No\n"
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
        ll a, b, c, d, ans;
        cin >> a >> b >> c;
        if (c != 0)
        {
            if (c % 2 != 0)
            {
                b--;
            }
            
        }

        if (a > b)
        {
            cout << "First" << nl;
        }
        else
        {
            cout << "Second" << nl;
        }
    }
}

