#include<bits/stdc++.h>
#define all(p) p.begin(),p.end()
#define mem(p, v) memset(p, v, sizeof(p))
#define sz(c) (int)c.size()
#define pb(x) push_back(x)
#define ll long long
#define nl "\n"
using namespace std;

int main()
{
    //ios::sync_with_stdio(false); cin.tie(0); cout.tie(NULL);
	ll n;
    while(scanf("%lld",&n)&&n != 0)
    {
    	ll mx = 0,c = 0;
    	if(n<0)
    	{
    		n *= -1;
		}
		while(n%2 == 0)
		{
			mx = 2;
			n /= 2;
		}
		if(mx == 2) c++;
		for(ll i = 3; i*i <= n; i += 2)
		{
			while(n%i == 0)
			{
				mx = i;
				n /= i;
			}
			if(mx == i) c++;
		}
		if(n>2)
		{
			mx = n;
			c++;
		}
		if(c >= 2)
			cout<<mx<<nl;
		else
			cout<<"-1"<<nl;
	}

    return 0;
}
