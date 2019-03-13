#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
using namespace std;

int main()
{
    //ios::sync_with_stdio(false); cin.tie(0); cout.tie(NULL);
    ll n,s;
    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    while(scanf("%lld%lld",&n,&s)==2)
    {
    	vector<ll>v(n+1);
    	for(int i =1;i<=n;i++)
    	{
   			scanf("%lld",&v[i]);
		}
		int l = 1, r = 1,ans = INT_MAX;
		ll sum = v[l];
		while(r<=n)
		{
			if(sum>=s)
			{
				ans = min(ans, r-l+1);
				sum -= v[l++]; 
			}
			else
			{
				sum += v[++r];	
			}
		}
		if(ans==INT_MAX) ans = 0;
		printf("%d\n",ans);
	}
    return 0;
}

