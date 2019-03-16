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
ll fact[13];
ll derange[13];
int main()
{
    //ios::sync_with_stdio(false); cin.tie(0); cout.tie(NULL);
    fact[1] = 1;
    derange[0] = 1;
	derange[1] = 0; 
	for(int i = 2;i<=12;i++)
	{
		fact[i] = fact[i-1]*i;
		derange[i] = (i-1)*(derange[i-1]+derange[i-2]);	
	} 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<derange[n]<<"/"<<fact[n]<<nl;
	}
	return 0;
}

