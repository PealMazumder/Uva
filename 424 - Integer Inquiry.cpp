#include<iostream>
#include<string>
#define ll long long
#define nl "\n"
using namespace std;
int main()
{
    string in,s;
    s.assign(105,'0');
    while(cin>>in&&in!="0")
    {
    	int c = 0;
    	for(int i = in.size()-1,j = s.size()-1 ;j>=0;i--,j--)
    	{
    		if(i>=0)
    		{
    			int a = in[i]-'0';
	    		int b = s[j]-'0';
	    		int sum = a+b+c;
	    		c = sum/10;
	    		s[j] = sum%10 +'0';
			}
			else
			{
				int b = s[j]-'0';
	    		int sum = b+c;
	    		s[j] = sum%10 +'0';
	    		c = sum/10;
	    		if(c==0)
	    			break;
			}
		}
	}
	int flag = 0;
	for(int i = 0;i<s.size();i++)
	{
		if(s[i]>'0')
			flag = 1;
		if(flag==1)
			cout<<s[i];
	}
	cout<<nl;
    return 0;
}

