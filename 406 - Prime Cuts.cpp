#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define		FI			freopen("input.txt", "r", stdin);
#define 	FO			freopen("output.txt", "w", stdout);
using namespace std;
const int N = 1007;
vector<int> p;
bool vis[N];
void sieve()
{
	for(int i = 3; i*i<=N; i += 2)
	{
		if(!vis[i])
		{
			for(int j = i*i; j<=N; j += 2*i)
				vis[j] = true;
		}
	}
	p.push_back(1);
	p.push_back(2);
	for(int i = 3; i<N; i+=2)
		if(!vis[i]) 
			p.push_back(i);
	
}
void solve()
{
	int n, c;
	bool ck = 0;
	while(scanf("%d %d", &n, &c) == 2)
	{
		if(ck)	printf("\n");ck = true;
		printf("%d %d:",n,c);
		auto up = upper_bound(p.begin(), p.end(),n) - p.begin();
		if(2*c>up)
		{
			for(int i = 0; i<up; i++)
				printf(" %d",p[i]);
			printf("\n");
		}
		else if(up%2 == 0)
		{
			int mid = up/2 - 1;
			int l = mid - c + 1;
			int h = mid + c;
			for(int i = l; i<=h; i++)
				printf(" %d",p[i]);
			printf("\n");
		}
		else
		{
			int mid = up/2;
			int l = mid - c + 1;
			int h = mid + c - 1;
			for(int i = l; i<=h; i++)
				printf(" %d",p[i]);
			printf("\n");
		}
	}
	printf("\n");
}
int main()
{
//	FI
//	FO
	sieve();
	solve();

	return 0;
}
