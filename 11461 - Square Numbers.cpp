#include<bits/stdc++.h>
#define ll long long
#define nl "\n" 
using namespace std;

int main()
{
	ll a, b;
	while(cin>> a>> b)
	{
		if(a==0&&b==0)
			break;
		else
		{
			int sqrA = sqrt(a);
			int sqrB = sqrt(b);
			if(a==(sqrA*sqrA))
			{
				cout<<(sqrB-sqrA)+1<<nl;
			}
			else
			{
				
				cout<<sqrB-sqrA<<nl;
			}
		}
	}
	return 0;
}
