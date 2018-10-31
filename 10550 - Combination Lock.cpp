#include<bits/stdc++.h>
#define IO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
	IO;
	int s,b,c,e;
	while(cin>>s>>b>>c>>e)
	{
		int d=1080;
		if(s==0&b==0&c==0&e==0)
			break;
		else
		{
			if(s>b)
				d+=((s-b)*9);	
			else
				d+=(((40-b)+s)*9);
				
			if(b>c)
				d+=(((40-b)+c)*9);
			else
				d+=((c-b)*9);
				
			if(e>c)
				d+=(((40-e)+c)*9);
			
			else
				d+=((c-e)*9);	
		}
		cout<<d<<endl;
	}
		
	return 0;
}
