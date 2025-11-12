#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int sum=0,k=1;
    for(int i=0;i<s.size()-1;i++)
    {
        int t=s[i]-'0';
        if(t>=0&&t<=9)
        {
            sum+=t*k;k++;
        }
    }
    //cout<<sum<<'\n';
    if(sum%11==s.back()-'0')cout<<"Right";
    else if(sum%11==10&&s.back()=='X')cout<<"Right";
    else 
    {
        for(int i=0;i<s.size()-1;i++)cout<<s[i];
        if(sum%11<10)cout<<sum%11;
        else cout<<"X";
    }
    return 0;
}