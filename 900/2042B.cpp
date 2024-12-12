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
        ll x, i, temp, sum = 0, ans = 0,j;
        cin >> x;

        map<ll, ll> m1, m2;
        vector<ll> v;
        for (i = 0; i < x; i++)
        {
            cin >> temp;
            m1[temp]++;
        }
        for (auto a : m1)
        {
            v.push_back(a.second);
        }
        sort(v.begin(), v.end());

        temp = x;
        ll c = 0,check=1;

        for (i = 0; i < v.size(); i++)
        {
            for(j=0;j<v[i];j++)
            {
                if (c % 2 == 0)
                {
                    if(check)
                    {
                      if (v[i] == 1)
                    {
                        ans += 2;
                        
                    }
                    else 
                    {
                        ans++;
                    }  
                    }
                    check = 0;
                    
                }
                
                
                c++;
            }
            check =1;
        }

        

        cout << ans << nl;
    }
}
