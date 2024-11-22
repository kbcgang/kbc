#include<bits/stdc++.h>
using namespace std;
long long n;
main()
{
//    if(fopen("bai1.inp","r"))
//    {
        // freopen("bai1.inp","r",stdin);
        // freopen("bai1.out","w",stdout);
//    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<n/i;
            exit(0);
        }
    }
    cout<<1;
}