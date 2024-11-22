#include<bits/stdc++.h>
#define int long long
using namespace std;
int x,y,n,t;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        int m=n%x;
        if(m==y) cout<<n<<"\n";
        else
        {
            if(y>m) cout<<n-m-(x-y)<<"\n";
            else cout<<n-m+y<<"\n";
        }
    }

}
