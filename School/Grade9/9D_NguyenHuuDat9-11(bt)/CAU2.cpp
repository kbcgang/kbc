///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n,k,a[300005],ans;
pair<int,int> pos[300005];
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("CAU2.inp","r"))
    {
        freopen("CAU2.inp","r",stdin);
        freopen("CAU2.out","w",stdout);
    }
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        pos[i].first=a[i];
        pos[i].second=i;
    }
    sort(pos,pos+n);
    for(int i=0;i<n;i++)
    {
        int c=i+1;
        while(pos[c].second-pos[i].second<=k&&c<n&&pos[i].first==pos[c].first)
            c++;
        ans+=c-i-1;
    }
    cout<<ans;
}