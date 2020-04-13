/*
  Problem Link:	https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1721
  Tutorials on :	https://en.wikipedia.org/wiki/Legendre%27s_formula
  					https://www.youtube.com/watch?v=geLyvdjxQNg&list=PL2q4fbVm1Ik4liHX78IRslXzUr8z5QxsG&index=6
*/

#include<bits/stdc++.h>
#define ll						long long
#define nl						"\n"
#define FI						freopen("input.txt", "r", stdin);
#define FO						freopen("output.txt", "w", stdout);
using namespace std;
const int INF = 0x7f7f7f7f;
const int M = 1e9 + 7;
const int N = 1e6+7;
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
void solve(int m, int n)
{
	map<int, int> mp = primeFact(m);
	int ans = INT_MAX;
	for(auto it = mp.begin(); it != mp.end(); it++)
	{
		int idx = it->first;
		int val = it->second;
		int f = 0;
		for(int i = idx; i<=n; i *= idx)
		{
			f += floor((double)n/i);
		}
		if(f<val)
		{
			printf("Impossible to divide\n");
			return;
		}
		int tm = f/val;
		ans = min(ans, tm);
	}
	printf("%d\n",ans);
}
int main()
{
//	FI
//	FO
	int casino = 0,t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m;
		scanf("%d%d",&m,&n);
		printf("Case %d:\n",++casino);
		solve(m,n);
	}
    return 0;
}



