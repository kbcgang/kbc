///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,a1,a2,a3,result;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--)
    {
        int ans=0;
        cin>>a1>>a2>>a3;
        ans+=a1+a2+a3;
        if(ans>1) result++;
    }
    cout<<result;
}
