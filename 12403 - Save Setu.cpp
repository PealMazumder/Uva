#include<iostream>
#include<string>
using namespace std;
int main()
{
	int test,total_amount=0;
	cin>>test;
	for(int i=1;i<=test;i++)
	{
		string operation;
		int k;
		cin>>operation;
		if(operation=="donate")
		{
			cin>>k;
			total_amount+=k;
		}
		else
			cout<<total_amount<<endl;
	}
	return 0;
}
