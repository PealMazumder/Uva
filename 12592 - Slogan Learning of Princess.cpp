#include<bits/stdc++.h>
#define FI                      freopen("input.txt", "r", stdin);
#define FO                      freopen("output.txt", "w", stdout);
using namespace std;

int main()
{
	int n;
	map<string,string> mp;
	cin>>n;
	cin.ignore();
	while(n--)
	{
		string first_line,second_line;
		getline(cin,first_line);
		getline(cin,second_line);
		mp[first_line] = second_line;
		
	}
	int q;
	cin>>q;
	cin.ignore();
	while(q--)
	{
		string qFirstLine;
		getline(cin,qFirstLine);
		cout<<mp[qFirstLine]<<endl;
	}
	return 0;
}
