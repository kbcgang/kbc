#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,a[1000005],k,ans;
main()
{
    cin>>k>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    int i=0;
    while(k--){
        int t=a[i]*a[i+1];
        ans+=t;
        i+=2;
    }
    cout<<ans;
}