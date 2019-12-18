#include<bits/stdc++.h>
#define	fast						ios::sync_with_stdio(false);cin.tie(0);cout.tie(NULL);
#define	all(p)						p.begin(),p.end()
#define mem(ar, val)				memset(ar, val, sizeof(ar))
#define sz(c)						(int)c.size()
#define pb(x)						push_back(x)
#define ll							long long
#define nl							"\n"
#define MAX(a, b)					((a) > (b) ? (a) : (b))
#define MIN(a, b)					((a) < (b) ? (a) : (b))
#define FI                      	freopen("input.txt", "r", stdin);
#define FO                      	freopen("output.txt", "w", stdout);
using namespace std;
const int INF = 0x7f7f7f7f;
const int N = 1005;
string s[] = {"fill A", "fill B", "empty A", "empty B", "pour A B", "pour B A"};
struct node
{
	int a,b;
}u;
int dis[N][N],ss[N][N];
node parent[N][N];
int ca,cb,n;
queue<node> q;
void update(int x,int xa,int xb,node u,int s)
{
	node v;
	v.a = xa; v.b = xb;
	if(dis[xa][xb] > x)
	{
		dis[xa][xb] = x;
		parent[xa][xb] = u;
		ss[xa][xb] = s;
		q.push(v);
	}
}
void print(int xa,int xb)
{
	if(dis[xa][xb]!=0)
	{
		print(parent[xa][xb].a,parent[xa][xb].b);
		printf("%s\n",s[ ss[xa][xb] ].c_str());
	}
}
int main()
{
	while(scanf("%d%d%d",&ca,&cb,&n)==3) 
	{
		for(int i =0;i<N;i++)
		{
			for(int j = 0;j<N;j++)
				dis[i][j] = INF;
		}
		u.a = 0; u.b = 0;
		dis[u.a][u.b] = 0;
		q = queue<node>();
		q.push(u);
		while(!q.empty())
		{
			u = q.front();
			q.pop();
			
			if(u.b == n)
				break;
			int d = dis[u.a][u.b] + 1;	
			// fill A
			update(d,ca,u.b,u,0);
			//fill B
			update(d,u.a,cb,u,1);
			//empty A
			update(d,0,u.b,u,2);
			//empty B
			update(d,u.a,0,u,3);
			//pour A B
			int tem = min(u.a,cb - u.b);
			update(d,u.a-tem,u.b+tem,u,4);
			//pour B A
			tem = min(u.b,ca - u.a);
			update(d,u.a+tem,u.b-tem,u,5);
		}
		print(u.a,u.b);
		printf("success\n");	
	}	

    return 0;
}

