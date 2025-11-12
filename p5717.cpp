#include <bits/stdc++.h>
using namespace std;

int a[5];

int main()
{
    for(int i=1;i<=3;i++)cin>>a[i];
    sort(a+1,a+3+1);
    if(a[1]+a[2]<=a[3]){cout<<"Not triangle\n";return 0;}
    if(a[1]*a[1]+a[2]*a[2]==a[3]*a[3])cout<<"Right triangle\n";
    if(a[1]*a[1]+a[2]*a[2]>a[3]*a[3])cout<<"Acute triangle\n";
    if(a[1]*a[1]+a[2]*a[2]<a[3]*a[3])cout<<"Obtuse triangle\n";
    if(a[1]==a[2])cout<<"Isosceles triangle\n";
    if(a[1]==a[2]&&a[2]==a[3])cout<<"Equilateral triangle\n";
    return 0;
}