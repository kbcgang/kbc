#include<bits/stdc++.h>
#define ll long long 
using namespace std;
ll n;int ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    ll m=n;
    for(int i=2;i<=sqrt(m);i++)
        if(m%i==0)
        {
            ans++;
            while(m%i==0)m/=i;
        }
    if(m>1)ans++;
    m=0;
    cout<<ans<<"\n";
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
        {
            cout<<i<<" ";
            while(n%i==0){m++;n/=i;}cout<<m<<"\n";m=0;
        }
    if(n>1)cout<<n<<" "<<1;
}