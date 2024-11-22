///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,x,t,d;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>d>>t;
    while(n--)
    {
        cin>>x;
        if(x<=t) cout<<1<<" ";
        else{
            cout<<(x-t+d-1)/d+1<<" ";
        }
    }
}
