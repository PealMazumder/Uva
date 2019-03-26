#include<bits/stdc++.h>
#define all(p)					p.begin(),p.end()
#define mem(p, v)				memset(p, v, sizeof(p))
#define sz(c)					(int)c.size()
#define pb(x) 					push_back(x)
#define ll 						long long
#define nl 						"\n"
#define FI                      freopen("input.txt", "r", stdin);
#define FO                      freopen("output.txt", "w", stdout);
using namespace std;

typedef vector< int > 			vi;
typedef vector< long long > 	vll;
int main()
{
//    ios::sync_with_stdio(false); cin.tie(0); cout.tie(NULL);
	
	int n,casino = 0;

	while(scanf("%d",&n),n)
	{
		int a[n],sum = 0;
		for(int i = 0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum += a[i];
		}
		int av = sum/n,ans  = 0;
		for(int i = 0;i<n; i++)
		{
			if(a[i]>av)
				ans += (a[i]-av);
		}
		printf("Set #%d\n",++casino);
		printf("The minimum number of moves is %d.\n\n",ans);
	}
	return 0;
}

