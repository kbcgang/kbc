#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,ans;
main()
{
    if(fopen("BAI1A.inp","r")){
        freopen("BAI1A.inp","r",stdin);
        freopen("BAI1A.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=15;i<=n;i++)
    {
        cout<<i<<" ";
        i+=29;
    }
}