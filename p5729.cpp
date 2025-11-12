#include <bits/stdc++.h>
using namespace std;

const int N=105;
bool vis[N][N][N];
int w,x,h,q,ans;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>w>>x>>h>>q;
    while(q--)
    {
        int a[2],b[2],c[2];
        for(int i=0;i<2;i++)
        {
            cin>>a[i]>>b[i]>>c[i];
        }
        for(int i=a[0];i<=a[1];i++)
        {
            for(int j=b[0];j<=b[1];j++)
            {
                for(int k=c[0];k<=c[1];k++)
                {
                    if(vis[i][j][k])continue;
                    vis[i][j][k]=1;
                }
            }
        }
    }
    for(int i=1;i<=w;i++)
    {
        for(int j=1;j<=x;j++)
        {
            for(int k=1;k<=h;k++)
            {
                if(vis[i][j][k])continue;
                ans++;
            }
        }
    }
    cout<<ans;

    return 0;
}