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
bool p[1000000];
int main()
{
    //ios::sync_with_stdio(false); cin.tie(0); cout.tie(NULL);
	mem(p,true);
	p[0]=p[1]= false;
	for(int i = 2;i*i<=1000000;i++)
		for(int j = i*i;j<=1000000;j+=i)
			p[j] = false;
	int n;
	while(scanf("%d",&n)==1)
	{
		if(p[n]==false)
		{
			printf("%d is not prime.\n",n);
			continue;
		}
		else
		{
			int re = 0;
			int tem = n;
			while(tem>0)
			{
				re = 10*re + tem%10;
				tem/=10;
			}
			if(p[re]&&re!=n)
			{
				printf("%d is emirp.\n",n);
				continue;
			}
			else
				printf("%d is prime.\n",n);
		}
	}
	return 0;
}

