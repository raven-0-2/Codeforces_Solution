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

const int Q = 3001;
int k=0;
int prm[Q];

void prim()
{   
    for(int i=2;i<Q;i++)
    {
        bool flag = true;
        
        for(int j = 2; j*j <=i ; j++)
        {
            if(i%j == 0)
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            prm[k] = i;
            k++;
        }
    }
}

int main()
{

    raven();
    prim();
    
    ll x,i,j,sum = 0;
    cin>>x;
    
    for(i=1;i<=x;i++)
    {
        bool f1 = false , f2 = false;
        for(j=0;j<k-1;j++)
        {
            if(i%prm[j] == 0 && !f1)
            {
                
                f1 = true;
            }
            else if(i%prm[j] == 0 && !f2)
            {
                //cout<<prm[j]<<nl;
                f2 = true;
            }
            else if(i%prm[j] == 0 && f1 && f2)
            {
                f1 = false ;
                f2 = false;
                break;
            }
        }
        if(f1 && f2)
        {
           // cout<<i<<nl;
            sum++;
        }
    }
    
    cout<<sum;
    
}
