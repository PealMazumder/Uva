/*
    http://www.shafaetsplanet.com/planetcoding/?p=604
    https://www.geeksforgeeks.org/bfs-using-stl-competitive-coding/
    https://www.youtube.com/watch?v=dE3wBxYobrU
    Above articles may help you to solve this problem.
*/
#include<iostream>
#include<vector>
#include<queue>
#include<cstdio>
using namespace std;

int main()
{
    int n,e;
    while(scanf("%d",&n)&&n != 0)
    {
        vector<int> g[205];
        bool vis[205];
        bool colr[205];

        for(int i =0;i<n;i++)
        {
            g[i].clear();
            vis[i] = false;
            colr[i] = false;
        }
        scanf("%d",&e);
        for(int i = 0;i<e;i++)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            g[a].push_back(b);
        }

        vis[0] = true;
        queue<int> q;
        q.push(0);
        colr[0]= false;
        bool flag = false;
        while(!q.empty())
        {
            int v = q.front();
            q.pop();
            for(int j =0;j<g[v].size();j++)
            {
                int u = g[v][j];

                if(vis[u] == false)
                {
                    q.push(u);
                    vis[u] = true;
                    if(!colr[v])
                        colr[u] = true;
                    else
                        colr[u] = false;
                }
                else if(colr[v] == colr[u])
                {
                    flag = true;
                    cout<<"NOT BICOLORABLE."<<"\n";
                    break;
                }
            }
            if(flag) break;
        }
        if(!flag)
            cout<<"BICOLORABLE."<<"\n";
    }
    return 0;
}
