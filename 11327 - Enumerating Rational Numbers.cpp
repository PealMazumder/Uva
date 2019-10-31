#include<bits/stdc++.h>
#define ll long long
#define N 200000
using namespace std;
ll phi[200001],sum[200001];

void Phi()
{
	phi[1] = 2;
	sum[1] = 2;
	for(ll i = 2;i<=N;i++)
		phi[i] = i;
	for(ll p = 2; p<=N;p++)
	{
		if(phi[p] == p)
		{
			phi[p] = p-1;
			for(ll i = 2 * p; i<=N; i += p)
			{
				phi[i] = (phi[i]/p) * (p - 1);
			}
		}
		sum[p] = sum[p-1] + phi[p];
	}
}
ll binarySearch(ll k)
{
	ll s = 1, e = N;
	while(true)
	{
		ll mid =(s+e)/2;
		if(sum[mid]>=k&&sum[mid-1]<k)
		{
			return mid;
			break;
		}
		else if(sum[mid]<k)
			s = mid+1;
		else
			e = mid - 1;
	}
}
int main()
{
	Phi();
	//for(ll i =0;i<=10;i++) 	printf("phi[%lld] %lld\n",i,phi[i]);
	ll k;
	while(scanf("%lld",&k),k)
	{
		ll loc = binarySearch(k);
		
		//printf("LOc %lld sum[loc] %lld\n",loc,sum[loc]);
		ll n = k - sum[loc-1];
		//printf("n %d\n",n);
		ll cnt = 0;
		for(ll j = 0;j<=loc;j++)
		{
			
			if(__gcd(loc,j) == 1)
			{
				cnt++;
				if(n == cnt)
				{
					printf("%lld/%lld\n",j,loc);
					break;	
				}	
			}
		}
	} 
    return 0;
}
