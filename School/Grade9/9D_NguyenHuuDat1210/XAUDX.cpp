///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
string s;
int ans=1;
void checkle(int i)
{
    int m=0;
    while(s[i-m-1]==s[i+m+1])
    {
        m++;
    }
    ans=max(ans,1+m*2);
}
void check2(int i)
{
    int m=0;
    while(s[i-m-1]==s[i+m+2])
        m++;
    ans=max(ans,2+m*2);
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("XAUDX.inp","r"))
    {
        freopen("XAUDX.inp","r",stdin);
        freopen("XAUDX.out","w",stdout);
    }
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        checkle(i);
        if(s[i]==s[i+1])
            check2(i);
    }
    cout<<ans;
}