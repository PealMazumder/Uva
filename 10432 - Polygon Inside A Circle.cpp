#include<bits/stdc++.h>
#define all(p)					p.begin(),p.end()
#define mem(p, v)				memset(p, v, sizeof(p))
#define sz(c)					(int)c.size()
#define pb(x) 					push_back(x)
#define ll 						long long
#define nl 						"\n"
#define FI                      freopen("input.txt", "r", stdin);
#define FO                      freopen("output.txt", "w", stdout);
#define pi 						2*acos(0.0)
using namespace std;

typedef vector< int >			vi;
typedef vector< long long > 	vll;
int main()
{
    //ios::sync_with_stdio(false); cin.tie(0); cout.tie(NULL);
    double r,n;
    while(scanf("%lf%lf",&r,&n)==2)
    {
    	double area = (n*r*r*sin(2*pi/n))/2;
    	printf("%.3lf\n",area);
	}
	return 0;
}

