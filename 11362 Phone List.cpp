#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

struct node
{
	bool endmark;
	node* next[10];
	
	node()
	{
		for(int i=0;i<10;i++)
			next[i]=NULL;
		endmark = false;
	}
	 
}*root;

bool insert(char* str, int len)
{
	node* curr = root;
	bool x =false;
	for(int i=0;i<len;i++)
	{
		int idx = str[i] - '0';
		if(curr->endmark==true)
			return true;	
		else if(curr->next[idx]==NULL)
		{
			curr->next[idx] = new node();
			x= false;
		}
		else if(curr->next[idx]!=NULL)
			x= true;
		curr = curr->next[idx];
	}
	
	curr->endmark = true;
	return x;
}
void del(node* curr)
{
    for (int i = 0; i < 10; i++)
        if (curr->next[i])
            del(curr->next[i]);

    delete (curr);
}
int main()
{

	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		root = new node();
		int n;
		bool x = false;
		cin>>n;
		for(int j=0;j<n;j++)
		{
			char str[21];
			scanf("%s",str);
				
			if(x==false)
				x = insert(str, (strlen(str)));
		}
		if(x==false)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	del(root); 
	return 0;
}
