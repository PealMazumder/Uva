#include <iostream>
using namespace std;
int max(int p,int e);
int main()
{
    int input1,input2,result;
    while(cin>>input1>>input2)
    {
        if(input1<input2)
        {
            result=max(input1,input2);
        }
        else
        {
            result=max(input2,input1);
        }
        cout<<input1<<" "<<input2<<" "<<result<<endl;
    }
    return 0;
}
int max(int p,int e)
{
    int i,j, count=0,Max=0;
    for(i=p;i<=e;i++)
    {
        for(j=i;;)
        {
            count++;
            if(j==1)
            {
                break;
            }
            else if(j%2==0)
            {
                j=j/2;
                continue;
            }
            else if(j%2!=0)
            {
                j=j*3+1;
                continue;
            }
        }
        if(count>Max)
        {
            Max=count;

        }
        count=0;
    }
    return Max;
}

