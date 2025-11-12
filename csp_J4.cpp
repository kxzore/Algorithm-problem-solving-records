#include <bits/stdc++.h>
using namespace std;

const int N=1e4+5,mod=998244353;
int n,a[N];
long long f[N][N][N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);

    return 0;
}