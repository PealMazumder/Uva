#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        int store;
        cin>>store;
        int position[store];
        for(int j=0;j<store;j++)
        {
            cin>>position[j];
        }
        sort(position, position+store);
        int mid,result;
        mid=(position[store-1]-position[0])/2;
        result=(mid-position[0])+(position[store-1]-position[0])+(position[store-1]-mid);
        cout<<result<<endl;
    }
    return 0;
}
