/*
  Problem Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1425
  Tutorials:	https://en.wikipedia.org/wiki/Legendre%27s_formula
  			 	https://acmph.blogspot.com/2019/12/uva-10484-divisibility-of-factors.html
*/

#include<bits/stdc++.h>
#define all(p)						p.begin(),p.end()
#define	mem(ar,val)					memset(ar, val, sizeof(ar))
#define sz(c)						(int)c.size()
#define pb(x)						push_back(x)
#define ff						first
#define ss						second
#define gap						<<" "<<
#define ll						long long
#define nl						"\n"
#define FI						freopen("input.txt", "r", stdin);
#define FO						freopen("output.txt", "w", stdout);
using namespace std;
const int INF = 0x7f7f7f7f;
const int M = 1e9 + 7;
map<int, int> primeFact(int n)
{
	map<int, int> mp;
	for(int i = 2; i*i<=n; i++)
	{
		if(!(n%i))
		{
			int cnt = 0;
			while(!(n%i))
			{
				cnt++;
				n /= i;
			}
			mp[i] = cnt;	
		}
	}
	if(n>1)	
		mp[n] = 1;
	return mp;
}
int p[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
void solve(int n, int d)
{
	map<int, int> mp= primeFact(d);
	for(auto it = mp.begin(); it!= mp.end(); it++)
	{
		if((it->first)>97)
		{
			printf("0\n");
			return;
		}
	}
	ll ans = 1;
	for(int i = 0; i<25; i++)
	{
		if(p[i]<=n)
		{
			int f = 0,j;
			for(j = p[i]; j<=n; j *=p[i])
			{
				f += floor((double)n/j);
			}
			if(mp[p[i]]>f)
			{
				printf("0\n");
				return;
			}
			f -= mp[p[i]];
			mp[p[i]] = 0;
			ans *= (f+1);
		}
	}
	for(auto it = mp.begin(); it!= mp.end(); it++)
	{
		if((it->second)!=0)
		{
			printf("0\n");
			return;
		}
	}
	printf("%lld\n",ans);
}
int main()
{
//	FI
//	FO
	int n,d;
	while(scanf("%d%d",&n,&d),(n|d))
	{
		solve(n,d);
	}
    return 0;
}

