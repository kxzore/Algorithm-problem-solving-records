#include <bits/stdc++.h>
using namespace std;

int n,ans[105];
string a[10][6],s;

void init()
{
    a[0][1]="XXX",a[0][2]="X.X",a[0][3]="X.X",a[0][4]="X.X",a[0][5]="XXX";
    for(int i=1;i<=5;i++)a[1][i]="..X";
    a[2][1]="XXX",a[2][2]="..X",a[2][3]="XXX",a[2][4]="X..",a[2][5]="XXX";
    a[3][1]="XXX",a[3][2]="..X",a[3][3]="XXX",a[3][4]="..X",a[3][5]="XXX";
    a[4][1]="X.X",a[4][2]="X.X",a[4][3]="XXX",a[4][4]="..X",a[4][5]="..X";
    a[5][1]="XXX",a[5][2]="X..",a[5][3]="XXX",a[5][4]="..X",a[5][5]="XXX";
    for(int i=1;i<=5;i++){a[6][i]=a[5][i];}a[6][4]="X.X";
    a[7][1]="XXX",a[7][2]="..X",a[7][3]="..X",a[7][4]="..X",a[7][5]="..X";
    a[8][1]="XXX",a[8][2]="X.X",a[8][3]="XXX",a[8][4]="X.X",a[8][5]="XXX";
    for(int i=1;i<=5;i++){a[9][i]=a[8][i];}a[9][4]="..X";
}

int main()
{
    init();
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        ans[i+1]=s[i]-'0';
    }
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<a[ans[j]][i];
            if(j!=n)cout<<'.';
        }
        cout<<'\n';
    }

    return 0;
}