#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int cnt = 0, ans = 0;
		
		for(int i = 0; i<s.length(); i++)
		{
			if(s[i] == 'X')
				cnt = 0;
			else
				ans += ++cnt;
			
		}
		cout<<ans<<nl;
	}
    return 0;
}

