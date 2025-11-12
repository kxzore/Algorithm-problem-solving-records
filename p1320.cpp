#include <bits/stdc++.h>
using namespace std;

int n,m,cnt;
vector<int>a;
bool now;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string x;
    while(cin>>x)
    {
        m++;
        n=x.size();
        for(auto i:x)
        {
            if((i-'0')==now)cnt++;
            else
            {
                now=!now;
                a.push_back(cnt);
                cnt=1;
            }
        }
        if(m==n)
        {
            a.push_back(cnt);
            break;
        }
    }

    cout<<n;
    for(auto i:a)cout<<" "<<i;

    return 0;
}