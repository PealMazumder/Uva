/*
	http://www.shafaetsplanet.com/planetcoding/?p=2342
	Above article may help you to understand stack and solution procedure.
*/
#include<bits/stdc++.h>
#define nl "\n"
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    
    
    while(n--)
    {
    	string s;
    	getline(cin,s);
    	stack <char> b;
    	
    
	    for(int i=0;i<s.length();i++)
	   	{
	   		if(s[i]=='('||s[i]=='[')
	   			b.push(s[i]);
	   		else if(s[i]==']')
    		{  
				if(b.empty()||b.top()!='[')
	    		{
	   				b.push(s[i]);
	   				break;
				} 
				else
	        		if(b.top()=='[')
	        			b.pop();				
			}
			else if(s[i]==')')
	   		{
	   			if(b.empty()||b.top()!='(')
	   			{
	    			b.push(s[i]);
	   				break;
				}
				else
	    			if(b.top()=='(')
	    				b.pop();	
			}
		}
		if(b.empty())
			cout<<"Yes"<<nl;
		else
			cout<<"No"<<nl;
	}
    return 0;
}

