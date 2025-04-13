///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n,a[1000005];
kien()
{
    if(fopen("BAI03.inp","r"))
    {
        freopen("BAI03.inp","r",stdin);
        freopen("BAI03.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    if(a[n-1]==a[n-2]&&a[n-2]==a[n-3]&&a[n-3]==a[n-4])
        cout<<a[n-1];
    else
    {
        int s=a[n-1]+a[n-2]+a[n-3];
        if(s/4==0)
            cout<<1;
        else cout<<s/4;
    }
}