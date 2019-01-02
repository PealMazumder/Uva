#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
    	int ans = 0,num = 0;
    	if(n == 0||n == 1)
    	{
    		cout<<"1"<<nl;
		}
		else
		{
			while(true)
			{
				num = (num*10 + 1)%n;
				ans++;
				if(num == 0)
				{
					cout<<ans<<nl;
					break;
				}
			}
		}
		
	}
    return 0;
}

