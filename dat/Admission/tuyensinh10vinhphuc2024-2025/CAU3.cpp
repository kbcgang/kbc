#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,Q,a[1000005],b[1000005],x;
main()
{
    if(fopen("CAU3.inp","r")){
        freopen("CAU3.inp","r",stdin);
        freopen("CAU3.out","w",stdout);
    }
    cin>>n>>Q;
    vector<int> a1;
    vector<int> b1;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    int dem=0;
    for(int i=0;i<n;i++)
    {
        dem++;
        if(a[i]!=a[i+1]){
            a1.push_back(dem);
            dem=0;
        }
    }
    sort(a1.begin(),a1.end(),greater<int>());
    for(int i=0;i<n;i++)
    {
        dem++;
        if(b[i]!=b[i+1]){
            b1.push_back(dem);
            dem=0;
        }
    }
    sort(b1.begin(),b1.end(),greater<int>());
    while(Q--){
        int ans1=0,ans2=0;
        cin>>x;
        for(int i=0;i<a1.size();i++){
            if(a1[i]<x) break;
            ans1++;
        }
        for(int i=0;i<b1.size();i++)
        {
            if(b1[i]<x) break;
            ans2++;
        }
        cout<<ans1<<" "<<ans2<<"\n";
    }
}
