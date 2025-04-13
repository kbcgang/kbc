#include<bits/stdc++.h>
using namespace std;
long long n;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    int ans=0;
    for(int i=1;i<=sqrt(n);i++)
        if(n%i==0)
        {
            ans++;
            if(1ll*i*i!=n) ans++;
        }
    cout<<ans;
}