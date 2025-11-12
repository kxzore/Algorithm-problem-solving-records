#include <bits/stdc++.h>
using namespace std;

int n,a[22][22];

int main()
{
    cin>>n;
    a[1][1]=1;
    cout<<1<<'\n';
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }

    return 0;
}