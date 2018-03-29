#include<iostream>
#include<string>
using namespace std;
int main()
{
	int test;
	cin>>test;
	for(int i=1;i<=test;i++)
	{
		int o=0,n=0,e=0;
		string input;
		cin>>input;
		if(input.length()==5)
			cout<<3<<endl;
		else
		{
			for(int i=0;i<3;i++)
			{
				if(input[i]=='o')
					o++;
				else if(input[i]=='n')
					n++;
				else if(input[i]=='e')
					e++;
			}
			if(o>1)
				o=1;
			if(n>1)
				n=1;
			if(e>1)
				e=1;
			int p=o+n+e;
			if(p>=2)
				cout<<1<<endl;
			else
				cout<<2<<endl;
		}
	}
	return 0;
}
