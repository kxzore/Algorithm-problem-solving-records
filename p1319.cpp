#include <bits/stdc++.h>
using namespace std;

const int N=205;
int n,m,x=1,y,cnt;
bool now,ans[N][N];

int main()
{
    cin>>n;
    while(cin>>m)
    {
        cnt+=m;
        if(!now)
        {
            y+=m;
            x+=y/n;
            y%=n;
        }
        else
        {
            int r=m,sr=x,sc=y+1;
            while(r)
            {
                int col=min(r,n-sc+1);
                for(int i=0;i<col;i++)
                {
                    ans[sr][sc+i]=1;
                }
                r-=col;
                sc+=col;
                if(sc>n)
                {
                    sr++;
                    sc=1;
                }
            }
            y+=m;
            y%=n;
            x=sr;
        }
        if(cnt==n*n)break;
        now=!now;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<ans[i][j];
        }
        cout<<'\n';
    }

    return 0;
}