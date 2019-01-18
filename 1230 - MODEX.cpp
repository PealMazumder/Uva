/*
	http://shoshikkha.com/archives/29
	Above article may help you to understand modular arithmetic concept.
*/
#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
using namespace std;
ll res (ll x, ll y, ll m)
{
	if(y==0) return 1;
	if(y%2)
		return (x%m * res(x, y-1, m)%m)%m;
	else
	{
		ll d = res(x,y/2,m);
		return (d%m * d%m)%m;
	}
}
int main()
{
    int t;
    while(true)
    {
    	cin>>t;
    	if(t == 0) break;
    	while(t--)
    	{
    		ll x,y,m;
    		cin>>x>>y>>m;
    		int ans = res(x,y,m);
    		cout<<ans<<nl;
		}
	}
    return 0;
}

