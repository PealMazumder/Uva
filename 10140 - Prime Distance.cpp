#include <cmath>
#include <climits>
#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <iterator>
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
const int N = 1000000;
bool prime[N];
vector<int>p;
void sieve()
{
	prime[2] = true;
	for(int i = 3; i<=N; i+=2)
		prime[i] = true;
	prime[0] = prime[1] = false;
	for(int i = 3; i*i<=N; i += 2) 
	{
		if(prime[i])
		{
			for(int j = i*i; j<=N; j += 2*i)
				prime[j] = false;
		}
	}	
	p.pb(2);
	for(int i = 3; i<=N; i += 2)
		if(prime[i])
			p.pb(i);	
}
bool isPrime(int n)
{
	if(n < N)
		return prime[n];
	int sq = sqrt(n);
	for(int i = 0; i < sz(p) && p[i] <= sq; i++)
		if(n % p[i] == 0) return false;
	return true;
} 
int main()
{
//	fast
//	FI
//	FO
	sieve();
//	cout<<p.back()<<nl;
	int l,u;
	while(scanf("%d%d",&l,&u)!=EOF)
	{
		int cdif = INT_MAX, fdif = -1,pre = -1, cl,cr,fl,fr;
		bool flag = false;
		for(ll i = l; i<= u; i++)
		{
			if(isPrime(i))
			{
				if(pre == -1)
					pre = i;
				else
				{
					int dif = i - pre;
					if(dif<cdif)
					{
						cdif = dif;
						cl = pre;
						cr = i;
					}
					if(dif>fdif)
					{
						fdif = dif;
						fl = pre;
						fr = i;
					}
					flag = true;
					pre = i;
				}
			}
		}
		if(flag)
			printf("%d,%d are closest, %d,%d are most distant.\n",cl,cr,fl,fr);
		else
			printf("There are no adjacent primes.\n");
	}
    return 0;
}

