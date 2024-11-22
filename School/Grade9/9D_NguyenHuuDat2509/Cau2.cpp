///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
long n;
int tcs(long n)
{
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}
bool check(long n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}
void ans1(long n)
{
    long s=0;
    while(n>0)
    {
        int m=n%10;
        s+=m*m*m;
        n/=10;
    }
    cout<<s<<" ";
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("Cau2.inp","r")){
        freopen("Cau2.inp","r",stdin);
        freopen("Cau2.out","w",stdout);
    }
    cin>>n;
    ans1(n);
    if(check(n)+check(tcs(n))==2) cout<<1;
    else cout<<0;
}