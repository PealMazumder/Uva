#include<bits/stdc++.h>
#define all(p) p.begin(),p.end()
#define mem(p, v) memset(p, v, sizeof(p))
#define sz(c) (int)c.size()
#define pb(x) push_back(x)
#define ll long long
#define nl "\n"
using namespace std;
int main()
{
    //ios::sync_with_stdio(false); cin.tie(0); cout.tie(NULL);
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	int n;
		ll mn = LONG_MAX;
    	scanf("%d",&n);
    	int a[n];
    	for(int i = 0; i<n; i++)
    	{
    		scanf("%d",&a[i]);
		}
		for(int i =0;i<n;++i)
		{
			ll dif = 0;
			for(int j =0; j<n; j++)
			{
				dif += abs(a[i] - a[j]);
			}
			mn = min(dif,mn);
		}
		cout<<mn<<nl;
	}
    return 0;
}

