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
bool prime[1000001];
vi v;
int main()
{
    //ios::sync_with_stdio(false); cin.tie(0); cout.tie(NULL);
	int n;
	mem(prime, true);
	prime[0]=prime[1]=false;
	for(int i =2;  i*i<=1000000;i++)
	{
		if(prime[i])
			v.pb(i);	
		for(int j = i*i;j<=1000000; j+=i)
			prime[j] = false;
	}
	while(scanf("%d",&n)&&n)
	{
		bool ck = false;
		for(auto cur = v.begin();*cur<=n/2&&cur!=v.end();cur++)
		{
			//cout<<*cur<<nl;
			if(prime[*cur]&&prime[n-(*cur)])
			{
				printf("%d:\n",n);
				printf("%d+%d\n",*cur,n-*cur);
				ck = true;
				break;
			}
		}
		if(!ck)
		{
			printf("%d:\n",n);
			printf("NO WAY!\n");	
		}
	}
	return 0;
}

