///Problem Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2927
#include<iostream>
#include<stdio.h>
#include<sstream>
#include<string>
#define	ll	long long
#define	nl	"\n"
using namespace std;
int gcd(int a, int b)
{
	if(b == 0) return a;
	return gcd(b, a%b);
}
void solve()
{
	int m[100], i = 0;
	string s;
	getline(cin, s);
	istringstream strm(s);
	int ans = 0;
	
	while(strm >> m[i]) ++i;
	
	for(int j = 0; j<i-1; j++)
		for(int k = j+1; k<i; k++)
		{
			int g = gcd(m[j], m[k]);	
			ans = max(g, ans);
		}
	cout<<ans<<nl;
}
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    solve();

	return 0;
}


