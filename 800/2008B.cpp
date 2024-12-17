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
        ll x, i, s = 0, j, k = 0;
        cin >> x;
        string st, my;
        cin >> st;

        s = sqrt(x);

        if (s*s != x)
        {
            cout << No;
        }
        else
        {
            for (i = 0; i < x; i++)
            {
                my.push_back('0');
            }

            
            for (i = 0; i < s; i++)
            {
                for (j = 0; j < s; j++)
                {
                    if (i == 0 || i == s - 1)
                    {
                        my[k] = '1';
                    }
                    else if (j == 0 || j == s - 1)
                    {
                        my[k] = '1';
                    }
                    k++;
                }
            }

            if (my == st)
            {
                cout << Yes;
            }
            else
            {
                cout << No;
            }
        }
    }
}
