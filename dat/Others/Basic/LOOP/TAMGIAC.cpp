#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n;
main()
{
    if(fopen("TAMGIAC.inp","r")){
        freopen("TAMGIAC.inp","r",stdin);
        freopen("TAMGIAC.out","w",stdout);
    }
    cin>>n;
    for(int i=n;i>=1;i--)
    {    for(int j=i;j>=1;j--)
            cout<<"*";
        cout<<"\n";}
}