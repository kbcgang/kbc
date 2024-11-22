#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n;
int tongcs(int n)
{
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}
main()
{
    vip;
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);
    cin>>n;
    for(int i=n; ; i++)
    {
        if(__gcd(i,tongcs(i))!=1){
            cout<<i;
            return 0;
        }
    }
}
