#include<bits/stdc++.h>
using namespace std;
int n,f[1000005];
void check()
{
    int f0=0,f1=1;
    while(f0+f1<=1e6){
        int f2=f0+f1;
        f[f2]=1;
        f0=f1;
        f1=f2;
    }
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    check();
    cin>>n;
    int x,save=1;
    while(n--){
        cin>>x;
        if(f[x]){
            cout<<x<<" ";
            save=0;
        }
    }
    if(save) cout<<0;
}
