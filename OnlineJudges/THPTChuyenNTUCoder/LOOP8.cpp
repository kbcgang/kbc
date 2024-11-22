#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,x,ans;
main()
{
    cin>>n;
    while(n--)
    {
        cin>>x;
        int m=sqrt(x);
        if(x%2==1&&m*m==x)
            ans++;
    }
    printf("%d",ans);
}