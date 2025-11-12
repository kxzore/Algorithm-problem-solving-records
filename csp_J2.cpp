#include <bits/stdc++.h>
using namespace std;

const int N=1001;
int tmp,n,m,a[N][N],v[N];

bool cmp(int x,int y)
{
    return x>y;
}
void get_ans(int x,int y,int k,bool tag)
{
    a[x][y]=v[k];
    if(a[x][y]==tmp)
    {
        cout<<y<<" "<<x;
        return;
    }
    if(tag)
    {
        if(x<n)return get_ans(x+1,y,k+1,tag);
        else return get_ans(x,y+1,k+1,!tag);
    }
    else
    {
        if(x>1)return get_ans(x-1,y,k+1,tag);
        else return get_ans(x,y+1,k+1,!tag);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>m;
    for(int i=1;i<=n*m;i++)
    {
        cin>>v[i];
    }
    tmp=v[1];
    sort(v+1,v+n*m+1,cmp);
    get_ans(1,1,1,1);

    return 0;
}