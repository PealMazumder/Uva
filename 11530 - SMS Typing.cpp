#include<iostream>
#include<string>
using namespace std;

int main()
{
    int test;
    cin>>test;
    cin.ignore();
    for(int i=1;i<=test;i++)
    {
        int result=0;
        string str;
        getline (cin,str);

        for(int j=0;j< str.length();++j)
        {
            if(str[j]==' '||str[j]=='a'||str[j]=='d'||str[j]=='g'||str[j]=='j'||str[j]=='m'||str[j]=='p'||str[j]=='t'||str[j]=='w')
            {
                result+=1;
            }
            else if(str[j]=='b'||str[j]=='e'||str[j]=='h'||str[j]=='k'||str[j]=='n'||str[j]=='q'||str[j]=='u'||str[j]=='x')
            {
                result+=2;
            }
            else if(str[j]=='c'||str[j]=='f'||str[j]=='i'||str[j]=='l'||str[j]=='o'||str[j]=='r'||str[j]=='v'||str[j]=='y')
            {
                result+=3;
            }
            else if(str[j]=='s'||str[j]=='z')
            {
                result+=4;
            }
        }
        cout<<"Case #"<<i<<": "<<result<<endl;
    }
    return 0;
}
