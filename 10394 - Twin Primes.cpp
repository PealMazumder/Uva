#include<bits/stdc++.h>
#define		fast			ios::sync_with_stdio(false);cin.tie(0);cout.tie(NULL);
#define		rep(i,n)			for(int i = 1; i<=n; i++)
#define		all(p)			p.begin(),p.end()
#define		mem(ar,val)			memset(ar, val, sizeof(ar))
#define		sz(c)			(int)c.size()
#define		pb(x)			push_back(x)
#define		mkp(x,y)			make_pair(x,y)
#define		ff			first
#define		ss			second
#define		gap			" "
#define		ll			long long
#define		pii         pair<int, int>
#define		pll         pair<long long int, long long int>
#define		nl			"\n"
#define		FI			freopen("input.txt", "r", stdin);
#define 	FO			freopen("output.txt", "w", stdout);
using namespace std;
const int INF = 0x7f7f7f7f;
const int M = 1e9 + 7;
const int N = 2e7 + 1;
vector<bool>prime(N);
vector<int> p;
vector<pair<int, int> > ans;
void sieve()
{
	for(int i = 2; i <= N; i++)
		prime[i] = true;
	prime[0] = prime[1] = false;
	
	for(int i = 2; i*i <= N; i++)
	{
		if(prime[i])
		{
			for(int j = i*i; j<=N; j += i)
				prime[j] = false;
		}
	}
	for(int i = 2; i<N; i++)
		if(prime[i]) 
			p.pb(i);
	
	ans.pb(mkp(0,0));
	for(int i = 0; i<sz(p); i++)
	{
		if(p[i] == p[i+1] - 2)
			ans.pb(mkp(p[i],p[i+1]));
	}
}
int main()
{
	fast
//	FI
//	FO
	sieve();
	int n;
	while(cin>>n)
	{
		cout<<"("<<ans[n].ff<<", "<<ans[n].ss<<")"<<nl;
	}
    return 0;
}

