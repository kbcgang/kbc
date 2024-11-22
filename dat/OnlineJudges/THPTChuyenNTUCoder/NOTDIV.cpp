#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,k;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    int socap=k/(n-1);
    int last=socap*n;
    int m=k%(n-1);
    if(m==0) cout<<last-1;
    else cout<<last+m;
}