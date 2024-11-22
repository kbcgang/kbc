///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int b,n,ans=1;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>b>>n;
    for(int i=1;i<b;i++)
    {
        int x=(b-i)*n*n;
        int m=sqrt(x/b);
        if(x%b==0&&m*m==x/b)
            ans+=2;
    }
    cout<<ans;
}
