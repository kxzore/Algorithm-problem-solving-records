#include <bits/stdc++.h>
#define ll long long
//#define int long long
using namespace std;

const int N=5e5+5,M=2e7+1;
ll n,k,vis[M],ans;
ll a[N],s[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s[i]=s[i-1]^a[i];
    }
    memset(vis,-1,sizeof vis);
    vis[0]=0;
    ll tag=0;
    for(int i=1;i<=n;i++)
    {
        ll ys=s[i]^k;
        if(vis[ys]>=tag)
        {
            ans++;
            tag=i;
        }
        vis[s[i]]=i;
    }
    cout<<ans;

    return 0;
}