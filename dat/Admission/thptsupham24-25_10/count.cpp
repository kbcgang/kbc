///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,m;
int a[100005],k,d[100005];
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
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
        if(a[i]!=a[i-1])
            d[i]=d[i-1]+1;
        else d[i]=d[i-1];
    while(m--){
        cin>>k;
        int p=lower_bound(a,a+n,k)-a;
        cout<<k-1-d[p-1]<<"\n";
    }
}