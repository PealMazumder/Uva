#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
using namespace std;
int main()
{
   	ll n,m;
   	while(true)
   	{
   		cin>>n>>m;
   		ll t = m+n;
   		set<ll> s;
   		if(n==0&&m==0)
   			break;
   		else
   		{
   			while(n--)
   			{
   				int x;
				cin>>x;
				s.insert(x);		
			}
			while(m--)
			{
				int x;
				cin>>x;
				s.insert(x);	
			}
		}
		ll siz = s.size();
		cout<<t - siz <<nl;
		 	
	}
    return 0;
}

