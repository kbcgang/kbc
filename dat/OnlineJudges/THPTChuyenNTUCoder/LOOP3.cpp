#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,s;
main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        s=(s%mod+(i*i*i)%mod)%mod;
    printf("%d",s);
}