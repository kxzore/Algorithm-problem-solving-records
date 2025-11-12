#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    cin>>n;
    int cnt=1;
    for(int i=1;i<=n;i++)
    {
        int m=n-i+1;
        for(int j=1;j<=m;j++)
        {
            if(cnt<10)cout<<'0';
            cout<<cnt;
            cnt++;
        }
        cout<<'\n';
    }
    return 0;
}