///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int a,b,ans;
bool check(int n)
{
    int s=0;
    while(n>0)
    {
        int m=n%10;
        s+=m*m;
        n/=10;
    }
    return s%2==0;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        ans+=check(i);
    }
    cout<<ans;
}
