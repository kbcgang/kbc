#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,k,s,a[1000005],ans,t;
main()
{
    if(fopen("CAU4.inp","r")){
        freopen("CAU4.inp","r",stdin);
        freopen("CAU4.out","w",stdout);
    }
    cin>>n>>k>>s;
    for(int i=1;i<=n;i++) cin>>a[i];
    int dau=1,cuoi=1;
    while(dau<=n){
        t+=a[cuoi];
        if(cuoi>n){
            dau++;
            cuoi=dau-1;
            t=0;
        }
        if(t>=s&&(cuoi-dau+1)%k==0){
            ans+=1+(n-cuoi)/k;
            t=0;
            dau++;
            cuoi=dau-1;
        }
        cuoi++;
    }
    cout<<ans;
}
