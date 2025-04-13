#include<bits/stdc++.h>
#define ll long long
using namespace std;
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
int n=2+rd()%100;
main()
{
    cout<<n<<'\n';
    for(int i=1;i<=n;i++)
        cout<<1+rd()%500<<" ";
}