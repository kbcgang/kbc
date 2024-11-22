#include<bits/stdc++.h>
#define int long long 
using namespace std;
int a,b;
main()
{
    if(fopen("OANTUTI.inp","r")){
        freopen("OANTUTI.inp","r",stdin);
        freopen("OANTUTI.out","w",stdout);
    }
    cin>>a>>b;
    if(a==0&&b==1) cout<<"BAC";
    else if(a==1&&b==2) cout<<"BAC";
    else if(b==0&&a==1) cout<<"NAM";
    else if(b==1&&a==2) cout<<"NAM";
    else if(a==b) cout<<"HOA";
}