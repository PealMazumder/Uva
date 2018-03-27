#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        int n,m;
        cin>>n>>m;
        int res=((n/3)*(m/3));
        cout<<res<<endl;
    }
    return 0;
}
