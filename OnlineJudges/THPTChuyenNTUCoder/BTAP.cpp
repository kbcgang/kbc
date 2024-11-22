///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,a[1000005];
int dem,ans;
int save,ans2=INT_MAX;;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=n-1; i>=0; i--)
    {
        dem++;
        if(a[i]!=a[i-1])
        {
            if(dem>=save)
            {
                save=dem;
                ans=a[i];
//                cout<<ans<<"\n";
            }
            dem=0;
        }
    }
    cout<<ans;
}
