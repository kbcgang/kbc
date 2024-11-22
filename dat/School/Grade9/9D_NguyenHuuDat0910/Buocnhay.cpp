///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#include<cstdlib>
//#define int long long
#define mod 1000000007
using namespace std;
int n;
long long p;
long long a[100005];
int ans;
map<long long,int> pos;
int m[100005];
void check(int cuoi)
{
    int vt=cuoi;
    int dau=1;
    long long x=a[cuoi]-p;
    int res=n;
    while(dau<=cuoi)
    {
        int giua=(dau+cuoi)/2;
        if(a[giua]>x)
            cuoi=giua-1;
        else if(a[giua]<=x)
        {
            res=giua;
            dau=giua+1;
        }
    }
    if(res!=n)
        ans=max(ans,vt-res);
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("Buocnhay.inp","r"))
    {
        freopen("Buocnhay.inp","r",stdin);
        freopen("Buocnhay.out","w",stdout);
    }
    cin>>n>>p;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(pos[a[i]]==0)
            pos[a[i]]=i;
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        m[i]=min(pos[a[i]],m[i-1]);
    }
    for(int i=2;i<=n;i++)
    {
        check(i);
    }
    cout<<ans;
}
