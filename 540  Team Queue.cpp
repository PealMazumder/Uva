
#include<bits/stdc++.h>
using namespace std;

int teamId[1000001];
queue< int > team[1001];

int main()
{
	int t=0;
	while(true)
	{
		int numOfTeam;
		cin>>numOfTeam;
		
		if(numOfTeam==0) break;
		
		for(int i = 1; i<=numOfTeam;i++)
		{
			while (!team[i].empty())
				team[i].pop();
				
			int numOfElem;
			cin>>numOfElem;
			
			for(int j=0;j<numOfElem;j++)
			{
				int elem;
				cin>>elem;
				teamId[elem] = i;
			}
		}
		
		cout<<"Scenario #"<<++t<<endl;
		
		queue< int > allTeamId;
		
		while(true)
		{
			string command;
			cin>>command;
			
			if(command[0]=='S')
				break;
			
			if(command[0]=='E')
			{
				int x;
				cin>>x;
				
				int id = teamId[x];
				
				if(!team[id].empty())
					team[id].push(x);
					
				else
				{
					team[id].push(x);
					allTeamId.push(id);
				}
			}
			else
			{
				int id = allTeamId.front();
				
				cout<<team[id].front()<<endl;
				
				team[id].pop();
				
				if(team[id].empty())
				{
					allTeamId.pop();	
				}
			}
		}
		
		cout<<endl;
	}
	return 0;
}
