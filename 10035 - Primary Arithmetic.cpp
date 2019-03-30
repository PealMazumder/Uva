#include<bits/stdc++.h>
#define all(p)					p.begin(),p.end()
#define mem(p, v)				memset(p, v, sizeof(p))
#define sz(c)					(int)c.size()
#define pb(x) 					push_back(x)
#define ll 						long long
#define nl 						"\n"
#define FI                      freopen("input.txt", "r", stdin);
#define FO                      freopen("output.txt", "w", stdout);
using namespace std;

typedef vector< int > 			vi;
typedef vector< long long > 	vll;
int main()
{
    //ios::sync_with_stdio(false);/// cin.tie(0); cout.tie(NULL);
	ll a,b;
	while(cin>>a>>b,(a||b))
	{
		int cnt = 0,car = 0;
		while(a>0&&b>0)
		{
			int aa = a%10;
			int bb = b%10;
			a/=10;
			b/=10;
			if(aa+bb+car>=10)
			{
				cnt++;
				car = 1;
			}
			else
				car = 0;
		}
		if(b>0)
		{
			while(b>0)
			{
				int bb = b%10;
				b/=10;
				if(bb+car>=10)
				{
					cnt++;
					car = 1;
				}
				else
					car = 0;	
			}
		}
		else if(a>0)
		{
			while(a>0)
			{
				int aa = a%10;
				a/=10;
				if(aa+car>=10)
				{
					cnt++;
					car = 1;
				}
				else
					car = 0;	
			}
		}
		if(cnt==1)
			cout<<cnt<<" carry operation."<<nl;
		else if(cnt>1)
			cout<<cnt<<" carry operations."<<nl;
		else
			cout<<"No carry operation."<<nl;		
	}

	return 0;
}

