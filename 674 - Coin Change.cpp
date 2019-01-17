/*
	https://sites.google.com/site/programinggconcept/algorithm
	Above article may help you to understand coin change algorithm.
*/
#include<bits/stdc++.h>
#define nl "\n"
using namespace std;
int main()
{
    int mny;
    int coin[5]={1,5,10,25,50};
    while(cin>>mny)
    {
    	int way[7490]={0};
    	way[0]=1;
    	for(int i =0;i<5;i++)
    	{
    		for(int j=coin[i],k=0;j<=mny;j++,k++)
    		{
    			way[j]+=way[k];
			}
		}
		cout<<way[mny]<<nl;
	}
    return 0;
}

