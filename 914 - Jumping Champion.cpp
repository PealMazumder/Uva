//Problem Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=855
#include<bits/stdc++.h>
#define ll long long
#define pb(x) push_back(x)
#define nl "\n"
using namespace std;
const int N = 1000002;
vector<int> p;
bool flag[N];
void sieve()
{
	for(int i = 3; i*i<=N; i += 2) // avoiding even numbers
	{
		if(flag[i] == false)
		{
			for(int j = i*i; j<=N; j += 2*i)//avoiding even multiples
				flag[j] = true;
		}	
	} 
	p.pb(2);
	for(int i = 3; i<N; i += 2)
		if(flag[i] == false)
			p.pb(i);
}
void solve()
{
	int l,r;
	cin>>l>>r;
	int low = lower_bound(p.begin(),p.end(),l) - p.begin();
	int hig = upper_bound(p.begin(),p.end(),r) - p.begin();
//	cout<<p[low]<<" "<<p[hig]<<nl;
	vector<int> ans;
	unordered_map<int, int> mp;
	for(int i = low; i<hig-1; i++)
		mp[p[i+1] - p[i]]++;
	int mx = 0, mxx = 0;
	for(auto x : mp)
	{
//		cout<<x.first<<" "<<x.second<<nl;
		if(mxx<x.second)
		{
			mxx = x.second;
			mx = x.first;
		}
		ans.push_back(x.second);
	}
	sort(ans.begin(), ans.end());
	int n = 0;
	if(!ans.empty())
		n = ans.size();
	if(n == 1)
		cout<<"The jumping champion is "<<mx<<nl;
	else if(n == 0 || ans[n-1] == ans[n-2])
		cout<<"No jumping champion\n";
	else
		cout<<"The jumping champion is "<<mx<<nl;
		
}
int main()
{
//	freopen("output.txt", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(NULL);
	sieve();
	int t;
	cin>>t;
	while(t--)
	    solve();

	return 0;
}

