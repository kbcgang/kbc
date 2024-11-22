#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,ans=-1;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while(cin>>n)
    {
        int m=sqrtl(n);
        if(m*m==n)
        {
            cout<<n;
            return 0;
        }
    }
    cout<<-1;
}
