#include<bits/stdc++.h>
#define int long long
using namespace std;
int check(int n)
{
    int s=0,m=n;
    while(m>0)
    {
        s=s*10+m%10;
        m/=10;
    }
    if(s==n) return 1;
    else return s+n;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int m=n;
    while(check(n)!=1)
    {
        n=check(n);
    }
    cout<<n;
}
