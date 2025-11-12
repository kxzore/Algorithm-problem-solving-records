#include <bits/stdc++.h>
using namespace std;
using ll=long long;

vector<ll>ans;
ll a,b;

bool get_prime(ll x)
{
    if(x<2)return 0;
    if(x==2)return 1;
    if(x%2==0)return 0;
    for(ll i=3;i*i<=x;i+=2)
    {
        if(x%i==0)return 0;
    }
    return 1;
}

int get_digits(ll x)
{
    if(!x)return 1;
    int cnt=0;
    while(x)
    {
        cnt++;
        x/=10;
    }
    return cnt;
}

int main()
{
    cin>>a>>b;
    int l=get_digits(a),r=get_digits(b);
    for(int i=l;i<=r;i++)
    {
        if(i==1)
        {
            for(int j=2;j<=9;j++)
            {
                if(j>=a&&j<=b&&get_prime(j))
                {
                    ans.push_back(j);
                }
            }
        }
        else
        {
            int k=(i+1)/2;
            ll start=1;
            //for(int j=1;j<)
        }
    }
    
    return 0;
}