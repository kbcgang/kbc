#include<bits/stdc++.h>
#define ll long long
using namespace std;
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
int k[200005];
main()
{
    int n=1+rd()%100,a=1+rd()%100,b=1+rd()%100;
    while(b>=a)
        b=rd()%1000;
    cout<<n<<' '<<rd()%500<<' '<<a<<' '<<b<<'\n';
    for(int i=1;i<=n;i++)
        k[i]=1+rd()%100;
    sort(k+1,k+n+1);
    for(int i=1;i<=n;i++)
        cout<<k[i]<<' ';
}