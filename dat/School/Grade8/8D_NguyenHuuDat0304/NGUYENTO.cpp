#include<bits/stdc++.h>
#define int long long 
using namespace std;
bool ktnt(int n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}
int n;
main()
{
    if(fopen("NGUYENTO.INP","r")){
        freopen("NGUYENTO.INP","r",stdin);
        freopen("NGUYENTO.OUT","w",stdout);
    }
    cin>>n;
    if(ktnt(n))
        cout<<"YES";
    else cout<<"NO";
}