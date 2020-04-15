#include<bits/stdc++.h>
#define	fast						ios::sync_with_stdio(false);cin.tie(0);cout.tie(NULL);
#define rep(i,n)					for(int i = 1; i<=n; i++)
#define all(p)						p.begin(),p.end()
#define	mem(ar,val)					memset(ar, val, sizeof(ar))
#define sz(c)						(int)c.size()
#define pb(x)						push_back(x)
#define mkp(x,y)					make_pair(x,y)
#define SS(a,b)						scanf("%lld%lld",&a,&b)
#define SSS(a,b,c)					scanf("%lld%lld%lld",&a,&b,&c)
#define S(a)						scanf("%lld",&a)
#define PP(a,b)						printf("%lld %lld\n",a,b)
#define PPP(a,b,c)					printf("%lld %lld %lld\n",a,b,c)
#define P(a)						printf("%lld\n",a)
#define ff						first
#define ss						second
#define gap						<<" "<<
#define ll						long long
#define nl						"\n"
#define MAX(a, b)					((a) > (b) ? (a) : (b))
#define MIN(a, b)					((a) < (b) ? (a) : (b))
#define FI						freopen("input.txt", "r", stdin);
#define FO						freopen("output.txt", "w", stdout);
using namespace std;
const int INF = 0x7f7f7f7f;
const int M = 1e9 + 7;
int primeFact(ll n)
{
	int fac = 1;
	for(ll i = 2; i*i<=n; i++)
	{
		if(!(n%i))
		{
			int cnt = 0;
			while(!(n%i))
			{
				cnt++;
				n /= i;
			}
			fac *=(cnt+1);
		}
	}
	if(n>1)
		fac *= 2;
	return fac;
}
int main()
{
	fast
	int t;
	cin>>t;
	while(t--)
	{
		ll l,u;
		cin>>l>>u;
		int mx = 0, mxd = 0;
		for(int i = l; i<=u; i++)
		{
			int d = primeFact(i);
			if(d>mxd)
			{
				mx = i;
				mxd = d;
			}
		}
		cout<<"Between "<<l<<" and "<<u<<", "<<mx<<" has a maximum of "<<mxd<<" divisors.\n";
	}
    return 0;
}



