#include <bits/stdc++.h>
using namespace std;

const int N=200;
int n,a[N],t[N],ans[N];

void update(int x)
{
    memset(t,0,sizeof(t));
    for(int i=1;i<N;i++)
    {
        int sum=x*a[i];
        t[i]=sum;
    }
    for(int i=1;i<N;i++)
    {
        a[i]=t[i]%10;
        t[i+1]+=t[i]/10;
    }
    for(int i=1;i<N;i++)
    {
        ans[i]+=a[i];
        ans[i+1]+=ans[i]/10;
        ans[i]%=10;
    }
}

int main()
{
    cin>>n;
    a[1]=1;
    for(int i=1;i<=n;i++)update(i);
    bool tag=0;
    for(int i=N-1;i>=1;i--)
    {
        if(!ans[i]&&!tag)continue;
        tag=true;
        cout<<ans[i];
    }
    return 0;
}