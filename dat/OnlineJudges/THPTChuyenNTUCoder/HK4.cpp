#include<bits/stdc++.h>
#define int long long
using namespace std;
bool ktnt(int n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}
bool palin(int n)
{
    int m=n,s=0;
    while(n>0)
    {
        s=s*10+n%10;
        n/=10;
    }
    return m==s;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for(int i=n;i>1;i--)
    {
        if(ktnt(i)&&palin(i)){
            cout<<i;
            return 0;
        }
    }
}
