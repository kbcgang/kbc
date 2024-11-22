#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,a[100005],ans;
map<int,int> dem;
main()
{
    if(fopen("PITAGO.INP","r"))
    {
        freopen("PITAGO.INP","r",stdin);
        freopen("PITAGO.OUT","w",stdout);
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]=pow(a[i],2);
        dem[a[i]]++;
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
            if(dem[a[i]+a[j]]>0)
                ans++;
    }
    cout<<ans;
}
