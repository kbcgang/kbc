#include<bits/stdc++.h>
#define int long long
using namespace std;
int fibo[50];
void check()
{
    fibo[0]=0;
    fibo[1]=1;
    for(int i=2;i<=49;i++)
        fibo[i]=fibo[i-1]+fibo[i-2];
}
int n,ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    check();
    cin>>n;
    for(int i=49;i>0;i--){
        if(n==0) break;
        else if(fibo[i]<=n){
            n-=fibo[i];
            ans++;
        }
    }
    cout<<ans;
}
