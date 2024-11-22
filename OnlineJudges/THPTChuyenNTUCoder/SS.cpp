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
    if(n%9==0) cout<<n/9;
    else cout<<n/9+1;
}