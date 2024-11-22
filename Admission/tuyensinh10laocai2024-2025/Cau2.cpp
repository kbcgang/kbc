#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b,ans;
bool snt[1000005];
void check()
{
    snt[0]=1;
    snt[1]=1;
    for(int i=2;i<=sqrt(1e6);i++)
        for(int j=i*i;j<=1e6;j+=i)
            snt[j]=1;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("Cau2.inp","r")){
        freopen("Cau2.inp","r",stdin);
        freopen("Cau2.out","w",stdout);
    }
    check();
    cin>>a>>b;
    int i=sqrt(a);
    if(i*i<a) i++;
    while(i*i>=a&&i*i<=b){
        if(snt[i]==0)
            ans++;
        i++;
    }
    cout<<ans;
}
