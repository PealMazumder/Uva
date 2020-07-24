//Problem Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=627
#include<bits/stdc++.h>
#define ll long long
#define pb(x) push_back(x)
#define nl "\n"
using namespace std;
const int N = 32777;
bool flag[N];
void sieve()
{
	flag[0] = flag[1] = true;
	
	for(int i = 4; i<=N; i+=2)
		flag[i] = true;
	for(int i = 3; i*i<=N; i += 2)//avoiding even numbers
	{
		if(!flag[i])// if i is a prime
		{
			for(int j = i*i; j<=N; j += 2*i)//avoiding even multiples
				flag[j] = true;
		}
	}
}
int findPairs(int n)
{
	int cnt = 0;
	for(int i = 2; i<=n/2; i++)
	{
		if(!flag[i] && !flag[n-i])
		{
		//	cout<<i<<" "<<n-i<<nl;
			cnt++;
		}
	}
	return cnt;
}
void solve()
{
	int n;
	while(scanf("%d",&n)&&n)
	{
		int ans = findPairs(n);
		printf("%d\n",ans);
	}

}
int main()
{
	sieve();
	solve();
	return 0;
}

