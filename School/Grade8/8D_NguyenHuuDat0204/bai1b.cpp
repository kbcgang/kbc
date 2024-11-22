#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
double s;
main()
{
    if(fopen("bai1b.inp","r")){
        freopen("bai1b.inp","r",stdin);
        freopen("bai1b.out","w",stdout);
    }
    cin>>n;
    for(int i=1;i<=n;i++)
        s+=1.0/(i*i);
    cout<<fixed<<setprecision(4)<<s;
}
