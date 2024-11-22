///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n,ans=1;
long a[100005];
void longest()
{
    int l=0,r=1;
    while(r<n)
    {
        if(a[r-1]>a[r])
        {
            ans=max(ans,r-l);
            l=r;
        }
        r++;
    }
    cout<<ans;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    //     freopen(".inp","r",stdin);
    //     freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    longest();
}