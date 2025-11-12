#include <bits/stdc++.h>
using namespace std;

const int N=1002;
int n,a[N],cnt;

void update(int x)
{
    a[++cnt]=x;
    if(x!=1)
    {
        if(x%2)
        {
            update(3*x+1);
        }
        else update(x/2);
    }
    return;
}
int main()
{
    cin>>n;
    update(n);
    for(int i=cnt;i>=1;i--)cout<<a[i]<<" ";
    return 0;
}