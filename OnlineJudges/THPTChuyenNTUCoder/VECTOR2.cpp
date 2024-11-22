#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)    cin>>a[i];
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<"\n";
    for(int i=n-1;i>=0;i--)     cout<<a[i]<<" ";
}