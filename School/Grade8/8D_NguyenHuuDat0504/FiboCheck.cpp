#include<bits/stdc++.h>
#define int long long 
using namespace std;
map<int,int> fibo;
void make_fibo()
{
    fibo[1]=1;
    fibo[2]=2;
    int fibo0=0,fibo1=1,fibo2=1;
    for(int i=3;i<=100;i++){
        fibo0=fibo1+fibo2;
        fibo1=fibo2;
        fibo2=fibo0;
        fibo[fibo2]=i;
    }
}
int n,t;
main()
{
    if(fopen("FiboCheck.inp","r")){
        freopen("FiboCheck.inp","r",stdin);
        freopen("FiboCheck.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    make_fibo();
    cin>>t; 
    while(t--){
        cin>>n;
        if(fibo[n]>0)
            cout<<fibo[n]<<"\n";
        else cout<<-1<<"\n";
    }
}