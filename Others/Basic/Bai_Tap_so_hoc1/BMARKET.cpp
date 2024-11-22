///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int y,n,k,ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>y>>k>>n;
    int m=n-y;
    if(m==0){
        cout<<-1;
        return 0;
    }
    if(y%k!=0)
        ans=(y/k+1)*k;
    else ans=y+k;
    if(ans>n){
        cout<<-1;
        return 0;
    }
    for(int i=ans-y;i<=n-y;i+=k)
        cout<<i<<" ";
}