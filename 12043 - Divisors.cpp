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
const int N = 1e5+1;
ll sumD[N],D[N];
void precal()
{
	sumD[1] = 1;
	D[1] = 1;	
	for(int i = 2; i<=N; i++)
	{
		ll cnt = 0, sum = 0; 
		for(int j = 1; j<=sqrt(i); j++)
		{
			if(!(i%j))
			{
				if(i/j == j)// if there are two equal divisors
				{
					cnt++;
					sum += j;	
				}
				else//all the divisors are present in pairs
				{
					cnt += 2;
					sum += (j + i/j);
				}
				
			}
		}
		sumD[i] = sum;
		D[i] = cnt;
	}
}
int main()
{
	precal();
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,k;
		scanf("%d%d%d",&a,&b,&k);
		ll g = 0, h = 0;
		
		for(int i = a; i<=b; i++)
		{
			if(!(i%k))
			{
				g += D[i];
				h += sumD[i];
			}
		}
		printf("%lld %lld\n",g,h);
	}
    return 0;
}

