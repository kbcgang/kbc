///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int t,n;
void check(int n)
{
    int ans=20000000000000000;
    int dau=0,cuoi=5*n;
    while(dau<=cuoi)
    {
        int giua=(dau+cuoi)/2;
        int m=giua;
        int dem=0;
        while(m>0)
        {
            dem+=m/5;
            m/=5;
        }
        if(dem>=n){
            ans=min(ans,giua);
            cuoi=giua-1;
        }
        else dau=giua+1;
    }
    cout<<ans<<"\n";
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>n;
        check(n);
    }
}
