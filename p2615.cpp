#include <bits/stdc++.h>
using namespace std;

const int N=50;
int n,a[N][N];

int main()
{
    cin>>n;
    int x=1,y=(n+1)/2;
    a[x][y]=1;

    for(int i=2;i<=n*n;i++)
    {
        int to_x=(x==1)?n:x-1;
        int to_y=(y==n)?1:y+1;

        if(!a[to_x][to_y])
        {
            x=to_x,y=to_y;
        }
        else
        {
            x=(x==n)?1:x+1;
        }
        a[x][y]=i;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }

    return 0;
}