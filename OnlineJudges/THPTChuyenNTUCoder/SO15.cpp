///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int a,b;
bool snt[100];
void make()
{
    snt[0]=snt[1]=1;
    for(int i=2;i<=10;i++)
        if(snt[i]==0)
            for(int j=i*i;j<=100;j+=i)
                snt[j]=1;
}
bool check(int n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return snt[s]==0;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    make();
    cin>>a>>b;
    int ans=0;
    for(int i=a;i<=b;i++)
    {
        ans+=check(i);
    }
    cout<<ans;
}
