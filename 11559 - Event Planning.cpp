#include<bits/stdc++.h>
#define nl							"\n"
#define ll							long long
#define MAX(a, b)					((a) > (b) ? (a) : (b))
#define MIN(a, b)					((a) < (b) ? (a) : (b))
using namespace std;
const int INF = 0x7f7f7f7f;
int main()
{
	int n,b,h,w;
	while(scanf("%d%d%d%d",&n,&b,&h,&w) != EOF)
	{
		int mn = INF;
		for(int i = 0;i<h;i++)
		{
			int p;
			scanf("%d",&p);
			for(int j = 0;j<w;j++)
			{
				int a;
				scanf("%d",&a);
				if(a>=n)
				{
					ll cost = n*p;
					if(cost<=b)
						mn = MIN(mn,cost);
				}
			}
		}
		if(mn != INF)
			printf("%lld\n",mn);
		else 
			printf("stay home\n");			
	}
    return 0;
}

