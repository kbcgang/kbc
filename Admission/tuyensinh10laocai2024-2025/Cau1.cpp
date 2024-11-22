#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("Cau1.inp","r")){
        freopen("Cau1.inp","r",stdin);
        freopen("Cau1.out","w",stdout);
    }
    cin>>n;
    if(n%2==0)
        cout<<(n+2)*n/4;
    else cout<<(n+1)*(n+1)/4;
}
