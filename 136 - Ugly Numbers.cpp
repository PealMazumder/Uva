#include<bits/stdc++.h>
using namespace std;

int main()
{
	int count = 0;
	set <long long> s;
	s.insert(1);
	while(true)
	{
		count++;
		if(count==1500)
		{
			cout<<"The 1500'th ugly number is "<<*s.begin()<<"."<<endl;
			break;
		}
		s.insert(*s.begin() * 2);
		s.insert(*s.begin() * 3);
		s.insert(*s.begin() * 5);
		s.erase(*s.begin());
	
	}
	return 0;
}

