#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,x,gt=1;
long double s=1;
main()
{
    if(fopen("Cau1.inp","r")){
        freopen("Cau1.inp","r",stdin);
        freopen("Cau1.out","w",stdout);
    }
    cin>>n>>x;
    for(int i=1;i<=2*n+1;i+=2){
        int m=pow(x,i);
        s+=1.0*m/gt;
        gt*=(i+1)*(i+2);
    }
    cout<<s;
}
