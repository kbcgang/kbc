///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
string s;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    long long b=0;
    for(int i=0;i<s.size();i++)
        if(s[i]%2==0)
            b=b*10+s[i]-48;
    long long a=0;
    for(int i=0;i<s.size();i++)
        a=a*10+s[i]-48;
    cout<<__gcd(a,b);
}