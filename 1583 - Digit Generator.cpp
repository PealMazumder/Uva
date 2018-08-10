#include<iostream>
using namespace std;
int sumOfDigit(int n)
{
    int sum=0;
    int temp,remainder;
    while(n>0){
        remainder=n%10;
        sum+=remainder;
        n=n/10;
    }
    return sum;
}
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int input,dsum,temp,flag=0;
        cin>>input;
        for(int j=input-100;j<input;j++)
        {
            dsum = sumOfDigit(j);
            temp=j+dsum;
            if(temp==input)
            {
                cout<<j<<endl;
                flag=1;
                break;
            }

        }
        if(flag==0)
            cout<<0<<endl;
    }
    return 0;
}
