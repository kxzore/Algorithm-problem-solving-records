#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    cin>>s;
    for(auto i:s)
    {
        if(i>='a'&&i<='z')cout<<(char)(i-'a'+'A');
        else cout<<i;
    }
    return 0;
}