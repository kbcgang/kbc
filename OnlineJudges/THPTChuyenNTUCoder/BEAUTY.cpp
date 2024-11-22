#include<bits/stdc++.h>
#define int long long
using namespace std;
bool check(int n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}
int a[10];
void did()
{
    for(int i=1;i<=9;i++)
        a[i]=i*i;
}
int tcs(int n)
{
    int s=0;
    while(n>0)
    {
        s+=a[n%10];
        n/=10;
    }
    return s;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,ans,i=11;
    cin>>n;
    did();
    while(n>0)
    {
        ans=i;
        n-=check(tcs(i));
        i++;
    }
    cout<<ans;
}
