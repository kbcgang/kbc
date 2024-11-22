#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,m,a[50],s=-1;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i]-1;
    }
    cout<<s;
    if(m>s)
        cout<<-1;
    else{
        int ans=0,tam=-1;
        sort(a,a+n);
        for(int i=n-1;i>=0;i--){
            if(tam>=m){
                cout<<ans;
                return 0;
            }
            tam+=a[i]-1;
            ans++;
        }
    }
}