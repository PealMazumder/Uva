#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
	for(int t=1;;t++)
	{
		int n_marbles,n_queries,marble;
		cin>>n_marbles>>n_queries;
		if(n_marbles==0&&n_queries==0)
			break;
      
		else
		{
			vector<int> vec;
			int query;
			for(int i=1;i<=n_marbles;i++)
			{
				cin>>marble;
				vec.push_back(marble);
			}
			sort(vec.begin(),vec.end());
			cout<<"CASE# "<<t<<":"<<endl;
			for(int j=1;j<=n_queries;j++)
			{
				vector<int>::iterator low; 
				cin>>query;
				low=lower_bound (vec.begin(), vec.end(), query);
				if(*low==query)
					cout<<query<<" found at "<<low-vec.begin()+1<<endl;
				else
					cout<<query<<" not found"<<endl;
			}		
		}
		
	}
	return 0;
}
