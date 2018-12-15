#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	cin.ignore();
	cin.ignore();
	for(int i=0;i<t;i++)
	{
		int c = 0;
		string s;
		map<string, double> m;
		while(getline(cin,s))
		{
			if(s.compare("")==0)
			 break;
			
				m[s]++;
				c++; 	
			
		}
		for(map<string,double>::iterator it = m.begin(); it != m.end(); it++) 
		{
        	it->second =(it->second*100.0) / c;
    	}
		for(map<string,double>::iterator it = m.begin(); it != m.end(); it++) 
		{
        	cout <<it->first <<" "<<fixed<<setprecision(4)<< it->second<<endl;
    	}
    	if(i<t-1)
    		cout<<endl;
	}
	return 0;
}
