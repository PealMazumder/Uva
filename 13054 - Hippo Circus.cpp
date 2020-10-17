///Problem Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4952
#include<bits/stdc++.h>
#define	ll	long long
#define	pb	push_back
#define	sz(v)	(int)v.size()
#define	nl	"\n"
using namespace std;
int casino = 0;
void solve()
{
	int n, h, ta, td;
	scanf("%d %d %d %d", &n, &h, &ta, &td);
	int ar[n];
	for(int i = 0; i<n; i++)
		scanf("%d", &ar[i]);
	printf("Case %d: ", ++casino);
	if(td >= 2*ta)
	{
		printf("%lld\n", ta*1LL*n);
		return;
	}
	sort(ar, ar+n);
	int i = 0, j = n-1;
	ll ans = 0;
	while(i <= j)
	{
		if(ar[i] + ar[j] >= h || i == j)
			ans += ta, j--;
		else
			i++, j--, ans += td; 
		
	}
	printf("%lld\n", ans);
}
int main()
{

	int t;
	scanf("%d",&t);
	while(t--)
	    solve();

	return 0;
}


