#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n;
    int ans=0;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0) ans+=i+(n/i);
        if(i*i==n) ans-=i;
    }
    cout<<ans;
}
