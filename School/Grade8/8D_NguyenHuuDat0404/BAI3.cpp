#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,b,a[100005],ans;
main()
{
    if(fopen("BAI3.inp","r")){
        freopen("BAI3.inp","r",stdin);
        freopen("BAI3.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>b;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    int i=0,s=0;
    while(s<b){
        s+=a[i];
        ans++;
        i++;
    }
    cout<<ans;
}