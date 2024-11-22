#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,k,a[1000005],s[1000005],t;
main()
{
    vip;
    //freopen("","r",stdin);
    //freopen("","w",stdout);
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    for(int i=1;i<n;i++)
        s[i]=a[i-1]-a[i];
    t=s[1];
    for(int i=2;i<=n;i++){
        if(t==k){
            cout<<a[i-1];
            break;
        }
        else if(t>k){
            cout<<a[i-1]+(t-k)/2;
            break;
        }

            t=t+s[i]*2;

    }
}
