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

    string st;
    cin >> st;
    ll i, j;
    bool f1 = true, f2 = true, f3 = true ;

    // for (i = 0; i < st.size(); i++)
    // {

    //     if (st[0] <= 97 && st[0] >= 123)
    //     {ck
    //         f1 = false;
    //         break;
    //     }
    //     else if (st[i] > !65 && st[i] < !90 && i != 0)
    //     {
    //         f1 = false;
    //     }

    // }

    for (i = 0; i < st.size(); i++)
    {

        if ((st[i] <65 || st[i] >90) && f1)
        {
            f1 = false;
        }
        if (f2)
        {
            if (st[0] < 97 || st[0] > 122)
            {
                f2 = false;
            }
            else if ((st[i] < 65 || st[i] >90) && i != 0)
            { 
                f2 = false;
            }
        }
    }

    for (i = 0; i < st.size(); i++)
    {
        if (f2)
        {
            if (st[i] >= 97 && st[i] < 123)
            {
                cout << char(st[i] - 32);
            }
            else if (st[i] >= 65 && st[i] <= 90)
            {
                cout << char(st[i] + 32);
            }
        }
        else if (f1)
        {
            cout << char(st[i] + 32);
        }
        else
        {
            cout<<st[i];
        }
    }
}
