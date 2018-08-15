#include<iostream>
#include<string>
using namespace std;

int main()
{
    string input;
    while(getline(cin,input))
    {
        for(int i=0;i<input.size();i++)
        {

            if(input[i]>=50&&input[i]<=57)
                input[i] -=1;

            else if(input[i]=='S')
                input[i]='A';

            else if(input[i]=='W')
                input[i] ='Q';

            else if(input[i]=='X')
                input[i] ='Z';

            else if(input[i]=='E')
                input[i] ='W';

            else if(input[i]=='D')
                input[i] = 'S';

            else if(input[i]=='C')
                input[i] = 'X';

            else if(input[i]=='T')
                input[i]='R';
            else if(input[i]=='R')
                input[i] = 'E';

            else if(input[i]=='F')
                input[i] = 'D';

            else if(input[i]=='V')
                input[i]='C';

            else if(input[i]=='G')
                input[i] ='F';

            else if(input[i]=='B')
                input[i] ='V';

            else if(input[i]=='Y')
                input[i] ='T';

            else if(input[i]=='H')
                input[i] = 'G';

            else if(input[i]=='N')
                input[i] = 'B';

            else if(input[i]=='U')
                input[i]='Y';

            else if(input[i]=='J')
                input[i] ='H';

            else if(input[i]=='M')
                input[i] ='N';

            else if(input[i]=='O')
                input[i] ='I';

            else if(input[i]=='L')
                input[i] = 'K';

            else if(input[i]=='.')
                input[i] = ',';
            else if(input[i]==',')
                input[i] = 'M';

            else if(input[i]=='/')
                input[i]='.';

            else if(input[i]=='\'')
                input[i] =';';

            else if(input[i]=='[')
                input[i] ='P';
            else if(input[i]=='P')
                input[i] ='O';

            else if(input[i]==']')
                input[i] ='[';

            else if(input[i]=='\\')
                input[i] = ']';

            else if(input[i]=='=')
                input[i] = '-';
            else if(input[i]=='-')
                input[i] = '0';
            else if(input[i]=='0')
                input[i] ='9';

            else if(input[i]==';')
                input[i] = 'L';

            else if(input[i]=='K')
                input[i] = 'J';
            else if(input[i]=='I')
                input[i] = 'U';
            else if(input[i]=='1')
                input[i] = '`';
        }
        for(int i=0;i<input.size();i++)
        {
            cout<<input[i];
        }
        cout<<endl;

        for(int i=0;i<input.size();i++)
        {
            input[i]='\0';
        }
    }
    return 0;
}
