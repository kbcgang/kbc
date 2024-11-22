#include<bits/stdc++.h>
using namespace std;
int t,n,a[101];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--){
        int demle=0,t=0,demchan=0;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            t+=a[i];
            if(a[i]%2==1) demle++;
            else demchan++;
        }
        if((demle!=0&&demchan!=0)||t%2==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
