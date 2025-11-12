#include <bits/stdc++.h>
using namespace std;

int n;
double a[50];
int main()
{
    cin>>n;
    a[1]=1;
    for(int i=2;i<=n;i++)a[i]=a[i-2]+a[i-1];
    cout<<fixed<<setprecision(2)<<a[n];
    return 0;
}