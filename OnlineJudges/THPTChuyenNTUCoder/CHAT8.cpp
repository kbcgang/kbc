///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,a[1000005],q,t;
void check(int t,int a[])
{
    int dau=0,cuoi=n-1;
    int ans=0;
    while(dau<=cuoi)
    {
        int giua=(dau+cuoi)/2;
        if(a[giua]<=t){
            ans=max(giua+1,ans);
            dau=giua+1;
        }
        else cuoi=giua-1;
    }
    cout<<ans<<"\n";
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    cin>>q;
    while(q--)
    {
        cin>>t;
        check(t,a);
    }
}
