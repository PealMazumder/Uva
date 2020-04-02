#include<bits/stdc++.h>
#define	fast						ios::sync_with_stdio(false);cin.tie(0);cout.tie(NULL);
#define rep(i,n)						for(int i = 1; i<=n; i++)
#define all(p)						p.begin(),p.end()
#define	mem(ar,val)					memset(ar, val, sizeof(ar))
#define sz(c)						(int)c.size()
#define pb(x)						push_back(x)
#define mkp(x,y)					make_pair(x,y)
#define SS(a,b)						scanf("%lld%lld",&a,&b)
#define SSS(a,b,c)						scanf("%lld%lld%lld",&a,&b,&c)
#define S(a)						scanf("%lld",&a)
#define PP(a,b)						printf("%lld %lld\n",a,b)
#define PPP(a,b,c)						printf("%lld %lld %lld\n",a,b,c)
#define P(a)						printf("%lld\n",a)
#define ff						first
#define ss						second
#define gap                     <<" "<<
#define ll						long long
#define nl						"\n"
#define MAX(a, b)					((a) > (b) ? (a) : (b))
#define MIN(a, b)					((a) < (b) ? (a) : (b))
#define FI						freopen("input.txt", "r", stdin);
#define FO						freopen("output.txt", "w", stdout);
using namespace std;
const int INF = 0x7f7f7f7f;
const int modu = 1e9 + 7;
const int N = 1e6+7;
vector<int> suf;
vector<int> zFunction(string s, int len)
{
	vector<int> z(len);
	bool ck = false;
	for(int i = 1, l = 0, r = 0; i<len; i++)
	{
		if(i<=r)
			z[i] = min(r - i + 1, z[i - l]);
		while(i + z[i] < len && s[z[i]] == s[i + z[i]])
			++z[i];
		if(i + z[i] - 1 > r)
			l = i, r = i + z[i] - 1;
		if(z[i] == len - i)
			suf.pb(z[i]), ck = true;
//		else if(ck = true && z[i] != len - i)
//			z[i] = 0;
	}
	return z;
}
void solve(string s)
{
	int len = sz(s);
	vector<int> z = zFunction(s,len);
		sort(all(suf));
//		for(int i = 0; i<sz(s); i++)
//			cout<<z[i]<<" ";
//		cout<<nl;
		for(int i = 0; i < sz(suf); i++)
		{
			int tem = suf[i];
			bool ck = true;
			for(int j = tem; j < sz(s); j += tem)
			{
				if(z[j] < tem) ck = false;
			}
			if(ck == true)
			{
				printf("%d\n",tem);
				return;
			}
		}
		printf("%d\n",len);
}
int main()
{
//	fast
//	FI
//	FO
	int t;
	scanf("%d",&t);
	while(t--)
	{
		suf.clear();
		string s;
		cin>>s;
		solve(s);
		if(t>0)
			printf("\n");
	}
    return 0;
}


