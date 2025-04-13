#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,k,a[100005],ans=0,s=0;
main()
{
    if(fopen("MUAHE.inp","r")){
        freopen("MUAHE.inp","r",stdin);
        freopen("MUAHE.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int cuoi=-1;
    for(int dau=0;dau<n;dau++){
        while(s+a[cuoi+1]<=k&&cuoi<n-1)
        {
            s+=a[++cuoi];
        }
        ans=max(ans,cuoi-dau+1);
        s-=a[dau];
    }
    cout<<ans;
}