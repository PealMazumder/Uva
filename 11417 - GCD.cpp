///Problem Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2412
#include<bits/stdc++.h>
#define	ll	long long
#define	pb	push_back
#define	sz(v)	(int)v.size()
#define	nl	"\n"
using namespace std;
int gcd(int a, int b)
{
	if(b == 0) return a;
	return gcd(b, a % b);
}
bool solve()
{
	int n;
	scanf("%d",&n);
	if(!n) return false;
	int ans = 0;
	for(int i = 1; i<n; i++)
		for(int j = i+1; j<=n; j++)
			ans += gcd(j, i);
	printf("%d\n", ans);
	return true;
}
int main()
{
	bool ck = true;
	while(ck)
		ck = solve();

	return 0;
}


