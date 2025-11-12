#include <bits/stdc++.h>
using namespace std;

const int N=105;
int n,m,k,ans;
bool vis[N][N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>m>>k;
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        for(int j=x>1?x-1:1;j<=x+1;j++)
        {
            for(int q=y>1?y-1:1;q<=y+1;q++)
            {
                vis[j][q]=1;
            }
        }
        vis[x>2?x-2:1][y]=1;
        vis[x+2][y]=1;
        vis[x][y>2?y-2:1]=1;
        vis[x][y+2]=1;
    }
    for(int i=1;i<=k;i++)
    {
        int x,y;
        cin>>x>>y;
        for(int j=x>2?x-2:1;j<=x+2;j++)
        {
            for(int q=y>2?y-2:1;q<=y+2;q++)
            {
                vis[j][q]=1;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(!vis[i][j])ans++;
        }
    }
    cout<<ans;

    return 0;
}