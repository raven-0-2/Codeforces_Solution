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
        ll x;
        string st;
        cin >> st;
        x = stoi(st);

        if (x % 33 == 0)
        {
            cout << YES;
        }
        else
        {
            for (int i = 0; i < st.size() - 1; i++)
            {

                if (st[i] == '3' && st[i + 1] == '3')
                {
                    st.erase(st.begin() + i, st.begin() + i + 2);
                    i--;
                }
            }
            x = stoi(st);
            if (x % 33 == 0)
            {
                cout <<YES;ck
            }
            else
            {
                cout << NO;
            }
            cout<< x;
        }
    }
}