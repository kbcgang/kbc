///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long a,n;
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
    cin>>a>>n;
    a=a%10;
    n=n%100;
    if(a==0||a==1||a==5||a==6)
        cout<<a;
    else if(a==2||a==3||a==7||a==8)
    {
        int b=n%4;
        if(b==0)
            b=4;
        b=pow(a,b);
        cout<<b%10;
    }
    else if(a==4||a==9)
    {
        int b=n%2;
        if(b==0)
            b=2;
        b=pow(a,b);
        cout<<b%10;
    }
    // cout<<0%4;
}