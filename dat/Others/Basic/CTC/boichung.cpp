#include<bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    int a=n/__gcd(n,m)*m;
    for(int i=a;i<=m*n;i+=a)
        cout<<i<<" ";

}
