#include<bits/stdc++.h>
#define ll long long
#define FI                      freopen("input.txt", "r", stdin);
#define FO                      freopen("output.txt", "w", stdout);
using namespace std;
ll phi(ll n)
{
    ll res = n;
    for(ll p = 2; p * p <= n; p++)
    {
        if(n % p == 0)
        {
            while(n % p == 0)
                n /= p;
            res -= res/p;

        }
    }
    if(n > 1)
        res -= res/n;
    return res;
}
int main()
{
    FI FO
    ll n;
    while(scanf("%lld",&n),n)
    {
        if(n == 1)
            printf("0\n");
        else
        {
            ll ans = phi(n);
            printf("%lld\n",ans);
        }
    }
    return 0;
}
