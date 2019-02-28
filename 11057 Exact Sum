#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
using namespace std;
int main()
{
	int n;
    while(cin>>n)
    {
    	int m;
    	vector< int > v(n);
    	for(int p =0; p<n; p++)
	    {
	    	cin>>v[p];
		}
		cin>>m;
    	sort(v.begin(),v.end());
    	int dif = INT_MAX, i = 0, j = 0;
    	int l =0, r =n-1;
    	while(r>l)
    	{
    		if(v[l] + v[r] == m)
    		{
    			int di = abs(v[l] - v[r]);
    			//cout<<di<<nl;
    			if(di<dif)
    			{
    				i = v[l];
    				j = v[r];
    				dif = di;
				}
				
				l++;
				r--;
			}
			else if(v[l] + v[r] >m)
				r--;
			else l++;
		}
		printf("Peter should buy books whose prices are %d and %d.\n\n",i,j);
	}
    return 0;
}
