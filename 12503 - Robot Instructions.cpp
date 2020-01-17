#include<bits/stdc++.h>
#define nl									"\n"
#define FI                      			freopen("input.txt", "r", stdin);
#define FO                      			freopen("output.txt", "w", stdout);
using namespace std;
const int INF = 0x7f7f7f7f;

int main()
{
	//fast
	int t;
	cin>>t;
	while(t--)
	{
		int n, p = 0;
		cin>>n;
		int ins[n+1];
		for(int i = 1; i <= n; i++)
		{
			string s,as;
			cin>>s;
			if(s == "SAME")
			{
				int x;
				cin>>as>>x;
				p += ins[x];
				ins[i] = ins[x];
				//cout<<"same as "<<p<<nl;
			}
			else if(s == "RIGHT")
			{
				ins[i] = 1;
				p++;
				//cout<<" right "<<p<<nl;
			}
			else if(s == "LEFT")
			{
				ins[i] = -1;
				p--;
				//cout<<" left "<<p<<nl;
			}
		}
		cout<<p<<nl;
	}

    return 0;
}

