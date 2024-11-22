///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n;
long long a[1000005];
long long l[1000005],r[1000005];
long long ans=1;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    // if(n<2)
    // {
    //     cout<<max(a[0],a[1]);
    //     exit(0);
    // }
    l[0]=a[0];
    for(int i=1;i<n;i++)
        l[i]=__gcd(l[i-1],a[i]);
    r[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
        r[i]=__gcd(r[i+1],a[i]);
    for(int i=0;i<n;i++)
        ans=max(ans,__gcd(l[i-1],r[i+1]));
    cout<<ans;
}