#include<bits/stdc++.h>
using namespace std;
int snt[10000005];
int l,r,ans;
void make_sieve()
{
    for(int i=2;i<=sqrt(1e7);i++)
        if(snt[i]==0)
            for(int j=i;j<=1e7;j+=i)
                snt[j]++;
}
void checkbeauty(int n)
{
    int m=n;
    int s=0;
    while(m>0)
    {
        s=s*10+m%10;
        m/=10;
    }
    if(n==s)
        // cout<<n<<" ";
        if(snt[n]>=3)
            ans++;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//    cin>>l>>r;
    make_sieve();
     for(int i=1;i<=1e7;i++)
     {
         checkbeauty(i);
     }
     cout<<ans;
}
