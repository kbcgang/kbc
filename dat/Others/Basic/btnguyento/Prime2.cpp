#include<bits/stdc++.h>
#define int long long
using namespace std;
bool snt[10000005];
void check()
{
    snt[0]=snt[1]=1;
    for(int i=2;i<=sqrt(1e7);i++)
        if(snt[i]==0)
            for(int j=i*i;j<=1e7;j+=i)
                snt[j]=1;
}
int tcs(int n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
int a[10000005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,x;
    cin>>n;
    check();
    for(int i=2;i<=1e7;i++)
    {
        if(snt[i]==0&&snt[tcs(i)]==0)
            a[i]=a[i-1]+1;
        else a[i]=a[i-1];
    }
    while(n--)
    {
        cin>>x;
        cout<<a[x]<<" ";
    }

}
