#include <bits/stdc++.h>
using namespace std;

int n,ans[10][10],cnt;

void init(int x,int y,int to)
{
    ans[x][y]=++cnt;
    //1向右，2向左，3向下，4向上
    if(cnt==n*n)return;
    else if(to==1)
    {
        if(y==n||ans[x][y+1])init(x+1,y,3);
        else init(x,y+1,1);
    }
    else if(to==2)
    {
        if(y==1||ans[x][y-1])init(x-1,y,4);
        else init(x,y-1,2);
    }
    else if(to==3)
    {
        if(x==n||ans[x+1][y])init(x,y-1,2);
        else init(x+1,y,3);
    }
    else if(to==4)
    {
        if(x==1||ans[x-1][y])init(x,y+1,1);
        else init(x-1,y,4);
    }
    return;
}
int main()
{
    cin>>n;
    init(1,1,1);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<setw(3)<<ans[i][j];
        }
        cout<<'\n';
    }
    return 0;
}