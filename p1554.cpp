#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll m,n,ans[10];

int get_digits(ll x)
{
    if(!x)return 1;
    int cnt=0;
    while(x)
    {
        cnt++;
        x/=10;
    }
    return cnt;
}

int main()
{
    cin>>m>>n;
    for(int i=m;i<=n;i++)
    {
        int cnt=get_digits(i);
        for(int j=0;j<cnt;j++)
        {
            int k=pow(10,j);
            ans[(i/k)%10]++;
        }
    }
    for(int i=0;i<=9;i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}