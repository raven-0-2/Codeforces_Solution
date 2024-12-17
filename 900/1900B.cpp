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
        vector<pair<ll, ll>> pr;

        ll t1, t2, t3, i;
        cin >> t1 >> t2 >> t3;
        pr.push_back({t1, 1});
        pr.push_back({t2, 2});
        pr.push_back({t3, 3});

        sort(pr.begin(), pr.end());

        if ((pr[2].first - pr[0].first) % 2 == 0  && (pr[2].first - pr[0].first) != 0)
        {
            int t = (pr[2].first - pr[0].first) / 2;
            pr[0].first = 0;
            pr[1].first = pr[1].first - t;
            pr[2].first = 0;
        }
        else if ((pr[2].first - pr[1].first) % 2 == 0 && (pr[2].first - pr[1].first) !=0) 
        {
            int t = (pr[2].first - pr[1].first) / 2;
            pr[0].first = pr[0].first - t;
            pr[1].first = 0;
            pr[2].first = 0;
        }
        else if ((pr[1].first - pr[0].first) % 2 == 0 && (pr[1].first - pr[0].first) != 0)
        {
            int t = (pr[1].first - pr[0].first) / 2;
            pr[0].first = 0;
            pr[1].first = 0;
            pr[2].first = pr[2].first - t;
        }

        if (pr[0].first == pr[1].first && pr[0].first !=pr[2].first)
        {
            pr[0].first = 0;
            pr[1].first = 0;
        }
        else if (pr[2].first == pr[1].first && pr[0].first !=pr[2].first)
        {
            pr[2].first = 0;
            pr[1].first = 0;
        }
        else if (pr[0].first == pr[2].first && pr[0].first !=pr[1].first)
        {
            pr[0].first = 0;
            pr[2].first = 0;
        }

        for (i = 0; i < 3; i++)
        {
            //cout<<pr[i].first<<" "<<pr[i].second<<nl;
            for (int j = 0; j < 3; j++)
            {
                if (pr[j].second == i + 1)
                {
                    cout << (pr[j].first ? 1 : 0) << " ";
                }
            }
        }
        cout << nl;
        //cout << pr[2].second;
    }
}
