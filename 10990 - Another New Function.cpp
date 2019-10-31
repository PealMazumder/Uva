#include<bits/stdc++.h>
#define ll 						long long
#define FI                      freopen("input.txt", "r", stdin);
#define FO                      freopen("output.txt", "w", stdout);
using namespace std;
const int N = 2000001;
int phi[N];
int dp[N];
void EulerPhi()
{
	for(int i = 1;i<=N; i++)
		phi[i] = i;
		
	for(int p = 2; p<=N; p++)
	{
		if(phi[p] == p)
		{
			phi[p] = p-1;
			
			for(int i = 2*p; i<=N; i += p)
				phi[i] = (phi[i]/p) * (p - 1);
		}
	}
}
int main()
{
	int t;
	EulerPhi();
//	for(int i =0;i<=10;i++) printf("%d\n",phi[i]);
	scanf("%d",&t);
	while(t--)
	{
		int m,n;
		scanf("%d%d",&m,&n);
		ll ans = 0;
		for(int i = m; i<=n;i++)
		{
			if(dp[i]!=0)
				ans += dp[i];
			else
			{
				ll stp = 0;
				int tem = i;
				while(tem > 1)
				{
					stp++;
					tem = phi[tem];
				}
				dp[i] = stp;
				ans += stp;
			}
		}
		printf("%lld\n",ans);
	}
 	return 0;
}

