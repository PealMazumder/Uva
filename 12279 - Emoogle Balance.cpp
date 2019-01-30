#include<bits/stdc++.h>
using namespace std;
int main()
{
	int casino = 0;
	while(true)
	{
		int n,cnt = 0,cntg = 0;
		scanf("%d",&n);
		if(n == 0) break;
		else
		{
			while(n--)
			{
				int xx;
				scanf("%d",&xx);
				if(xx>0) cnt++;
				else cntg++;
			}
			printf("Case %d: %d\n",++casino,cnt-cntg);
		}
	}
    return 0;
}

