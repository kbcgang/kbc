///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n;
long long MAXL[1000005],MAXR[1000005],MIN[1000005],a[1000005];
void make_maxl()
{
    MAXL[0]=a[0];
    for(int i=1;i<n;i++)
    {
        MAXL[i]=max(MAXL[i-1],a[i]);
    }
}
// void make_maxr()
// {
//     MAXR[n-1]=a[n-1];
//     for(int i=n-2;i>=0;i--)
//     {
//         MAXR[i]=max(MAXR[i+1],a[i]);
//     }
// }
void make_min()
{
    MIN[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        MIN[i]=min(MIN[i+1],a[i]);
    }
}
long long ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    make_maxl();
    // make_maxr();
    make_min();
    for(int i=0;i<n;i++)
    {
        ans=max(ans,MAXL[i]+a[i+1]-MIN[i+2]);
    }
    cout<<ans;
}