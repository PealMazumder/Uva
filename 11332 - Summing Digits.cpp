#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
using namespace std;

int main()
{
	ll n;
	while(cin>>n,n != 0)
	{
		int sum = 0;
		while(n>9)
		{
			while(n)
			{
				sum += (n%10);
				n /= 10;
			}
			n = sum;
			sum = 0;
		}
		cout<<n<<nl;
	}
    return 0;
}

