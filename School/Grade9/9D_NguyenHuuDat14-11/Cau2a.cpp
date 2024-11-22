///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
long long m,n;
kien()
{
    if(fopen("Cau2a.inp","r"))
    {
        freopen("Cau2a.inp","r",stdin);
        freopen("Cau2a.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>m>>n;
    long long s=((m+n-1)/n)*n;
    cout<<s-m;
}