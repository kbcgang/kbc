///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int a,b;
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
    cin>>a>>b;
    if(b==0)
    {
        cout<<1;
        exit(0);
    }
    a=a%10;
    b=b%100;
    if(a==0||a==1||a==5||a==6)
        cout<<a;
    else if(a==2||a==3||a==7||a==8)
    {
        b%=4;
        if(b==0)
            b=4;
        a=pow(a,b);
        cout<<a%10;
    }
    else
    {
        b%=2;
        if(b==0)
            b=2;
        a=pow(a,b);
        cout<<a%10;
    }
}