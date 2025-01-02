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
        ll x, i, s1 = 0, s2 = 0, temp = 0;
        cin >> x;
        // map<ll, bool> mp;
        string st;
        cin >> st;

        for (i = 0; i < x; i++)
        {
            if (st[i] == '>')
            {
                if (s2)
                {
                    if (s2 > temp)
                    {
                        temp = s2;
                    }
                }
                s2 = 0;
                s1++;
            }
            else
            {
                if (s1)
                {
                    if (s1 > temp)
                    {
                        temp = s1;
                    }
                }
                s1 = 0;
                s2++;
            }
        }
        if(s1>temp)
        {
            temp=s1;
        }
        else if(s2>temp)
        {
            temp=s2;
        }
        // i--;
        // if (st[i] == st[i + 1])
        // {
        //     sum++;
        // }
        // if (sum > temp)
        // {
        //     temp = sum;
        // }

        // for(i=0;i<st.size();i++)
        // {
        //     if(st[i] == '>')
        //     {

        //         mp[x]=true;
        //         x--;

        //     }
        //     else
        //     {

        //         mp[x] =true;
        //         x++;

        //     }
        // }
        // if(st[st.size()-1] == '>')
        //     {

        //         mp[x]=true;
        //         x--;

        //     }
        //     else
        //     {

        //         mp[x] =true;
        //         x++;

        //     }

        // for(auto k : mp)
        // {
        //    //cout<<k.first<<nl;
        //     if(k.second)
        //     {
        //         sum++;
        //     }
        // }
        cout << temp + 1 << nl;
    }
}
