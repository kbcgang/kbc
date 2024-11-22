///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int a[3],b[3],ans1,ans2;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int i=0;i<3;i++)
        cin>>a[i];
    for(int i=0;i<3;i++)
    {
        cin>>b[i];
        if(a[i]>b[i]) ans1++;
        else if(a[i]<b[i]) ans2++;
    }
    cout<<ans1<<" "<<ans2;
}
