#include<bits/stdc++.h>
#define all(p)						p.begin(),p.end()
#define	mem(ar,val)					memset(ar, val, sizeof(ar))
#define sz(c)						(int)c.size()
#define pb(x)						push_back(x)
#define ff						first
#define ss						second
#define gap						<<" "<<
#define ll						long long
#define nl						"\n"
#define FI						freopen("input.txt", "r", stdin);
#define FO						freopen("output.txt", "w", stdout);
using namespace std;
const int INF = 0x7f7f7f7f;
const int M = 1e9 + 7;
const int N = 1e6+7;
int main()
{
//	FI
//	FO
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int ar[n];
		for(int i = 0; i<n; i++)
			scanf("%d",&ar[i]);
		int cnt = 0;
		for(int i = 0; i<n; i++)
		{
			for(int j = i+1; j<n; j++)
			{
				if(ar[i]>ar[j])
				{
					int tem = ar[i];
					ar[i] = ar[j];
					ar[j] = tem;
					cnt++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",cnt);
	}
    return 0;
}

