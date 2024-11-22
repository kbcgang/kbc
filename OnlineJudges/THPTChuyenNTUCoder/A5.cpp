#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[1005],dem[1005],ans,k;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//    if(fopen(".inp","r")){
//        freopen(".inp","r",stdin);
//        freopen(".out","w",stdout);
//    }
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        ans+=dem[k-a[i]];
        dem[a[i]]++;
    }
    cout<<ans;
}
