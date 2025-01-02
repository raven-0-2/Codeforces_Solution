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
        ll x, i, j, temp, sum = 0, tar, total;
        cin >> x;
        total = ((x * (x - 1)) / 2) - 1;
        vector<ll> v;
        for (i = 0; i < x; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        bool f = false;
        for (i = 0; i < x-1; i++)
        {
            if(v[i] <= v[i+1])
            {
                f = true;
                break;
            }
            
        }
        //cout<<total<<" "<<sum;
        cout<<(f ? YES : NO);
    }
}
