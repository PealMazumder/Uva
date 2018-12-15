#include<bits/stdc++.h>
using namespace std;
int bigmod(long b, long p, int m)
{
	if(p==0)
		return 1;
	else if(p%2==0)
		return (bigmod(b,p/2,m)*bigmod(b,p/2,m))%m;
		
	else
		return (b%m*(bigmod(b,p/2,m)*bigmod(b,p/2,m)))%m;
}
int main()
{
	int b,p,m,ans;
	while(cin>>b>>p>>m)
	{
		int ans = bigmod(b,p,m);
		cout<<ans<<endl;
	}
	return 0;
}
