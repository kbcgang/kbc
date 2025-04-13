///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
int k;
string s;
long long pre[1000005],ans;
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
    cin>>n>>k;
    cin>>s;
    for(int i=0;i<n;i++)
        pre[i]=pre[i-1]+s[i];
    int l=0,r=0;
    while(l<n&&r<n)
    {
        if(pre[r]-pre[l-1]>=k)
        {
            ans+=n-r;
            l++;
        }
        r++;
    }
    cout<<ans;
}