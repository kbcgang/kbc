///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,a[100005],l,m,ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>l>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(abs(a[i]-l)<=m) ans++;
    }
    cout<<ans;
}
