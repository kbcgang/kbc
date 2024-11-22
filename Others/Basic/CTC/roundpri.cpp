#include<bits/stdc++.h>
#define int long long
using namespace std;
bool snt[1000005];
void checksnt(int n)
{
    snt[0] = snt[1] = 1;
    for(int i = 2; i <= sqrt(n); i++)
        if(snt[i] == 0)
            for(int j = i * i; j <= n; j += i)
                snt[j] = 1;
}
int a[1000005];
void dem()
{
    int m=10;
    for(int i=10;i<=1e6;i++)
    {
        if(i/m==10)
            m*=10;
        a[i]=m;
    }
}
bool check(int n)
{
    int m=n;
    m=(m%a[n])*10+(m/a[n]);
    while(m!=n){
        if(snt[m]==1)
            return 0;
        m=(m%a[n])*10+m/a[n];
    }
    return 1;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    dem();
    int n,ans=0;
    cin>>n;
    checksnt(1e6);
    for(int i=2;i<=n;i++)
    {
        if(snt[i]==0&&i<10)
            ans++;
        if(snt[i]==0&&i>10)
        {
            ans+=check(i);
        }
    }
    cout<<ans;
}
