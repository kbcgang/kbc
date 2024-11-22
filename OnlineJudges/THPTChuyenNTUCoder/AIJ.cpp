#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,a[1000005];
main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]=a[i]*a[i];
    }
    sort(a,a+n);
    cout<<a[n-1]-a[0];
}