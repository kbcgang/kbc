#include<bits/stdc++.h>
#define int long long 
using namespace std;
int t,n;
string s;
main()
{
    if(fopen("BinArraySorting.inp","r")){
        freopen("BinArraySorting.inp","r",stdin);
        freopen("BinArraySorting.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--){
        int dem[50]={};
        cin>>n>>s;
        for(int i=0;i<n;i++)
            dem[s[i]]++;
        while(dem[48]--)
            cout<<0;
        while(dem[49]--)
            cout<<1;
        cout<<"\n";
    }
}