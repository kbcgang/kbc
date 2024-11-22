#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,m,a[1000005],x;
map<int,int> vtri;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {    cin>>a[i];
        if(vtri[a[i]]==0)
            vtri[a[i]]=i+1;}
    for(int i=0;i<m;i++)
    {    cin>>x;
        cout<<vtri[x]<<" ";}
    
}