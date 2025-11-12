#include <bits/stdc++.h>
using namespace std;

int a[5];

int gcd(int a,int b)
{
    if(!b)return a;
    return gcd(b,a%b);
}
int main()
{
    cin>>a[1]>>a[2]>>a[3];
    sort(a+1,a+3+1);
    int n=gcd(a[1],a[3]);
    cout<<a[1]/n<<"/"<<a[3]/n;
    return 0;
}