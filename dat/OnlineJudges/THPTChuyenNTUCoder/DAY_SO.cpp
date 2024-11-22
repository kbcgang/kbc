///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n;
vector<long> a;
long long ans[100005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        long x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        ans[i]=max({ans[i-1],ans[i-2]+a[i],ans[i-2]});
    }
    cout<<ans[n-1];
}
