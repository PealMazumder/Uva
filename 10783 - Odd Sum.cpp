#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>> t;
	for(int i=1;i<=t;i++)
	{
		int a,b,s=0;
		cin>>a>>b;
		if(a%2==0)
			a+=1;
		for(int j=a;j<=b;j+=2)
		{
			s+=j;
		}
		cout<<"Case "<<i<<": "<<s<<endl;
	}
	return 0;
}
