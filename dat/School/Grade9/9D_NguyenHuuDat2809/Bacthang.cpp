///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n;
long int a;
bool check(long int a)
{
    if(a<=10) return 0;
    while(a>0)
    {
        int big=a%10;
        int small=a%100/10;
        if(small>=big) return 0;
        a/=10;
    }
    return 1;
}
int ans;
main()
{
    if(fopen("Bacthang.inp","r")){
        freopen("Bacthang.inp","r",stdin);
        freopen("Bacthang.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--)
    {
        cin>>a;
        ans+=check(a);
    }
    cout<<ans;
}