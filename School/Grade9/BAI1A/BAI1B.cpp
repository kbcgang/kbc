///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
long m;
long long pre[35];
int n;
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
    cin>>m>>n;
    long s=1;
    for(int i=0;i<n;i++)
    {
        s=pow(2,i);
        pre[i]=pre[i-1]+s;
    }
    if(m>=pre[n-1])
        cout<<1;
    else cout<<2;
}