#include<bits/stdc++.h>
#define nl "\n"
using namespace std;
int main()
{
    //ios::sync_with_stdio(false); cin.tie(0); cout.tie(NULL);
    string s;
    while(getline(cin,s))
    {
    	if(s.empty())
    		continue;
    	queue <int> q;
    	bool ck = false;
    	for(int i =0;i<s.length();i++)
    	{
    		if(s[i]!=' ') ck = true;
    		if(s[i]==' '&&ck == true)
    			q.push(i);
		}
		q.push(s.length());
		int pre = 0;
		while(!q.empty())
		{
			int t = q.front(); q.pop();
			for(int i = pre;;i++)
			{
				if(s[i]!=' ') break;
				else
					cout<<" ";
			}
			pre = t;
			while(true)
			{
				t--;
				if(s[t]!=' ')
					cout<<s[t];
				if(t==0||s[t]==' ')
					break;
			}
		}
		cout<<nl;
	}
    return 0;
}
