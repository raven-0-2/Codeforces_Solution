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

#define c(a) cout<<a<<nl;
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
        ll temp, x, i, j, ans = 0, at;
        cin >> x >> at;
        vector<ll> v;

        for (i = 0; i < x; i++)
        {

            cin >> temp;
            v.push_back(temp);
        }
        for (i = 0; at != 0; i++)
        {c(i)
            if (v[0] < v[v.size() - 1])
            {
                if (v[0] * 2 >= at)
                {
                    v[v.size() - 1] -= v[0];
                    at -= v[0];
                    v.erase(v.begin(), v.begin()+1);
                }
                else
                {
                    if (at % 2 != 0)
                    {
                        temp = at / 2;
                        v[0] -= temp;
                        v[v.size() - 1] -= temp;
                        v[0]--;
                        if (v[0] == 0)
                        {
                            v.erase(v.begin(), v.begin()+1);
                        }
                        at = 0;
                    }
                }
            }
            else if (v[0] > v[v.size() - 1])
            {
                if (v[v.size() - 1] * 2 >= at)
                {
                    v[0] -= v[v.size() - 1];
                    at -= v[v.size() - 1];
                    v.pop_back();
                }
                else
                {
                    if (at % 2 != 0)
                    {
                        temp = at / 2;
                        v[0] -= temp;
                        v[v.size() - 1] -= temp;
                        v[v.size() - 1]--;
                        if (v[v.size() - 1] == 0)
                        {
                            v.pop_back();
                        }
                        at = 0;
                    }
                }
            }
            else
            {
                if(v[0]*2 == at)
                {
                    v.pop_back();
                    v.erase(v.begin() , v.begin()+1);
                    at=0;
                }
                else
                {
                    temp = at
                }
            }
        }

        cout << v.size() << nl;
    }
}
