#include<bits/stdc++.h>
#define int long long 
using namespace std;
int m,n,t=1;
main()
{
    if(fopen("BAI1B.inp","r")){
        freopen("BAI1B.inp","r",stdin);
        freopen("BAI1B.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int mo=2;
    cin>>m>>n;
    while(n>1){
        t+=mo;
        mo*=2;
        n--;
    }
    if(m>=t) cout<<1;
    else cout<<2;
}