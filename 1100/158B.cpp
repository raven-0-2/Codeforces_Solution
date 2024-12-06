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

    ll x, i, temp, ans = 0, two=0, ot=0, twoone = 0, one = 0;
    cin >> x;
    ll ar[5] = {0};
    for (i = 0; i < x; i++)
    {
        cin >> temp;
        ar[temp]++;
    }

    two = ar[2] / 2;
    ar[2] = ar[2] % 2;
    if (ar[1] >= 1 && ar[3] >= 1)
    {
        ot = min(ar[1], ar[3]);
        ar[1] -= ot;
        ar[3] -= ot;
    }

    if (ar[2] == 1 && ar[1] >= 1)
    {
        twoone = 1;
        ar[2]--;
        if(ar[1] >1)ar[1]-=2;
        else ar[1]--;
    }
    one = ar[1] / 4;
    ar[1] = (ar[1] % 4 !=0);
    ans = ans + ar[4] + ot + two + twoone + ar[1] + ar[2] + ar[3] + one;
    cout << ans;
}
