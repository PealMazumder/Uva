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
#define	gcd(a,b)					__gcd(a,b)
#define	lcm(a,b)					(a*b)/gcd(a,b)
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
void solve(int a, int c)
{
	if(c%a != 0)
	{
		printf("NO SOLUTION\n");
		return;
	}
	map<int, int> aa = primeFact(a);
	map<int, int> cc = primeFact(c);
	int b = 1;
	for(auto it = cc.begin(); it != cc.end(); it++)
	{
		if(it->second > aa[it->first])
		{
			b = (b * pow(it->first, it->second));
		}
	}
	printf("%d\n",b);
}
int main()
{
//	FI
//	FO
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,c;
		scanf("%d%d",&a,&c);
		solve(a,c);
	}
    return 0;
}

