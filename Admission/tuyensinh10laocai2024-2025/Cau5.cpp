#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[100005],ans,pos[1005],s[100005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("Cau5.inp","r"))
    {
        freopen("Cau5.inp","r",stdin);
        freopen("Cau5.out","w",stdout);
    }
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++)
        s[i]=s[i-1]+a[i];
    for(int i=1; i<=n; i++)
        pos[a[i]]=i;
    for(int i=1; i<=n; i++)
        if(pos[a[i]]!=0&&pos[a[i]]!=i)
        {
            ans=max(ans,s[pos[a[i]]]-s[i-1]);
            pos[a[i]]=0;
        }
    cout<<ans;
}
