#include<iostream>
using namespace std;
int main()
{
	int r,c;
	while(cin>>r>>c)
	{
		if(r>=c)
		{
			c-=1;
			if(c>=1)
			{
				r=(r-1)*(c+1);
				cout<<c+r<<endl;	
			}
			else
				cout<<r-1<<endl;
				
		}
		else if(c>r)
		{
			r-=1;
			if(r>=1)
			{
				c=(c-1)*(r+1);
				cout<<c+r<<endl;	
			}
			else
				cout<<c-1<<endl;
			
		}
	}
	return 0;
}
