#include<bits/stdc++.h>
using namespace std;
int n,a[100005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++)if(a[i]!=a[i+1]){cout<<i+1;exit(0);}
}