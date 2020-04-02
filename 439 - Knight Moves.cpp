/*
  Problem Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=380
  Tutorials on 2D BFS:	http://www.shafaetsplanet.com/?p=604
  						http://www.shafaetsplanet.com/planetcoding/?p=1448
*/

#include<bits/stdc++.h>
#define pb(x)					push_back(x)
#define ll						long long
#define ff						first
#define ss						second
#define nl						"\n"
#define pii						pair<int, int>
using namespace std;
const int N = 65;
ll fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knight's Move
ll fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knight's Move

int mov[N][N];
bool vis[N][N];

void bfs(int x, int y)
{
//	cout<<n<<" ";
	queue <pair<int, int> > q;
	vis[x][y] = true;
	q.push(pii(x,y));
	while(!q.empty())
	{
		pii v = q.front();
		q.pop();
		for(int k = 0; k<8; k++)
		{
			int tx = v.ff + fx[k];
			int ty = v.ss + fy[k];
			if(tx>=1 and tx<=8 and ty>=1 and ty<=8 and vis[tx][ty]==0 )
			{
				vis[tx][ty] = true;
				mov[tx][ty] = mov[v.ff][v.ss] + 1;
				q.push(pii(tx,ty));
			}
		}
	}
}
int main()
{
	map<char, int> mp = {{'a',1},{'b',2},{'c',3},{'d',4},{'e',5},
							{'f',6},{'g',7},{'h',8}};
	char a, b;
	int y1, y2,x1,x2;
	while(scanf(" %c %d %c %d",&a,&y1,&b,&y2)!=EOF)
	{
		for(int i = 1; i<=8; i++)
		{
			for(int j = 1; j<=8; j++)
			{
				vis[i][j] = false;
				mov[i][j] = 0;
			}
		}
		x1 = mp[a]; x2 = mp[b];
		//cout<<x1<<" "<<x2<<nl;
		bfs(x1,y1);
		
		printf("To get from %c%d to %c%d takes %d knight moves.\n",a,y1,b,y2,mov[x2][y2]);
	}
    return 0;
}


