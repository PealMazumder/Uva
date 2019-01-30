#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(true)
	{
		int q;
		scanf("%d",&q);
		if(q==0)
			break;
		int x,y,n,m;
		scanf("%d %d",&x,&y);
		while(q--)
		{
			cin>>n>>m;
			if(n == x||m == y)
				printf("divisa\n");
				
			else if(n>x&&m>y)
				printf("NE\n");
				
			else if(n>x&&m<y)
				printf("SE\n");
				
			else if(n<x&&m<y)
				printf("SO\n");
				
			else if(n<x&&m>y)
				printf("NO\n");
		}
	}
	return 0;
}
