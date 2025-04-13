///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long a,b;
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
    if(a%2==1) a++;
    if(b%2==1) b--;
    if(a>b)
    {
        cout<<0;
        exit(0);
    }
    long long ssh=(b-a)/2+1;
    long long s=ssh*(a+b)/2;
    cout<<s;
}