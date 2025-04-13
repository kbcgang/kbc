#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,k,a[100005],ans;
main()
{
    if(fopen("QUA.inp","r")){
        freopen("QUA.inp","r",stdin);
        freopen("QUA.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    for(int i=0;i<k;i++)
        ans+=a[i];
    cout<<ans;
}