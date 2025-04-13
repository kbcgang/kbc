#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1000005],n;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
        if(a[i]!=a[i+1])cout<<a[i]<<" ";    
}