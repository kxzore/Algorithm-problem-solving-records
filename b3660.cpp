#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        bool a;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            if(x==0)a=1;
        }
        if(a==1)cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;

}
