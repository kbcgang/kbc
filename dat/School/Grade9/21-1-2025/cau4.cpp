#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,a[100005],ans=INT_MIN;
int Max,Min[100005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    cout<<a[n-1]+a[n-2]-a[0];
}