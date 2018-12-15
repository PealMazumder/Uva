#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	string y;
	int k=1;
	while(cin>>y)
	{
		if(!k)
			cout<<endl;
		k=0;
		int rmdr4=0,rmdr100=0,rmdr400=0,rmdr15=0,rmdr55=0,flag=0;
		
		for(int i=0;i<y.length();i++)
		{
			rmdr4  = ((rmdr4*10)+(y[i]-'0'))%4;
			rmdr100= ((rmdr100*10)+(y[i]-'0'))%100;
			rmdr400= ((rmdr400*10)+(y[i]-'0'))%400;
			rmdr15 = ((rmdr15*10)+(y[i]-'0'))%15;
			rmdr55 = ((rmdr55*10)+(y[i]-'0'))%55;
		}
		if(rmdr4==0&&rmdr100!=0||rmdr400==0)
		{
			cout<<"This is leap year."<<endl;
			flag=1;
		}
		if(rmdr15==0)
		{
			cout<<"This is huluculu festival year."<<endl;
			flag=1;
		}
		if(rmdr55==0&&rmdr4==0&&rmdr100!=0||rmdr55==0&&rmdr400==0)
		{
			cout<<"This is bulukulu festival year."<<endl;
			flag=1;
		}
		if(flag==0)
		{
			cout<<"This is an ordinary year."<<endl;
		}
		
	}
	return 0;
}
