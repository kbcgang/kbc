#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,s,dem;
main()
{
    if(fopen("CPL.INP","r"))
    {
        freopen("CPL.INP","r",stdin);
        freopen("CPL.OUT","w",stdout);
    }
    cin>>n;
    int i=1;
    while(i*i<=n){
        s+=i*i;
        dem++;
        i+=2;
    }
    cout<<dem<<"\n"<<s;

}
