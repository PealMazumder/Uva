#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define srt(v) sort(v.begin(),v.end())
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define pf push_front
#define mkp make_pair
#define ll long long
#define nl "\n"
using namespace std;
int main()
{
    fast
    int T;
    cin>>T;
    while(T--)
    {
    	int e,f,c,ans=0,tem=0;
    	cin>>e>>f>>c;
    	int total_bottle = e + f;
    	while(total_bottle>=c)
    	{
    		tem = total_bottle/c;
    		ans += tem;
    		total_bottle= tem + total_bottle%c;
		}
		cout<<ans<<nl;    	
	}
    return 0;
}

