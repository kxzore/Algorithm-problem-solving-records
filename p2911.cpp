#include <bits/stdc++.h>
using namespace std;

int a[100],s[5],ans,sum;

int main()
{
    for(int i=1;i<=3;i++)
    {
        cin>>s[i];
    }
    for(int i=1;i<=s[1];i++)
    {
        for(int j=1;j<=s[2];j++)
        {
            for(int k=1;k<=s[3];k++)
            {
                a[i+j+k]++;
                if(a[i+j+k]>sum)
                {
                    sum=a[i+j+k];
                    ans=i+j+k;
                }
            }
        }
    }
    cout<<ans;
    return 0;
}