#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n%2==0)
        n/=2;
    for(int i=3;i<=sqrt(n);i+=2)
        while(n%i==0)
            n/=i;
    cout<<n;
}
