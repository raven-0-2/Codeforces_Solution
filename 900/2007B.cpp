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
        ll x, y, i, j, big = 0, sbig = 0;
        cin >> x >> y;
        ll ar[x];
        for (i = 0; i < x; i++)
        {
            cin >> ar[i];
            if (ar[i] > big)
            {
                big = ar[i];
            }
            // if (ar[i] > sbig && ar[i] != big)
            // {
            //     sbig = ar[i];
            // }
        }
        for (i = 0; i < y; i++)
        {
            ll p, q;
            char ch;
            cin >> ch >> p >> q;
            for (j = 0; j < x; j++)
            {
                if (ch == '+')
                {
                    if (ar[j] >= p && ar[j] <= q)
                    {
                        ar[j]++;
                        if (ar[j] > big)
                        {
                            big = ar[j];
                        }
                        // if (ar[i] > sbig && ar[i] != big)
                        // {
                        //     sbig = ar[i];
                        // }
                    }
                }
                else
                {
                    if (ar[j] >= p && ar[j] <= q)
                    {

                        ar[j]--;
                    }
                }
            }

            if (ch == '-')
            {
                big = 0;
                for (j = 0; j < x; j++)
                {
                    if(ar[j]>big)
                    {
                        big = ar[j];
                    }
                }
            }
            cout << big << " ";
        }
        cout << nl;
    }
}
