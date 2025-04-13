#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
main()
{
    cin>>n>>m;
    if (n!=m) cout<<n+m+2*(min(n,m))-4;
    else if (n%2==0) cout<<4*(n-1)-1;
    else cout<<4*(n-1);
    return 0;
}