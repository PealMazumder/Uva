#include<iostream>
#include<string>
using namespace std;
int main()
{
    string input;
    int i=0;
    while(cin>>input)
    {

        for(int p=0;p<input.length();p++)
        {
            if(input[p]=='"')
            {
                i++;
                if(i%2==0)
                    cout<<"''";
                else
                    cout<<"``";
            }
            else
                cout<<input[p];

        }
        cout<<"\n";
    }
    return 0;
}

