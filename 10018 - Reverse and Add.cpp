#include<bits/stdc++.h>
typedef long long ll;
#define nl "\n"
using namespace std;
bool check;
int it = 0;
ll palin(ll p)
{
	ll rev = 0, re,temp;
	temp = p;
	while(p>0)
	{
		re = p%10;
		rev = (rev * 10) + re;
		p=p/10;
	}
	if(rev == temp&&it!=0)
	{
		check = true;
		return rev;
	}
	else
	{
		return rev+ temp;
	}	
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	ll p,ans;
    	check = false;
    	it =0;
    	cin>>p;
    	ans = p;
    
    	while(true)
    	{
    		ans = palin(ans);
    		//cout<<ans<<nl;
			if(check==false)
				it++;
			else
				break;	
		}
		cout<<it<<" "<< ans<<nl;
	}
    return 0;
}

