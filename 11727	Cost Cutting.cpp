#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        int b,c,d;
        list <int> input;
        list <int>::iterator res;
        cin>>b>>c>>d;
        input.push_back(b);
        input.push_back(c);
        input.push_back(d);
        input.sort();
        input.pop_front();

        res=input.begin();

        cout<<"Case "<<i<<": "<<*res<<endl;
    }
    return 0;
}
