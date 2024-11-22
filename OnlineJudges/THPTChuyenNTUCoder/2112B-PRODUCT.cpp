#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,a[100005];
main()
{
    if(fopen("2112B - PRODUCT.inp","r")){
        freopen("2112B - PRODUCT.inp","r",stdin);
        freopen("2112B - PRODUCT.out","w",stdout);
    }
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    if(a[n-1]*a[n-2]>a[0]*a[1])
        cout<<a[n-1]*a[n-2];
    else cout<<a[0]*a[1];
}
