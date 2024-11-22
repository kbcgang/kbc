#include <bits/stdc++.h>
#define int long long
using namespace std;
bool snt[100000005];
void make_sieve()
{
    snt[1]=1;
    snt[0]=1;
    for(int i=2;i<=sqrt(1e7);i++)
        if(snt[i]==0)
            for(int j=i*i;j<=1e7;j+=i)
                snt[j]=1;
}
int dao(int n)
{
    int s=0;
    while(n>0){
        s=s*10+n%10;
        n/=10;
    }
    return s;
}
 main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    make_sieve();
    int a,b,dem=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(snt[i]==0&&snt[dao(i)]==0)
            dem++;
    }
    cout<<dem;
}
