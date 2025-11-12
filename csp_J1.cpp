#include <bits/stdc++.h>
using namespace std;

const int N=1e6+5;
int a[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;

    int n=s.length();
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]>='0'&&s[i]<='9')a[++j]=s[i]-'0';
    }
    sort(a+1,a+j+1);
    for(int i=j;i>=1;i--)
    {
        cout<<a[i];
    }
}