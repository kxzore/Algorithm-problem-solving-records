#include <bits/stdc++.h>
using namespace std;

int a[5],ans[5];
string s;

int main()
{
    cin>>a[1]>>a[2]>>a[3]>>s;
    sort(a+1,a+3+1);
    int cnt=0;
    for(auto i:s)
    {
        ans[++cnt]=i-'A'+1;
    }
    for(int i=1;i<=3;i++)
    {
        cout<<a[ans[i]]<<' ';
    }
    return 0;
}