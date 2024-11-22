#include<bits/stdc++.h>
#define int long long 
using namespace std;
int ans,n,x;
main()
{
    cin>>n;
    while(n--)
    {
        cin>>x;
        int s=0;
        while(x>0)
        {
            s+=x%10;
            x/=10;
        }
        ans+=s;
    }
    printf("%d",ans);
}