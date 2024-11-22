#include<bits/stdc++.h>
#define int long long 
using namespace std;
int t,n,a[100005],s[100005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s[i]=s[i-1]+a[i];
    }
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        cout<<s[r]-s[l-1]<<"\n";
    }
}