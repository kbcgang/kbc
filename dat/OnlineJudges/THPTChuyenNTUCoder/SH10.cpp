#include<bits/stdc++.h>
#define int long long 
using namespace std;
int a,b;
bool snt[100];
void make_sieve()
{
    snt[0]=1;
    snt[1]=1;
    for(int i=2;i<=10;i++)
        if(snt[i]==0)
            for(int j=i*i;j<=100;j+=i)
                snt[j]=1;
}
int tongcs(int n)
{
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    int ans=0;
    make_sieve();
    for(int i=a;i<=b;i++)
        if(snt[tongcs(i)]==0)
            ans++;
    cout<<ans;
}