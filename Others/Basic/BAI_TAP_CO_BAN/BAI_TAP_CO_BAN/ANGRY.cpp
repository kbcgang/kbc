///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int t,n,k,x;
string check(int n,int k)
{
    if(n<k) return "YES\n";
    return "NO\n";
}
bool check1(int n)
{
    return n<=0;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        int ans=0;
        cin>>n>>k;
        while(n--){
            cin>>x;
         ans+=check1(x);
        }
        cout<<check(ans,k);
    }
}
