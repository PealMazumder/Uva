#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        unsigned int a,b;
        cin>>a>>b;
        if(a>b)
            cout<<">"<<endl;
        else if(a<b)
            cout<<"<"<<endl;
        else if(a==b)
            cout<<"="<<endl;
    }
    return 0;
}
