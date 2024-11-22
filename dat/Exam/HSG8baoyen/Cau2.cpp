#include<bits/stdc++.h>
#define int long long
using namespace std;
int l,r;
bool tongcs(int n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s%5==0;
}
bool snt[100000007];
void ktnt()
{
    for(int i=2;i<=sqrt(1e7);i++)
        if(snt[i]==0)
            for(int j=i*i;j<=1e7;j+=i)
                snt[j]=1;

}
main()
{
    if(fopen("Cau2.inp","r"))
    {
        freopen("Cau2.inp","r",stdin);
        freopen("Cau2.out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>l>>r;
    ktnt();
    int ans=0;
    for(int i=l;i<=r;i++)
        if(snt[i]==0&&tongcs(i))
            ans++;
    cout<<ans;
}
