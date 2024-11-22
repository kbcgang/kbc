#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[3000005];
long long s,ans;
main()
{
    if(fopen("bai6.inp","r"))
    {
        freopen("bai6.inp","r",stdin);
        freopen("bai6.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        s+=a[i];
    ans=s;
    int l=0,r=m-1;
    while(r<n-1)
    {
        s-=a[l];
        l++;
        r++;
        s+=a[r];
        ans=max(ans,s);
    }
    cout<<ans;
}
