#include<bits/stdc++.h>
#define fast                        			ios::sync_with_stdio(false);cin.tie(0);cout.tie(NULL);
#define all(p)						p.begin(),p.end()
#define mem(ar, val)					memset(ar, val, sizeof(ar))
#define sz(c)						(int)c.size()
#define pb(x)						push_back(x)
#define ll						long long
#define nl						"\n"
#define MAX(a, b)					((a) > (b) ? (a) : (b))
#define MIN(a, b)					((a) < (b) ? (a) : (b))
#define FI                      			freopen("input.txt", "r", stdin);
#define FO                      			freopen("output.txt", "w", stdout);
using namespace std;
const int INF = 0x7f7f7f7f;

int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int f;
		ll ans = 0;
		scanf("%d",&f);
		while(f--)
		{
			ll fyard, animals, ef;
			scanf("%lld%lld%lld",&fyard,&animals,&ef);
			ans += (fyard*ef);
		}
		printf("%lld\n",ans);
		
	}
    return 0;
}

