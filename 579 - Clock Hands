#include<bits/stdc++.h>
#define all(p) p.begin(),p.end()
#define mem(p, v) memset(p, v, sizeof(p))
#define sz(c) (int)c.size()
#define pb(x) push_back(x)
#define ll long long
#define nl "\n"
using namespace std;
int main()
{
	int h,m;
	char c;
	while(scanf("%d %c %d",&h,&c,&m),(h||m))
	{
		double cw,acw;
		if(h*5>=m)
		{
			cw = 60 - h*5 + m;
			acw = (h*5) - m;
		}
		else if(h*5<m)
		{
			cw = m - h*5;
			acw = h*5 + 60.00 - m;
		}
		double cwr = abs(((double)cw*360)/60 - ((double)30*m)/60);
		double acwr = ((double)acw*360)/60 + ((double)30*m)/60;
		if(cwr<=acwr)
			printf("%.3lf\n",cwr);
		else
			printf("%.3lf\n",acwr);
	}
    return 0;
}
