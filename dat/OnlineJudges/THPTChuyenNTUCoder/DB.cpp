///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int t,n;
bool check(int n)
{
    int s=0;
    int m=n;
    while(m>0)
    {
        s+=m%10;
        m/=10;
    }
    return n%s==0;
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
        cout<<check(n)<<"\n";
    }
}
