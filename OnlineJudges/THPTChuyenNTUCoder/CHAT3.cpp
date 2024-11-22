///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n,t;
long long a[100005],x;
void chop(long long x)
{
    long long ans=-1;
    int l=0,r=n-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(a[m]==x)
        {
            cout<<a[m]<<"\n";
            return;
        }
        else if(a[m]>x)
            r=m-1;
        else{
            ans=a[m];
            l=m+1;
        }
    }
    cout<<ans<<"\n";
}
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>t;
    while(t--)
    {
        cin>>x;
        chop(x);
    }
}