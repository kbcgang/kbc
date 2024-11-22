#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n;
main()
{
    freopen("Cau1.inp","r",stdin);
    freopen("Cau1.out","w",stdout);
    cin>>n;
    if(n%2==0)   cout<<n/2;
    else cout<<(n-1)/2-n;
}