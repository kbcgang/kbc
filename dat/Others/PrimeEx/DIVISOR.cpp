#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int m,n=1,ans=1,x;
map<int,int> dem;
main()
{
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>x;
        n=(n*x)%mod;
    }
    for(int i=2;i<=n;i++){
        while(n%i==0){
            n/=i;
            dem[i]++;
        }
        if(dem[i]>0)
            ans*=dem[i]+1;
    }
    cout<<ans;
}
