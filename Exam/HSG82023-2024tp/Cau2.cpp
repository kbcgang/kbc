#include<bits/stdc++.h>
#define int long long 
using namespace std;
bool check(int n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s==10;
}
int n;
main()
{
    freopen("Cau2.inp","r",stdin);
    freopen("Cau2.out","w",stdout);
    cin>>n;
    int ans=10;
    for(int i=1;i<=n;i++)
    {
        ans+=9;
        if(ans%10==0||ans%10==9)
            while(check(ans)==0)
                ans+=9;
    }
    cout<<ans;
}