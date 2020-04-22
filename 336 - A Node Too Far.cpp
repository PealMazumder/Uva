#include<bits/stdc++.h>
#define 	pb(x)			push_back(x)
#define 	ll			long long
#define 	sz(c)			(int)c.size()
#define 	nl			"\n"
#define		mkp(x,y)			make_pair(x,y)
#define		ff			first
#define		ss			second
#define 	pii			pair<int, int>
#define		FI			freopen("input.txt", "r", stdin);
#define 	FO			freopen("output.txt", "w", stdout);
using namespace std;
const int N = 100000;
map<ll, vector<ll> > adj;
int bfs(ll n, ll x)
{
	int cnt;
	if(sz(adj[n]) > 0)
		cnt = 1;
	else
		cnt = 0;
		
	map<ll,bool> vis;
	map<ll,ll>lvl;
	queue <int> q;
	vis[n] = true;
	q.push(n);
	lvl[n] = 0;
	while(!q.empty())
	{
		ll v = q.front();
		q.pop();

		for(ll u : adj[v])
		{
			if(!vis[u] && lvl[v]+1 <= x)
			{
				cnt++;
				vis[u] = true;
				lvl[u] = lvl[v] + 1;
				q.push(u);
			}
			else if(lvl[v]+1 > x)
				return cnt;
		}
	}
	return cnt;
}
int main()
{
//	FI
//	FO
	int n,casino = 0;
	while(scanf("%d",&n),n)
	{
		adj.clear();
		int cnt = 0;
		map<ll, int> flag;
		for(int i = 0; i<n; i++)
		{
			ll u,v;
			scanf("%lld%lld",&u,&v);
			adj[u].pb(v);
			adj[v].pb(u);
			if(flag[u] == 0)
			{
				cnt++;
				flag[u] = 1;
			}
			if(flag[v] == 0)
			{
				cnt++;
				flag[v] = 1;
			}
		}
//		cout<<cnt<<nl;
		ll a,b;
		while(scanf("%lld%lld",&a,&b),(a|b))
		{
			int ans = bfs(a,b);
			printf("Case %d: %d nodes not reachable from node %lld with TTL = %lld.\n",++casino,cnt-ans, a,b);
		}
	}
    return 0;
}


