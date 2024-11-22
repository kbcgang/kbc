#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,m;
main()
{
    if(fopen("HCN.inp","r")){
        freopen("HCN.inp","r",stdin);
        freopen("HCN.inp","w",stdout);
    }
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {    for(int j=0;j<m;j++)
            cout<<"#";
        cout<<"\n";}
}