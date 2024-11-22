#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b,k,c,d,q,ans;
main()
{
    if(fopen("CAU2.inp","r")){
        freopen("CAU2.inp","r",stdin);
        freopen("CAU2.out","w",stdout);
    }
    cin>>a>>b>>k>>c>>d>>q;
    ans+=b/k-(a-1)/k;
    ans+=d/q-(c-1)/q;
    int kq=k/__gcd(k,q)*q;
    if(b>=c){
        ans-=b/kq-(c-1)/kq;
    }
    else if(a>=d)
        ans-=a/kq-(d-1)/kq;
    cout<<ans;
}
