#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,ans;
main()
{
    cin>>n;
    while(n%5==0)
    {
        ans++;
        n/=5;
    }
    printf("%d",ans);
}