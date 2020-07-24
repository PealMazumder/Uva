//Problem Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=825
#include<bits/stdc++.h>
#define ll long long
#define pb(x) push_back(x)
#define nl "\n"
using namespace std;
const int N = 1000005;
int val[N];
int primeFact(int n)
{
	int cnt = 0;
	for(int i = 2; i*i<=n; i++)
	{
		if(n%i == 0)
		{
			while(n%i == 0)
				cnt++, n /= i;
		}
	}
	if(n>1) cnt++;
	
	return cnt;
		
}
void preCal()
{
	for(int i = 2; i<N; i++)
	{
		val[i] =val[i-1] + primeFact(i);
	}
}
void solve()
{
	int n;
	while(scanf("%d",&n) != EOF)
	{
		printf("%d\n",val[n]);
	}

}
int main()
{
	preCal();
	solve();
	return 0;
}

