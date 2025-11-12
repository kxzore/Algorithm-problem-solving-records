#include <bits/stdc++.h>
using namespace std;

const int N=1005;
int n,a[N][5],ans;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cin>>a[i][j];
            a[i][4]+=a[i][j];
        }
    }
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            bool tag=abs(a[i][4]-a[j][4])<=10;
            for(int k=1;k<=3;k++)
            {
                int x=abs(a[i][k]-a[j][k]);
                if(x>5)
                {
                    tag=0;
                    break;
                }
            }
            if(tag)ans++;
        }
    }
    cout<<ans;

    return 0;
}