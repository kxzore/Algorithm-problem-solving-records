#include <bits/stdc++.h>
using namespace std;

const int N=105;
long long a[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x,cnt=0;
    while(cin>>x)
    {
        if(!x)break;
        a[++cnt]=x;
    }
    for(int i=cnt;i>=1;i--)cout<<a[i]<<" ";

    return 0;
}