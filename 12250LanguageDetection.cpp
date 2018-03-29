#include<iostream>
#include<string>
using namespace std;
int main()
{
	string input;
	for(int i=1;;i++)
	{
		cin>>input;
		if(input=="#")
		    break;
		else if(input=="HELLO")
		    cout<<"Case "<<i<<": "<<"ENGLISH"<<endl;
		else if(input=="HOLA")
		    cout<<"Case "<<i<<": "<<"SPANISH"<<endl;
		else if(input=="HALLO")
			cout<<"Case "<<i<<": "<<"GERMAN"<<endl;
		else if(input=="BONJOUR")
		    cout<<"Case "<<i<<": "<<"FRENCH"<<endl;
		else if(input=="CIAO")
		    cout<<"Case "<<i<<": "<<"ITALIAN"<<endl;
		else if(input=="ZDRAVSTVUJTE")
		    cout<<"Case "<<i<<": "<<"RUSSIAN"<<endl;
		else
			cout<<"Case "<<i<<": "<<"UNKNOWN"<<endl;
	}
	return 0;
}
