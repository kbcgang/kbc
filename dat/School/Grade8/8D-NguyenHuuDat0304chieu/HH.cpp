#include<bits/stdc++.h>
#define int long long 
using namespace std;
int x=19;
bool check(int n)
{
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    if(s==10) return 1;
    return 0;
}
int n;
main()
{
    if(fopen("HH.inp","r")){
        freopen("HH.inp","r",stdin);
        freopen("HH.out","w",stdout);
    }
    cin>>n;
    if(n<2) cout<<x;
    else{
        for(int i=2;i<=n;i++){
            x+=9;
            while(check(x)==0)
                x+=9;
        }
        cout<<x;
    }
}