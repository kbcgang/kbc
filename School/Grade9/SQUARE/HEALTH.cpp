///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
long a[200005],n,ma=mod,pos=-1;
map<long,int> dem;
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
    cin>>n;
    for(int i=0;i<n;i++)
        {cin>>a[i];
        dem[a[i]]++;}
    for(int i=0;i<n;i++)
    {
        if(dem[a[i]]==1&&ma>a[i])
        {
            pos=i+1;
            ma=a[i];
        }
    }
    cout<<pos;
}