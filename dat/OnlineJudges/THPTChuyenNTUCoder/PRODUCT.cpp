#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, ans;
int k;
int a[100005],b[100005];
int behind(int x,int dau,int cuoi)
{
    int ans=cuoi;
    while(dau<=cuoi)
    {
        int giua=(dau+cuoi)/2;
        if(b[giua]==x)
        {
            ans=min(giua,ans);
            cuoi=giua-1;
        }
        else if(b[giua]>x) cuoi=giua-1;
        else dau=giua+1;
    }
    return ans;
}
int above(int x,int dau,int cuoi)
{
    int ans=dau;
//    int t=dau;
    while(dau<=cuoi)
    {
        int giua=(dau+cuoi)/2;
        if(b[giua]==x)
        {
            ans=max(ans,giua);
            dau=giua+1;
        }
        else if(b[giua]>x) cuoi=giua-1;
        else dau=giua+1;
    }
    return ans;
}
void check(int x,int m)
{
    int dau=0,cuoi=m-1;
    while(dau<=cuoi)
    {
        int giua=(dau+cuoi)/2;
        if(b[giua]==x)
        {
            ans++;
            ans+=above(x,giua,cuoi)-behind(x,dau,giua);
            return;
        }
        else if(b[giua]>x)
            cuoi=giua-1;
        else dau=giua+1;
    }
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<m; i++)
        cin>>b[i];
    if(k==0)
    {
        int dema=0;
        for(int i=0; i<n; i++)
            if(a[i]==0) dema++;
        int demb=0;
        for(int i=0; i<m; i++)
            if(b[i]==0) demb++;
        if(dema>0&&demb>0)
        {
            cout<<dema*m+demb*n-dema*demb;
        }
        else if(dema==0) cout<<demb*n;
        else if(demb==0) cout<<dema*m;
    }
    else
    {
        sort(b,b+m);
        for(int i=0; i<n; i++)
        {
            if(a[i]!=0&&k%a[i]==0)
            {
                int x=k/a[i];
//        ans+=check(x,b,m);
                check(x,m);
            }
        }
        cout << ans;
    }
//    cout<<n/m;
}
