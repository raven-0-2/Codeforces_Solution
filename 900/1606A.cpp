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
        string st;
        cin >> st;
        ll i = 0, j = 0, ab = 0, ba = 0;

        while (1)
        {

            for (i = 0; i < st.size() - 1; i++)
            {
                if (st[i] == 'a' && st[i + 1] == 'b')
                {
                    ab++;
                }
                if (st[i] == 'b' && st[i + 1] == 'a')
                {
                    ba++;
                }
            }
            if (ab == ba)
            {
                cout << st<< nl;
                break;
            }
            else if (ab > ba)
            {
                for (i = 0; i < st.size() - 1; i++)
                {

                    if (st[i] == 'a' && st[i + 1] == 'b')
                    {
                        if (st[i - 1] == 'b' || i == 0)
                        {
                            st[i] = 'b';
                        }
                        else if (st[i + 2] == 'a' || i + 2 == st.size())
                        {
                            st[i + 1] = 'a';
                        }
                        ab--;
                    }
                    if (ab == ba)
                        break;
                }
               
            }
            else if (ab < ba)
            {
                for (i = 0; i < st.size() - 1; i++)
                {
                    if (st[i] == 'b' && st[i + 1] == 'a')
                    {
                        if (st[i - 1] == 'a' || i == 0)
                        {
                            st[i] = 'a';
                        }
                        else if (st[i + 2] == 'b' || i + 2 == st.size())
                        {
                            st[i + 1] = 'b';
                        }
                        ba--;
                    }
                    if (ab == ba)
                    {
                        break;
                    }
                }
                
            }
            
        }
    }
}
