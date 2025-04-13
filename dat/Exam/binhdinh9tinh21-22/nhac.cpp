///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<climits>
#include<array>
#include<algorithm>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
struct disc{
    int pos,time;
};
disc a[100005];
ll s,ans;
bool cmp(disc a,disc b)
{
    return a.time<b.time;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].time;
        a[i].pos=i;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
        s+=1ll*a[i].time;
        ans+=s;
        cout<<a[i].pos+1<<' '<<s<<"\n";
    }
    cout<<ans;
}