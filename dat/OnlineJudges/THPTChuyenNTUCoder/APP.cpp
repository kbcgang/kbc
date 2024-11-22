#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,p;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>p;
    if(a%p!=0) cout<<((a/p)+1)*p;
    else cout<<a;
}
