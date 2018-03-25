#include<iostream>
#include<string>
using namespace std;
int main()
{
    for(int i=1;;i++)
    {
        string input;
        cin>>input;

        if(input=="*")
            break;

        else if(input=="Hajj")
            cout<<"Case "<<i<<": "<<"Hajj-e-Akbar"<<endl;

        else if(input=="Umrah")
            cout<<"Case "<<i<<": "<<"Hajj-e-Asghar"<<endl;

    }
    return 0;
}
