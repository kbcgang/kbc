///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long m,n;
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>m>>n;
    long long x=n-(n+1)%2;
    long long sodd=(x+1)*((x-1)/2+1)/2;
    long long y=n-n%2+4;
    long long seven=(y+6)*((y-6)/2+1)/2;
    long long lineodd=((m+1)/2-1)*8*((x-1)/2+1)+((m+1)/2-1)*sodd;
    long long lineeven=(m/2-1)*8*((y-6)/2+1)+(m/2-1)*seven;
    // cout<<((x-1)/2+1)/2<<" ";
    cout<<1ll*((sodd+seven)+lineeven+lineodd);
}