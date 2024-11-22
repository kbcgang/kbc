///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int a,b;
bool snt[10000005];
void check(int n)
{
    snt[0]=snt[1]=1;
    for(int i=2;i<=sqrt(n);i++)
        if(snt[i]==0)
            for(int j=i*i;j<=n;j+=i)
                snt[j]=1;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    check(b);
    for(int i=a;i<=b;i++)
    {
        if(snt[i]==0)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
}
