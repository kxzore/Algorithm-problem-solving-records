#include <bits/stdc++.h>
using namespace std;

const int N=1003;
int f[N],sum[N];

int get_ans(int x)
{
    if(!x)return 0;
    if(f[x])return f[x];

    if(x==1)f[x]=1;
    else
    {
        int y=x/2;
        get_ans(y);
        f[x]=sum[y]+1;
    }

    get_ans(x-1);
    sum[x]=sum[x-1]+f[x];
    return f[x];
}

int main()
{
    int n;
    cin>>n;
    cout<<get_ans(n);
    return 0;
}