#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[100005],ans,s;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        s+=a[i];
    while(n>1)
    {
        if(n%2==1)
            ans++;
        n/=2;
        ans+=n;
    }
    cout<<ans*10+s;
}
