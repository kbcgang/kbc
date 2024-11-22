///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int t,n,a[100005],b[100005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        b[0]=a[0];
        for(int i=1;i<n;i++)
            b[i]=a[i-1]*a[i]/__gcd(a[i-1],a[i]);
        b[n]=a[n-1];
        for(int i=0;i<=n;i++)
            cout<<b[i]<<" ";
        cout<<"\n";
    }
}