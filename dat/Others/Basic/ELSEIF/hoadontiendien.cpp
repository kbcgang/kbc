#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n;
main()
{
    if(fopen("hoadontiendien.inp","r")){
        freopen("hoadontiendien.inp","r",stdin);
        freopen("hoadontiendien.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    if(n<101){
        cout<<n*2000;
    }
    else if(n>100&&n<201){
        cout<<100*2000+3000*(n-100);
    }
    else if(n>200&&n<301){
        cout<<100*2000+100*3000+5000*(n-200);
    }
    else if(n>300){
        cout<<100*2000+100*3000+5000*100+10000*(n-300);
    }
}