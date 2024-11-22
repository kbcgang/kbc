///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int t;
string n;
string check(int n)
{
    if(n<2) return "NO\n";
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return "NO\n";
    return "YES\n";
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
        int Max=0;
        int s=0;
        for(int i=0;i<n.size();i++)
        {
            Max=max(Max,n[i]-48);
            s+=n[i]-48;
        }
        s=s*10+Max;
        cout<<check(s);
    }
}
